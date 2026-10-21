#import "MioDualMediaService.h"
#import <CommonCrypto/CommonDigest.h>
#import <UIKit/UIKit.h>   // 异格式转码：UIImage/UIImageJPEGRepresentation
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "MioDualFeedBridge.h"
#import "MioDualTimelineStore.h"

// 持久表结构（NSUserDefaults key = MioDualMediaRegistry.v2，按 bare digest 索引）：
//   { digest: @{ @"p": 本地路径, @"iid": 帖子 itemID, @"cdn": CDN URL,
//                @"ext": 导出嗅探出的扩展名, @"osig": 原图 size^mtime 签名 } }
// 写盘合并：注册高频（首推可达数百条），1s 合并窗口内只落盘一次。

static NSString * const kMediaRegistryKey = @"MioDualMediaRegistry.v2";
static NSString * const kV2MigratedKey = @"MioDualMediaRegistryV2Migrated";

// SHA256 → 64 位 hex（WCM _Digest 同款：key 只需摘要，非安全用途）
static NSString *MioDualMediaDigest(NSString *s) {
    NSUInteger len = [s lengthOfBytesUsingEncoding:NSUTF8StringEncoding];
    unsigned char digest[CC_SHA256_DIGEST_LENGTH];
    CC_SHA256([s UTF8String], (CC_LONG)len, digest);
    NSMutableString *hex = [NSMutableString stringWithCapacity:CC_SHA256_DIGEST_LENGTH * 2];
    for (int i = 0; i < CC_SHA256_DIGEST_LENGTH; i++) [hex appendFormat:@"%02x", digest[i]];
    return hex;
}

// 完整文件名 key（<digest>.<ext>）→ bare digest（注册表/就绪代际索引）
static NSString *MioDualBareKey(NSString *key) {
    return [key stringByDeletingPathExtension] ?: key;
}

@implementation MioDualMediaService {
    NSMutableDictionary<NSString *, NSDictionary *> *_memTable;   // 会话层（bare digest → entry）
    NSMutableDictionary<NSString *, NSDictionary *> *_diskTable;  // 持久层镜像（启动加载）
    NSMutableDictionary<NSString *, NSNumber *> *_readyGen;       // 每 key 就绪代际（renderKeys 语义）
    NSMutableSet<NSString *> *_downloading;                       // 进行中的下载 key（去重）
    NSMutableDictionary<NSString *, NSNumber *> *_attempts;       // 会话内重试计数（≤3 防 CDN 坏 URL 死循环）
    NSMutableDictionary<NSString *, NSDate *> *_downloadStart;    // 挂起起始时间（60s 超时重置死链）
    NSOperationQueue *_thumbQueue;                                // 缩略图导出（WCM previewQueue 位）
    NSOperationQueue *_originalQueue;                             // 原图导出（WCM mediaQueue 位）
    NSMutableSet<NSString *> *_pendingThumbs;                     // 缩略图导出去重（WCM pendingExports 同位）
    NSMutableSet<NSString *> *_pendingOriginals;                  // 原图导出去重（WCM pendingOriginalExports 同位）
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

// mioimg URL token 段（WCM accountToken 同语义：SHA256 摘要作 host 校验，防跨账号串图）。
// 账号标识 duck-typing：MMContext activeUserContext 的 getUserName/userName；拿不到用常量
// （退化为无账号隔离，与旧版无 token 等价，不比之前差）
+ (NSString *)mediaToken {
    static NSString *token = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        NSString *acc = nil;
        @try {
            Class ctxCls = objc_getClass("MMContext");
            if (ctxCls) {
                id ctx = ((id(*)(id, SEL))objc_msgSend)(
                    (id)ctxCls, NSSelectorFromString(@"activeUserContext"));
                if ([ctx respondsToSelector:@selector(getUserName)])
                    acc = ((id(*)(id, SEL))objc_msgSend)(ctx, @selector(getUserName));
                else if ([ctx respondsToSelector:@selector(userName)])
                    acc = ((id(*)(id, SEL))objc_msgSend)(ctx, @selector(userName));
            }
        } @catch (NSException *e) { acc = nil; }
        token = MioDualMediaDigest(acc.length ? acc : @"mio-local-account");
    });
    return token;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _memTable = [NSMutableDictionary dictionary];
        _readyGen = [NSMutableDictionary dictionary];
        _downloading = [NSMutableSet set];
        _attempts = [NSMutableDictionary dictionary];
        _downloadStart = [NSMutableDictionary dictionary];
        _pendingThumbs = [NSMutableSet set];
        _pendingOriginals = [NSMutableSet set];
        _thumbQueue = [[NSOperationQueue alloc] init];
        _thumbQueue.maxConcurrentOperationCount = 2;   // 小块 JPEG，2 并发足够且不抢 IO
        _thumbQueue.name = @"mio.dual.media.thumb";
        _originalQueue = [[NSOperationQueue alloc] init];
        _originalQueue.maxConcurrentOperationCount = 1;   // 原图大，串行防 IO/内存尖峰
        _originalQueue.name = @"mio.dual.media.original";

        NSUserDefaults *defs = [NSUserDefaults standardUserDefaults];
        // v1（MD5 key）注册表与副本目录废弃：直接清重建（自有副本可随时从源重导，
        // 不做兼容映射——符合"删旧实现"惯例）。快照一并废弃（内嵌旧格式 mioimg://local/
        // URL，host 校验必不过），首个推送周期重建新格式快照
        if (![defs boolForKey:kV2MigratedKey]) {
            [defs removeObjectForKey:@"MioDualMediaRegistry"];
            [defs removeObjectForKey:@"MioDualFeedSnapshot"];
            NSArray *old = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:MediaStableDir() error:nil];
            for (NSString *f in old) {
                [[NSFileManager defaultManager] removeItemAtPath:[MediaStableDir() stringByAppendingPathComponent:f] error:nil];
            }
            [defs setBool:YES forKey:kV2MigratedKey];
        }
        id saved = [defs objectForKey:kMediaRegistryKey];
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

// 登记注册表（{p,iid,cdn}，合并写盘）——就绪与否都登记：iid 供数据项找回，
// p 供 WCMediaDownloader 目标路径匹配，cdn 备 mediaKey 稳定源
- (void)recordEntryWithBareKey:(NSString *)bare path:(NSString *)path
                       itemID:(NSString *)itemID cdn:(NSString *)cdn {
    NSMutableDictionary *entry = [NSMutableDictionary dictionary];
    entry[@"p"] = path;
    if (itemID.length) entry[@"iid"] = itemID;
    if (cdn.length) entry[@"cdn"] = cdn;
    @synchronized(self) {
        NSDictionary *old = _memTable[bare] ?: _diskTable[bare];
        // 保留已嗅探出的扩展名/原图签名（新登记不带这两项）
        if (old[@"ext"]) entry[@"ext"] = old[@"ext"];
        if (old[@"osig"]) entry[@"osig"] = old[@"osig"];
        if (![old isEqualToDictionary:entry]) {
            _memTable[bare] = entry;
            _diskTable[bare] = entry;
            _dirty = YES;
        } else if (!_memTable[bare]) {
            _memTable[bare] = entry;   // 持久层命中后提升到内存层
        }
        if (_dirty) [self flushDirtyLocked];
    }
}

- (NSString *)extForBareKey:(NSString *)bare {
    @synchronized(self) {
        NSDictionary *entry = _memTable[bare] ?: _diskTable[bare];
        return entry[@"ext"];
    }
}

- (NSUInteger)readyGenerationForKey:(NSString *)key {
    if (key.length == 0) return 0;
    @synchronized(self) {
        return [_readyGen[MioDualBareKey(key)] unsignedIntegerValue];
    }
}

// 就绪迁移：gen +1（renderKeys 语义——就绪的 key 才进 JS 行）
- (void)markReadyBareKey:(NSString *)bare ext:(NSString *)ext {
    @synchronized(self) {
        if (ext.length) {
            NSMutableDictionary *entry = [(_memTable[bare] ?: _diskTable[bare] ?: @{}) mutableCopy];
            if (![entry[@"ext"] isEqualToString:ext]) {
                entry[@"ext"] = ext;
                _memTable[bare] = entry;
                _diskTable[bare] = entry;
                _dirty = YES;
                [self flushDirtyLocked];
            }
        }
        _readyGen[bare] = @([_readyGen[bare] unsignedIntegerValue] + 1);
    }
}

// mioimg URL（WCM wcm-cache://<accountToken>/<digest>.<ext> 同构：
// host = token 三层校验第一层）
- (NSString *)urlForFullKey:(NSString *)fullKey {
    return [NSString stringWithFormat:@"mioimg://%@/%@",
            [MioDualMediaService mediaToken], fullKey];
}

- (NSString *)stablePathForKey:(NSString *)key {
    if (key.length == 0) return nil;
    return [MediaStableDir() stringByAppendingPathComponent:key];
}

// 魔数嗅探（WCM 导出块 @0x32ff4 同款）：FF D8=jpg / 89504E47=png / ftyp+heic 族=heic /
// GIF8=gif。返回 jpg/png 时原字节直存（只定扩展名不转码），其余一律转码 JPEG 0.999
static NSString *MioDualSniffExt(NSData *d) {
    const unsigned char *b = (const unsigned char *)d.bytes;
    if (d.length < 12) return nil;
    if (b[0] == 0xFF && b[1] == 0xD8) return @"jpg";
    if (b[0] == 0x89 && b[1] == 0x50 && b[2] == 0x4E && b[3] == 0x47) return @"png";
    if (b[4] == 'f' && b[5] == 't' && b[6] == 'y' && b[7] == 'p') return @"heic";   // heic/heix/mif1/msf1
    if (b[0] == 'G' && b[1] == 'I' && b[2] == 'F') return @"gif";
    return nil;
}

// 统一导出（WCM 导出块同构）：读源 → 魔数嗅探 → jpg/png 原字节直存（原子+保护
// 0x40000001，同 WCM）/ 异格式（含 heic——WebKit 低版本不支持 HEIC，与 WCM 的唯一
// 行为差异）→ JPEG 0.999 → 写 dir/<bare>.<ext>。完成回调带最终扩展名
// （导出逻辑内联在 registerLocalPath / exportOriginalPath——双队列各自持有 block，
// 与 WCM previewQueue/mediaQueue 各自入队的形态一致）

- (NSString *)registerLocalPath:(NSString *)path itemID:(NSString *)itemID
                         cdnURL:(NSString *)cdn
                     completion:(void (^)(NSString *url, BOOL ready))cb {
    if (path.length == 0) return nil;
    NSString *bare = MioDualMediaDigest(cdn.length ? cdn : path);
    [self recordEntryWithBareKey:bare path:path itemID:itemID cdn:cdn];

    // 就绪快路径：本会话已导出（gen>0）→ 信任自有目录免 stat（每轮全量重注册，
    // 千次 stat 卡顿实证；文件真被系统清掉由 noteExportLost 自愈）；跨启动恢复走
    // 登记的 ext + 一次 stat
    if ([self readyGenerationForKey:bare] > 0) {
        NSString *ext = [self extForBareKey:bare];
        if (ext.length && cb) cb([self urlForFullKey:[bare stringByAppendingPathExtension:ext]], YES);
        else if (cb) cb(nil, NO);
        return bare;
    }
    NSString *ext = [self extForBareKey:bare];
    if (ext.length) {
        NSString *dst = [[MediaStableDir() stringByAppendingPathComponent:bare]
                         stringByAppendingPathExtension:ext];
        if ([[NSFileManager defaultManager] fileExistsAtPath:dst]) {
            [self markReadyBareKey:bare ext:ext];
            if (cb) cb([self urlForFullKey:dst.lastPathComponent], YES);
            return bare;
        }
    }

    // 占位文件闸门：<1KB = 微信还没下载完（探针实证的占位/半截文件），只登记等下一轮
    NSDictionary *attr = [[NSFileManager defaultManager] attributesOfItemAtPath:path error:nil];
    if ([attr fileSize] <= 1024) {
        if (cb) cb(nil, NO);
        return bare;
    }

    // 缩略图队列导出（主线程零 IO）；完成唤醒推送 → diff 补图
    @synchronized(self) {
        if ([_pendingThumbs containsObject:bare]) {
            if (cb) cb(nil, NO);   // 已有导出进行中：等它完成的统一唤醒
            return bare;
        }
        [_pendingThumbs addObject:bare];
    }
    __weak typeof(self) wself = self;
    [_thumbQueue addOperationWithBlock:^{
        __strong typeof(wself) sself = wself;
        NSData *data = [NSData dataWithContentsOfFile:path options:NSDataReadingMappedIfSafe error:nil];
        NSString *ext = data ? MioDualSniffExt(data) : nil;
        NSString *dstExt = @"jpg";
        BOOL ok = NO;
        if (data && ([ext isEqualToString:@"jpg"] || [ext isEqualToString:@"png"])) {
            // 原字节直存（WCM 同款：保真 + 零转码开销），扩展名按嗅探结果
            dstExt = ext;
            ok = [data writeToFile:[[MediaStableDir() stringByAppendingPathComponent:bare]
                                    stringByAppendingPathExtension:dstExt]
                           options:NSDataWritingAtomic | NSDataWritingFileProtectionComplete error:nil];
        } else if (data) {
            // 异格式（heic/gif/webp/…）：解码重编码 JPEG 0.999（WCM 同款转码质量；
            // UIImage 解码顺带校正方向）
            UIImage *img = [UIImage imageWithData:data];
            NSData *jpeg = img ? UIImageJPEGRepresentation(img, 0.999) : nil;
            if (jpeg) ok = [jpeg writeToFile:[[MediaStableDir() stringByAppendingPathComponent:bare]
                                              stringByAppendingPathExtension:dstExt]
                                     options:NSDataWritingAtomic | NSDataWritingFileProtectionComplete error:nil];
        }
        if (sself) {
            @synchronized(sself) { [sself->_pendingThumbs removeObject:bare]; }
            WPLog(@"Dual", @"[Media] stable copy %@ key=%@ ext=%@", ok ? @"ready" : @"FAILED", bare, dstExt);
            if (ok) {
                [sself markReadyBareKey:bare ext:dstExt];
                if (cb) cb([sself urlForFullKey:[bare stringByAppendingPathExtension:dstExt]], YES);
                dispatch_async(dispatch_get_main_queue(), ^{
                    [MioDualFeedBridge notifyDataChanged];   // 唤醒：rebuild 重映射补图行 → diff upsert
                });
            } else if (cb) {
                cb(nil, NO);
            }
        }
    }];
    return bare;
}

#pragma mark 原图通道（WCM galleryRawPath:quality: 同构）

// 原图路径解析（WCM galleryRawPath:quality: 同构 duck-typing）：quality 2/3/4 →
// pathForData/pathForHdData/pathForUhdData；视频帖 → pathForSightData（封面/源帧）。
// 调用方拿到路径后交 exportOriginalPath:...（original 队列导出）
- (NSString *)originalPathForDataItem:(id)di quality:(NSInteger)quality {
    if (!di || quality < 1) return nil;
    id mi = nil;
    if ([di respondsToSelector:@selector(getMediaWraps)]) {
        NSArray *wraps = ((id(*)(id, SEL))objc_msgSend)(di, @selector(getMediaWraps));
        for (id wrap in wraps) {
            if ([wrap respondsToSelector:@selector(mediaItem)]) {
                mi = ((id(*)(id, SEL))objc_msgSend)(wrap, @selector(mediaItem));
                if (mi) break;
            }
        }
    }
    if (!mi) return nil;
    BOOL video = [NSStringFromClass([mi class]) rangeOfString:@"ideo"].location != NSNotFound;
    SEL sel = video ? @selector(pathForSightData)
              : (quality >= 4 ? @selector(pathForUhdData)
              : (quality == 3 ? @selector(pathForHdData) : @selector(pathForData)));
    if (![mi respondsToSelector:sel]) return nil;
    NSString *p = ((id(*)(id, SEL))objc_msgSend)(mi, sel);
    return ([p isKindOfClass:[NSString class]] && p.length) ? p : nil;
}

// 原图导出：独立 key = SHA256(mediaKey@qN)（同 WCM：原图与缩略图 key 域隔离），
// original 队列 + pendingOriginals 去重，size^mtime 签名（galleryFileSignature 同位）
// ——签名没变不重导。入口暂为外部长按/后续大图浏览器调用
- (void)exportOriginalPath:(NSString *)path itemID:(NSString *)itemID
                    cdnURL:(NSString *)cdn quality:(NSInteger)quality {
    if (path.length == 0 || quality < 2) return;
    NSDictionary *attr = [[NSFileManager defaultManager] attributesOfItemAtPath:path error:nil];
    if ([attr fileSize] <= 1024) return;   // 占位不导原图
    NSString *mk = [NSString stringWithFormat:@"%@@q%ld", cdn.length ? cdn : path, (long)quality];
    NSString *bare = MioDualMediaDigest(mk);
    [self recordEntryWithBareKey:bare path:path itemID:itemID cdn:cdn];

    // 签名去重：源文件 size+mtime 没变且副本已在 → 跳过
    unsigned long long sig = [attr fileSize] ^ (unsigned long long)(
        [attr modificationDate].timeIntervalSinceReferenceDate * 1000.0);
    @synchronized(self) {
        NSDictionary *entry = _memTable[bare] ?: _diskTable[bare];
        if (entry[@"osig"] && [entry[@"osig"] unsignedLongLongValue] == sig
              && [self readyGenerationForKey:bare] > 0) return;
        if ([_pendingOriginals containsObject:bare]) return;
        [_pendingOriginals addObject:bare];
        NSMutableDictionary *upd = [entry mutableCopy] ?: [NSMutableDictionary dictionary];
        upd[@"osig"] = @(sig);
        _memTable[bare] = upd;
        _diskTable[bare] = upd;
        _dirty = YES;
        [self flushDirtyLocked];
    }
    __weak typeof(self) wself = self;
    [_originalQueue addOperationWithBlock:^{
        __strong typeof(wself) sself = wself;
        NSData *data = [NSData dataWithContentsOfFile:path options:NSDataReadingMappedIfSafe error:nil];
        NSString *ext = data ? MioDualSniffExt(data) : nil;
        NSString *dstExt = @"jpg";
        BOOL ok = NO;
        if (data && ([ext isEqualToString:@"jpg"] || [ext isEqualToString:@"png"])) {
            dstExt = ext;
            ok = [data writeToFile:[[MediaStableDir() stringByAppendingPathComponent:bare]
                                    stringByAppendingPathExtension:dstExt]
                           options:NSDataWritingAtomic | NSDataWritingFileProtectionComplete error:nil];
        } else if (data) {
            UIImage *img = [UIImage imageWithData:data];
            NSData *jpeg = img ? UIImageJPEGRepresentation(img, 0.999) : nil;
            if (jpeg) ok = [jpeg writeToFile:[[MediaStableDir() stringByAppendingPathComponent:bare]
                                              stringByAppendingPathExtension:dstExt]
                                     options:NSDataWritingAtomic | NSDataWritingFileProtectionComplete error:nil];
        }
        if (sself) {
            @synchronized(sself) { [sself->_pendingOriginals removeObject:bare]; }
            WPLog(@"Dual", @"[Media] original %@ key=%@ ext=%@", ok ? @"ready" : @"FAILED", bare, dstExt);
            if (ok) [sself markReadyBareKey:bare ext:dstExt];
        }
    }];
}

// 副本文件被系统清理（Caches 回收）后的自愈钩子：gen 归零 + 扩展名清除，
// 下一轮注册重新导出（zero-fail 下 <img> 已被占位，无需 JS 感知）
- (void)noteExportLost:(NSString *)key {
    if (key.length == 0) return;
    NSString *bare = MioDualBareKey(key);
    @synchronized(self) {
        [_readyGen removeObjectForKey:bare];
        NSMutableDictionary *entry = [(_memTable[bare] ?: _diskTable[bare]) mutableCopy];
        if (entry) {
            [entry removeObjectForKey:@"ext"];
            _memTable[bare] = entry;
            _diskTable[bare] = entry;
            _dirty = YES;
            [self flushDirtyLocked];
        }
    }
    WPLog(@"Dual", @"[Media] export lost, will re-export key=%@", bare);
}

- (NSString *)resolveKey:(NSString *)key {
    if (key.length == 0) return nil;
    NSString *bare = MioDualBareKey(key);
    // 本会话已导出：信任自有目录免 stat（见 registerLocalPath 就绪快路径）
    if ([self readyGenerationForKey:bare] > 0) {
        NSString *ext = [self extForBareKey:bare];
        return ext.length ? [[MediaStableDir() stringByAppendingPathComponent:bare]
                             stringByAppendingPathExtension:ext] : nil;
    }
    // 跨启动恢复：登记的 ext + 一次 stat
    NSString *ext = [self extForBareKey:bare];
    if (ext.length) {
        NSString *dst = [[MediaStableDir() stringByAppendingPathComponent:bare]
                         stringByAppendingPathExtension:ext];
        if ([[NSFileManager defaultManager] fileExistsAtPath:dst]) {
            [self markReadyBareKey:bare ext:ext];
            return dst;
        }
    }
    // 副本缺失而原文件在（WCMediaDownloader 拉回来的落在微信目录）→ 读原路径
    // + 缩略图队列补导，下次起走副本；都没有返回 nil：上层触发 WCMediaDownloader
    NSString *path = nil;
    @synchronized(self) {
        NSDictionary *entry = _memTable[bare];
        if (!entry) {
            entry = _diskTable[bare];
            if (entry) _memTable[bare] = entry;   // 持久层命中提升到内存层
        }
        path = entry[@"p"];
    }
    if (path.length == 0) return nil;
    if (![[NSFileManager defaultManager] fileExistsAtPath:path]) return nil;
    NSDictionary *attr = [[NSFileManager defaultManager] attributesOfItemAtPath:path error:nil];
    if ([attr fileSize] > 1024) {   // 占位文件不导，等微信下载完
        [self registerLocalPath:path itemID:nil cdnURL:nil completion:nil];
    }
    return path;
}

- (NSString *)itemIDForKey:(NSString *)key {
    if (key.length == 0) return nil;
    @synchronized(self) {
        NSDictionary *entry = _memTable[MioDualBareKey(key)] ?: _diskTable[MioDualBareKey(key)];
        NSString *iid = entry[@"iid"];
        return iid.length ? iid : nil;
    }
}

- (NSString *)registeredPathForKey:(NSString *)key {
    if (key.length == 0) return nil;
    @synchronized(self) {
        NSDictionary *entry = _memTable[MioDualBareKey(key)] ?: _diskTable[MioDualBareKey(key)];
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
    NSString *bare = MioDualBareKey(key);

    @synchronized(self) {
        if ([_downloading containsObject:bare]) {
            // 挂起超 60s 视为死链（completionHandler 未回调），重置后允许重试
            NSDate *start = _downloadStart[bare];
            if (start && -[start timeIntervalSinceNow] < 60.0) return;
            [_downloading removeObject:bare];
        }
        [_downloading addObject:bare];
        _downloadStart[bare] = [NSDate date];
        NSNumber *att = _attempts[bare];
        if (att.intValue >= 3) {
            [_downloading removeObject:bare];
            WPLog(@"Dual", @"[Media] attempts exhausted key=%@", bare);
            return;
        }
        _attempts[bare] = @(att.intValue + 1);
    }

    NSString *path = [self registeredPathForKey:key];
    NSString *iid = [self itemIDForKey:key];
    id di = iid.length ? [[MioDualTimelineStore shared] dataItemByID:iid] : nil;
    id mi = [self mediaItemForDataItem:di path:path];
    if (!di || !mi) {
        [self endDownloadForKey:bare];
        WPLog(@"Dual", @"[Media] no dataItem/mediaItem key=%@ iid=%@", bare, iid);
        return;
    }

    Class dCls = objc_getClass("WCMediaDownloader");
    SEL startSel = NSSelectorFromString(@"startDownloadWithCompletionHandler:");
    if (!dCls || ![dCls instancesRespondToSelector:startSel]) {
        [self endDownloadForKey:bare];
        return;
    }
    id dl = ((id(*)(id, SEL, id, id))objc_msgSend)(
        ((id(*)(id, SEL))objc_msgSend)(dCls, @selector(alloc)),
        NSSelectorFromString(@"initWithDataItem:mediaItem:"), di, mi);
    if (!dl || ![dl respondsToSelector:startSel]) {
        [self endDownloadForKey:bare];
        return;
    }
    // completionHandler 传 0 参空结构 block（ABI 被调方只读自己声明的参数寄存器，
    // 签名 dump 失真无碍）；回调里就绪迁移 + 精准刷新对应 <img>（mediaFinished 语义）
    __weak typeof(self) wself = self;
    void (^done)(void) = ^{
        __strong typeof(wself) sself = wself;
        [sself endDownloadForKey:bare];
        WPLog(@"Dual", @"[Media] downloader finished key=%@", bare);
        if (sself) {
            [sself markReadyBareKey:bare ext:nil];   // 下载落地=就绪迁移（ext 由重导出补齐）
            // ext 已知 → 直刷 <img>（dataset.src 基址重载）；未知 → rebuild 重映射兜底
            NSString *ext = [sself extForBareKey:bare];
            if (ext.length) {
                [MioDualFeedBridge mediaReadyForKey:[bare stringByAppendingPathExtension:ext]];
            } else {
                [MioDualFeedBridge notifyDataChanged];
            }
        }
    };
    ((void(*)(id, SEL, id))objc_msgSend)(dl, @selector(setCompletionHandler:), done);
    ((void(*)(id, SEL, id))objc_msgSend)(dl, startSel, done);
    ((void(*)(id, SEL, id))objc_msgSend)(dl, @selector(setRetainedSelf:), dl);   // 异步下载自持有
    WPLog(@"Dual", @"[Media] downloader started key=%@ iid=%@", bare, iid);
}

- (void)pruneExcept:(NSSet<NSString *> *)liveKeys {
    if (!liveKeys.count) return;
    // liveKeys 是完整文件名（<digest>.<ext>），归一到 bare 再修剪
    NSMutableSet *liveBare = [NSMutableSet setWithCapacity:liveKeys.count];
    for (NSString *k in liveKeys) [liveBare addObject:MioDualBareKey(k)];
    @synchronized(self) {
        // 只修剪持久层：内存层存会话内注册过的全部 key（含未入快照的），
        // 当前显示中的图仍可解析；持久层以快照为准防 NSUserDefaults 膨胀
        NSArray *staleKeys = [_diskTable.allKeys filteredArrayUsingPredicate:
            [NSPredicate predicateWithFormat:@"NOT SELF IN %@", liveBare]];
        if (staleKeys.count == 0) return;
        for (NSString *k in staleKeys) {
            [_diskTable removeObjectForKey:k];
            [_memTable removeObjectForKey:k];
        }
        _dirty = YES;
        [self flushDirtyLocked];
        WPLog(@"Dual", @"[Media] pruned %lu stale keys, %lu kept",
              (unsigned long)staleKeys.count, (unsigned long)_diskTable.count);
    }
}

@end
