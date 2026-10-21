#import "MioDualMediaService.h"
#import <CommonCrypto/CommonDigest.h>
#import <UIKit/UIKit.h>   // 异格式转码：UIImage/UIImageJPEGRepresentation
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "MioDualFeedBridge.h"
#import "MioDualTimelineStore.h"
#import "MioDualMediaTrace.h"

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
    NSOperationQueue *_thumbQueue;                                // 缩略图导出（WCM previewQueue 位）
    NSOperationQueue *_originalQueue;                             // 原图导出（WCM mediaQueue 位）
    NSMutableSet<NSString *> *_pendingThumbs;                     // 缩略图导出去重（WCM pendingExports 同位）
    NSMutableSet<NSString *> *_pendingOriginals;                  // 原图导出去重（WCM pendingOriginalExports 同位）
    NSMutableSet<NSString *> *_cdnInflight;                       // CDN 兜底下载在途去重（防 5s 轮询重入）
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
// cdn 备 JS imgCdn 兜底与跨启动重导锚点
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
        // 补导路径（resolveKey → registerLocalPath:itemID:nil）传空 iid/cdn：
        // 不继承会把数据项找回锚点清掉（149 日志实证 14 个 key iid=(null) →
        // noitem → attempts 烧死 → 图永久丢失），此处空值一律继承旧锚点
        if (!itemID.length && old[@"iid"]) entry[@"iid"] = old[@"iid"];
        if (!cdn.length && old[@"cdn"]) entry[@"cdn"] = old[@"cdn"];
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
        [MioDualMediaTrace log:@"gen+" key:bare
                        detail:[NSString stringWithFormat:@"n=%@ ext=%@", _readyGen[bare], ext ?: @"?"]];
    }
    // 就绪迁移立即唤醒 rebuild（WCM 导出完成→scheduleMediaReload 同款，秒补图的
    // 关键一跳）：文本待图卡靠它摆脱 5s 轮询延迟；0.5s 尾沿防抖合并风暴
    [MioDualFeedBridge notifyDataChanged];
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
        // gate=cache 是稳态（每轮全量重注册都走这），不进 trace 防刷屏
        if (ext.length && cb) cb([self urlForFullKey:[bare stringByAppendingPathExtension:ext]], YES);
        else if (cb) cb(nil, NO);
        return bare;
    }
    NSString *ext = [self extForBareKey:bare];
    if (ext.length) {
        NSString *dst = [[MediaStableDir() stringByAppendingPathComponent:bare]
                         stringByAppendingPathExtension:ext];
        if ([[NSFileManager defaultManager] fileExistsAtPath:dst]) {
            [MioDualMediaTrace log:@"register" key:bare detail:@"gate=restore(跨启动恢复)"];
            [self markReadyBareKey:bare ext:ext];
            if (cb) cb([self urlForFullKey:dst.lastPathComponent], YES);
            return bare;
        }
    }

    // 占位文件闸门：<1KB = 微信还没下载完（探针实证的占位/半截文件），只登记等下一轮
    NSDictionary *attr = [[NSFileManager defaultManager] attributesOfItemAtPath:path error:nil];
    if ([attr fileSize] <= 1024) {
        [MioDualMediaTrace log:@"register" key:bare
                        detail:[NSString stringWithFormat:@"gate=place(<1KB 等微信下载) %lluB", (unsigned long long)[attr fileSize]]];
        if (cb) cb(nil, NO);
        return bare;
    }

    // 缩略图队列导出（主线程零 IO）；完成唤醒推送 → diff 补图
    @synchronized(self) {
        if ([_pendingThumbs containsObject:bare]) {
            [MioDualMediaTrace log:@"register" key:bare detail:@"gate=pending(导出进行中)"];
            if (cb) cb(nil, NO);   // 已有导出进行中：等它完成的统一唤醒
            return bare;
        }
        [_pendingThumbs addObject:bare];
    }
    [MioDualMediaTrace log:@"register" key:bare
                    detail:[NSString stringWithFormat:@"gate=queue(入缩略图队列) src=%@",
                            path.lastPathComponent]];
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
                [MioDualMediaTrace log:@"export" key:bare
                                detail:[NSString stringWithFormat:@"%@ → .%@ %lluB",
                                        [ext isEqualToString:dstExt] ? @"direct(原字节直存)" : @"trans(转码)",
                                        dstExt, (unsigned long long)data.length]];
                [sself markReadyBareKey:bare ext:dstExt];
                if (cb) cb([sself urlForFullKey:[bare stringByAppendingPathExtension:dstExt]], YES);
                dispatch_async(dispatch_get_main_queue(), ^{
                    [MioDualFeedBridge notifyDataChanged];   // 唤醒：rebuild 重映射补图行 → diff upsert
                });
            } else {
                [MioDualMediaTrace log:@"export" key:bare detail:@"FAILED(源读取/解码/写盘失败)"];
                if (cb) cb(nil, NO);
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
        [[attr fileModificationDate] timeIntervalSinceReferenceDate] * 1000.0);
    @synchronized(self) {
        NSDictionary *entry = _memTable[bare] ?: _diskTable[bare];
        if (entry[@"osig"] && [entry[@"osig"] unsignedLongLongValue] == sig
              && [self readyGenerationForKey:bare] > 0) {
            [MioDualMediaTrace log:@"orig" key:bare detail:@"skip(签名未变)"];
            return;
        }
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
            if (ok) {
                [MioDualMediaTrace log:@"orig" key:bare
                                detail:[NSString stringWithFormat:@"q导出 → .%@ %lluB", dstExt,
                                        (unsigned long long)data.length]];
                [sself markReadyBareKey:bare ext:dstExt];
            } else {
                [MioDualMediaTrace log:@"orig" key:bare detail:@"FAILED"];
            }
        }
    }];
}

// 副本文件被系统清理（Caches 回收）后的自愈钩子：gen 归零 + 扩展名清除，
// 下一轮注册重新导出（zero-fail 下 <img> 已被占位，无需 JS 感知）
- (void)noteExportLost:(NSString *)key {
    if (key.length == 0) return;
    NSString *bare = MioDualBareKey(key);
    [MioDualMediaTrace log:@"export" key:bare detail:@"LOST(副本被系统清理,待重导)"];
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
    // 副本缺失而原文件在（微信后补下载落在本目录）→ 读原路径 + 缩略图队列补导，
    // 下次起走副本；都没有返回 nil（ensure 层接 CDN 兜底下载）
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

// 行重建时回填数据项锚点（row.id ↔ row.img，行自身就是 key→itemID 映射）：
// v2 迁移清库 + 旧版补导清 iid 的存量行借此复活补下链路——getDataItemByID 是
// facade 库级查询（WCFacade getDataItemByID:），窗口外老行同样可查。纯字典写，零 IO
- (void)rebindItemID:(NSString *)iid forKey:(NSString *)key {
    if (iid.length == 0 || key.length == 0) return;
    NSString *bare = MioDualBareKey(key);
    if (!bare.length) return;
    @synchronized(self) {
        NSDictionary *entry = _memTable[bare] ?: _diskTable[bare];
        if ([entry[@"iid"] length]) return;   // 锚点健在：稳态零成本直返
        NSMutableDictionary *upd = entry.mutableCopy ?: [NSMutableDictionary dictionary];
        upd[@"iid"] = iid;
        _memTable[bare] = upd;
        _diskTable[bare] = upd;
        _dirty = YES;
        [self flushDirtyLocked];
    }
}

// 渲染层备图：副本就绪 → resolveKey 内存代际快路径直返（零 IO）；副本缺失而源文件
// 已被微信落地(>1KB) → resolveKey 内部补导 → gen+ → rebuild 补图（5s 轮询/visible/
// assetMiss 三入口驱动的自愈环）。源也没有 → WCM YB 下载器同构兜底：拉行 cdn 字段
// （dataUrl.url）落稳定副本再导（探针实证 WCM 的 CDN 兜底在 native 下载器，JS 零
// cdn 引用；row 未就绪时 JS 纯文本渲染，落地后 setCover 升级——从不直连）
- (void)ensureMediaForKey:(NSString *)key {
    [self ensureMediaForKey:key cdn:nil];
}

- (void)ensureMediaForKey:(NSString *)key cdn:(NSString *)cdn {
    if (key.length == 0) return;
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self ensureMediaForKey:key cdn:cdn]; });
        return;
    }
    if ([self resolveKey:key]) return;
    NSString *bare = MioDualBareKey(key);
    NSString *u = cdn.length ? cdn : _memTable[bare][@"cdn"];
    [self downloadCdnForBareKey:bare url:u];
}

// ---- CDN 兜底下载（WCM YBIBImageData loadURL_download 等价物）----
// A 路探针实证：图片帖 dataUrl.url = http://shmmsns.qpic.cn/mmsns/<hash>/0，裸 http
// 明文（YB requestModifier 恒 nil 佐证）。拉回 → 原字节直存/转码 → gen+ → rebuild。
// bare 用行 mediaKey 的摘要（勿按 cdn 重算：cdn 与 path 摘要不同源，重算会与注册表错位）
- (void)downloadCdnForBareKey:(NSString *)bare url:(NSString *)url {
    if (bare.length == 0 || url.length == 0) return;
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self downloadCdnForBareKey:bare url:url]; });
        return;
    }
    @synchronized(self) {
        if (!_cdnInflight) _cdnInflight = [NSMutableSet set];
        if ([_cdnInflight containsObject:bare]) return;   // 在途去重
        [_cdnInflight addObject:bare];
    }
    __weak typeof(self) wself = self;
    [[NSURLSession sharedSession] dataTaskWithURL:[NSURL URLWithString:url]
        completionHandler:^(NSData *data, NSURLResponse *resp, NSError *err) {
            dispatch_async(dispatch_get_main_queue(), ^{
                __strong typeof(wself) sself = wself;
                @synchronized(sself) { [sself->_cdnInflight removeObject:bare]; }
                NSInteger code = [(NSHTTPURLResponse *)resp statusCode];
                if (err || code != 200 || data.length <= 1024) {
                    [MioDualMediaTrace log:@"cdnfetch" key:bare
                                    detail:[NSString stringWithFormat:@"FAIL(code=%ld %@ %lluB)",
                                            (long)code, err.localizedDescription ?: @"",
                                            (unsigned long long)data.length]];
                    return;
                }
                [sself storeImageData:data forBareKey:bare];
            });
        }] resume];
}

// 拉回数据落稳定副本：原字节直存（WCM 同款保真）或异格式转码 JPEG → gen+ →
// notifyDataChanged 唤醒 rebuild（JS 文本卡升级媒体卡，WCM setCover 等价）
- (void)storeImageData:(NSData *)data forBareKey:(NSString *)bare {
    NSString *ext = MioDualSniffExt(data) ?: @"jpg";
    NSString *dstExt = @"jpg";
    BOOL ok = NO;
    if ([ext isEqualToString:@"jpg"] || [ext isEqualToString:@"png"]) {
        dstExt = ext;
        ok = [data writeToFile:[[MediaStableDir() stringByAppendingPathComponent:bare]
                                stringByAppendingPathExtension:dstExt]
                        options:NSDataWritingAtomic | NSDataWritingFileProtectionComplete error:nil];
    } else {
        UIImage *img = [UIImage imageWithData:data];
        NSData *jpeg = img ? UIImageJPEGRepresentation(img, 0.999) : nil;
        if (jpeg) ok = [jpeg writeToFile:[[MediaStableDir() stringByAppendingPathComponent:bare]
                                          stringByAppendingPathExtension:dstExt]
                                  options:NSDataWritingAtomic | NSDataWritingFileProtectionComplete error:nil];
    }
    [MioDualMediaTrace log:@"cdnfetch" key:bare
                    detail:[NSString stringWithFormat:@"%@ .%@ %lluB",
                            ok ? @"OK" : @"WRITE-FAIL", dstExt, (unsigned long long)data.length]];
    if (ok) {
        [self markReadyBareKey:bare ext:dstExt];
        dispatch_async(dispatch_get_main_queue(), ^{
            [MioDualFeedBridge notifyDataChanged];
        });
    }
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
