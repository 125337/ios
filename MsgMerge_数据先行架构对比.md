# MsgMerge × BubbleBox 数据先行架构对比

> 背景：滚动加载历史批次时表格整体跳动（探针实锤：微信先原生测量 → rebuild 后 pos 翻转 → 行高突变）。
> 决策：全面重构为 BubbleBox 的「数据先行」架构——分组判定在微信建 vm / 测量之前完成。
> 重构提交：`cc7641ab`（净删 112 行），探针已实测验证。

## 一、总览对照

| 维度 | BubbleBox（反编译实证） | MsgMerge（我们，重构后） | 优缺点对比 | 验证状态 |
|---|---|---|---|---|
| **分组时机** | 消息进数据流时（测量前）：`merge:` 把 b_isFirstMessage / b_isMiddleMessage / b_isLastMessage / b_isNeedHideHead 写进自家 BBNewEntry，微信建行首测前标志已就位 | 三路全部测量前：① 新消息 = AddMsg 管道内 note 直写（`BBMergeModel.m` noteIncomingMsgLocalID）；② 历史 = 滚动钩预扩 32 条（extendHistoricalFromMinLid）；③ 兜底 = posForLocalID 的 DB fill（同步发生在测量返回之前） | **他**：✅ 判定与数据流同源同拍——进流即判，新/历史全场景走同一条管道，时序天然齐整／❌ 管道点混淆不可还原，版本升级易碎。**我们**：✅ 新消息在更早的服务层管道直写 + DB fill 双保险，不怕版本升级／❌ 三路时序不齐（历史判定压线首测前），齐整性靠设计纪律保证——最终效果等价 | ✅ 探针 2.5 万次查询全谱 1/2/3/4，零 None |
| **微信 vm 重建** | entry 层不依赖 vm（BBNewEntry 自持） | entry 存 `_index`（localID→entry），读侧按 wrap 的 localID O(1) 查表，vm 死活无关 | **他**：✅ 彻底解耦／❌ 需自建对象层。**我们**：✅ 同样解耦 + O(1) 索引 + 切会话 clear 防跨会话撞号／基本无劣势（同构方案） | ✅ 滚动全程 vm 频繁重建，查询恒真 |
| **滚动加载历史** | 首测即合并，零突变（updateAllNodes:scroll: 带 scroll 标志区分滚动场景，滚动中零可见变更） | changed 只统计「屏上已渲染 lid 的 pos 实变」，新 lid 不计（首测查表即真）→ 滚动中可见刷新恒 0 | **他**：✅ 场景控制精细（显式 scroll 分支）／❌ updateAllNodes 2700 行，复杂度集中。**我们**：✅ 场景语义内化进 changed 计数，零分支复杂度、天然幂等／❌ 预扩量固定 32 条（超大批次退 fill 兜底，无害） | ✅ 探针实锤：滚 ~150 条历史，changed>0 **零次**（旧架构同场景 changed=17 → 洗缓存 → 跳） |
| **对微信的侵入** | 改数据流：管道 hook + 渲染层垫片（updateNodeStatus/layoutInternal/initWithViewModel: 等全是 hook 垫片），selector 全混淆运行时解密——**版本脆弱**，微信升级必碎 | 钩微信**自有稳定方法**：CMessageMgr AddMsg/AsyncOnAddMsg/onServiceInit（KeywordAlert/RedEnv 等成熟插件同钩佐证）+ bbSwap 公共基类单点渲染钩；零混淆 selector、零节点数组改写（prune 已删，连 m_arrMessageNodeData 都不再写） | **他**：✅ 引擎完全自治、数据流自控／❌ 每个微信版本都要重新逆向 selector，维护成本极高；垫片面广。**我们**：✅ 钩点十年稳定、有让位机制（impIsForeign）防插件冲突／❌ 依赖微信方法签名存在性（均为长期稳定 API，风险低） | ✅ 版本升级面比 BubbleBox 小一个量级 |
| **工程复杂度** | 2700 行引擎（BubbleMessageMerge 16 个类方法）+ 管道垫片（_merge_callers.c 安装器 ~1500 行） | 全模块 ~1700 行：MsgMergeHook.m ~1050 + BBMergeModel.m ~480 + Entry/Config；**零管道垫片** | **他**：✅ 功能全（自有序列、时间节点控制、滚动策略）／❌ 4200 行认知与维护成本。**我们**：✅ 体量小一半、五层单向依赖、可全量读审／❌ 是功能子集（无自建序列重排——但我们的需求也不需要） | ✅ 净删 112 行完成本次重构 |
| **时间行处理** | 零干预（全二进制无 ChatTime 引用），微信行即其断组信号（节点数组遍历天然断开） | DB 判定 + 时间行断组修正（applyTimeNodeBreaks）：refreshIndex 扫 nodeArray 发现矛盾行（前后消息被 DB 判成一组）→ 以行为权威切口修正两侧 entry pos（行下变组首恢复头像、行上变组尾），行保留原生显示 | **他**：✅ 判定与行天然一致（判定就发生在含行的数组上）／❌ 无法脱离数组判定。**我们**：✅ 判定服从微信行，矛盾根除；修正器可插拔（删掉即退回纯 DB 判定，不崩）／❌ 依赖 nodeArray 结构（稳定数据层，vm 无关） | ✅ 「06:34 图片无头像」矛盾场景实测修正 |
| **邻接判定数据源** | findValidMsg:startId:direction:（±1 步进跳空洞上限 15）查自己的数据 | DB 单路径：直调 4 参 GetMsg:LocalID:hasError:needOriginContent:（不经任何 hook，@try 接坏消息），findValidMsg 同构步进（`dbFindValidMsg`） | **他**：✅ 查自家序列，无外部依赖／❌ 序列完整性靠引擎自己维护。**我们**：✅ 存储层恒完整、直调不被 hook 的版本（查询栈零跳板，@try 可接坏消息）／❌ 依赖 mgr 捕获时机（onServiceInit 早捕获已消灭窗口） | ✅ 深部历史/已删空洞场景一致 |
| **合并判定规则** | isPrevSameUser / isNextSameUser / isNeedInsertTimeNode（299s 窗） | shouldJoinDB：senderUser 归一化（群聊用 m_nsRealChatUsr）+ 可合并类型 + 分隔符/新邀请断组 + 299s 窗——同语义 | **他**：✅ 判定极简（只查 sender+时间）／❌ 类型/分隔策略不可配置。**我们**：✅ 同窗语义 + 可配置分隔符（mmSepMedia/mmSepEmoticon/mmMode）／❌ 判定链稍长（可合并/分隔/邀请三层闸） | ✅ 语义零漂移 |

## 二、关键机制细节

### 2.1 数据先行的三个时机（BubbleBox vs 我们）

| 场景 | BubbleBox 管道点 | 我们的对应物 |
|---|---|---|
| 新消息发出/收到 | `addNewMessage:nodes:`（0031c158）管道内同步 merge: | CMessageMgr `AddMsg:MsgWrap:` / `AsyncOnAddMsg:MsgWrap:` 钩内同步 `noteIncomingMsgLocalID:`（含上一条 pos 修正 Last→Middle / Single→First） |
| 历史批次加载 | `scheduleUpdateNodes:scroll:` → `updateAllNodes:scroll:`（0030dfb8，2700 行） | scrollViewDidScroll 100ms 限频 → `refreshIndexWithNodeArray:`（屏上 fill + 向 −1 方向预扩 32 条，`_coveredMinLid` 防重复步进） |
| 意外 miss | —（管道全覆盖） | `posForLocalID:` DB fill 兜底（结果缓存进索引）+ 读侧 0.15s 限频保鲜 |

### 2.2 刷新语义（BubbleBox scroll 标志的等效实现）

BubbleBox 用 `updateAllNodes:scroll:` 的 scroll 参数区分场景，滚动中不做可见刷新。
我们把它内化进 changed 计数：

```
changed = Σ（lid ∈ 屏上渲染集合 且 (此前无 entry 且现 pos≠None) 或 pos 值翻转）
```

- 新 lid 进索引不计 → 微信建行首测查表即真，无需事后刷新
- 滚动场景 fill/预扩先行 → changed 恒 0 → 零可见动作 → 零跳动
- 切会话/冷启动自愈路径：DB 新捕获 → invalidateRebuildGuard → 重算时 None→有值 计入 changed → 一次刷新自愈（探针见 [refresh#122] changed=17，预期内）

### 2.3 我们没有采用 BubbleBox 的部分及原因

| BubbleBox 做法 | 不采用原因 | 我们的替代 |
|---|---|---|
| 管道 hook 垫片（selector 运行时解密） | 版本脆弱 + 1500 行安装器维护成本；管道 hook 点无法静态还原 | 钩微信自有管道方法（签名稳定，社区插件佐证） |
| BBNewEntry 对象层 | 我们已有同构 entry（BBMergeEntry）+ O(1) 索引，且跨 vm 重建恒真 | BBMergeModel._index |
| 时间行零干预 | 半采用（原 prune 是跳动元凶，废弃正确；但零干预会留「DB 判一组、微信却插行」的矛盾行——组尾无头像观感错乱） | 行断组修正（applyTimeNodeBreaks）：矛盾行切口修正 pos，哲学同 BubbleBox「行=断组符」，但实现是可插拔修正器而非数组判定 |

## 三、探针实测（2026-10-17，frida_mmdbg.js v3，pid=3618）

| 观察项 | 旧架构（探针实锤病灶） | 新架构实测 |
|---|---|---|
| 滚动加载历史 ~150 条 | rebuild changed=17，entries 58→77，行高突变整体跳 | **changed>0 零次**，pos 查询全谱命中零 None |
| 切会话 | — | [clear] hit → 首屏 fill changed=17（自愈路径，预期内，非滚动中） |
| 管道 note | — | ret=0 全部快速路径命中，rcIn 3↔5 为微信 autorelease 正常波动 |
| 查询规模 | — | 25,400+ 次 posForLocalID，O(1) 查表，无卡顿 |

## 四、涉及文件

- `MioPlugin/Modules/MsgMerge/BBMergeModel.h/.m` — 数据先行增量索引（refreshIndexWithNodeArray / fillEntryForLid / extendHistoricalFromMinLid）
- `MioPlugin/Modules/MsgMerge/MsgMergeHook.m` — 钩子层（bbSwap 单点；prune 链已删净）
- `scripts/frida_mmdbg.js` — 验证探针 v3（refreshIndex changed / posForLocalID / noteMessageManager / clear）

## 五、铁律（不变，违反即崩）

- ✗ 预写标志到 vm —— 随微信整批重建 vm 丢失 → 测量读 None → 集体闪回（89 号日志实证）
- ✗ 按类扫描补挂 —— WAApp 小程序闪退环宿主（零类扫描，基类单点）
- ✗ 查询路径挂钩 —— MSHook trampoline 无 unwind info，异常展开必 terminate（.ips 三轮实证）
