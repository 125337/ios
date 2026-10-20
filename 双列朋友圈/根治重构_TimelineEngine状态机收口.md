# 根治重构 · MioDualTimelineEngine 状态机收口（v2 按当前代码实接）

> v1 草案四处错误已按当前实现修正：
> ① refreshHead 不再双调 updateTimelineHead（单次调用取返回值）
> ② tail 涨行走 rebuild→commit→push 链（不裸推旧数据）
> ③ notify 不做 reloadWindowFromDB（引擎自更新窗口，reload 会自毁深度）
> ④ enablePollingFallback 不复活（可见期 5s 轮询已替代，重新加回是死代码）

---

## 一、根因（不变）

timeline 的会话/拉取状态散落 4 个文件 12+ 状态位（gSessionBegan/gRefreshingHead/gTailLoopOn/gTailInFlight/gTailLastAt/gTailZero/gTailRounds/count 闸门/8s 节流/12s 超时/0.5s 防抖/0.3s 核对链）——每个新问题加一个新守卫，守卫之间互相打架（begin 重置 vs tail 深度、8s 节流 vs 事件驱动）。

## 二、Engine 状态机（一张图）

```
外部四幂等方法：start / refreshHead / loadTail / stop
                + notifyDataChanged（回调转发）
私有状态：sessionBegan / refreshingHead / tailLoopOn / tailInFlight
          tailLastAt / tailZero / tailRounds / tailAtEnd / sessionSince/Rows
```

## 三、MioDualTimelineEngine.h（完整）

```objc
#import <Foundation/Foundation.h>

@interface MioDualTimelineEngine : NSObject
+ (instancetype)shared;
- (void)start;              // 幂等：会话未开才开（begin+reload）；已开跳过
- (void)refreshHead;        // 幂等：防重入 → 必要时 start 自愈 → head 单次 → accepted 检查+被拒重试
- (void)loadTail;           // 幂等：进滚底区开自驱循环（inFlight 串行 + 0.3s 核对链）
- (void)stop;               // endTimeline + 停循环（关面板时）
- (void)notifyDataChanged;  // 原生回调转发：0.5s 尾沿防抖 → rebuild→commit→push（无 reload）
@end
```

## 四、MioDualTimelineEngine.m（完整，按当前代码实接）

```objc
#import "MioDualTimelineEngine.h"
#import "MioDualTimelineStore.h"
#import "MioDualFeedBridge.h"
#import "../../Core/LogManager.h"
#import <objc/message.h>

// ---- facade 获取（原 Store.m 实现迁入）----
id MioDualFacade(void) { ... }   // 现有实现不变

// ---- 原语 ----
- (SEL)sel:(NSString *)n { return NSSelectorFromString(n); }
- (long long)sourceCount {
    id facade = MioDualFacade();
    if (!facade) return 0;
    return (long long)((long long(*)(id, SEL))objc_msgSend)(
        facade, NSSelectorFromString(@"countOfTimelineDataItem"));
}
- (id)callFacade:(NSString *)method {          // ★ 单次调用取返回值
    id facade = MioDualFacade();
    if (!facade) return nil;
    SEL s = NSSelectorFromString(method);
    if (![facade respondsToSelector:s]) return nil;
    return ((id(*)(id, SEL))objc_msgSend)(facade, s);
}
- (void)callVoid:(id)facade method:(NSString *)method {
    SEL s = NSSelectorFromString(method);
    if ([facade respondsToSelector:s]) ((void(*)(id, SEL))objc_msgSend)(facade, s);
}

@interface MioDualTimelineEngine () {
    BOOL _sessionBegan;
    BOOL _refreshingHead;
    BOOL _tailLoopOn;
    BOOL _tailInFlight;
    NSTimeInterval _tailLastAt;
    int _tailZero;
    long _tailRounds;
    BOOL _tailAtEnd;
    CFAbsoluteTime _sessionSince;
    long long _sessionRows;
    BOOL _notifyPending;                        // 0.5s 尾沿防抖排定标志
}
@end

@implementation MioDualTimelineEngine

// ---- start：幂等（活会话跳过——begin 会重置窗口，141 实证 50→10）----
- (void)start {
    id facade = MioDualFacade();
    if (!facade) return;
    if (_sessionBegan && [self sourceCount] > 0) return;   // ★ 闸门：活会话不重置
    [self callVoid:facade method:@"beginTimeline"];
    [self callVoid:facade method:@"reloadTimelineDataItems"];
    _sessionBegan = YES;
    WPLog(@"Dual", @"[Engine] session begun (count=%lld)", [self sourceCount]);
}

// ---- refreshHead：防重入 → 自愈 → 单次 head → accepted 检查 + 被拒重试 ----
- (void)refreshHead {
    if (_refreshingHead) return;                   // 防重入
    id facade = MioDualFacade();
    if (!facade) return;
    if (!_sessionBegan) [self start];              // 自愈（WCM !began → start 同款）
    if (!_sessionBegan) return;

    _refreshingHead = YES;
    // 12s 双路解除（完成事件/超时）——沿用现有实现
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(12.0 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ _refreshingHead = NO; });

    // ★ 单次调用取返回值（无双倍请求）
    id result = [self callFacade:facade method:@"updateTimelineHead"];
    BOOL accepted = ([result respondsToSelector:@selector(boolValue)] ? [result boolValue] : YES);
    WPLog(@"Dual", @"[Engine] head accepted=%d", accepted);
    if (!accepted) {
        [self callVoid:facade method:@"beginTimeline"];       // 会话重开
        [self callVoid:facade method:@"updateTimelineHead"];  // 重试一次
        WPLog(@"Dual", @"[Engine] head retried after reject");
    }
    _refreshingHead = NO;
}

// ---- loadTail：进滚底区开自驱循环（幂等）----
- (void)loadTail {
    if (_tailLoopOn) return;
    _tailLoopOn = YES;
    WPLog(@"Dual", @"[Engine] tail loop ON");
    [self tailTick];
}
- (void)stopLoadTail { _tailLoopOn = NO; }

// ---- tailTick 状态机（现有实现迁入：tail 不动会话——WCM 同款）----
- (void)tailTick {
    if (!_tailLoopOn) return;
    if (_tailAtEnd) { [self tailTickLater:30.0]; return; }        // 到底待机
    if (_tailInFlight) { [self tailTickLater:1.0]; return; }      // 上一轮在途
    NSTimeInterval now = [NSDate date].timeIntervalSinceReferenceDate;
    if (now - _tailLastAt < 1.0) { [self tailTickLater:0.5]; return; }  // 1s 最小间距

    id facade = MioDualFacade();
    if (!facade) { [self tailTickLater:2.0]; return; }
    if (!_sessionBegan) { [self start]; }                  // 自愈（tail 前确保会话）

    // tail 不动会话（WCM requestTimelineMore 同款：全程只调 updateTimelineTail）
    SEL tailSel = NSSelectorFromString(@"updateTimelineTail");
    if (![facade respondsToSelector:tailSel]) { _tailLoopOn = NO; return; }
    long long before = [self sourceCount];
    ((void(*)(id, SEL))objc_msgSend)(facade, tailSel);
    _tailLastAt = now;

    // 0.3s 核对链：count 涨 → 立即续轮；8s 零增长 → 超时 reload 兜底一跳
    [self watchTailRound:before tries:0];
}

- (void)watchTailRound:(long long)before tries:(int)tries {
    if (!_tailLoopOn) { _tailInFlight = NO; return; }
    id facade = MioDualFacade();
    long long after = facade ? [self sourceCount] : before;
    if (after > before) {
        _tailInFlight = NO; _tailZero = 0;
        WPLog(@"Dual", @"[Engine] tail +%lld rows", after - before);
        [[MioDualTimelineStore shared] rebuildItemsAsync];   // ★ 走 rebuild→commit→push 链
        [self tailTickLater:0.5];
        return;
    }
    if (tries >= 27) {   // 27×0.3 ≈ 8s 看门狗
        _tailInFlight = NO;
        SEL rl = NSSelectorFromString(@"reloadTimelineDataItems");
        if ([facade respondsToSelector:rl]) ((void(*)(id, SEL))objc_msgSend)(facade, rl);
        long long after2 = [self sourceCount];
        if (after2 > before) {
            WPLog(@"Dual", @"[Engine] tail(reload) +%lld rows", after2 - before);
            [[MioDualTimelineStore shared] rebuildItemsAsync];
            [self tailTickLater:0.5];
            return;
        }
        WPLog(@"Dual", @"[Engine] tail 零增长（count=%lld）→ 续追（永不后退）", before);
        [self tailTickLater:2.0];
        return;
    }
    _tailInFlight = YES;
    [self tailTickLater:0.3];
}
- (void)tailTickLater:(NSTimeInterval)delay {
    __weak typeof(self) wself = self;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ [wself tailTick]; });
}

// ---- notifyDataChanged：0.5s 尾沿防抖 → rebuild 链（无 reload——引擎自更新窗口）----
- (void)notifyDataChanged {
    if (_notifyPending) return;                    // 已排定即合并（窗口内变更全合并）
    _notifyPending = YES;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        _notifyPending = NO;
        [[MioDualTimelineStore shared] rebuildItemsAsync];   // rebuild→commit→push（无 reload——引擎自更新窗口）
    });
}

// ---- stop ----
- (void)stop {
    [self callVoid:[MioDualFacade()] method:@"endTimeline"];   // endTimeline（对齐 WCM endTimeline）
    _tailLoopOn = NO; _tailInFlight = NO; _sessionBegan = NO;
}
- (void)enablePollingFallback { ... 10s 慢轮询 ... }   // 现有实现迁入
@end
```

## 五、外部接线（4 个触点，每个一行）

| 触点 | 现调用 | 改为 |
|---|---|---|
| 入口钩子（发现页 viewDidAppear） | beginSession + refreshHead | `[engine start]` + `[engine refreshHead]` |
| PanelOpen | beginSession + refreshHead | `[engine start]` + `[engine refreshHead]` |
| JS "more" | loadTail | `[engine loadTail]` |
| JS "refresh" | refreshHead | `[engine refreshHead]` |
| PanelClose | endSession | `[engine stop]` |
| onTimelineDataChanged hook | notifyDataChanged | `[engine notifyDataChanged]` |
| 他方插件让位 | （无） | ~~enablePollingFallback~~ **已废止——可见期 5s 轮询替代** |

## 六、这一刀治好的三个病

| 病 | 根因 | Engine 后 |
|---|---|---|
| 刷到底（begin 重置循环） | begin 散落在每次拉新前 | start 幂等——活会话不再重置窗口 |
| 8s 节流 vs 事件驱动打架 | 两套触发源无统一节拍 | Engine 内部统一（tailTick 一个驱动点） |
| accepted 盲发 | 返回值没人看 | refreshHead 内置检查 + 被拒重试 |

## 七、验证基线（同前）

1. 冷启动直开面板 → 数据秒显（start + 事件驱动）
2. 滚动翻页 40 条/轮不再被重置（深度单调递增）
3. 下拉拉新 → accepted=1 → 新帖上屏
4. 好友发帖不碰原生 → 30s 内自动上屏
5. WCMoments 完全卸载 → 全部不受影响
6. 连续 10 次冷/热开零 crash

---

## 八、评审补充 v3（落地时执行的 10 个补丁）

> v2 主体正确。以下为对照现行实现逐行核对后必须补齐/修正的点。

### 补 1 ｜ refreshHead 的防重入标志不能提前清（v2 L121 bug）
v2 在同步 head 调用后紧跟 `_refreshingHead = NO;`——标志只活了几微秒，12s 解除形同虚设。
head 是异步网络，facade 调用立即返回。改为：**标志只由 12s 超时解除，不提前清**；
另加一路提前解除——`notifyDataChanged` 防抖 fire 时若数据确实到了（WCM 完成事件同位）
也清标志，防重入窗口自适应网络耗时。

### 补 2 ｜ refreshHead 保留两个现有动作（v2 丢失）
- 末尾 `MioDualTailStateReset()`（实例化后为 `tailStateReset`）：下拉语义 = tail 的
  zero/atEnd 计数作废，否则拉新后 tail 循环还卡在 30s 到底待机
- 末尾 `rebuildItemsAsync`：reload 是同步的（本地库新数据此刻已可见）→ 重建 → commit →
  闸门推送；head 网络回来后 onChanged 防抖再推第二波。不补则下拉无即时反馈

### 补 3 ｜ watchTailRound 补三件 v2 丢失的现行逻辑
- **HUD 簿记**：`_tailRounds++`（tailTick 发轮时）、`_tailLastDelta`、`_sessionRows` 累计
  （涨行/reload 兜底两处都要记）——不补 HUD 第二行第三行全瞎
- **tail accepted 检查**：`updateTimelineTail` 返回 BOOL（WCFacade.h L437），accepted=0
  → 2s 心跳重排、不计零增长（WCM finishTailWait→retryRequired 同款）——v2 丢了这个
- **`_tailAtEnd` 只有读没有写**：保留现行写入点——连续 3 轮零增长时查
  `tailAtServerEnd`（引擎最底条==累积最旧行），成立才置位

### 补 4 ｜ notifyDataChanged 补主线程跳转
onTimelineDataChanged 钩子在任意线程回调。入口照现行 Bridge 模式：非主线程
dispatch_async 主队列再进防抖。

### 补 5 ｜ ensureSession / reloadWindow 一并迁入 Engine
方案接线表没列这两个，但它们是会话机器的一部分（可见期轮询每跳调用）：
- `ensureSession`：isInSession 真值校验，掉了重开+装窗口（历史「下拉失效」根因防线）
- `reloadWindow`：本地库→内存窗口重载（新帖静默落库后窗口不自动刷新，140 实证）
可见期轮询 tick 三连：`[engine ensureSession]` + `[engine reloadWindow]` + `[engine notifyDataChanged]`

### 补 6 ｜ MioDualFacade() 留在 Store.m（偏离方案「迁入」）
Engine.m 顶部 `extern id MioDualFacade(void);` 即可（Store.h L15 已有全局声明）。
实现搬家的收益为零，diff 最小化优先。

### 补 7 ｜ Store 暴露 committedOldestID
tailAtServerEnd 迁入 Engine 后要读 Store 的 `_committedOldestID`（私有 ivar）。
Store.h 加 `- (NSString *)committedOldestID;`（主线程只读提交值，_accRows 在后台写）。

### 补 8 ｜ 二分法开关闸门跟迁
`MIO_DUAL_BISECT_NO_DATA` 闸门从 Store 的 refreshHead/loadTail/beginSession/reloadWindow
原样迁到 Engine 同名方法（Store 瘦身后不再持有这些方法）。

### 补 9 ｜ Bridge.notifyDataChanged 变转发器
MediaService 补图唤醒调用 `[MioDualFeedBridge notifyDataChanged]`（L197）——
Bridge 该类方法保留，内部一行转发 `[MioDualTimelineEngine notifyDataChanged]`，
MediaService 零改动。Hook 的 onChanged 也改直连 Engine（接线表 L220）。

### 补 10 ｜ 接线表补 3 行遗漏触点
| 触点 | 改为 |
|---|---|
| HUD 第二/三行读数 | `[engine tailStatus]` / `[engine loadStatus]`（原来读 Store） |
| Bridge 可见期 5s 轮询 tick | ensureSession + reloadWindow + notifyDataChanged 三连改读 Engine |
| JS "tailStop"（滚离底部） | `[engine stopLoadTail]`（方案表只列了 "more"/"refresh"） |

### 落地清单（文件级）
1. 新建 `MioDualTimelineEngine.h/.m`（start/refreshHead/loadTail/stopLoadTail/stop/
   notifyDataChanged/ensureSession/reloadWindow/tailStatus/loadStatus + 私有 tailTick/
   watchTailRound/tailTickLater/tailAtServerEnd/tailStateReset）
2. Store.h/.m 删会话/翻页/诊断串 9 方法 + 12 个 static 状态位，加 committedOldestID
3. Bridge：notifyDataChanged 转发器 + 可见轮询 tick 改读 Engine
4. Hook：入口 start+refreshHead，onChanged 直连 Engine
5. Panel：Open/Close/JS more/refresh/tailStop 五触点改 Engine
6. HUD：读数改 Engine
7. 构建（前台阻塞）→ 真机按第七节基线验证