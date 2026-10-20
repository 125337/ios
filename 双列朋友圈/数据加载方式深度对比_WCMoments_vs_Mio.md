# 数据加载方式深度对比 · WCMoments vs Mio

> 基线：WCMoments 0.6.49 反编译（含 GOLD 运行时 trace）｜ Mio 当前代码（commit 3d49a45ed，含 miosnap/分帧/可见窗调度）。
> 每个阶段：他的做法（证据等级）｜我们的做法｜判定。

---

## 〇、总览

| | 他 | 我们 |
|---|---|---|
| 哲学 | 会话状态机 + 代际推送 + 就绪门槛——厚引擎管全生命周期 | 直调原生 + 事件驱动 + scheme 供数——薄管线行为对齐 |
| 数据源 | WCFacade 数据源方法（原生） | 同（同源同层） |
| 代码量（数据链路） | 数百行状态机 | ~400 行 |

---

## 一、启动 → 首屏（最关键路径）

| 步骤 | 他 | 我们 |
|---|---|---|
| 入口 | FindFriendEntryViewController.viewDidAppear → start() | 同位 hook → 按钮 + 预热 |
| 会话 | facadeAvailable → loggedIn/accepted → session_begin → beginTimeline | beginSession: beginTimeline + reloadTimelineDataItems |
| 数据装载 | Call(getTimelineDataItemOfIndex) 逐条（内存窗口） | count + index 循环直读（同一内存窗口）→ itemDict 统一映射 |
| **供数方式** | evaluateJavaScript（快照/增量内联注入） | **miosnap:// scheme 流（JS boot fetch，零脚本编译）**+ didFinish 推送双保险（rev 去重） |
| 渲染 | JS 渲染 | 分帧装载 150 卡/16ms + 可见窗 120ms 节流 |
| 首屏延迟构成 | 网络同步落地时间（不可省）+ 注入开销 | 网络同步落地时间 + **零编译开销** |

**判定**：✅ 已对齐且供数方式我们更优——他的快照走 evaluateJavaScript 内联（大 JSON 当 JS 编译有主线程开销），我们的 miosnap 走 WebKit 网络栈流式，冷启动省 100-300ms。

## 二、拉新（下拉/刷新）

| | 他（refreshHead 4953B 全文实证） | 我们 |
|---|---|---|
| 防重入 | refreshingHead 标志 | 8s 节流（refreshHead 侧） |
| **自愈** | facade 缺失 / began==NO → **重跑 start()**（完整启动序列） | begin 直调（闸门：count==0 才 begin） |
| 拉新调用 | Call("updateTimelineHead") → **accepted 返回值检查** + Trace | updateTimelineHead 直调（**返回值未检查**） |
| 状态机 | exhausted 重置 / pagingGeneration++ / mediaRequestTimes 清空 / lastHeadRequest / syncPaging | lastJson 保留 |
| 超时兜底 | 20s dispatch_after | 无 |
| 结果通知 | onTimelineDataChanged（我们已 hook ✓） | 同 |

**判定**：核心等价。**待补一项**：accepted 返回值检查（被拒不知情）——一行 + 重试逻辑。他的 20s 超时可选。

## 三、翻页

| | 他 | 我们 |
|---|---|---|
| 守卫 | exhausted / limit / tail_blocked / tail_local_page 状态机 | 8s 节流 |
| 拉取 | Call("updateTimelineTail") + countOfTimelineDataItem 比对 | beginTimeline（闸门）+ updateTimelineTail |
| 落地 | onNextPageUpdated → reloadFeed | onTimelineDataChanged → reload → notify → patch |

**判定**：✅ 核心等价。他的 exhausted/limit 是体验增强（防无效翻页），可作为 P3。

## 四、变更感知（数据落地 → UI 更新）

| | 他 | 我们 |
|---|---|---|
| 信号 | onFirstPageUpdated/onNextPageUpdated/onTimelineDataChanged（原生回调链） | onTimelineDataChanged hook（同一回调） |
| 内存刷新 | facade.reload ×N（数据变更后原生侧反复重载） | hook 内 reloadTimelineDataItems（已加 ✓，140 根治） |
| 推送触发 | 增量推送（bridgeGeneration） | 0.5s 尾沿防抖 → diff → patch |

**判定**：✅ 等价。同一回调源、同样的 reload-then-push 结构。

## 五、媒体管线

| | 他 | 我们 |
|---|---|---|
| 注册 | nativePath → exportImage 入 mediaQueue 后台 | registerLocalPath（**就绪门槛：1KB 占位闸门**）→ 后台拷贝 stablePath |
| 转码 | UIImageJPEGRepresentation(0.999) 写自己存储 root/<key> | 同款拷贝（写 stablePath） |
| 就绪门槛 | renderKeys（未就绪媒体不进 JS 行） | _ready 集合 + row.img 空 = 纯文本卡先出，就绪后 patch 补图 |
| 服务 | wcm:// scheme → base62 key 解码 → decodeQueue 异步 → scale/bounds → **activeTasks 去重** | mioimg:// scheme 同步 serve + resolveKey 文件校验 |
| 缺失兜底 | cf_assetMiss 专门处理链 | imgCdn 回落（row.imgCdn + JS onerror） |
| 代际 | mediaGeneration++ + cancelAllOperations（start 时取消旧导出） | 无代际取消 |

**判定**：✅ 核心等价（就绪门槛/转码/自有存储/校验全有）。两处差距：**异步 serve**（他 decodeQueue 后台，我们同步主线程读——小图无感，可后移）与**代际取消**（可选）。**imgCdn 回落我们反而多了 CDN 通道**。

## 六、渲染调度

| | 他 | 我们 |
|---|---|---|
| 首屏 | JS 渲染 | 分帧装载 150 卡/16ms（大列表不卡帧） |
| 可见性 | — | 可见窗 120ms 节流（±2屏 eager/转圈门控）——**对齐他 mediaProbeTimes 思路** |
| 布局 | — | 双列瀑布流手绘（layoutCards + 纯前置追加省重排） |

**判定**：✅ 我们的渲染调度更细（分帧+可见窗），这块领先。

## 七、状态管理

| 状态 | 他 | 我们 |
|---|---|---|
| 会话 | began/accepted/sessionTime | count 闸门 + 8s 节流 |
| 代际 | bridge/paging/media/refresh 四代 | lastJson/rev 去重 |
| 翻页光标 | exhausted/limit/tailStartCount/tailPreviousLimit | 无（每次 tail 从当前窗口起） |
| 已读/屏蔽 | pendingSeenIDs/syncHiddenUsers/followingKey | 无 |

**判定**：核心等价；exhausted/limit（P3）与已读体系（按需）未做——功能增强非缺陷。

---

## 八、总结判定

**已对齐（数据加载能力同级）**：
1. 数据源同源同层 ✓
2. 会话/拉新/翻页/事件驱动 ✓
3. 增量推送 ✓
4. 媒体就绪门槛 + 自有存储 + 回落 ✓
5. 渲染调度 ✓（我们更细）
6. **供数方式我们领先**（miosnap 流式 vs evaluate 内联）

**待补（三件，都是小项）**：
1. accepted 返回值检查（refreshHead 一行 + 被拒重试）
2. 异步 serve（mioimg 读文件可后移 decodeQueue 式队列——小图可不做）
3. exhausted/limit 判定（防无效翻页，P3）

**结论：数据加载方式已对齐 WCMoments，无结构性差距。** 剩余三件收尾后，加载性能与健壮性同级；渲染调度我们更细。