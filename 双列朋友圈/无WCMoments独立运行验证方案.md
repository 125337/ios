# 无 WCMoments 独立运行 · 验证方案

> 目标：卸载/禁用 WCMoments 插件后，Mio 双列朋友圈的全部功能不受影响。
> 理论依据：我们调用的 10 个 WCFacade 方法全部在 8.0.78 原生头文件中声明（非 WCMoments 运行时添加）。
> 但理论必须实测——WCMoments 装着时它的钩子可能在"帮"某些环节转动，禁用后才暴露真实依赖。

---

## 一、理论依据（头文件核对清单，全部原生 ✓）

| 我们调用 | WCFacade.h/WCTimelineMgr.h 行号 |
|---|---|
| beginTimeline / endTimeline | L421 / L422 |
| reloadTimelineDataItems | L426 |
| updateTimelineHead / updateTimelineTail | L435 / L437 |
| countOfTimelineDataItem / getTimelineDataItemOfIndex: | L429-431 区段 |
| getDataItemByID: | L485 |
| getAllMessages | L563 |
| getCache / firstCachedItemID / updateDataHead / updateDataTail（timelineMgr） | WCTimelineMgr.h L79-83 |
| onTimelineDataChangedWithAdded:andChanged:andDeleted:（hook 目标） | L415 |

## 二、操作步骤

1. 锤子助手/插件收纳 → **禁用 WCMoments 0.6.49**（不卸载，便于恢复对照）
2. 杀微信后台 → 重启
3. 按第三节清单逐环验证，全程抓 MioPlugin.log

## 三、逐环验证清单（每环的日志判据）

| # | 环节 | 操作 | 通过判据（日志/屏幕） |
|---|---|---|---|
| 1 | facade 获取 | 冷启动 | 无 "facade nil" 日志；[Probe] countOfTimelineDataItem 有值 |
| 2 | 会话开启 | 进发现页（入口预热） | [Sess] beginSession: beginTimeline OK |
| 3 | 本地库重载 | 同上 | reloadTimelineDataItems OK count 0->N（N>0） |
| 4 | 网络拉新 | 同上（refreshHead） | head sent → [Evt] 触发 → rows 增长 |
| 5 | 面板直读 | 点双列 | 快照或 live 数据上屏（不空白） |
| 6 | 事件驱动 | 好友发新帖/自己换设备发 → 等 30s | [Evt] 触发 → rows 增长 → patch 上屏 |
| 7 | 翻页 | 滚到底 | loadTail → upsert 旧帖 |
| 8 | 媒体 | 观察图片/视频 | 破图率与装 WCMoments 时相同（imgCdn 回落生效） |
| 9 | 铃铛页 | 点铃铛 | getAllMessages 有数据（原生方法，预期通过） |

## 四、已知风险点与兜底（验证时重点盯）

### 风险 1：事件回调的触发依赖（最大未知）
`onTimelineDataChangedWithAdded:...` 是 WCFacade 的**委托方法**——微信调它可能需要
原生朋友圈页活跃（页面把自己注册为数据源观察者）。无原生页时可能不触发。
判据：验证 #6——好友发帖后 [Evt] 是否触发。
兜底（若不触发）：恢复 3s 轮询（Bridge enablePollingFallback 已有现成实现），
或入口预热后定时 refreshHead（发现页可见期间每 30s 一次）。

### 风险 2：accepted 门
updateTimelineHead 返回 accepted（WCM refreshHead 反编译实证读返回值）。
无原生页上下文时可能返回 NO。
判据：[Sess] head sent, accepted=? 日志。
兜底（若 NO）：head 前先 reloadTimelineDataItems + beginTimeline（现有 beginSession 已含）。

### 风险 3：缩略图下载时序
新帖缩略图由原生页渲染时下载；无原生页时新帖图可能占位。
判据：验证 #8——新帖图片是否破图（旧帖应正常）。
兜底：imgCdn 回落（已实现）。

## 五、验证结果记录

（测试后填写：每环 通过/失败 + 日志摘录）