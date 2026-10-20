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

// 数据源直读根治版：countOfTimelineDataItem / getTimelineDataItemOfIndex: 就声明在
// WCFacade 本体（WCFacade.h:430-431）——facade 本体就是朋友圈数据源，原生朋友圈页
// cellForRow 读的同一层。背后是本地库/内存映射（m_timelineWithLocalDatas / m_database），
// 同步周期持续落库，冷启动即有全量、不依赖原生页是否被访问过——UI 缓存空窗问题整个消失。
// count 是标量 getter（KVC countOf<Key> 访问器模式，NSUInteger 直返）：
// 禁 id 接裸 msgSend（x0 整数当指针发 respondsToSelector 必 SIGSEGV，127.log 实证），
// 必须 long 直接收返回值。
static long long MioDualDataSourceCount(id facade) {
    SEL cntSel = NSSelectorFromString(@"countOfTimelineDataItem");
    if (!facade || ![facade respondsToSelector:cntSel]) return 0;
    return (long long)((long(*)(id, SEL))objc_msgSend)(facade, cntSel);
}

#pragma mark - Store

// LRU 上限（内存行数组保留最近 500 条；B7 根治：300 硬截断移除）
static const NSUInteger kMaxRows = 500;
// 快照持久化 key（新 key：旧 MioDualLastFeedJSON 为 f1/f2 key 时代产物，首次保存即清除）
static NSString * const kSnapshotKey = @"MioDualFeedSnapshot";

@implementation MioDualTimelineStore {
    NSMutableDictionary<NSString *, NSString *> *_avatarCache;   // wxid → 头像 URL（会话缓存）
    NSUInteger _lastRawCount;
    NSArray<NSDictionary *> *_snapshotRowsCache;   // 快照行解析缓存（stale 模式期间复用）
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

#pragma mark 数据源直读

- (NSArray *)fetchRawItems {
    id facade = MioDualFacade();
    long long n = MioDualDataSourceCount(facade);
    if (n <= 0) { _lastRawCount = 0; return @[]; }
    SEL idxSel = NSSelectorFromString(@"getTimelineDataItemOfIndex:");
    if (![facade respondsToSelector:idxSel]) { _lastRawCount = 0; return @[]; }
    _lastRawCount = n;
    // 500 上限只是渲染保护（可调）；count 返回多少按序读多少（index 0 = 最新，
    // 原生页即按此序渲染）；排序/截断在 currentItems 统一收口
    long long take = MIN(n, (long long)kMaxRows);
    NSMutableArray *raw = [NSMutableArray arrayWithCapacity:(NSUInteger)take];
    for (long long i = 0; i < take; i++) {
        id item = ((id(*)(id, SEL, unsigned long long))objc_msgSend)(facade, idxSel, (unsigned long long)i);
        if (item) [raw addObject:item];
    }
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
    if (rows.count > 0) {
        _staleMode = NO;
        return rows;
    }
    // 数据源空（facade 缺失/同步未落库）：上次快照顶上（stale 层）——diff 仓里始终有
    // 快照那些行，不再产生 remove，JS 侧快照稳定显示不被清空；新数据落地后
    // diff 自然变成「upsert 变更行 + remove 真正消失的行」，语义完全正确
    NSArray *snap = [self snapshotRows];
    if (snap.count > 0) {
        _staleMode = YES;
        return snap;
    }
    _staleMode = NO;
    return @[];
}

// 快照行（解析一次缓存：stale 模式期间每次推送复用，不重复解析几百 KB JSON）
- (NSArray<NSDictionary *> *)snapshotRows {
    if (_snapshotRowsCache) return _snapshotRowsCache;
    NSString *snap = [self lastSnapshotJSON];
    if (snap.length <= 2) return @[];
    id parsed = [NSJSONSerialization JSONObjectWithData:[snap dataUsingEncoding:NSUTF8StringEncoding]
                                                options:0 error:nil];
    NSArray *arr = [parsed isKindOfClass:[NSDictionary class]] ? parsed[@"items"] : nil;
    if (arr.count == 0) return @[];
    _snapshotRowsCache = arr;
    return arr;
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
                NSString *cdn = nil;
                NSString *src = [self mediaSrc:mi cdnOut:&cdn];
                if (src) {
                    NSMutableDictionary *md = [NSMutableDictionary dictionaryWithObject:src forKey:@"src"];
                    if (cdn) md[@"cdn"] = cdn;   // JS onerror 换源闭环（收尾③）
                    [media addObject:md];
                }
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
    NSDictionary *firstMedia = media.firstObject;
    NSString *firstImg = firstMedia[@"src"] ?: @"";
    NSString *firstCdn = firstMedia[@"cdn"] ?: @"";
    return @{@"id": WXSafeStringGet(item, @"itemID") ?: @"",
             @"name": WXSafeStringGet(item, @"nickname") ?: username,
             @"avatar": [self avatarFor:username] ?: @"",
             @"time": @(MioDualScalarGet(item, @"createtime", 0)),
             @"likes": @(MioDualScalarGet(item, @"likeCount", 0)),
             @"cmt": @(MioDualScalarGet(item, @"commentCount", 0)),
             @"liked": @(MioDualScalarGet(item, @"likeFlag", 0)),
             @"content": content,
             @"img": firstImg,
             @"imgCdn": firstCdn,
             @"imgCount": @(media.count),
             @"isVideo": isVideo ? @YES : @NO,
             @"ratio": @(ratio),
             @"isLargeText": media.count ? @NO : @YES};
}

// 媒体源：本地路径注册进媒体服务（MD5 稳定 key + CDN 回落入库，B1-B5 根治）。
// cdnOut 带出 CDN URL（itemDict 写进 media.cdn / 行 imgCdn）。
// 注册无条件——resolveKey 在 scheme 服务时逐次 fileExists 校验，注册前不再 stat，
// 500 条 ×4 selector 的主线程 stat 风暴消除（独立方案收尾②）
- (NSString *)mediaSrc:(id)mi cdnOut:(NSString **)cdnOut {
    if (!mi) return nil;
    // CDN 缩略图 URL 先备好（与本地路径一并入库，文件事后被清时双路回落）
    NSString *cdn = WXSafeStringGet(mi, @"attachThumbUrl");
    if (cdn.length == 0) cdn = WXSafeStringGet(mi, @"dataUrl");
    if (!(cdn.length > 4 && [cdn hasPrefix:@"http"])) cdn = nil;
    if (cdnOut) *cdnOut = cdn;
    SEL pathSels[4] = { @selector(getThumbImagePath), @selector(pathForPreview),
                        @selector(pathForData), @selector(pathForHdData) };
    for (int i = 0; i < 4; i++) {
        if (![mi respondsToSelector:pathSels[i]]) continue;
        NSString *p = ((id(*)(id, SEL))objc_msgSend)(mi, pathSels[i]);
        if ([p isKindOfClass:[NSString class]] && p.length > 0) {
            // 文件失效不在此拦截：resolveKey 每次服务都校验，失效自动降级
            // handler 层 CDN 下载兜底 + 渲染层 JS onerror 换源
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
    if (!facade) {
        WPLog(@"Dual", @"[Sess] refreshHead SKIP: facade nil");
        return;
    }
    // 会话会被微信内部终结（原生页生命周期/超时）：每次拉新前重开，否则 head 不走网络
    // （实证：面板下拉失效、切 tab 回来就好——切 tab 恰好重开了会话）
    SEL bSel = NSSelectorFromString(@"beginTimeline");
    if ([facade respondsToSelector:bSel]) {
        ((id(*)(id, SEL))objc_msgSend)(facade, bSel);
        WPLog(@"Dual", @"[Sess] refreshHead: beginTimeline OK");
    } else {
        WPLog(@"Dual", @"[Sess] refreshHead: beginTimeline NOT resp");
    }
    // 本地库已有数据先灌进内存列表（探针 15:16 实证：与原生同链路、唯一差异是
    // 原生页 UI 从数据源现读而内存列表只在 reload 时重灌）——新帖可能早已静默
    // 落库，head 网络若回「无新帖」则 onChanged 参数全空、钩子 reload 被跳过，
    // 内存列表保持旧数据 → diff 恒 no changes（切 tab 有效正因 beginSession 带 reload）
    SEL rSel = NSSelectorFromString(@"reloadTimelineDataItems");
    if ([facade respondsToSelector:rSel]) {
        ((id(*)(id, SEL))objc_msgSend)(facade, rSel);
        WPLog(@"Dual", @"[Sess] refreshHead: reloadTimelineDataItems OK (count=%lld)",
              MioDualDataSourceCount(facade));
    }
    SEL sel = NSSelectorFromString(@"updateTimelineHead");
    if ([facade respondsToSelector:sel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, sel);   // 探针实证：主动调用成功，等价下拉
        WPLog(@"Dual", @"[Sess] refreshHead: updateTimelineHead sent (count=%lld)",
              MioDualDataSourceCount(facade));
    } else {
        WPLog(@"Dual", @"[Sess] refreshHead: updateTimelineHead NOT resp");
    }
}

- (void)loadTail {
    id facade = MioDualFacade();
    if (!facade) {
        WPLog(@"Dual", @"[Sess] loadTail SKIP: facade nil");
        return;
    }
    SEL bSel = NSSelectorFromString(@"beginTimeline");   // 翻页同样需要活会话
    if ([facade respondsToSelector:bSel]) {
        ((id(*)(id, SEL))objc_msgSend)(facade, bSel);
        WPLog(@"Dual", @"[Sess] loadTail: beginTimeline OK");
    } else {
        WPLog(@"Dual", @"[Sess] loadTail: beginTimeline NOT resp");
    }
    SEL rSel = NSSelectorFromString(@"reloadTimelineDataItems");   // 同 refreshHead：先灌库
    if ([facade respondsToSelector:rSel]) {
        ((id(*)(id, SEL))objc_msgSend)(facade, rSel);
    }
    SEL sel = NSSelectorFromString(@"updateTimelineTail");
    if ([facade respondsToSelector:sel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, sel);   // WCMoments requestTimelineMore 同款
        WPLog(@"Dual", @"[Sess] loadTail: updateTimelineTail sent (count=%lld)",
              MioDualDataSourceCount(facade));
    } else {
        WPLog(@"Dual", @"[Sess] loadTail: updateTimelineTail NOT resp");
    }
}

// 会话：begin = beginTimeline 开会话 + reloadTimelineDataItems 本地库重载——
// 数据源懒加载（138 探针：冷启动 count=0），reload 后 count 立即非零，
// 发现页出现即调（入口预热），用户点双列时 live 数据已就绪
- (void)beginSession {
    id facade = MioDualFacade();
    if (!facade) {
        WPLog(@"Dual", @"[Sess] beginSession SKIP: facade nil");
        return;
    }
    SEL s1 = NSSelectorFromString(@"beginTimeline");
    if ([facade respondsToSelector:s1]) {
        ((id(*)(id, SEL))objc_msgSend)(facade, s1);
        WPLog(@"Dual", @"[Sess] beginSession: beginTimeline OK");
    } else {
        WPLog(@"Dual", @"[Sess] beginSession: beginTimeline NOT resp");
    }
    SEL s2 = NSSelectorFromString(@"reloadTimelineDataItems");
    long long before = MioDualDataSourceCount(facade);
    if ([facade respondsToSelector:s2]) {
        ((id(*)(id, SEL))objc_msgSend)(facade, s2);
        long long after = MioDualDataSourceCount(facade);
        WPLog(@"Dual", @"[Sess] beginSession: reloadTimelineDataItems OK count %lld->%lld",
              before, after);
    } else {
        WPLog(@"Dual", @"[Sess] beginSession: reloadTimelineDataItems NOT resp (count=%lld)",
              before);
    }
}

- (void)endSession {
    id facade = MioDualFacade();
    SEL sel = NSSelectorFromString(@"endTimeline");
    if (facade && [facade respondsToSelector:sel]) {
        ((id(*)(id, SEL))objc_msgSend)(facade, sel);
        WPLog(@"Dual", @"[Sess] endSession: endTimeline OK");
    } else {
        WPLog(@"Dual", @"[Sess] endSession: endTimeline SKIP (facade=%d)",
              facade ? 1 : 0);
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
    _snapshotRowsCache = nil;   // 快照已更新，行缓存失效
    // 快照与媒体注册表同存同删（重构方案 3.1 设计 3）：不会出现
    // "JSON 有 key、注册表没 key" 的撕裂
    [[MioDualMediaService shared] pruneExcept:liveKeys];
}

@end
