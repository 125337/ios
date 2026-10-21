#import "MioDualTimelineEngine.h"
#import "MioDualTimelineStore.h"
#import "MioDualMediaTrace.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import <objc/message.h>

// MioDualFacade 实现在 Store.m（Store.h 已全局声明，此处显式 extern 免依赖头顺序）
// WCFacade 获取：MMContext activeUserContext getService:（8.0.60 回退 currentContext）

@interface MioDualTimelineEngine () {
    BOOL _sessionBegan;              // 引擎会话在开（start 置位 / stop 清）
    BOOL _refreshingHead;            // head 在途防重（12s 超时解除；数据落地提前解除，补 1）
    long long _headRequestCount;     // head 发出时的窗口 count（数据落地判定基准，补 1）
    BOOL _tailLoopOn;                // tail 自驱循环开
    BOOL _tailInFlight;              // 一轮网络翻页进行中（串行化，WCM loadingTail 同款）
    NSTimeInterval _tailLastAt;      // 上次发 tail 时刻（1s 最小间距防密集）
    int _tailZero;                   // 连续零增长轮数（HUD 观测僵局用）
    long _tailRounds;                // accepted 轮次累计（HUD 诊断）
    long long _tailLastDelta;        // 上轮供给行数（HUD 诊断）
    BOOL _tailAtEnd;                 // 真到底（引擎最底条==累积层最旧行，refreshHead 重置）
    CFAbsoluteTime _sessionSince;    // 本轮装载会话起点（HUD 加载计时）
    long long _sessionRows;          // 本轮会话累计供给行数（HUD 加载量）
    BOOL _notifyPending;             // 0.5s 尾沿防抖排定标志
}
@end

@implementation MioDualTimelineEngine

+ (instancetype)shared {
    static MioDualTimelineEngine *e = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ e = [[MioDualTimelineEngine alloc] init]; });
    return e;
}

#pragma mark 原语

- (long long)sourceCount {
    id facade = MioDualFacade();
    if (!facade) return 0;
    return (long long)((long long(*)(id, SEL))objc_msgSend)(
        facade, NSSelectorFromString(@"countOfTimelineDataItem"));
}

- (void)callVoid:(NSString *)method {
    id facade = MioDualFacade();
    SEL s = NSSelectorFromString(method);
    if (facade && [facade respondsToSelector:s]) ((void(*)(id, SEL))objc_msgSend)(facade, s);
}

#pragma mark start：幂等（活会话跳过——begin 会重置窗口，141 实证 50→10）

- (void)start {
#if MIO_DUAL_BISECT_NO_DATA
    return;   // 二分法测试构建：数据管线全关
#endif
    id facade = MioDualFacade();
    if (!facade) {
        WPLog(@"Dual", @"[Engine] start SKIP: facade nil");
        return;
    }
    if (_sessionBegan && [self sourceCount] > 0) return;   // 活会话不重置窗口
    ((void(*)(id, SEL))objc_msgSend)(facade, NSSelectorFromString(@"beginTimeline"));
    ((void(*)(id, SEL))objc_msgSend)(facade, NSSelectorFromString(@"reloadTimelineDataItems"));
    _sessionBegan = YES;
    WPLog(@"Dual", @"[Engine] session begun (count=%lld)", [self sourceCount]);
}

#pragma mark refreshHead：防重入 → 自愈 → 单次 head → accepted 检查+被拒重试

- (void)refreshHead {
#if MIO_DUAL_BISECT_NO_DATA
    return;   // 二分法测试构建：数据管线全关
#endif
    if (_refreshingHead) {
        WPLog(@"Dual", @"[Engine] refreshHead SKIP: refreshing in-flight");
        return;
    }
    id facade = MioDualFacade();
    if (!facade) {
        WPLog(@"Dual", @"[Engine] refreshHead SKIP: facade nil");
        return;
    }
    if (!_sessionBegan) [self start];   // 自愈（WCM !began → start 同款）
    if (!_sessionBegan) return;

    _refreshingHead = YES;
    _headRequestCount = [self sourceCount];
    // 12s 超时解除兜底；正常路径由数据落地提前解除（见 notifyDataChanged，补 1）
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(12.0 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        if (_refreshingHead)
            WPLog(@"Dual", @"[Engine] refreshHead: 12s timeout, flag released");
        _refreshingHead = NO;
    });
    // WCM refreshHead 反编译（01 L277-395）：全程不动活会话——head 前无脑 beginTimeline
    // 会作废引擎翻页状态（窗口重置→重爬几千条的根因，WCM 无此动作）
    SEL sel = NSSelectorFromString(@"updateTimelineHead");
    if ([facade respondsToSelector:sel]) {
        // 刀3：accepted 返回值检查——被拒（会话态不收 head）可见，beginTimeline 后重试一次。
        // 返回值是 BOOL：必须 BOOL cast 直接收 x0（127.log 教训——id 接标量再发
        // respondsToSelector，x0=1 被当指针必 SIGSEGV；x0=0 时 nil 又把被拒判成接受）
        BOOL accepted = ((BOOL(*)(id, SEL))objc_msgSend)(facade, sel);
        WPLog(@"Dual", @"[Engine] refreshHead: head accepted=%d (count=%lld)",
              accepted, [self sourceCount]);
        if (!accepted) {
            ((void(*)(id, SEL))objc_msgSend)(facade, NSSelectorFromString(@"beginTimeline"));
            _sessionBegan = YES;
            BOOL acc2 = ((BOOL(*)(id, SEL))objc_msgSend)(facade, sel);
            WPLog(@"Dual", @"[Engine] refreshHead: head retry accepted=%d", acc2);
            _headRequestCount = [self sourceCount];
        }
    } else {
        WPLog(@"Dual", @"[Engine] refreshHead: updateTimelineHead NOT resp");
    }
    // 下拉 = 用户主动要新内容：tail 的零增长/到底状态一并作废（head 同时重置了微信的
    // tail 供给状态），循环若在跑则下一轮立即续供
    [self tailStateReset];
    // reload 同步完成后本地库新数据立即可见 → 重建（后台映射）→ commit → 闸门推送；
    // head 网络回来后 onChanged→防抖→再推第二波
    [[MioDualTimelineStore shared] rebuildItemsAsync];
}

// 数据落地提前解除（补 1 修正版，用户钉死信号）：onChanged 在 head 拉取期间也会因
// mediaRequestTimes/seen 等非 head 变更触发，不能当解除信号；唯一正确信号 = head
// 发出后窗口 count 真实增长（head 请求带来的数据落地）
- (void)headDataLandedIfGrown {
    if (!_refreshingHead) return;
    if ([self sourceCount] > _headRequestCount) {
        WPLog(@"Dual", @"[Engine] refreshHead: head data landed, flag released early");
        _refreshingHead = NO;
    }
}

#pragma mark loadTail：进滚底区开自驱循环（幂等）

- (void)loadTail {
#if MIO_DUAL_BISECT_NO_DATA
    return;   // 二分法测试构建：数据管线全关
#endif
    if (_tailLoopOn) return;
    _tailLoopOn = YES;
    _sessionSince = CFAbsoluteTimeGetCurrent();
    _sessionRows = 0;
    WPLog(@"Dual", @"[Engine] tail loop ON");
    [self tailTick];
}

- (void)stopLoadTail {
    if (!_tailLoopOn) return;
    _tailLoopOn = NO;
    WPLog(@"Dual", @"[Engine] tail loop OFF");
}

// tail 计数复位（下拉 refreshHead 语义）：zero/atEnd 作废，循环下一轮立即续供
- (void)tailStateReset {
    _tailLastAt = 0;
    _tailZero = 0;
    _tailAtEnd = NO;
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
    if (!_tailLoopOn) return;
    if (_tailAtEnd) {
        [self tailTickLater:30.0];   // 到底待机：tail 无意义，等下拉 refreshHead 重置
        return;
    }
    NSTimeInterval now = [NSDate date].timeIntervalSinceReferenceDate;
    if (_tailInFlight) {
        [self tailTickLater:1.0];
        return;
    }
    if (now - _tailLastAt < 1.0) {
        [self tailTickLater:0.5];
        return;
    }
    id facade = MioDualFacade();
    if (!facade) {
        [self tailTickLater:2.0];
        return;
    }
    if (!_sessionBegan) [self start];   // 自愈：tail 前确保会话
    // WCM requestTimelineMore 同款（反编译 L519-937 实证）：翻页**不动会话**——
    // 它全程只调 updateTimelineTail，无 beginTimeline/reload。beginTimeline 是会话
    // 重置，会打断引擎深度翻页状态机（updateNextPage 异步网络中被重置作废）
    SEL sel = NSSelectorFromString(@"updateTimelineTail");
    if (![facade respondsToSelector:sel]) {
        WPLog(@"Dual", @"[Engine] tail loop STOP: updateTimelineTail NOT resp");
        _tailLoopOn = NO;
        return;
    }
    long long before = [self sourceCount];
    // 返回 BOOL accepted（WCFacade.h L437）：拒绝=引擎冷却/忙碌，立即重排不计失败
    long accepted = ((long(*)(id, SEL))objc_msgSend)(facade, sel);
    _tailLastAt = now;
    WPLog(@"Dual", @"[Engine] tail tick sent (count=%lld, accepted=%ld, z=%d)",
          before, accepted, _tailZero);
    [[MioDualTimelineStore shared] rebuildItemsAsync];   // 页脚新行立即上屏（若有；重活后台）

    if (!accepted) {
        // WCM 同款 finishTailWait→retryRequired→轮询重试：2s 后心跳重排，不计零增长
        [self tailTickLater:2.0];
        return;
    }
    _tailInFlight = YES;
    _tailRounds++;
    [self watchTailRound:before tries:0];
}

// 一轮 in-flight 核对链：每 0.3s 读 count（引擎网络回来自己写内存列表，自涨无需
// reload），涨 → 立即 0.5s 续轮（快链）；~8s 未涨 → 零增长计数，2s 续追（WCM 语义：
// 永不后退，服务器松口第一瞬间续上）；引擎最底条==累积最旧行才是真到底
- (void)watchTailRound:(long long)before tries:(int)tries {
    if (!_tailLoopOn) {
        _tailInFlight = NO;
        return;
    }
    id f = MioDualFacade();
    if (f) {
        long long after = [self sourceCount];
        if (after > before) {
            _tailInFlight = NO;
            _tailZero = 0;
            _tailLastDelta = after - before;
            _sessionRows += after - before;
            WPLog(@"Dual", @"[Engine] tail +%lld rows (count %lld->%lld)",
                  after - before, before, after);
            [[MioDualTimelineStore shared] rebuildItemsAsync];   // rebuild→commit→push（刀1 链）
            [self tailTickLater:0.5];   // WCM 同款：数据一到立刻下一轮
            return;
        }
    }
    if (tries >= 27) {   // 27×0.3s ≈ 8s 看门狗（WCM tail timeout 同款）
        _tailInFlight = NO;
        if (f) {   // 超时兜底 reload：库有货而窗口没跟上时补一跳
            SEL rl = NSSelectorFromString(@"reloadTimelineDataItems");
            if ([f respondsToSelector:rl]) ((void(*)(id, SEL))objc_msgSend)(f, rl);
            long long after = [self sourceCount];
            if (after > before) {
                _tailZero = 0;
                _tailLastDelta = after - before;
                _sessionRows += after - before;
                WPLog(@"Dual", @"[Engine] tail(reload) +%lld rows (count %lld->%lld)",
                      after - before, before, after);
                [[MioDualTimelineStore shared] rebuildItemsAsync];
                [self tailTickLater:0.5];
                return;
            }
        }
        if (++_tailZero >= 3) {
            _tailZero = 0;
            if ([self tailAtServerEnd]) {
                _tailAtEnd = YES;
                WPLog(@"Dual", @"[Engine] tail 到底：引擎最底条==累积层最旧行，服务器无更多（下拉重置）");
            } else {
                WPLog(@"Dual", @"[Engine] tail 持续零增长（count=%lld）→ 续追（永不后退）", before);
            }
        } else {
            WPLog(@"Dual", @"[Engine] tail 零增长（count=%lld, zero=%d/3）", before, _tailZero);
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

// 真到底判定（WCM noMore: 同款语义，反编译 _funcs/34e4c）：引擎窗口最底条的 itemID
// == 累积层最旧行 id → 引擎已翻到我们已有内容的最底且不再供页 = 服务器翻页链尽头。
// 仅在持续零增长后调用；refreshHead（下拉）重置
- (BOOL)tailAtServerEnd {
    id facade = MioDualFacade();
    long long n = [self sourceCount];
    MioDualTimelineStore *store = [MioDualTimelineStore shared];
    if (n <= 0 || [store accRowCount] == 0) return NO;
    id item = ((id(*)(id, SEL, unsigned long long))objc_msgSend)(
        facade, NSSelectorFromString(@"getTimelineDataItemOfIndex:"), (unsigned long long)(n - 1));
    NSString *engID = WXSafeStringGet(item, @"itemID");
    if (engID.length == 0) return NO;
    return [engID isEqualToString:[store committedOldestID]];   // 主线程只读提交值
}

#pragma mark notifyDataChanged：原生回调转发（0.5s 尾沿防抖 → rebuild 链，无 reload）

// dispatch_after 版防抖（原 NSTimer 方案废止：147 日志实证一次性 timer 在长会话中
// 整体失联）。onTimelineDataChanged 钩子任意线程回调，先归主线程
- (void)notifyDataChanged {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self notifyDataChanged]; });
        return;
    }
    if (_notifyPending) return;   // 已排定即合并（窗口内变更全合并，fire 时重读最新）
    _notifyPending = YES;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        _notifyPending = NO;      // 先清再推：推送过程中若触发新变更可再排程
        [MioDualMediaTrace log:@"engine" key:@"-" detail:@"防抖fire→rebuild"];
        [self headDataLandedIfGrown];   // 补 1：head 数据落地才提前解除防重入（onChanged 不可靠）
        [[MioDualTimelineStore shared] rebuildItemsAsync];   // 刀1：重活后台，commit 后经闸门推送
    });
}

#pragma mark ensureSession / reloadWindow / stop

// 会话心跳校验（WCM timer→reloadFeed 等价，可见期轮询每跳调用）：微信原生页
// 生命周期会内部终结会话而 began 标志不知情（历史实证「下拉失效、切 tab 回来就好」
// 根因）。isInSession（WCTimelineMgr，头文件 L79 实证）真值校验，掉了才重开+装窗口
- (void)ensureSession {
#if MIO_DUAL_BISECT_NO_DATA
    return;
#endif
    if (!_sessionBegan) return;   // 面板主动关的：不可见期不重开
    id facade = MioDualFacade();
    if (!facade) return;
    id mgr = ((id(*)(id, SEL))objc_msgSend)(facade, NSSelectorFromString(@"timelineMgr"));
    SEL iss = NSSelectorFromString(@"isInSession");
    if (!mgr || ![mgr respondsToSelector:iss]) return;
    if (((BOOL(*)(id, SEL))objc_msgSend)(mgr, iss)) return;
    ((void(*)(id, SEL))objc_msgSend)(facade, NSSelectorFromString(@"beginTimeline"));
    ((void(*)(id, SEL))objc_msgSend)(facade, NSSelectorFromString(@"reloadTimelineDataItems"));
    WPLog(@"Dual", @"[Engine] ensureSession: re-begun (isInSession=NO, count=%lld)", [self sourceCount]);
}

// 本地库 → 内存窗口重载（可见期保鲜轮询用）：新帖静默落库后内存窗口不自动刷新
// （140 实证），轮询 tick 显式 reload 才可见；与 hook 路径对 facade 的 reload 同一动作
- (void)reloadWindow {
#if MIO_DUAL_BISECT_NO_DATA
    return;
#endif
    id facade = MioDualFacade();
    if (!facade) return;
    SEL rSel = NSSelectorFromString(@"reloadTimelineDataItems");
    if ([facade respondsToSelector:rSel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, rSel);
    }
}

- (void)stop {
    [self stopLoadTail];
    [self tailStateReset];
    _sessionBegan = NO;   // WCM stop 同款：began 状态清理（00 L940-1009）
    [self callVoid:@"endTimeline"];
    WPLog(@"Dual", @"[Engine] stop: endTimeline OK");
}

#pragma mark 诊断指标（HUD 读，主线程）

- (NSString *)tailStatus {
    if (!_tailLoopOn) return @"OFF";
    if (_tailAtEnd) return @"到底";
    return [NSString stringWithFormat:@"ON z%d r%ld +%lld", _tailZero, _tailRounds, _tailLastDelta];
}

- (NSString *)loadStatus {
    NSString *phase;
    if (!_tailLoopOn) phase = @"待机";
    else if (_tailAtEnd) phase = @"到底";
    else phase = _tailInFlight ? @"翻页中" : @"等服务器";
    if (_sessionSince == 0) return phase;
    return [NSString stringWithFormat:@"%@ +%lld行/%.0fs", phase, _sessionRows,
            CFAbsoluteTimeGetCurrent() - _sessionSince];
}

@end
