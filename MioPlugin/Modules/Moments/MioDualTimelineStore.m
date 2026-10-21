#import "MioDualTimelineStore.h"
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "MioDualMediaService.h"
#import "MioDualMediaTrace.h"
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
    NSString *_lastMediaKey;                                       // mediaSrc 本次调用注册的 bare digest
    // 重活后台化（探针实证 currentItems 主线程 474-877ms × 8 次=首屏 10s 元凶）：
    // fetchRaw+itemDict(含 CContactMgr 头像查询)+sort 全在 _mapQueue 串行后台，
    // 主线程只读 _committedRows（毫秒级）
    dispatch_queue_t _mapQueue;                                    // 串行映射队列（重活专用）
    NSArray<NSDictionary *> *_committedRows;                       // 主线程只读的已提交行（时间序）
    NSInteger _committedAccCount;                                  // 提交时的累积层行数（HUD 读，免跨线程）
    NSInteger _committedRawCount;                                  // 提交时的窗口原始条数（HUD 读）
    NSString *_committedOldestID;                                  // 提交时最旧行 itemID（tailAtServerEnd 主线程读）
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
        _committedRows = @[];
        _committedOldestID = @"";
        _mapQueue = dispatch_queue_create("mio.dual.map", DISPATCH_QUEUE_SERIAL);
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
    return (NSUInteger)_committedRawCount;   // 主线程安全：只读提交值（_lastRawCount 在后台写）
}

#pragma mark 统一字段映射（收口：上游不再写任何 @try）

// 主线程入口：只读已提交行（毫秒级；重活在 _mapQueue 由 rebuildItemsAsync 驱动）
- (NSArray<NSDictionary *> *)currentItems {
    return _committedRows;
}

// 刀1（探针实证 currentItems 主线程 474-877ms ×8 次=首屏 10s 元凶）：重活后台化。
// 头像查询（CContactMgr 联系人库）线程安全由单例保障——AvatarLoader 后台同款路径
// 实证；facade 数据源读同款后台路径。串行队列天然防重入，后到的重建覆盖先前的
// （与旧防抖 fire-时重读最新语义一致）。完成后 commit + 走 session 推送
// （Bridge 刀2 闸门：面板不在窗口=只暖数据不推，预热 4.66MB 死推送在此消灭）
- (void)rebuildItemsAsync {
#if MIO_DUAL_BISECT_NO_DATA
    return;   // 二分法测试构建：数据管线全关
#endif
    dispatch_async(_mapQueue, ^{
        NSArray<NSDictionary *> *rows = [self computeCurrentItems];
        dispatch_async(dispatch_get_main_queue(), ^{
            [self commitRows:rows];
            [MioDualFeedBridge pushNowFromSession];
        });
    });
}

// 主线程提交：排序结果落 _committedRows（主线程只读），HUD 计数/到底判定基准同步
- (void)commitRows:(NSArray<NSDictionary *> *)rows {
    _committedRows = rows ?: @[];
    _committedAccCount = _accRows.count;
    _committedRawCount = (NSInteger)_lastRawCount;
    _committedOldestID = _committedRows.lastObject[@"id"] ?: @"";   // 时间降序 → 末位最旧
}

// 重活（_mapQueue 专用，禁主线程直调）：fetchRaw + 签名缓存映射 + 累积层合并 + 排序
- (NSArray<NSDictionary *> *)computeCurrentItems {
    NSMutableArray *rows = [NSMutableArray array];
    @try {
        // 行签名：createtime/likes/cmt/content 长度四标量（4 次廉价 msgSend）。
        // 命中缓存直接复用 dict 指针，跳过 itemDict（selector 探路+摘要+字典构建）；
        // 等补图的行看媒体就绪代际（renderKeys 语义）——key 的 gen 变了才重映射
        // （导出完成 → readyGeneration +1 → 文本卡重映射为带图卡，逐 key 精准无风暴）
        for (id item in [self fetchRawItems]) {
            NSString *rid = WXSafeStringGet(item, @"itemID") ?: @"";
            long long sig = MioDualScalarGet(item, @"createtime", 0)
                          ^ (MioDualScalarGet(item, @"likeCount", 0) << 46)
                          ^ (MioDualScalarGet(item, @"commentCount", 0) << 56)
                          ^ ((long long)WXSafeStringGet(item, @"contentDesc").length << 33);
            NSDictionary *d = ([_sigCache[rid] longLongValue] == sig) ? _dictCache[rid] : nil;
            if (d) {
                NSString *mk = d[@"mediaKey"];
                if (mk.length && [[MioDualMediaService shared] readyGenerationForKey:mk]
                      != (NSUInteger)[d[@"mgen"] unsignedIntegerValue]) {
                    [MioDualMediaTrace log:@"remap" key:mk detail:rid];   // 补图推进：强制重映射这一行
                    d = nil;
                }
            }
            if (!d) {
                d = [self itemDict:item];
                if (d) {
                    _sigCache[rid] = @(sig);
                    _dictCache[rid] = d;
                }
            }
            if (d) {
                // iid 锚点回填：行自身就是 key→itemID 映射。img 行和待图行
                // （mediaKey 有 img 空）都回填——后者正是下载链的主力客户
                if (rid.length && [d[@"mediaKey"] length])
                    [[MioDualMediaService shared] rebindItemID:rid forKey:d[@"mediaKey"]];
                [rows addObject:d];
            }
        }
    } @catch (NSException *e) {
        WPLog(@"Dual", @"[Store] map error: %@", e);
    }
    // 全链路观测（mapQueue）：行数/带图行数/累积层有变化才记（防 5s 轮询刷屏）——
    // img 行数恒 0 = mediaSrc 未产出 URL（上游断）；>0 但 push 带图恒 0 = diff 断
    static NSUInteger sLastRows = 0, sLastImg = 0, sLastAcc = 0;
    NSUInteger mapImg = 0;
    for (NSDictionary *d in rows) if ([d[@"img"] hasPrefix:@"mioimg://"]) mapImg++;
    if (rows.count != sLastRows || mapImg != sLastImg || _accRows.count != sLastAcc) {
        sLastRows = rows.count; sLastImg = mapImg; sLastAcc = _accRows.count;
        [MioDualMediaTrace log:@"map" key:@"-"
                        detail:[NSString stringWithFormat:@"rows=%lu img=%lu acc=%lu",
                                (unsigned long)rows.count, (unsigned long)mapImg,
                                (unsigned long)_accRows.count]];
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
    NSString *rowMediaKey = nil;        // 首个媒体的 bare digest（行重映射的 key）
    NSUInteger rowMediaGen = 0;         // 映射时该 key 的就绪代际（renderKeys 语义）
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
                if (!rowMediaKey && _lastMediaKey) {
                    rowMediaKey = _lastMediaKey;
                    rowMediaGen = [[MioDualMediaService shared] readyGenerationForKey:rowMediaKey];
                }
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
             @"cdn": firstMi ? [self cdnURLFor:firstMi] : @"",
             @"imgCount": @(media.count),
             @"isVideo": isVideo ? @YES : @NO,
             @"ratio": @(ratio),
             @"mediaKey": rowMediaKey ?: @"",
             @"mgen": @(rowMediaGen),
             @"rev": @(++sRowRev),
             @"isLargeText": media.count ? @NO : @YES};
}

// 媒体源：本地路径注册进媒体服务（就绪门槛 + 异步补图，对齐 WCM 模型）。
// 稳定副本已在 → 同步就绪，返回 mioimg URL；未就绪（副本缺失/占位 <1KB）→ 返回 nil，
// 卡片本轮走文本形态，导出完成 → 就绪代际 +1 → rebuild 重映射 → diff upsert 无缝补图。
// 顺带把本次注册的 bare digest 写入 _lastMediaKey（itemDict 据此写入行 mediaKey/mgen）
- (NSString *)mediaSrc:(id)mi itemID:(NSString *)itemID {
    _lastMediaKey = nil;
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
            _lastMediaKey = [[MioDualMediaService shared] registerLocalPath:p itemID:itemID
                                                                     cdnURL:[self cdnURLFor:mi]
                                                                 completion:^(NSString *url, BOOL ready) {
                if (ready) img = url;   // 就绪回调带回完整 mioimg URL（含 token host + 扩展名）
            }];
            if (img.length) return img;
            return nil;   // 有路径但未就绪（等稳定副本/微信下载；mediaKey 已进行 dict）
        }
    }
    return nil;
}

// CDN 直连地址（WCM imgCdn 兜底同款，行 cdn 字段供 JS 直连）：attachCdnUrl 优先，
// 回落 dataUrl.url（WCUrl，Frida WCMediaItem 蓝图实证 _dataUrl 字段；YB 下载器
// requestModifier 恒 nil 实证裸 HTTP GET 可拉 qpic.cn 图）。属性 getter 不命中时
// KVC 兜底（ivar 无 getter 也能读）。拿不到就空串
- (NSString *)cdnURLFor:(id)mi {
    if (!mi) return @"";
    NSString *u = nil;
    if ([mi respondsToSelector:@selector(attachCdnUrl)])
        u = ((id(*)(id, SEL))objc_msgSend)(mi, @selector(attachCdnUrl));
    if (![u isKindOfClass:[NSString class]] || !u.length) {
        @try { u = [mi valueForKey:@"attachCdnUrl"]; } @catch (NSException *e) { u = nil; }
        if (![u isKindOfClass:[NSString class]]) u = nil;
    }
    if (u.length) return u;
    id wc = nil;
    if ([mi respondsToSelector:@selector(dataUrl)])
        wc = ((id(*)(id, SEL))objc_msgSend)(mi, @selector(dataUrl));
    if (!wc) {
        @try { wc = [mi valueForKey:@"dataUrl"]; } @catch (NSException *e) { wc = nil; }
    }
    if (!wc) return @"";
    NSString *cu = nil;
    if ([wc respondsToSelector:@selector(url)])
        cu = ((id(*)(id, SEL))objc_msgSend)(wc, @selector(url));
    if (![cu isKindOfClass:[NSString class]] || !cu.length) {
        @try { cu = [wc valueForKey:@"url"]; } @catch (NSException *e) { cu = nil; }
        if (![cu isKindOfClass:[NSString class]]) cu = nil;
    }
    return cu ?: @"";
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

#pragma mark 诊断指标（悬浮窗 HUD 读，主线程）

- (long long)liveSourceCount {
    return MioDualDataSourceCount(MioDualFacade());
}

- (NSUInteger)accRowCount {
    return (NSUInteger)_committedAccCount;   // 主线程安全：只读提交值（_accRows 在后台写）
}

// 累积层最旧行 id（主线程只读提交值）：Engine tailAtServerEnd 真到底判定用
- (NSString *)committedOldestID {
    return _committedOldestID;
}

// 注：会话/翻页状态机（beginSession/endSession/refreshHead/loadTail/reloadWindow/
// tailStatus/loadStatus/tailAtServerEnd/tailTick 链 + 12 个 static 状态位）已整体
// 收口 MioDualTimelineEngine——外部只经 Engine 幂等方法，本文件专注数据映射/快照

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
    NSString *file = [MioDualTimelineStore snapshotFilePath];
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_UTILITY, 0), ^{
        [json writeToFile:file atomically:YES encoding:NSUTF8StringEncoding error:nil];
    });
}

@end
