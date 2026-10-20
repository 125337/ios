#import "MioDualFeedBridge.h"
#import <WebKit/WebKit.h>
#import "../../Core/LogManager.h"
#import "MioDualTimelineStore.h"

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
    BOOL first = (b->_webView != webView);
    b->_webView = webView;
    if (first) {
        // 新页面（didFinishNavigation）：JS 侧是空 DOM，重灌快照、重建 diff 基线
        b->_needsSnapshot = YES;
        b->_snapshotHadRows = NO;
        b->_lastRowsByID = [NSMutableDictionary dictionary];
        b->_lastOrder = @[];
    }
}

+ (void)detachWebView {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self detachWebView]; });
        return;
    }
    [self bridge]->_webView = nil;
}

+ (void)pushNow {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self pushNow]; });
        return;
    }
    [[self bridge] pushNowLocked];
}

#pragma mark 尾沿防抖（B10 根治：0.5s 窗口内事件全合并，推送时重读最新状态永不丢尾）

// 待推计时器（文件级：flush 时必须清引用，否则一次性 timer 失火后残留引用，
// 后续 notifyDataChanged 全部被吞——只推一次的静默 bug）
static NSTimer *gPendingPush = nil;

+ (void)notifyDataChanged {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self notifyDataChanged]; });
        return;
    }
    if (gPendingPush) return;   // 已有待推：本次事件被即将到达的推送覆盖（fire 时重读最新）
    gPendingPush = [NSTimer timerWithTimeInterval:0.5 target:self selector:@selector(flushPending)
                                         userInfo:nil repeats:NO];
    [[NSRunLoop mainRunLoop] addTimer:gPendingPush forMode:NSRunLoopCommonModes];
}

+ (void)flushPending {
    [gPendingPush invalidate];
    gPendingPush = nil;   // 先清再推：推送过程中若触发新变更可再排程
    [self pushNow];
}

#pragma mark 让位兜底（B11：他方插件占有变更回调时 10s 慢轮询保底）

+ (void)enablePollingFallback {
    static NSTimer *poll = nil;
    static BOOL logged = NO;
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self enablePollingFallback]; });
        return;
    }
    if (poll) return;
    poll = [NSTimer timerWithTimeInterval:10.0 target:self selector:@selector(pollTick)
                                 userInfo:nil repeats:YES];
    [[NSRunLoop mainRunLoop] addTimer:poll forMode:NSRunLoopCommonModes];
    if (!logged) {
        logged = YES;
        WPLog(@"Dual", @"[Push] polling fallback enabled (10s, onTimelineDataChanged yielded)");
    }
}

+ (void)pollTick {
    [self notifyDataChanged];
}

#pragma mark 推送（主线程）

- (void)pushNowLocked {
    WKWebView *wv = _webView;
    if (!wv) return;

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
            }
        }
    }

    // ---- 新状态 ----
    NSArray<NSDictionary *> *rows = [[MioDualTimelineStore shared] currentItems];
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
        if (_snapshotHadRows) {
            // 快照 == 当前数据：仍需一条空 patch 把 JS 的 stale 标记切正常
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

    _lastRowsByID = freshByID;
    _lastOrder = freshOrder;

    // ---- 快照落盘（与媒体注册表同存同删） ----
    NSString *full = MioDualJSONString(@{@"items": rows});
    if (full.length > 2) {
        NSMutableSet *live = [NSMutableSet set];
        for (NSDictionary *r in rows) {
            NSString *img = r[@"img"];
            if ([img hasPrefix:@"mioimg://local/"]) [live addObject:img.lastPathComponent];
        }
        [[MioDualTimelineStore shared] saveSnapshotJSON:full liveKeys:live];
    }
}

@end
