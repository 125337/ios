#import "MioDualTimelineStore.h"
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "MioDualMediaService.h"
#import "MioDualFeedBridge.h"

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

// 行版本号：itemDict 每次重建递增。JS updateCard 用它做 O(1) 去重（旧 JSON.stringify
// 全行序列化在几千行×每推一次=主线程十几 ms，WCM 同位比较 key 实证 O(1)）
static long long sRowRev = 0;

// 行数无上限（用户拍板方案 A：WCM 同为 WebView 且无截断可一直刷——供给深度对齐
// 原生，先实测流畅度，卡了再上 JS 虚拟回收）。kMaxRows 与 LRU 裁剪整体废止。
// 快照持久化 key（新 key：旧 MioDualLastFeedJSON 为 f1/f2 key 时代产物，首次保存即清除）
static NSString * const kSnapshotKey = @"MioDualFeedSnapshot";

@implementation MioDualTimelineStore {
    NSMutableDictionary<NSString *, NSString *> *_avatarCache;   // wxid → 头像 URL（会话缓存）
    NSUInteger _lastRawCount;
    NSArray<NSDictionary *> *_snapshotRowsCache;   // 快照行解析缓存（stale 模式期间复用）
    NSMutableDictionary<NSString *, NSDictionary *> *_accRows;   // itemID→row 跨刷新累积层（无上限）
    // 行字典缓存（丝滑根治：推送每次全量重映射 1500 行=动画掉帧元凶；签名命中直接
    // 复用上次 dict——同指针还让 Bridge diff 走 isEqualToDictionary 指针等价快路径）
    NSMutableDictionary<NSString *, NSDictionary *> *_dictCache;   // itemID → itemDict 结果
    NSMutableDictionary<NSString *, NSNumber *> *_sigCache;        // itemID → 行签名
    NSMutableSet<NSString *> *_pendingMedia;                       // 等补图的行（epoch 变化才重映射）
    NSMutableDictionary<NSString *, NSNumber *> *_pendingEpoch;    // itemID → 映射时媒体代际
    BOOL _lastMediaPending;                                        // mediaSrc 本次调用「有路径但未就绪」
}

+ (instancetype)shared {
    static MioDualTimelineStore *store = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ store = [[MioDualTimelineStore alloc] init]; });
    return store;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _avatarCache = [NSMutableDictionary dictionary];
        _accRows = [NSMutableDictionary dictionary];
        _dictCache = [NSMutableDictionary dictionary];
        _sigCache = [NSMutableDictionary dictionary];
        _pendingMedia = [NSMutableSet set];
        _pendingEpoch = [NSMutableDictionary dictionary];
    }
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
    // 无上限：count 返回多少按序读多少（index 0 = 最新，原生页即按此序渲染）；
    // 排序在 currentItems 统一收口
    NSMutableArray *raw = [NSMutableArray arrayWithCapacity:(NSUInteger)n];
    for (long long i = 0; i < n; i++) {
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
        // 行签名：createtime/likes/cmt/content 长度四标量（4 次廉价 msgSend）。
        // 命中缓存直接复用 dict 指针，跳过 itemDict（selector 探路+MD5+字典构建）；
        // 等补图的行看媒体代际——epoch 变了才重映射（可能已就绪，文本卡→带图卡）
        long long epoch = [MioDualMediaService mediaEpoch];
        for (id item in [self fetchRawItems]) {
            NSString *rid = WXSafeStringGet(item, @"itemID") ?: @"";
            long long sig = MioDualScalarGet(item, @"createtime", 0)
                          ^ (MioDualScalarGet(item, @"likeCount", 0) << 46)
                          ^ (MioDualScalarGet(item, @"commentCount", 0) << 56)
                          ^ ((long long)WXSafeStringGet(item, @"contentDesc").length << 33);
            NSDictionary *d = ([_sigCache[rid] longLongValue] == sig) ? _dictCache[rid] : nil;
            if (d && [_pendingMedia containsObject:rid]
                  && [_pendingEpoch[rid] longLongValue] != epoch) {
                d = nil;   // 补图推进：强制重映射这一行
            }
            if (!d) {
                d = [self itemDict:item];
                if (d) {
                    _sigCache[rid] = @(sig);
                    _dictCache[rid] = d;
                    if ([d[@"mediaPending"] boolValue]) {
                        [_pendingMedia addObject:rid];
                        _pendingEpoch[rid] = @(epoch);
                    } else {
                        [_pendingMedia removeObject:rid];
                    }
                }
            }
            if (d) [rows addObject:d];
        }
    } @catch (NSException *e) {
        WPLog(@"Dual", @"[Store] map error: %@", e);
    }
    // 快照种子（144.log 实证 remove=80 风暴根因）：累积层是进程内存态，重启清零；
    // 冷启动数据源只有 10 条而快照有 90 行 → diff 把快照 80 行当「已删除」全删（JS
    // 空态）+ pruneExcept 把快照媒体 key 裁掉。种子后仓=快照全量+数据源 merge，
    // diff 对快照基线≈no changes，快照稳定显示，新数据落地走增量 upsert
    if (_accRows.count == 0) {
        for (NSDictionary *r in [self snapshotRows]) {
            NSString *rid = r[@"id"];
            if (rid.length) _accRows[rid] = r;
        }
    }
    // 累积层（B7 根治的另一半；142.log 实证）：微信原生语义 = head 把内存
    // 窗口重置回最新一页（翻页 50 条 → 下拉 → count 回 10，翻页行连库里都不留），
    // 窗口直接透传会让 diff 产生 remove=40 把 JS 已滚到的内容砍掉——下拉「没效果」
    // 的假象。按 itemID 合并：head 重置只更新 top 行，翻页行稳定保留，diff 只剩真变更。
    // 无上限（方案 A）：不再按 500 淘汰——供给深度对齐 WCM/原生。
    for (NSDictionary *d in rows) {
        NSString *rid = d[@"id"];
        if (rid.length) _accRows[rid] = d;
    }

    NSMutableArray *acc = [NSMutableArray arrayWithCapacity:_accRows.count];
    [acc addObjectsFromArray:_accRows.allValues];
    [acc sortUsingComparator:^NSComparisonResult(NSDictionary *a, NSDictionary *b) {
        long long ta = [a[@"time"] longLongValue], tb = [b[@"time"] longLongValue];
        return ta < tb ? NSOrderedDescending : (ta > tb ? NSOrderedAscending : NSOrderedSame);
    }];
    if (acc.count > 0) {
        _staleMode = NO;
        return acc;
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
    id firstMi = nil;
    BOOL isVideo = NO;
    BOOL mediaPending = NO;   // 有媒体路径但尚未就绪（文本卡先出，补图后 diff upsert）
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
                if (mi && !firstMi) firstMi = mi;
                NSString *src = [self mediaSrc:mi itemID:WXSafeStringGet(item, @"itemID")];
                if (!src && _lastMediaPending) mediaPending = YES;   // 有图但还没就绪（等补图）
                if (src) {
                    [media addObject:[NSMutableDictionary dictionaryWithObject:src forKey:@"src"]];
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
    // 分享帖（笔记/公众号链接卡）contentDesc 为空，标题/描述在 mediaItem.title/desc
    // （WCMediaItem.h L25-26 实证）——空白卡的根因即此处字段缺失
    if (!content.length && firstMi) {
        content = WXSafeStringGet(firstMi, @"title") ?: @"";
        if (!content.length) content = WXSafeStringGet(firstMi, @"desc") ?: @"";
    }
    NSDictionary *firstMedia = media.firstObject;
    NSString *firstImg = firstMedia[@"src"] ?: @"";
    // 分享帖封面不走本地 SNS 缓存（四件套路径拿不到）：attachThumbUrl 是普通
    // HTTP URL（L36 实证），JS img 直接加载，不经 mioimg 本地体系
    if (!firstImg.length && firstMi) {
        NSString *thumb = WXSafeStringGet(firstMi, @"attachThumbUrl") ?: @"";
        if (thumb.length) firstImg = thumb;
    }
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
             @"mediaPending": @(mediaPending),
             @"rev": @(++sRowRev),
             @"isLargeText": media.count ? @NO : @YES};
}

// 媒体源：本地路径注册进媒体服务（就绪门槛 + 异步补图，对齐 WCM 模型）。
// 稳定副本已在 → 同步就绪，返回 mioimg key；未就绪（副本缺失/占位 <1KB）→ 返回 nil，
// 卡片本轮走文本形态，后台拷贝完成 → notifyDataChanged → diff upsert 带图版本无缝补图
- (NSString *)mediaSrc:(id)mi itemID:(NSString *)itemID {
    _lastMediaPending = NO;
    if (!mi) return nil;
    // 视频帖 mediaItem（类名含 Video）只取封面缩略图两路——pathForData/HdData
    // 返回的是视频文件本体（几 MB mp4），注册后 handler 按 JPEG 解码必败
    NSString *cls = NSStringFromClass([mi class]);
    int n = ([cls rangeOfString:@"ideo"].location != NSNotFound) ? 2 : 4;
    SEL pathSels[4] = { @selector(getThumbImagePath), @selector(pathForPreview),
                        @selector(pathForData), @selector(pathForHdData) };
    for (int i = 0; i < n; i++) {
        if (![mi respondsToSelector:pathSels[i]]) continue;
        NSString *p = ((id(*)(id, SEL))objc_msgSend)(mi, pathSels[i]);
        if ([p isKindOfClass:[NSString class]] && p.length > 0) {
            __block NSString *img = @"";
            [[MioDualMediaService shared] registerLocalPath:p itemID:itemID
                                                     cdnURL:[self cdnURLFor:mi]
                                                 completion:^(NSString *key, BOOL ready) {
                if (ready) img = [NSString stringWithFormat:@"mioimg://local/%@", key];
            }];
            if (img.length) return img;
            _lastMediaPending = YES;   // 有路径但未就绪（等稳定副本/微信下载）
            return nil;
        }
    }
    return nil;
}

// CDN 直连地址（WCMediaItem attachCdnUrl，未实证的变体选择器拿不到就空串，
// 只登记不阻塞：主链路是稳定副本，cdn 仅备后续直连下载）
- (NSString *)cdnURLFor:(id)mi {
    if (![mi respondsToSelector:@selector(attachCdnUrl)]) return @"";
    NSString *u = ((id(*)(id, SEL))objc_msgSend)(mi, @selector(attachCdnUrl));
    return [u isKindOfClass:[NSString class]] ? u : @"";
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

// tail 自驱循环状态（文件级 static 供 refreshHead 重置）。WCM「能一直刷」= 轮询驱动
// + loadingTail 串行化 + 永不后退（requestTimelineMore 反编译实证：只有 JS 确认真到底
// 才停，其余情况持续追问）。历史教训：固定 8s 节拍→「一两个一涨」；被动重试→断供；
// 3 轮零增长→退避→服务器松口时在睡觉；会话回收→窗口清零重爬几千条全收重复。
// 现行：inFlight 串行 + 0.3s 核对链，涨即 0.5s 续轮，零增长 2s 续追，到底才停
static BOOL gTailLoopOn = NO;                    // 循环开关（进滚底区开，滚离/关面板停）
static BOOL gTailInFlight = NO;                  // 一轮网络翻页进行中（串行化，WCM loadingTail 同款）
static NSTimeInterval gTailLastAt = 0;           // 上次发 tail 时刻（1s 最小间距防密集）
static int gTailZero = 0;                        // 连续零增长轮数（HUD 观测僵局用）
static long gTailRounds = 0;                     // accepted 轮次累计（HUD 诊断）
static long long gTailLastDelta = 0;             // 上轮供给行数（HUD 诊断）
static BOOL gTailAtEnd = NO;                     // 真到底（引擎最底条==累积层最旧行，refreshHead 重置）
static CFAbsoluteTime gTailSessionSince = 0;     // 本轮装载会话起点（HUD 加载计时）
static long long gTailSessionRows = 0;           // 本轮会话累计供给行数（HUD 加载量）

static void MioDualTailStateReset(void) {
    gTailLastAt = 0;
    gTailZero = 0;
    gTailAtEnd = NO;
}

- (void)refreshHead {
#if MIO_DUAL_BISECT_NO_DATA
    return;   // 二分法测试构建：数据管线全关
#endif
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
    // 下拉 = 用户主动要新内容：tail 循环的零增长计数/退避一并作废（head 同时重置了
    // 微信的 tail 供给状态），循环若在跑则下一轮立即续供
    MioDualTailStateReset();
    // 统一刷新链路（与开面板同款）：reload 是同步的——本地库新数据此刻已可见，
    // 立即推送一波；head 网络回来后 onChanged→防抖→再推第二波。
    // （147 日志：下拉靠 NSTimer 防抖推送整体失联，显式推不依赖 timer）
    [MioDualFeedBridge pushNowFromSession];
}

- (void)loadTail {
#if MIO_DUAL_BISECT_NO_DATA
    return;   // 二分法测试构建：数据管线全关
#endif
    // 进滚底区（JS 哨兵上报，幂等）：启动自驱循环。WCM「能一直刷」= requestTimelineMore
    // 循环主动重发、不等用户滚动——旧实现重试被动（内容不涨→无滚动事件→永不重发），
    // exhausted 一旦误判（3×8s 全撞服务器冷却期）就锁死到下拉刷新，表现即「拉到底断供」
    if (gTailLoopOn) return;
    gTailLoopOn = YES;
    gTailSessionSince = CFAbsoluteTimeGetCurrent();
    gTailSessionRows = 0;
    WPLog(@"Dual", @"[Sess] tail loop ON");
    [self tailTick];
}

- (void)stopTailLoop {
    if (!gTailLoopOn) return;
    gTailLoopOn = NO;
    WPLog(@"Dual", @"[Sess] tail loop OFF");
}

#pragma mark 诊断指标（悬浮窗 HUD 读，主线程）

- (long long)liveSourceCount {
    return MioDualDataSourceCount(MioDualFacade());
}

- (NSUInteger)accRowCount {
    return _accRows.count;
}

- (NSString *)tailStatus {
    if (!gTailLoopOn) return @"OFF";
    if (gTailAtEnd) return @"到底";
    return [NSString stringWithFormat:@"ON z%d r%ld +%lld", gTailZero, gTailRounds, gTailLastDelta];
}

// 装载状态（HUD 第三行）：正在干什么 + 本轮会话供给了多少行/跑了多少秒
- (NSString *)loadStatus {
    NSString *phase;
    if (!gTailLoopOn) phase = @"待机";
    else if (gTailAtEnd) phase = @"到底";
    else phase = gTailInFlight ? @"翻页中" : @"等服务器";
    if (gTailSessionSince == 0) return phase;
    return [NSString stringWithFormat:@"%@ +%lld行/%.0fs", phase, gTailSessionRows,
            CFAbsoluteTimeGetCurrent() - gTailSessionSince];
}

// 真到底判定（WCM noMore: 同款语义，反编译 _funcs/34e4c）：引擎窗口最底条的 itemID
// == 累积层最旧行 id → 引擎已翻到我们已有内容的最底且不再供页 = 服务器翻页链尽头。
// 仅在持续零增长后调用；refreshHead（下拉）重置
- (BOOL)tailAtServerEnd {
    id facade = MioDualFacade();
    long long n = MioDualDataSourceCount(facade);
    if (n <= 0 || _accRows.count == 0) return NO;
    id item = ((id(*)(id, SEL, unsigned long long))objc_msgSend)(
        facade, NSSelectorFromString(@"getTimelineDataItemOfIndex:"), (unsigned long long)(n - 1));
    NSString *engID = WXSafeStringGet(item, @"itemID");
    if (engID.length == 0) return NO;
    NSString *oldest = nil;
    long long oldestT = LLONG_MAX;
    for (NSDictionary *r in _accRows.allValues) {
        long long t = [r[@"time"] longLongValue];
        if (t < oldestT) { oldestT = t; oldest = r[@"id"]; }
    }
    return oldest.length > 0 && [engID isEqualToString:oldest];
}

// 循环心跳：退避/节流/无 facade 期间 2s 续链保持循环，只是不发请求
- (void)tailTickLater:(NSTimeInterval)delay {
    __weak typeof(self) wself = self;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [wself tailTick];
    });
}

- (void)tailTick {
    if (!gTailLoopOn) return;
    if (gTailAtEnd) {
        [self tailTickLater:30.0];   // 到底待机：tail 无意义，等下拉 refreshHead 重置
        return;
    }
    NSTimeInterval now = [NSDate date].timeIntervalSinceReferenceDate;
    if (gTailInFlight) {
        [self tailTickLater:1.0];
        return;
    }
    if (now - gTailLastAt < 1.0) {
        [self tailTickLater:0.5];
        return;
    }
    id facade = MioDualFacade();
    if (!facade) {
        [self tailTickLater:2.0];
        return;
    }
    // WCM requestTimelineMore 同款（反编译 L519-937 实证）：翻页**不动会话**——
    // 它全程只调 updateTimelineTail，无 beginTimeline/reload。beginTimeline 是会话
    // 重置，会打断引擎深度翻页状态机（updateNextPage 异步网络中被重置作废）
    SEL sel = NSSelectorFromString(@"updateTimelineTail");
    if (![facade respondsToSelector:sel]) {
        WPLog(@"Dual", @"[Sess] tail loop STOP: updateTimelineTail NOT resp");
        gTailLoopOn = NO;
        return;
    }
    long long before = MioDualDataSourceCount(facade);
    // 返回 BOOL accepted（WCFacade.h L437）：拒绝=引擎冷却/忙碌，立即重排不计失败
    long accepted = ((long(*)(id, SEL))objc_msgSend)(facade, sel);
    gTailLastAt = now;
    WPLog(@"Dual", @"[Sess] tail tick sent (count=%lld, accepted=%ld, z=%d)",
          before, accepted, gTailZero);
    [MioDualFeedBridge pushNowFromSession];   // 页脚新行立即上屏（若有）

    if (!accepted) {
        // WCM 同款 finishTailWait→retryRequired→轮询重试：2s 后心跳重排，不计零增长
        [self tailTickLater:2.0];
        return;
    }
    gTailInFlight = YES;
    gTailRounds++;
    [self watchTailRound:before tries:0];
}

// 一轮 in-flight 核对链：每 0.3s 读 count（引擎网络回来自己写内存列表，自涨无需
// reload），涨 → 立即 0.5s 续轮（快链）；~8s 未涨 → 零增长计数，2s 续追（WCM 语义：
// 永不后退，服务器松口第一瞬间续上）；引擎最底条==累积最旧行才是真到底
- (void)watchTailRound:(long long)before tries:(int)tries {
    if (!gTailLoopOn) {
        gTailInFlight = NO;
        return;
    }
    id f = MioDualFacade();
    if (f) {
        long long after = MioDualDataSourceCount(f);
        if (after > before) {
            gTailInFlight = NO;
            gTailZero = 0;
            gTailLastDelta = after - before;
            gTailSessionRows += after - before;
            WPLog(@"Dual", @"[Sess] tail +%lld rows (count %lld->%lld)",
                  after - before, before, after);
            [MioDualFeedBridge pushNowFromSession];
            [self tailTickLater:0.5];   // WCM 同款：数据一到立刻下一轮
            return;
        }
    }
    if (tries >= 27) {   // 27×0.3s ≈ 8s 看门狗（WCM tail timeout 同款）
        gTailInFlight = NO;
        if (f) {   // 超时兜底 reload：库有货而窗口没跟上时补一跳
            SEL rl = NSSelectorFromString(@"reloadTimelineDataItems");
            if ([f respondsToSelector:rl]) ((void(*)(id, SEL))objc_msgSend)(f, rl);
            long long after = MioDualDataSourceCount(f);
            if (after > before) {
                gTailZero = 0;
                gTailLastDelta = after - before;
                gTailSessionRows += after - before;
                WPLog(@"Dual", @"[Sess] tail(reload) +%lld rows (count %lld->%lld)",
                      after - before, before, after);
                [MioDualFeedBridge pushNowFromSession];
                [self tailTickLater:0.5];
                return;
            }
        }
        if (++gTailZero >= 3) {
            gTailZero = 0;
            if ([self tailAtServerEnd]) {
                gTailAtEnd = YES;
                WPLog(@"Dual", @"[Sess] tail 到底：引擎最底条==累积层最旧行，服务器无更多（下拉重置）");
            } else {
                WPLog(@"Dual", @"[Sess] tail 持续零增长（count=%lld）→ 续追（永不后退）", before);
            }
        } else {
            WPLog(@"Dual", @"[Sess] tail 零增长（count=%lld, zero=%d/3）", before, gTailZero);
        }
        [self tailTickLater:2.0];
        return;
    }
    __weak typeof(self) wself = self;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.3 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [wself watchTailRound:before tries:tries + 1];
    });
}

// 本地库 → 内存窗口重载（可见期保鲜轮询用）：新帖静默落库后内存窗口不自动刷新
// （140 实证），轮询 tick 显式 reload 才可见；与 hook 路径对 facade 的 reload 同一动作
- (void)reloadWindow {
#if MIO_DUAL_BISECT_NO_DATA
    return;   // 二分法测试构建：数据管线全关
#endif
    id facade = MioDualFacade();
    if (!facade) return;
    SEL rSel = NSSelectorFromString(@"reloadTimelineDataItems");
    if ([facade respondsToSelector:rSel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, rSel);
    }
}

// 会话：begin = beginTimeline 开会话 + reloadTimelineDataItems 本地库重载——
// 数据源懒加载（138 探针：冷启动 count=0），reload 后 count 立即非零，
// 发现页出现即调（入口预热），用户点双列时 live 数据已就绪
- (void)beginSession {
#if MIO_DUAL_BISECT_NO_DATA
    return;   // 二分法测试构建：数据管线全关
#endif
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
    [self stopTailLoop];   // 关面板断供给循环（对齐面板生命周期）
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

// miosnap:// scheme 流供数文件（首屏秒开）：JS fetch 此文件零脚本编译——
// 快照内联进 evaluateJavaScript 脚本文本时 WKWebView 要整段当 JS 编译（1~2MB
// 100-300ms 主线程开销，每次冷启动都交）。与 NSUserDefaults 快照同源同写
+ (NSString *)snapshotFilePath {
    static NSString *p;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        p = [[NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES)
              firstObject] stringByAppendingPathComponent:@"mio_snap.json"];
    });
    return p;
}

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
    // scheme 流文件同步落一份（原子写防 fetch 读到半截；后台队列，推送路径零阻塞）
    NSString *file = [self snapshotFilePath];
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_UTILITY, 0), ^{
        [json writeToFile:file atomically:YES encoding:NSUTF8StringEncoding error:nil];
    });
}

@end
