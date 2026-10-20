# 朋友圈数据源对比 · WCMoments vs Mio 双列

> 基线：WCMoments 0.6.49 反编译（`WCMoments反编译\`）+ Mio `MomentsDualPanel.m`（730 行）/`MomentsDualHook.m`（123 行）源码。
> 范围：双列主信息流的数据从哪来、怎么流动、两者差在哪。

---

## 一、结论速览

| | WCMoments（他） | Mio（我们） |
|---|---|---|
| 数据源 | **微信 timeline 数据源直读** + 变更回调 | **借 WCMoments 的 WCFacade 缓存**（timelineMgr.getCache） |
| 微信依赖方式 | duck-typing 调数据源 selector + 注册回调 | 同一 WCFacade（**微信原生 MMUserService**，8.0.78 头文件实证，非 WCMoments 私有类——初版分析误判，P0 依赖风险不成立） |
| 更新机制 | 事件驱动（onTimelineDataChangedWithAdded:andChanged:andDeleted:） | 轮询（动作后 1/2.5/4s 三次复查推送） |
| 推送粒度 | 增量（bridgeGeneration/bridgeRows/bridgeBusy 状态机） | 全量（≤300 条 JSON 重推，lastJson 相同则跳过） |
| 媒体 | 完整管线（mediaQueue/probeTimes/renderKeys/renderQualities + 视频下载事件钩子） | 直读本地路径（4 级 selector 回落）→ mioimg:// scheme → CDN 兜底 |
| 会话 | 完整状态机（session_begin/stop、beginTimeline/endTimeline、loggedIn/accepted） | 面板开/关 + 动作后短轮询 |
| 已读/去重 | pendingSeenIDs / lastSeenItemID / lastSeenCreateTime / syncHiddenUsers | 无 |
| 视频播放 | 钩 WCDownloadVideoCDNMgr（下载进度→原生播放环境） | 仅 isVideo 标记 |
| 代码量 | 数据链路数百行 + 完整状态机 | ~200 行 |

**一句话**：他造了一台带事件驱动的数据泵；我们直接从他的泵里舀水。

---

## 二、他的数据源全链路（反编译实证）

```
微信 timeline 内存数据（WCDataItem 数组，数据源对象持有）
  ↑ 直读（无需钩子）：countOfTimelineDataItem / getTimelineDataItemOfIndex:
  ↑ 变更通知：onTimelineDataChangedWithAdded:andChanged:andDeleted:
            onNoMoreTimelineData / onTimelineServerError / onBegin
WCFacade（自有类，_Install 注册进微信进程）
  ↓ start()：facadeAvailable → loggedIn/accepted → session_begin → beginTimeline
  ↓ 头帧：updateTimelineHead / head_initial_request / lastHeadRequest
  ↓ 翻页：滚底 → 尾部请求 → exhausted/limit 判定
WCMFeedController 状态机（102 选择器）：
  bridgeGeneration/bridgeBusy —— 推送节流
  rowOrder / visibleIDs / nativeContentByID / nativeMediaByID —— 行序与内容映射
  mediaQueue / mediaProbeTimes / mediaRequestTimes / mediaTargets —— 媒体探测下载队列
  renderKeys / renderQualities —— 图片质量选择
  requestedAvatars —— 头像批量请求
  pendingSeenIDs / lastSeenItemID / syncHiddenUsers —— 已读与屏蔽
  videoRequests / videoURIs + WCDownloadVideoCDNMgr 回调 —— 视频下载进度
  latestFeedSnapshot / pendingFeedSnapshot —— 快照
  ↓ 增量 JSON（bridgeGeneration 变化才推）
evaluateJavaScript → WebView（window.setFeed 系）
  ↓ 图片/视频资源
WCMAssetHandler（自定义 URL Scheme）+ 本地缓存目录（createDirectoryAtPath）
```

**特点**：数据始终是微信内存里的活对象；变更由回调推着走；媒体有独立队列和探测；重开面板有缓存快照秒显。

---

## 三、我们的数据源全链路（代码实证）

```
objc_getClass("WCFacade") + MMContext 服务定位      ← 依赖 WCMoments 注册该类
  ↓ facade.timelineMgr.getCache                      ← 借它的 timeline 管理缓存
WCDataItem 数组（≤300 条）
  ↓ itemDict: username/nickname/contentDesc/getMediaWraps → mediaItem
  │   ├─ 本地文件：getThumbImagePath → pathForPreview → pathForData → pathForHdData
  │   │            → MioDualRegisterMediaPath → mioimg://local/<key>（自有 URL Scheme）
  │   └─ 回落：attachThumbUrl（CDN）
  │   标量：createtime/likeCount/commentCount/likeFlag（KVC 装箱，小写实证）
  │   比例：m64_width/m64_height ivar（失败回落 JS onload 锁高）
  ↓ 全量 JSON（NSJSONSerialization，U+2028/2029 转义）
lastJson 相同 → 跳过（防滚动跳动）
  ↓ evaluateJavaScript：window.__mioSetFeed(items)
WebView 双列渲染
动作回流（JS → didReceiveScriptMessage）：
  more    → facade updateTimelineTail → scheduleFeedChecks（1/2.5/4s 三次复查）
  refresh → facade updateTimelineHead → scheduleFeedChecks
  publish → host openAlbumAndPublish:/…Text:（duck-typing，8.0.78 头文件实证）
  inbox   → present MioDualInboxVC（自己拉 getAllMessages）
  back    → MioDualPanelClose（移除面板覆盖）
入口：FindFriendEntryViewController.viewDidAppear 钩子 → 追加「双列」按钮
      （若 WCR 等他方插件先接管 viewDidAppear 则让位不挂）
```

---

## 四、逐维度差异

### 1. 数据主链（最大差异）
- **他**：直读微信数据源对象 + 注册变更回调。数据是"推"给他的。
- **我们**：facade.timelineMgr.getCache 拿**他的缓存快照**。数据是"舀"来的，且更新靠轮询。
- 后果：新赞/新评论进来，他能实时感知（回调），我们要等下一次 pushFeedNow（打开面板/动作后 1-4s/下拉）。

### 2. 增量能力
- 他：bridgeGeneration/bridgeRows 三代号状态机，只推变更行，滚动位置稳定。
- 我们：全量 JSON + lastJson 字符串比对——简单可靠，但 300 条封顶、每次全序列化。

### 3. 媒体管线
- 他：队列化（mediaQueue）+ 尺寸探测（mediaProbeTimes）+ 质量选择（renderQualities）+ 下载事件（WCDownloadVideoCDNMgr 回调 → 原生视频播放环境 setNativeVideoEnvironment_）。
- 我们：四级本地路径 selector 回落 + mioimg scheme（这块我们做得不差），但无队列/无探测/视频无原生下载联动。

### 4. 会话与生命周期
- 他：session_begin/unavailable/stop + loggedIn/accepted + 定时器轮询 lastFeedPoll。
- 我们：面板显示即会话，关闭即结束；定时器仅动作后三次。

### 5. 状态完整性
- 他：exhausted（没有更多了）/ limit / tailRetryRequired / pendingSeenIDs / hiddenUsers / followingKey。
- 我们：无 exhausted 判定（滚底重复 updateTimelineTail）；无已读/屏蔽体系。

### 6. 依赖结构（初版误判，已证伪）
- 他：**自包含**（WCFacade 是微信原生类，他也只是调用方）。
- 我们：同样调用微信原生 WCFacade（`MMUserService` 子类，8.0.78 头文件实证）——**不存在「WCMoments 卸载即全灭」的依赖**。真正的差异只剩数据 API 选择：他用 count/index 直读三件套，我们现已同款（getTimelineDataItem 主路 + count/index 回落）。

---

## 五、对齐进度（按收益/成本排序）

| 优先级 | 项 | 做法 | 状态 |
|---|---|---|---|
| P0 | 数据直读正式 API | ~~解除 WCFacade 依赖~~（误判证伪）；实做：`getTimelineDataItem` 主路 + count/index 三件套回落，替代 `timelineMgr.getCache` | ✅ 已落地 |
| P1 | **变更回调** | hook 微信原生 `onTimelineDataChangedWithAdded:andChanged:andDeleted:`（WCFacade.h:415）→ 0.5s 主线程防抖 → 活跃面板 pushFeedNow；删 3s 轮询与 1/2.5/4s 复查链 | ✅ 已落地 |
| P2 | 增量推送 | items 按 id 建 map，只推 diff 行（或沿用 lastJson 但上限提到 500） | 待做 |
| P3 | exhausted 判定 | updateTimelineTail 后比对计数不增 → exhausted，JS 停止请求 | 待做 |
| P4 | 视频下载联动 | 钩 WCDownloadVideoCDNMgr 三回调 → JS 进度条 | 待做 |
| P5 | 已读体系 | pendingSeenIDs 持久化 | 待做 |

---

## 六、公平话：我们的简模型不是全错

- 全量推送 + lastJson 去重：300 条以内无性能问题，代码量是它的 1/5，调试成本低。
- mioimg 本地路径四级回落：与他 mediaSrc 思路一致，实现更直接。
- KVC 装箱读标量：有 127.log SIGSEGV 实证教训后的正确做法。
- 真正必须根治的只有 **P0 依赖链**和 **P1 实时性**——其余是体验增强，不是缺陷。
