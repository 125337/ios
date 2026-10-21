#import "MioDualFeedBridge.h"
#import <WebKit/WebKit.h>
#import "../../Core/LogManager.h"
#import "MioDualTimelineStore.h"
#import "MioDualTimelineEngine.h"
#import "MioDualMediaService.h"
#import "MioDualMediaTrace.h"

// JSON → 可注入 JS 字面量的字符串（U+2028/2029 是 JS 行终止符，JSONSerialization
// 不转义，直接 eval 会语法错误；转义后的串同时可安全回灌 NSJSONSerialization 解析）
static NSString *MioDualJSONString(id obj) {
    if (!obj) return nil;
    NSData *d = [NSJSONSerialization dataWithJSONObject:obj options:0 error:nil];
    if (!d.length) return nil;
    NSString *s = [[NSString alloc] initWithData:d encoding:NSUTF8StringEncoding];
    s = [s stringByReplacingOccurrencesOfString:@"\u2028" withString:@"\\u2028"];
    s = [s stringByReplacingOccurrencesOfString:@"\u2029" withString:@"\\u2029"];
    return s;
}

@implementation MioDualFeedBridge {
    __weak WKWebView *_webView;                       // 活跃面板 WebView（主线程读写）
    BOOL _detached;                                   // 面板不可见（Close）：挡推送，但保留基线
    NSMutableDictionary<NSString *, NSDictionary *> *_lastRowsByID;  // diff 基线：id → 行 dict
    NSArray<NSString *> *_lastOrder;                  // diff 基线：行序
    BOOL _needsSnapshot;                              // attach 后尚未灌快照
    BOOL _snapshotHadRows;                            // 本轮首推是否灌过快照行（清 stale 用）
}

#pragma mark 生命周期

+ (instancetype)bridge {
    static MioDualFeedBridge *b = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ b = [[MioDualFeedBridge alloc] init]; });
    return b;
}

+ (void)attachWebView:(WKWebView *)webView {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self attachWebView:webView]; });
        return;
    }
    MioDualFeedBridge *b = [self bridge];
    if (b->_webView != webView) {
        // 新页面（didFinishNavigation）：JS 侧是空 DOM，重灌快照、重建 diff 基线
        b->_webView = webView;
        b->_needsSnapshot = YES;
        b->_snapshotHadRows = NO;
        b->_lastRowsByID = [NSMutableDictionary dictionary];
        b->_lastOrder = @[];
    }
    b->_detached = NO;
    [self startVisiblePolling];
    // 同一 WebView 重挂（reuse，138 日志 13:17:42）：基线原样续上不重灌——
    // 旧逻辑 detach 置 nil 导致重挂 first=YES 重灌旧快照，把 JS 已渲染的
    // live 内容整个替换再 patch 回来（闪一下 + stale 角标闪现）
}

+ (void)detachWebView {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self detachWebView]; });
        return;
    }
    // 只置标志不置 nil（weak 引用，WebView 释放自动断）：
    // 基线保留给 reuse 路径，diff 直接续上
    [self bridge]->_detached = YES;
    [self stopVisiblePolling];
}

+ (void)pushNow {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self pushNow]; });
        return;
    }
    [[self bridge] pushNowLocked];
}

// ---- 推送总闸（首屏根治刀2）：所有非常规推送收口到 250ms 尾沿合帧 ----
// 时序实证：17ms 内 17 次 evaluateJavaScript 注入（批量 gen+ 时每张图一次推送）。
// 上游触发源再多（gen+/tail 轮/onChanged/rebuild commit），窗口内全合并为一次注入，
// fire 时推最新状态——行级 diff 保证只发变更行。与 Engine 0.5s 防抖叠加后，链路
// 「变更 → 0.5s 防抖 → rebuild → 250ms 合帧 → 注入」全程至多 2 次往返
static BOOL gPushPending = NO;

+ (void)requestPush {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self requestPush]; });
        return;
    }
    if (gPushPending) return;   // 已排定即合并（fire 时重读最新，语义与 Engine 防抖一致）
    gPushPending = YES;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.25 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        gPushPending = NO;      // 先清再推：推送过程中新变更可再排程
        [[self bridge] pushNowLocked];
    });
}

// 刷新链路推送（rebuildItemsAsync commit 后 / PanelOpen 后）：刀2 闸门——面板视图
// 不在窗口上（预热/已关）只暖数据不推（预热期全量 feed 推给未显示 WebView，4.66MB
// EVALJS 内联编译 100-300ms 主线程，PanelOpen loadHTML 刷新后全作废——纯死推送）；
// 在窗口上走 250ms 合帧总闸（批量 gen+ 的 17 连发注入在此消灭）
+ (void)pushNowFromSession {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self pushNowFromSession]; });
        return;
    }
    MioDualFeedBridge *b = [self bridge];
    if (!b->_webView || b->_webView.window == nil) {
        WPLog(@"Dual", @"[Push] skip: panel not on window (预热模式，只暖不推)");
        [MioDualMediaTrace log:@"push" key:@"-" detail:@"skip 预热不在窗口"];
        return;
    }
    [self requestPush];
}

// ---- 首屏同帧（首屏根治刀1）：首推前先备首屏图 ----
// WCM 首屏 864ms 的本质 = 导出几乎总赢 WebView 竞速（先导后注，图与文字同帧到位）。
// 时序实证 Mio 首推 +244ms 时可见区图还没开始导（备图在首推后的 visiblePass 才启动），
// 首屏 8s 全程渐进补图。此处首推前同步触发可见区前 6 个 mediaKey 的 ensure（导出
// 毫秒级），300ms 后首推——首屏文字与图同帧上屏；CDN 兜底行不等待网络（首推文本卡，
// 就绪后走合帧总闸增量升级），图全好前的后续注入由 diff+合帧压到最少
+ (void)primeFirstScreen {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self primeFirstScreen]; });
        return;
    }
    NSArray<NSDictionary *> *rows = [[MioDualTimelineStore shared] currentItems];
    NSUInteger budget = 6;
    for (NSDictionary *r in rows) {
        if (!budget) break;
        NSString *mk = r[@"mediaKey"];
        if (mk.length) {
            budget--;
            [[MioDualMediaService shared] ensureMediaForKey:mk cdn:r[@"cdn"]];
        }
    }
    [MioDualMediaTrace log:@"push" key:@"-"
                    detail:[NSString stringWithFormat:@"首屏备图 %lu 张(预算6)", (unsigned long)(6 - budget)]];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.3 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ [self pushNow]; });   // 首推直推（快照秒显）
}

#pragma mark 尾沿防抖（已收口 Engine；此处保留转发器——MediaService 补图唤醒等调用方零改动）

// 0.5s 尾沿防抖与 rebuild 链本体在 MioDualTimelineEngine.notifyDataChanged
// （dispatch_after 版，原 NSTimer 方案废止：147 日志实证一次性 timer 长会话失联）
+ (void)notifyDataChanged {
    [[MioDualTimelineEngine shared] notifyDataChanged];
}

#pragma mark 可见期保鲜轮询（对齐 WCM：实时性不依赖事件，面板可见即兜底）

// dispatch_after 自续链（废止 NSTimer：一次性 timer 失联教训同上）。tick = 会话心跳 +
// 窗口重载 + 防抖推送（三连均收口 Engine）——新帖静默落库后内存窗口不自动刷新
// （140 实证），显式 reload 才可见；diff 无变更零字节空转
static BOOL gPolling = NO;

+ (void)startVisiblePolling {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self startVisiblePolling]; });
        return;
    }
    if (gPolling) return;
    gPolling = YES;
    WPLog(@"Dual", @"[Push] visible polling on (5s)");
    [self pollTick];
}

+ (void)stopVisiblePolling {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self stopVisiblePolling]; });
        return;
    }
    gPolling = NO;
}

+ (void)pollTick {
    if (!gPolling) return;
    [[MioDualTimelineEngine shared] ensureSession];   // 会话心跳：内部被终结则重开（WCM timer 同位）
    // reload 已收敛（首屏根治刀3）：防抖 fire 统一 reload+rebuild，tick 只负责心跳唤醒
    [self notifyDataChanged];   // 转发 Engine：0.5s 尾沿防抖，窗口内变更全合并
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5.0 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [self pollTick];
    });
}

#pragma mark 诊断指标（悬浮窗 HUD 读，主线程）

static NSTimeInterval gLastPushAt = 0;

+ (NSUInteger)jsRowCount {
    return [self bridge]->_lastRowsByID.count;
}

+ (NSTimeInterval)secondsSinceLastPush {
    return gLastPushAt ? [NSDate date].timeIntervalSinceReferenceDate - gLastPushAt : -1;
}

#pragma mark 推送（主线程）

- (void)pushNowLocked {
#if MIO_DUAL_BISECT_NO_DATA
    return;   // 二分法测试构建：全部 JS 数据推送关闭（面板零卡片）
#endif
    WKWebView *wv = _detached ? nil : _webView;   // 面板不可见：不推（基线照常更新于可见期）
    if (!wv) {
        // 早退可观测（节流 10s：10s 轮询兜底开启时避免刷屏）
        static CFAbsoluteTime lastSkipLog = 0;
        CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
        if (now - lastSkipLog > 10.0) {
            lastSkipLog = now;
            WPLog(@"Dual", @"[Push] skip: panel detached or webview gone");
            [MioDualMediaTrace log:@"push" key:@"-" detail:@"skip 面板不可见"];
        }
        return;
    }
    gLastPushAt = [NSDate date].timeIntervalSinceReferenceDate;   // 诊断：最近推送时刻

    // ---- 首推：灌快照 + 以快照重建 diff 基线（patch 只含快照之后的增量） ----
    if (_needsSnapshot) {
        _needsSnapshot = NO;
        _snapshotHadRows = NO;
        NSString *snap = [[MioDualTimelineStore shared] lastSnapshotJSON];
        if (snap.length > 2) {
            id parsed = [NSJSONSerialization JSONObjectWithData:[snap dataUsingEncoding:NSUTF8StringEncoding]
                                                        options:0 error:nil];
            NSArray *snapRows = nil;
            if ([parsed isKindOfClass:[NSDictionary class]]) snapRows = parsed[@"items"];
            if (snapRows.count) {
                NSMutableDictionary *byID = [NSMutableDictionary dictionaryWithCapacity:snapRows.count];
                NSMutableArray *order = [NSMutableArray arrayWithCapacity:snapRows.count];
                for (NSDictionary *r in snapRows) {
                    NSString *rid = r[@"id"];
                    if (rid.length == 0 || byID[rid]) continue;
                    byID[rid] = r;
                    [order addObject:rid];
                }
                _lastRowsByID = byID;
                _lastOrder = order;
                _snapshotHadRows = YES;
                [wv evaluateJavaScript:[NSString stringWithFormat:
                    @"window.__mioFeedSnapshot(%@);", snap] completionHandler:nil];
                WPLog(@"Dual", @"[Push] snapshot loaded (%lu rows)", (unsigned long)snapRows.count);
                [MioDualMediaTrace log:@"push" key:@"-"
                                detail:[NSString stringWithFormat:@"snap快照 %lu 行", (unsigned long)snapRows.count]];
                // 快照行备图废止（对齐 WCM visible 上报模式）：WCM 不做全量预拉，
                // JS visiblePass 按视口上报 → 只备看得到的图（省流量省 IO）
            }
        }
    }

    // ---- 新状态 ----
    NSArray<NSDictionary *> *rows = [[MioDualTimelineStore shared] currentItems];

    // ---- 待图行补下（文本卡→带图卡的源动力，修"字+图只显示字"）----
    // 源文件 <1KB 占位/未下载时行归文本形态（mediaKey 有值 img 为空）——备图循环
    // 只覆盖带 img 的行，文本卡从此无人触发补导，微信后来自动下载落地也没人看。
    // 每轮推送前扫一遍（预算 40，pending 多为新行靠前），ensure → resolveKey：
    // 源已落地(>1KB)即补导；源也没有 → 行 cdn 字段（dataUrl.url）走 CDN 兜底下载
    // （WCM YB 等价物），落地 gen+ → rebuild → JS 文本卡升级媒体卡
    {
        NSUInteger budget = 40;
        for (NSDictionary *r in rows) {
            if (!budget) break;
            NSString *mk = r[@"mediaKey"];
            if (mk.length && ![r[@"img"] hasPrefix:@"mioimg://"]) {
                budget--;
                [[MioDualMediaService shared] ensureMediaForKey:mk cdn:r[@"cdn"]];
            }
        }
    }

    // ---- 空仓保护（冷启动清屏根治②，与 Store 层快照顶上互为保险）：----
    // Store 已用快照顶仓（stale 层），此处兜底——万一 Store 仍空而 JS 侧有内容
    // （异常态），不发 remove patch 清屏，等微信同步落地
    if (rows.count == 0 && _lastRowsByID.count > 0) {
        WPLog(@"Dual", @"[Push] store empty, keep %lu JS rows (cold-start guard)",
              (unsigned long)_lastRowsByID.count);
        return;
    }

    NSMutableDictionary *freshByID = [NSMutableDictionary dictionaryWithCapacity:rows.count];
    NSMutableArray<NSString *> *freshOrder = [NSMutableArray arrayWithCapacity:rows.count];
    for (NSDictionary *r in rows) {
        NSString *rid = r[@"id"];
        if (rid.length == 0 || freshByID[rid]) continue;
        freshByID[rid] = r;
        [freshOrder addObject:rid];
    }

    // ---- 行级 diff（B9 根治：只序列化变更行） ----
    NSMutableArray *upserts = [NSMutableArray array];
    NSMutableArray<NSString *> *newIDs = [NSMutableArray array];   // 新增行（fresh 序 = 新→旧）
    NSMutableArray<NSString *> *removedIDs = [NSMutableArray array];
    for (NSDictionary *r in rows) {
        NSString *rid = r[@"id"];
        if (_lastRowsByID[rid] && [_lastRowsByID[rid] isEqualToDictionary:r]) continue;
        [upserts addObject:r];
        if (!_lastRowsByID[rid]) [newIDs addObject:rid];
    }
    for (NSString *rid in _lastRowsByID) {
        if (!freshByID[rid]) [removedIDs addObject:rid];
    }

    // order 下发判定：仅纯前置追加（新帖 prepend）可省——JS 对新行 unshift 即落位
    BOOL orderChanged = ![freshOrder isEqualToArray:_lastOrder];
    BOOL needOrder = orderChanged;
    if (orderChanged) {
        NSMutableArray *tail = [_lastOrder mutableCopy];
        [tail removeObjectsInArray:removedIDs];
        BOOL purePrepend = (freshOrder.count == newIDs.count + tail.count);
        for (NSUInteger i = 0; purePrepend && i < newIDs.count; i++)
            if (![freshOrder[i] isEqualToString:newIDs[i]]) purePrepend = NO;
        for (NSUInteger i = 0; purePrepend && i < tail.count; i++)
            if (![freshOrder[newIDs.count + i] isEqualToString:tail[i]]) purePrepend = NO;
        if (purePrepend) needOrder = NO;
    }

    if (upserts.count == 0 && removedIDs.count == 0 && !needOrder) {
        // 空分支也打状态：区分「live==基线（健康）」与「stale 顶仓」（139 排障教训：
        // 零 patch 时日志无法自证是哪种）
        WPLog(@"Dual", @"[Push] no changes (rows=%lu stale=%d)", (unsigned long)rows.count,
              [[MioDualTimelineStore shared] staleMode] ? 1 : 0);
        [MioDualMediaTrace log:@"push" key:@"-"
                        detail:[NSString stringWithFormat:@"nochange rows=%lu", (unsigned long)rows.count]];
        // 快照 == 当前数据：空 patch 把 JS 的 stale 标记切正常。
        // stale 模式（仓里就是快照行）不清——数据确实还是旧的，角标保留到新数据落地
        if (_snapshotHadRows && ![[MioDualTimelineStore shared] staleMode]) {
            _snapshotHadRows = NO;
            [wv evaluateJavaScript:@"window.__mioFeedPatch({upsert:[],remove:[]});"
                 completionHandler:nil];
        }
        return;
    }

    // ---- patch 下发 ----
    NSMutableDictionary *patch = [@{@"upsert": upserts, @"remove": removedIDs} mutableCopy];
    if (needOrder) patch[@"order"] = freshOrder;
    NSString *patchJSON = MioDualJSONString(patch);
    if (!patchJSON) return;
    [wv evaluateJavaScript:[NSString stringWithFormat:
        @"window.__mioFeedPatch(%@);", patchJSON] completionHandler:nil];
    WPLog(@"Dual", @"[Push] patch upsert=%lu remove=%lu order=%d bytes=%lu",
          (unsigned long)upserts.count, (unsigned long)removedIDs.count,
          needOrder ? 1 : 0, (unsigned long)patchJSON.length);
    // 推送出口埋点：带图行数 = 补图链最终交付量。gen+ 后此数应>0 且 serve 随之增长；
    // 若 gen+ 有而此数恒 0 → remap/diff 断链，一眼定位
    NSUInteger imgRows = 0;
    for (NSDictionary *r in upserts) if ([r[@"img"] hasPrefix:@"mioimg://"]) imgRows++;
    [MioDualMediaTrace log:@"push" key:@"-"
                    detail:[NSString stringWithFormat:@"upsert=%lu 带图=%lu remove=%lu",
                            (unsigned long)upserts.count, (unsigned long)imgRows,
                            (unsigned long)removedIDs.count]];

    // ---- 渲染层备图（WCM exportImage 模式）：只对本次变更行，缺文件即触发微信管线 ----
    for (NSDictionary *r in upserts) {
        NSString *img = r[@"img"];
        if ([img hasPrefix:@"mioimg://"])
            [[MioDualMediaService shared] ensureMediaForKey:img.lastPathComponent];
    }

    _lastRowsByID = freshByID;
    _lastOrder = freshOrder;

    // ---- 快照落盘（与媒体注册表同存同删） ----
    NSString *full = MioDualJSONString(@{@"items": rows});
    if (full.length > 2) {
        NSMutableSet *live = [NSMutableSet set];
        for (NSDictionary *r in rows) {
            NSString *img = r[@"img"];
            if ([img hasPrefix:@"mioimg://"]) {
                [live addObject:img.lastPathComponent];
            } else {
                // 待图行的 mediaKey 同在快照引用域：不进 live 会被 prune 剪掉注册表
                // 条目（iid/cdn 全丢），原生下载落地后永久 noitem（151 日志实证：
                // 同批 key 先 downloader started 后 iid=(null)）
                NSString *mk = r[@"mediaKey"];
                if (mk.length) [live addObject:mk];
            }
        }
        [[MioDualTimelineStore shared] saveSnapshotJSON:full liveKeys:live];
    }
}

@end
