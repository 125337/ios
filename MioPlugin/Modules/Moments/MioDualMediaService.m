#import "MioDualMediaService.h"
#import <CommonCrypto/CommonDigest.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "MioDualFeedBridge.h"
#import "MioDualTimelineStore.h"

// 持久表结构（NSUserDefaults key = MioDualMediaRegistry）：
//   { key: @{ @"p": 本地路径, @"iid": 帖子 itemID } }
// 写盘合并：注册高频（首推可达数百条），1s 合并窗口内只落盘一次。

static NSString * const kMediaRegistryKey = @"MioDualMediaRegistry";

// CC_MD5 已标记 deprecated 但系统库仍导出且功能不变（key 稳定性只需摘要，
// 非安全用途），局部压掉告警保持编译零 warning
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
static NSString *MioDualMediaMD5(NSString *s) {
    NSUInteger len = [s lengthOfBytesUsingEncoding:NSUTF8StringEncoding];
    unsigned char digest[CC_MD5_DIGEST_LENGTH];
    CC_MD5([s UTF8String], (CC_LONG)len, digest);
    NSMutableString *hex = [NSMutableString stringWithCapacity:CC_MD5_DIGEST_LENGTH * 2];
    for (int i = 0; i < CC_MD5_DIGEST_LENGTH; i++) [hex appendFormat:@"%02x", digest[i]];
    return hex;
}
#pragma clang diagnostic pop

// 媒体就绪全局代际：任何「key 从未就绪→就绪」的迁移都 +1。Store 行字典缓存用
// 它检测「等待补图的行」何时该重映射（文本卡 → 带图卡），无需逐行 stat
static long long gMediaEpoch = 1;

@implementation MioDualMediaService {
    NSMutableDictionary<NSString *, NSDictionary *> *_memTable;   // 会话层
    NSMutableDictionary<NSString *, NSDictionary *> *_diskTable;  // 持久层镜像（启动加载）
    NSMutableSet<NSString *> *_downloading;                       // 进行中的下载 key（去重）
    NSMutableDictionary<NSString *, NSNumber *> *_attempts;       // 会话内重试计数（≤3 防 CDN 坏 URL 死循环）
    NSMutableDictionary<NSString *, NSDate *> *_downloadStart;    // 挂起起始时间（60s 超时重置死链）
    NSOperationQueue *_exportQueue;                               // 稳定副本后台拷贝（主线程零 IO）
    NSMutableSet<NSString *> *_copying;                           // 拷贝中去重（防同 key 重复入队）
    NSMutableSet<NSString *> *_ready;                             // 就绪缓存：内存命中免 stat（推送每轮
                                                                  // 重注册全部行，无缓存=每轮千次主线程 stat，卡顿实证）
    BOOL _dirty;
}

// 稳定副本目录（Caches/mio_dual_media）：微信清理免疫，key 命名跨启动稳定
static NSString *MediaStableDir(void) {
    static NSString *dir = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        NSString *caches = [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject];
        dir = [caches stringByAppendingPathComponent:@"mio_dual_media"];
        [[NSFileManager defaultManager] createDirectoryAtPath:dir
                                  withIntermediateDirectories:YES attributes:nil error:nil];
    });
    return dir;
}

+ (instancetype)shared {
    static MioDualMediaService *svc = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ svc = [[MioDualMediaService alloc] init]; });
    return svc;
}

+ (long long)mediaEpoch {
    return gMediaEpoch;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _memTable = [NSMutableDictionary dictionary];
        _downloading = [NSMutableSet set];
        _attempts = [NSMutableDictionary dictionary];
        _downloadStart = [NSMutableDictionary dictionary];
        _copying = [NSMutableSet set];
        _ready = [NSMutableSet set];
        _exportQueue = [[NSOperationQueue alloc] init];
        _exportQueue.maxConcurrentOperationCount = 2;   // 拷贝是小块 JPEG，2 并发足够且不抢 IO
        _exportQueue.name = @"mio.dual.media.export";
        id saved = [[NSUserDefaults standardUserDefaults] objectForKey:kMediaRegistryKey];
        if ([saved isKindOfClass:[NSDictionary class]]) {
            _diskTable = [saved mutableCopy];
        } else {
            _diskTable = [NSMutableDictionary dictionary];
        }
    }
    return self;
}

// 持久化（调用方已持锁；1s 合并窗口防高频注册反复写盘）
- (void)flushDirtyLocked {
    if (!_dirty) return;
    _dirty = NO;
    [[NSUserDefaults standardUserDefaults] setObject:_diskTable forKey:kMediaRegistryKey];
}

// 登记注册表（{p,iid,cdn?}，合并写盘）——就绪与否都登记：iid 供数据项找回，
// p 供 WCMediaDownloader 目标路径匹配，cdn 备 CDN 直连
- (void)recordEntryWithPath:(NSString *)path itemID:(NSString *)itemID cdn:(NSString *)cdn {
    NSString *key = MioDualMediaMD5(path);
    NSMutableDictionary *entry = [NSMutableDictionary dictionary];
    entry[@"p"] = path;
    if (itemID.length) entry[@"iid"] = itemID;
    if (cdn.length) entry[@"cdn"] = cdn;
    @synchronized(self) {
        NSDictionary *old = _memTable[key] ?: _diskTable[key];
        if (![old isEqualToDictionary:entry]) {
            _memTable[key] = entry;
            _diskTable[key] = entry;
            _dirty = YES;
        } else if (!_memTable[key]) {
            _memTable[key] = entry;   // 持久层命中后提升到内存层
        }
        if (_dirty) [self flushDirtyLocked];
    }
}

- (NSString *)stablePathForKey:(NSString *)key {
    if (key.length == 0) return nil;
    return [[MediaStableDir() stringByAppendingPathComponent:key] stringByAppendingPathExtension:@"jpg"];
}

// 就绪查询：_ready 内存命中直接 YES；未知的才 stat 一次并缓存（YES 永久缓存——
// 稳定副本在自己目录不会被微信清；NO 不缓存，源文件可能是下载中的占位，要复查）
- (BOOL)isReadyKey:(NSString *)key dst:(NSString *)dst {
    @synchronized(self) {
        if ([_ready containsObject:key]) return YES;
    }
    if ([[NSFileManager defaultManager] fileExistsAtPath:dst]) {
        @synchronized(self) { [_ready addObject:key]; }
        return YES;
    }
    return NO;
}

- (NSString *)registerLocalPath:(NSString *)path itemID:(NSString *)itemID
                       cdnURL:(NSString *)cdn
                     completion:(void (^)(NSString *key, BOOL ready))cb {
    if (path.length == 0) return nil;
    NSString *key = MioDualMediaMD5(path);
    [self recordEntryWithPath:path itemID:itemID cdn:cdn];
    NSString *dst = [self stablePathForKey:key];

    // 就绪快路径：副本已在（含跨启动），同步 cb——本轮 itemDict 直接带图
    if ([self isReadyKey:key dst:dst]) {
        if (cb) cb(key, YES);
        return key;
    }

    // 占位文件闸门：<1KB = 微信还没下载完（探针实证的占位/半截文件），CDN-only 登记等下一轮
    NSDictionary *attr = [[NSFileManager defaultManager] attributesOfItemAtPath:path error:nil];
    BOOL valid = [attr fileSize] > 1024;
    if (!valid) {
        if (cb) cb(key, NO);
        return key;
    }

    // 后台拷贝进自己的稳定目录（主线程零 IO）；拷完唤醒推送 → diff 补图
    @synchronized(self) {
        if ([_copying containsObject:key]) {
            if (cb) cb(key, NO);   // 已有拷贝进行中：等它完成的统一唤醒
            return key;
        }
        [_copying addObject:key];
    }
    __weak typeof(self) wself = self;
    [_exportQueue addOperationWithBlock:^{
        __strong typeof(wself) sself = wself;
        [[NSFileManager defaultManager] copyItemAtPath:path toPath:dst error:nil];
        BOOL ok = [[NSFileManager defaultManager] fileExistsAtPath:dst];
        if (sself) {
            @synchronized(sself) { [sself->_copying removeObject:key]; }
        }
        WPLog(@"Dual", @"[Media] stable copy %@ key=%@", ok ? @"ready" : @"FAILED", key);
        if (ok) @synchronized(sself) {
            [sself->_ready addObject:key];
            gMediaEpoch++;   // 未就绪→就绪迁移：Store 补图行重映射触发
        }
        if (cb) cb(key, ok);
        if (ok) dispatch_async(dispatch_get_main_queue(), ^{
            [MioDualFeedBridge notifyDataChanged];   // 唤醒：下一次 push 重跑 itemDict，img 就位 → diff upsert 补图
        });
    }];
    return key;
}

// 解析 key → 可用本地路径。稳定副本优先（免疫微信清理）；副本缺失而原文件在
// （WCMediaDownloader 拉回来的落在微信目录）→ 读原路径 + 后台补拷，下次起走副本。
// 都没有返回 nil：上层触发 WCMediaDownloader 走微信管线拉图；文件可能重新出现故不删表项
- (NSString *)resolveKey:(NSString *)key {
    if (key.length == 0) return nil;
    NSString *dst = [self stablePathForKey:key];
    if ([self isReadyKey:key dst:dst]) return dst;
    NSString *path = nil;
    @synchronized(self) {
        NSDictionary *entry = _memTable[key];
        if (!entry) {
            entry = _diskTable[key];
            if (entry) _memTable[key] = entry;   // 持久层命中提升到内存层
        }
        path = entry[@"p"];
    }
    if (path.length == 0) return nil;
    if (![[NSFileManager defaultManager] fileExistsAtPath:path]) return nil;
    NSDictionary *attr = [[NSFileManager defaultManager] attributesOfItemAtPath:path error:nil];
    if ([attr fileSize] > 1024) {   // 占位文件不补拷，等微信下载完
        __weak typeof(self) wself = self;
        NSString *p = path;
        @synchronized(self) {
            if (![self->_copying containsObject:key]) {
                [self->_copying addObject:key];
                [_exportQueue addOperationWithBlock:^{
                    __strong typeof(wself) sself = wself;
                    [[NSFileManager defaultManager] copyItemAtPath:p toPath:dst error:nil];
                    if (sself) {
                        @synchronized(sself) {
                            [sself->_copying removeObject:key];
                            if ([[NSFileManager defaultManager] fileExistsAtPath:dst]) {
                                [sself->_ready addObject:key];
                                gMediaEpoch++;
                            }
                        }
                    }
                }];
            }
        }
    }
    return path;
}

- (NSString *)itemIDForKey:(NSString *)key {
    if (key.length == 0) return nil;
    @synchronized(self) {
        NSDictionary *entry = _memTable[key] ?: _diskTable[key];
        NSString *iid = entry[@"iid"];
        return iid.length ? iid : nil;
    }
}

- (NSString *)registeredPathForKey:(NSString *)key {
    if (key.length == 0) return nil;
    @synchronized(self) {
        NSDictionary *entry = _memTable[key] ?: _diskTable[key];
        NSString *p = entry[@"p"];
        return p.length ? p : nil;
    }
}

- (BOOL)beginDownloadForKey:(NSString *)key {
    if (key.length == 0) return NO;
    @synchronized(self) {
        if ([_downloading containsObject:key]) return NO;
        [_downloading addObject:key];
        return YES;
    }
}

- (void)endDownloadForKey:(NSString *)key {
    if (key.length == 0) return;
    @synchronized(self) { [_downloading removeObject:key]; }
}

#pragma mark 渲染层备图（WCMFeedController exportImage 同构）

// 数据项 → 目标路径所属的 WCMediaItem：遍历 media wraps，四路路径 selector
// 匹配注册路径；顺带记录首个有路径的 mi 作兜底（注册时与查找时 selector
// 返回值可能随下载状态变化）
- (id)mediaItemForDataItem:(id)di path:(NSString *)targetPath {
    if (!di || targetPath.length == 0) return nil;
    if (![di respondsToSelector:@selector(getMediaWraps)]) return nil;
    NSArray *wraps = ((id(*)(id, SEL))objc_msgSend)(di, @selector(getMediaWraps));
    SEL pathSels[4] = { @selector(getThumbImagePath), @selector(pathForPreview),
                        @selector(pathForData), @selector(pathForHdData) };
    id firstMI = nil;
    for (id wrap in wraps) {
        if (![wrap respondsToSelector:@selector(mediaItem)]) continue;
        id mi = ((id(*)(id, SEL))objc_msgSend)(wrap, @selector(mediaItem));
        if (!mi) continue;
        for (int i = 0; i < 4; i++) {
            if (![mi respondsToSelector:pathSels[i]]) continue;
            NSString *p = ((id(*)(id, SEL))objc_msgSend)(mi, pathSels[i]);
            if ([p isKindOfClass:[NSString class]] && [p isEqualToString:targetPath]) return mi;
            if (!firstMI && [p isKindOfClass:[NSString class]] && p.length) firstMI = mi;
        }
    }
    return firstMI;
}

// 渲染层备图：推送上屏时对缺文件的 media 主线程触发微信管线下载。
// 与 WCM 原生页逐层同构——cell 渲染时 exportImage（本方法）→ downloader 下载
// → completionHandler（mediaFinished 语义）→ Bridge mediaReadyForKey 刷新 <img>。
// 主线程调用（downloader 依赖会话上下文，146 日志后台线程调它全 timeout 的教训）
- (void)ensureMediaForKey:(NSString *)key {
    if (key.length == 0) return;
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self ensureMediaForKey:key]; });
        return;
    }
    if ([self resolveKey:key]) return;   // 文件在，无需备

    @synchronized(self) {
        if ([_downloading containsObject:key]) {
            // 挂起超 60s 视为死链（completionHandler 未回调），重置后允许重试
            NSDate *start = _downloadStart[key];
            if (start && -[start timeIntervalSinceNow] < 60.0) return;
            [_downloading removeObject:key];
        }
        [_downloading addObject:key];
        _downloadStart[key] = [NSDate date];
        NSNumber *att = _attempts[key];
        if (att.intValue >= 3) {
            [_downloading removeObject:key];
            WPLog(@"Dual", @"[Media] attempts exhausted key=%@", key);
            return;
        }
        _attempts[key] = @(att.intValue + 1);
    }

    NSString *path = [self registeredPathForKey:key];
    NSString *iid = [self itemIDForKey:key];
    id di = iid.length ? [[MioDualTimelineStore shared] dataItemByID:iid] : nil;
    id mi = [self mediaItemForDataItem:di path:path];
    if (!di || !mi) {
        [self endDownloadForKey:key];
        WPLog(@"Dual", @"[Media] no dataItem/mediaItem key=%@ iid=%@", key, iid);
        return;
    }

    Class dCls = objc_getClass("WCMediaDownloader");
    SEL startSel = NSSelectorFromString(@"startDownloadWithCompletionHandler:");
    if (!dCls || ![dCls instancesRespondToSelector:startSel]) {
        [self endDownloadForKey:key];
        return;
    }
    id dl = ((id(*)(id, SEL, id, id))objc_msgSend)(
        ((id(*)(id, SEL))objc_msgSend)(dCls, @selector(alloc)),
        NSSelectorFromString(@"initWithDataItem:mediaItem:"), di, mi);
    if (!dl || ![dl respondsToSelector:startSel]) {
        [self endDownloadForKey:key];
        return;
    }
    // completionHandler 传 0 参空结构 block（ABI 被调方只读自己声明的参数寄存器，
    // 签名 dump 失真无碍）；回调里精准刷新对应 <img>（mediaFinished 语义）
    void (^done)(void) = ^{
        [self endDownloadForKey:key];
        WPLog(@"Dual", @"[Media] downloader finished key=%@", key);
        gMediaEpoch++;   // 下载落地=就绪迁移：Store 补图行重映射触发（resolveKey 拷副本也会再 +1，幂等无害）
        [MioDualFeedBridge mediaReadyForKey:key];
    };
    ((void(*)(id, SEL, id))objc_msgSend)(dl, @selector(setCompletionHandler:), done);
    ((void(*)(id, SEL, id))objc_msgSend)(dl, startSel, done);
    ((void(*)(id, SEL, id))objc_msgSend)(dl, @selector(setRetainedSelf:), dl);   // 异步下载自持有
    WPLog(@"Dual", @"[Media] downloader started key=%@ iid=%@", key, iid);
}

- (void)pruneExcept:(NSSet<NSString *> *)liveKeys {
    if (!liveKeys.count) return;
    @synchronized(self) {
        // 只修剪持久层：内存层存会话内注册过的全部 key（含未入快照的），
        // 当前显示中的图仍可解析；持久层以快照为准防 NSUserDefaults 膨胀
        NSArray *staleKeys = [_diskTable.allKeys filteredArrayUsingPredicate:
            [NSPredicate predicateWithFormat:@"NOT SELF IN %@", liveKeys]];
        if (staleKeys.count == 0) return;
        for (NSString *k in staleKeys) [_diskTable removeObjectForKey:k];
        _dirty = YES;
        [self flushDirtyLocked];
        WPLog(@"Dual", @"[Media] pruned %lu stale keys, %lu kept",
              (unsigned long)staleKeys.count, (unsigned long)_diskTable.count);
    }
}

@end
