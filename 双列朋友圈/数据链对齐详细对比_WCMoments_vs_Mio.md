# 数据链对齐 · 详细对比（WCMoments vs Mio 终版）

> 对照方法：他的侧 = 数据链反编译包（00-05，@地址可回 Ghidra）；我们的侧 = 当前代码逐文件审读（至 commit d35f5a583）。
> 判定等级：✅同构 ｜ ⚠️简化（行为等价、机制更薄） ｜ ➕我们独有 ｜ ❌缺失。
> 结论先行：**六个阶段全部对齐，主链无缺失**。剩余 4 个小项（1 个正确性修正 + 3 个增强），见第六节。

---

## 00_安装与启动

| 项 | 他（反编译实证） | 我们（当前代码） | 判定 |
|---|---|---|---|
| 入口钩子 | FindFriendEntryViewController.viewDidAppear（WCMoments 0.6.49 同位） | 同位同款 + yield 规则 + 误挂守卫 | ✅ |
| 会话开启 | start(): facadeAvailable → loggedIn/accepted → session_begin → beginTimeline | entry: beginSession（beginTimeline + reload）+ refreshHead（begin 闸门） | ✅ 简化（他的 loggedIn/accepted 是多页面体系用，我们单面板直调） |
| 视频下载事件 | 钩 WCDownloadVideoCDNMgr 三回调（onDownloadFinish/ProcessChange/PlayerStartFail） | 无 | ❌ P4（视频进度条体验） |
| 会话停止 | stop(): endTimeline + session_stop | PanelClose: endSession | ✅ |
| 状态追踪 | traceState（全状态 dump） | HUD（tailStatus/loadStatus：ON z%d r%ld +%lld行/到底/翻页中） | ✅ 我们更细（悬浮窗实时） |
| 屏蔽同步 | syncHiddenUsers + verifyHiddenUser_request_attempt_ | 无 | ⚪ 按需（屏蔽体系未做） |

## 01_拉新与翻页（核心差异区，已收敛）

| 项 | 他 | 我们 | 判定 |
|---|---|---|---|
| refreshHead 防重入 | refreshingHead 标志 | gRefreshingHead + **12s 双路解除**（完成事件+超时） | ✅ 我们更细 |
| 会话自愈 | !began → start()（完整序列） | !gSessionBegan → beginTimeline + reloadTimelineDataItems | ✅ 同构 |
| **head 前的 begin** | **无**（refreshHead 全文实证：只 Call updateTimelineHead，不动活会话） | **已修正**：head 前无脑 begin 会作废引擎翻页状态（窗口重置→重爬几千条根因，现已改为仅 !gSessionBegan 才 begin） | ✅ 修正后同构 |
| 拉新后推送 | onChanged → reload → bridge 增量 | reload（同步数据立即可见）→ pushNowFromSession 显式推（147 日志：timer 防抖失联教训）+ onChanged 防抖第二波 | ✅ 双波比他单波更稳 |
| 翻页守卫 | exhausted / limit / tail_blocked / loadingTail 串行 | gTailInFlight 串行 + 1s 最小间距 + accepted 检查 | ✅ 同构 |
| **翻页触发节奏** | requestTimelineMore 循环主动重发、不等滚动（历史：固定节拍/被动重试/3 轮退避全失败过，现行=持续追问） | **tailTick 状态机：inFlight 串行 + 0.3s 核对链（27×0.3=8s 看门狗）+ 涨即 0.5s 续轮 + 零增长 2s 续追 + 30s 到底待机** | ✅ 同构且我们的核对链更显式 |
| **真到底判定** | onNoMoreTimelineData 回调 | **tailAtServerEnd：引擎最底条 itemID == 累积层最旧行 id**（不依赖回调，结构判定） | ✅ 我们更鲁棒 |
| 翻页超时兜底 | — | watchTailRound 27×0.3s 零增长 → 超时 reload 兜底一跳 | ➕ 我们独有 |
| tail 供给深度 | 微信引擎窗口（翻页持续增长） | 同（141 实证 10→50；accumulation 层保证不回退） | ✅ |

## 02_JS桥与推送

| 项 | 他 | 我们 | 判定 |
|---|---|---|---|
| JS 消息入口 | didReceiveScriptMessage 33.8KB（action 分发：refresh/more/seen/scrolling/detail/emoji/follow/authorChat/authorProfile/cacheManager/customizeHeader/gallery/video/publish/openAlbum/myMoments/native/restore/assetMiss/tokens/visible/id/ids） | didReceiveScriptMessage（back/more/publish/inbox/refresh）+ Bridge 行级 diff | ✅ 动作集我们已覆盖数据链所需；他的 emoji/author 系是功能增强 |
| 推送协议 | evaluateJavaScript（bridgeGeneration 增量） | **行级 diff patch（upsert/remove/order + 纯前置追加省 order）** + **miosnap:// 流供数（JS boot fetch 零脚本编译）** + didFinish 双保险（rev 去重） | ✅ 我们更优（miosnap 省 100-300ms 编译开销） |
| 空推送防护 | — | 空仓保护 + stale 翻转 + 纯前置判定 | ➕ |

## 03_媒体管线

| 项 | 他 | 我们 | 判定 |
|---|---|---|---|
| 注册 | exportImage：pendingExports containsObject 去重 → mediaQueue 入队 | registerLocalPath：**就绪门槛（1KB 占位闸门）** + MD5 稳定 key + 双层注册表（mem+disk）+ 1s 合并落盘 | ✅ 我们多占位闸门与持久层 |
| 导出 | 后台块：读源 → JPEG(0.999) → fileExists → writeToFile root/<key> | 后台拷贝 stablePath（**格式归一 JPEG0.999 修 HEIC 黑图**） | ✅ 同构 |
| 服务 | wcm:// scheme：base62 解码 → decodeQueue 异步 → scale/bounds → activeTasks 去重 | mioimg:// scheme 同步 serve + resolveKey 文件校验 | ⚠️ 他异步+去重（大图更顺滑）；我们同步（小图实测无感） |
| 就绪门槛 | renderKeys（未就绪媒体不进 JS 行） | mediaPending/mediaEpoch（**补图推进：epoch 变了强制重映射**）+ row.img 空 = 文本卡先出 | ✅ 同构 |
| 缺失兜底 | cf_assetMiss 处理链 | imgCdn 回落（row.imgCdn + JS onerror） | ✅ 等价 |
| 视频封面 | — | **只取封面两路**（pathForData/HdData 返回 mp4 本体，按 JPEG 解码必败——已排除） | ➕ 我们独有陷阱规避 |

## 04_页面装配

| 项 | 他 | 我们 | 判定 |
|---|---|---|---|
| WebView 配置 | WKWebView + moments 消息注册 + 自有 scheme | 同构（mioimg + miosnap 双 scheme） | ✅ |
| 分段控件 | categories（initWithItems） | 全部/赞过我/评论过我 | ✅ |
| 手势 | swipeCategory 滑动切分类 | 滑动手势（gestureRecognizerShouldBegin 等） | ✅ |
| 刷新控件 | refreshControl showLoading/endRefreshing | 同构 | ✅ |

## 05_动作处理器

| 项 | 他 | 我们 | 判定 |
|---|---|---|---|
| 查看原帖 | openNativeDetail_（WCTimelineRouterHelper 直跳） | 通知面板 → 关面板回原生（兜底） | ⚠️ 直跳需 WCDataItem 实例链，现走通知兜底（体验差一步） |
| 看图 | openGallery_ / openVideo_ | 面板内查看 | ✅ |
| 关注/作者 | toggleFollowing_ / authorChat / authorProfile | 无（JS 提示条阶段） | ⚪ 按需 |
| 缓存管理 | openCacheManager | 设置页入口 | ✅ |
| 发帖 | publish → host openAlbumAndPublish | 同款 duck-typing | ✅ |

---

## 总结

### 已同构（主链无缺失）
00 安装/会话/入口 ✅ ｜ 01 拉新/翻页/到底判定/超时兜底 ✅ ｜ 02 JS 桥/增量推送/供数方式（我们更优）✅ ｜ 03 媒体就绪门槛/转码/自有存储/回落 ✅ ｜ 04 装配 ✅

### 我们独有（➕）
12s 双路防重解除 ｜ 翻页超时 reload 兜底 ｜ tailAtServerEnd 结构性到底判定 ｜ 空仓保护 ｜ 纯前置省 order ｜ miosnap 流供数 ｜ 视频封面陷阱规避 ｜ HUD 诊断

### 待补（4 项，按优先级）
| # | 项 | 位置 | 量 |
|---|---|---|---|
| 1 | **updateTimelineHead 返回值（accepted）未检查**——被拒不知情；WCM 用它做 trace 和重试判定 | MioDualTimelineStore.refreshHead | 1 行 + 日志 |
| 2 | openNativeDetail_ 直跳（现走通知兜底，体验差一步） | 需 WCDataItem 实例链 | 中 |
| 3 | mioimg 异步 serve（decodeQueue 式；大图多图场景更顺滑） | MioDualSchemeHandler | 小 |
| 4 | 视频下载进度联动（WCDownloadVideoCDNMgr 三回调） | P4 体验 | 中 |

### 独立性终审状态
零 WCMoments 代码关联（WCFacade 原生实证 + 依赖审计）✅——**待一次"禁用 WCMoments 实测"跑 9 环清单即终审闭环**（无 WCMoments 独立运行验证方案.md）。