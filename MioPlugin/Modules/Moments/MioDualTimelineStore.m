#import "MioDualTimelineStore.h"
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "MioDualMediaService.h"

#pragma mark - facade（原 MomentsDualPanel.m 内联实现迁入，消息页共用）

id MioDualFacade(void) {
    static id cached = nil;
    if (cached) return cached;
    Class fCls = objc_getClass("WCFacade");
    Class ctxCls = objc_getClass("MMContext");
    if (!fCls || !ctxCls) return nil;
    id ctx = nil;
    SEL activeSel = NSSelectorFromString(@"activeUserContext");
    SEL curSel = NSSelectorFromString(@"currentContext");
    if ([ctxCls respondsToSelector:activeSel]) {
        ctx = ((id(*)(id, SEL))objc_msgSend)(ctxCls, activeSel);
    }
    if (!ctx && [ctxCls respondsToSelector:curSel]) {
        ctx = ((id(*)(id, SEL))objc_msgSend)(ctxCls, curSel);
    }
    if (!ctx || ![ctx respondsToSelector:@selector(getService:)]) return nil;
    cached = ((id(*)(id, SEL, Class))objc_msgSend)(ctx, @selector(getService:), fCls);
    return cached;
}

// WCDataItem 的 createtime/likeCount/commentCount 是标量 getter（ULL/uint），
// 禁止用 id 接裸 msgSend 返回值（WXSafeIntegerGet 同款）：x0 原始整数被当指针
// 发 respondsToSelector 必 SIGSEGV（127.log 点双列闪退实证）。
// 阶段0 探针实证的 KVC 装箱路径：valueForKey 自动装箱 NSNumber，未知 key @try 兜住。
static long long MioDualScalarGet(id obj, NSString *key, long long def) {
    if (!obj || !key.length) return def;
    @try {
        id v = [obj valueForKey:key];
        if ([v isKindOfClass:[NSNumber class]]) return [(NSNumber *)v longLongValue];
    } @catch (NSException *e) {
    }
    return def;
}

// timeline 直读（WCFacade.h:429-431 实证）：主路 getTimelineDataItem（返回全数组）；
// 回落 countOfTimelineDataItem + getTimelineDataItemOfIndex:（count 是标量 getter，走 KVC 装箱）
static NSArray *MioDualTimelineItems(id facade) {
    if (!facade) return nil;
    SEL all = NSSelectorFromString(@"getTimelineDataItem");
    if ([facade respondsToSelector:all]) {
        id v = ((id(*)(id, SEL))objc_msgSend)(facade, all);
        if ([v isKindOfClass:[NSArray class]]) return v;
    }
    SEL idx = NSSelectorFromString(@"getTimelineDataItemOfIndex:");
    if (![facade respondsToSelector:idx]) return nil;
    long long n = MioDualScalarGet(facade, @"countOfTimelineDataItem", 0);
    if (n <= 0) return nil;
    NSMutableArray *arr = [NSMutableArray arrayWithCapacity:(NSUInteger)n];
    for (long long i = 0; i < n; i++) {
        id it = ((id(*)(id, SEL, unsigned long long))objc_msgSend)(facade, idx, (unsigned long long)i);
        if (it) [arr addObject:it];
    }
    return arr;
}

#pragma mark - Store

// LRU 上限（内存行数组保留最近 500 条；B7 根治：300 硬截断移除）
static const NSUInteger kMaxRows = 500;
// 快照持久化 key（新 key：旧 MioDualLastFeedJSON 为 f1/f2 key 时代产物，首次保存即清除）
static NSString * const kSnapshotKey = @"MioDualFeedSnapshot";

@implementation MioDualTimelineStore {
    NSMutableDictionary<NSString *, NSString *> *_avatarCache;   // wxid → 头像 URL（会话缓存）
    NSUInteger _lastRawCount;
}

+ (instancetype)shared {
    static MioDualTimelineStore *store = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ store = [[MioDualTimelineStore alloc] init]; });
    return store;
}

- (instancetype)init {
    self = [super init];
    if (self) _avatarCache = [NSMutableDictionary dictionary];
    return self;
}

#pragma mark 双源读取

- (NSArray *)fetchRawItems {
    id facade = MioDualFacade();
    if (!facade) return @[];
    NSMutableArray *raw = [NSMutableArray array];
    NSMutableSet *seen = [NSMutableSet set];
    // 源一：getTimelineDataItem（UI 缓存，最新鲜，事件回调后最先更新）
    for (id item in MioDualTimelineItems(facade)) {
        NSString *uid = WXSafeStringGet(item, @"itemID");
        if (uid.length == 0 || [seen containsObject:uid]) continue;
        [seen addObject:uid];
        [raw addObject:item];
    }
    // 源二：m_timelineWithLocalDatas（本地库支撑——冷启动有数、无 300 上限，
    // WCFacade.h:5 ivar 实证）。B6 根治：UI 缓存空/不全时由本地库补齐。
    // ivar 容器类型未逐字节实证，数组/字典两种形态都接，其余放弃
    @try {
        id local = [facade valueForKey:@"m_timelineWithLocalDatas"];
        NSArray *arr = nil;
        if ([local isKindOfClass:[NSArray class]]) arr = local;
        else if ([local isKindOfClass:[NSDictionary class]]) arr = [local allValues];
        for (id item in arr) {
            NSString *uid = WXSafeStringGet(item, @"itemID");
            if (uid.length == 0 || [seen containsObject:uid]) continue;
            [seen addObject:uid];
            [raw addObject:item];
        }
    } @catch (NSException *e) { }
    _lastRawCount = raw.count;
    return raw;
}

- (NSUInteger)approxCount {
    return _lastRawCount;
}

#pragma mark 统一字段映射（收口：上游不再写任何 @try）

- (NSArray<NSDictionary *> *)currentItems {
    NSMutableArray *rows = [NSMutableArray array];
    @try {
        for (id item in [self fetchRawItems]) {
            NSDictionary *d = [self itemDict:item];
            if (d) [rows addObject:d];
        }
    } @catch (NSException *e) {
        WPLog(@"Dual", @"[Store] map error: %@", e);
    }
    [rows sortUsingComparator:^NSComparisonResult(NSDictionary *a, NSDictionary *b) {
        long long ta = [a[@"time"] longLongValue], tb = [b[@"time"] longLongValue];
        return ta < tb ? NSOrderedDescending : (ta > tb ? NSOrderedAscending : NSOrderedSame);
    }];
    if (rows.count > kMaxRows) [rows removeObjectsInRange:NSMakeRange(kMaxRows, rows.count - kMaxRows)];
    return rows;
}

- (NSDictionary *)itemDict:(id)item {
    if (!item) return nil;
    NSString *username = WXSafeStringGet(item, @"username") ?: @"";
    NSString *content = WXSafeStringGet(item, @"contentDesc") ?: @"";
    NSMutableArray *media = [NSMutableArray array];
    BOOL isVideo = NO;
    double ratio = 0;   // 宽/高，JS 预锁卡片高度防瀑布流跳动；拿不到留 0 由 JS onload 锁高
    @try {
        if ([item respondsToSelector:@selector(getMediaWraps)]) {
            NSArray *wraps = ((id(*)(id, SEL))objc_msgSend)(item, @selector(getMediaWraps));
            for (id wrap in wraps) {
                if (media.count >= 9) break;
                id mi = nil;
                if ([wrap respondsToSelector:@selector(mediaItem)]) {
                    mi = ((id(*)(id, SEL))objc_msgSend)(wrap, @selector(mediaItem));
                }
                NSString *src = [self mediaSrc:mi];
                if (src) [media addObject:@{@"src": src}];
                if (mi && !isVideo) {
                    // 视频条目 mediaItem 为 WCVideoMediaItem 类变体，类名匹配避开拼写差异
                    NSString *cls = NSStringFromClass([mi class]);
                    isVideo = [cls rangeOfString:@"ideo"].location != NSNotFound;
                }
                if (mi && media.count == 1 && ratio == 0) {
                    // 宽高 ivar 名未探针实证，KVC 失败即回落 JS onload 锁高
                    @try {
                        double w = [(NSNumber *)[mi valueForKey:@"m64_width"] doubleValue];
                        double h = [(NSNumber *)[mi valueForKey:@"m64_height"] doubleValue];
                        if (w > 1 && h > 1) ratio = w / h;
                    } @catch (NSException *e) {}
                }
            }
        }
    } @catch (NSException *e) {
        WPLog(@"Dual", @"[Store] media read error: %@", e);
    }
    NSString *firstImg = media.firstObject[@"src"] ?: @"";
    return @{@"id": WXSafeStringGet(item, @"itemID") ?: @"",
             @"name": WXSafeStringGet(item, @"nickname") ?: username,
             @"avatar": [self avatarFor:username] ?: @"",
             @"time": @(MioDualScalarGet(item, @"createtime", 0)),
             @"likes": @(MioDualScalarGet(item, @"likeCount", 0)),
             @"cmt": @(MioDualScalarGet(item, @"commentCount", 0)),
             @"liked": @(MioDualScalarGet(item, @"likeFlag", 0)),
             @"content": content,
             @"img": firstImg,
             @"imgCount": @(media.count),
             @"isVideo": isVideo ? @YES : @NO,
             @"ratio": @(ratio),
             @"isLargeText": media.count ? @NO : @YES};
}

// 媒体源：本地路径注册进媒体服务（MD5 稳定 key + CDN 回落入库，B1-B5 根治），
// 缺本地文件直接回落 CDN URL
- (NSString *)mediaSrc:(id)mi {
    if (!mi) return nil;
    // CDN 缩略图 URL 先备好（与本地路径一并入库，文件事后被清时可回落）
    NSString *cdn = WXSafeStringGet(mi, @"attachThumbUrl");
    if (cdn.length == 0) cdn = WXSafeStringGet(mi, @"dataUrl");
    if (!(cdn.length > 4 && [cdn hasPrefix:@"http"])) cdn = nil;
    SEL pathSels[4] = { @selector(getThumbImagePath), @selector(pathForPreview),
                        @selector(pathForData), @selector(pathForHdData) };
    for (int i = 0; i < 4; i++) {
        if (![mi respondsToSelector:pathSels[i]]) continue;
        NSString *p = ((id(*)(id, SEL))objc_msgSend)(mi, pathSels[i]);
        if ([p isKindOfClass:[NSString class]] && p.length > 0 &&
            [[NSFileManager defaultManager] fileExistsAtPath:p]) {
            NSString *key = [[MioDualMediaService shared] registerLocalPath:p cdnURL:cdn];
            return [NSString stringWithFormat:@"mioimg://local/%@", key];
        }
    }
    return cdn;
}

// 头像：按 wxid 走 CContactMgr 查（会话内缓存，避免每次推送重复查询）
- (NSString *)avatarFor:(NSString *)wxid {
    if (wxid.length == 0) return nil;
    NSString *hit = _avatarCache[wxid];
    if (hit) return hit;
    NSString *url = WXContactHeadImageURL(WXGetContactForWxid(wxid));
    if (url.length > 0) _avatarCache[wxid] = url;
    return url;
}

#pragma mark facade 翻页/查单条

- (void)refreshHead {
    id facade = MioDualFacade();
    SEL sel = NSSelectorFromString(@"updateTimelineHead");
    if (facade && [facade respondsToSelector:sel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, sel);   // 探针实证：主动调用成功，等价下拉
    }
}

- (void)loadTail {
    id facade = MioDualFacade();
    SEL sel = NSSelectorFromString(@"updateTimelineTail");
    if (facade && [facade respondsToSelector:sel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, sel);   // WCMoments requestTimelineMore 同款
    }
}

- (id)dataItemByID:(NSString *)objID {
    if (objID.length == 0) return nil;
    id facade = MioDualFacade();
    SEL sel = NSSelectorFromString(@"getDataItemByID:");
    if (facade && [facade respondsToSelector:sel]) {
        return ((id(*)(id, SEL, id))objc_msgSend)(facade, sel, objID);
    }
    return nil;
}

#pragma mark 快照

- (NSString *)lastSnapshotJSON {
    return [[NSUserDefaults standardUserDefaults] stringForKey:kSnapshotKey];
}

- (void)saveSnapshotJSON:(NSString *)json liveKeys:(NSSet<NSString *> *)liveKeys {
    if (json.length == 0) return;
    NSUserDefaults *ud = [NSUserDefaults standardUserDefaults];
    [ud setObject:json forKey:kSnapshotKey];
    [ud removeObjectForKey:@"MioDualLastFeedJSON"];   // 旧实现快照 key 清除，避免残留
    // 快照与媒体注册表同存同删（重构方案 3.1 设计 3）：不会出现
    // "JSON 有 key、注册表没 key" 的撕裂
    [[MioDualMediaService shared] pruneExcept:liveKeys];
}

@end
