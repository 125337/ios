#import "MioDualMediaService.h"
#import <CommonCrypto/CommonDigest.h>
#import "../../Core/LogManager.h"

// 持久表结构（NSUserDefaults key = MioDualMediaRegistry）：
//   { key: @{ @"p": 本地路径, @"u": CDN 缩略图 URL（可缺） } }
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

@implementation MioDualMediaService {
    NSMutableDictionary<NSString *, NSDictionary *> *_memTable;   // 会话层
    NSMutableDictionary<NSString *, NSDictionary *> *_diskTable;  // 持久层镜像（启动加载）
    BOOL _dirty;
}

+ (instancetype)shared {
    static MioDualMediaService *svc = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ svc = [[MioDualMediaService alloc] init]; });
    return svc;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _memTable = [NSMutableDictionary dictionary];
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

- (NSString *)registerLocalPath:(NSString *)path cdnURL:(NSString *)cdnURL {
    if (path.length == 0) return nil;
    NSString *key = MioDualMediaMD5(path);
    NSMutableDictionary *entry = [NSMutableDictionary dictionary];
    entry[@"p"] = path;
    if (cdnURL.length) entry[@"u"] = cdnURL;
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
    return key;
}

- (NSString *)resolveKey:(NSString *)key {
    if (key.length == 0) return nil;
    @synchronized(self) {
        NSDictionary *entry = _memTable[key];
        if (!entry) {
            entry = _diskTable[key];
            if (entry) _memTable[key] = entry;   // 持久层命中提升到内存层
        }
        NSString *path = entry[@"p"];
        if (path.length == 0) return nil;
        // 每次解析都校验文件：微信清缓存后自动失效（上层回落 CDN），文件可能被
        // 重新下载故不删表项，清理交给 pruneExcept
        return [[NSFileManager defaultManager] fileExistsAtPath:path] ? path : nil;
    }
}

- (NSString *)cdnFallbackForKey:(NSString *)key {
    if (key.length == 0) return nil;
    @synchronized(self) {
        NSDictionary *entry = _memTable[key] ?: _diskTable[key];
        NSString *url = entry[@"u"];
        return (url.length > 4 && [url hasPrefix:@"http"]) ? url : nil;
    }
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
