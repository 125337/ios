# MsgMerge BubbleBox 架构重构设计（内部资料，禁止提交构建）

> 反编译实证来源：BubbleBoxExport（Ghidra 导出，2026-10-17 侦察）

## 一、BubbleBox 架构实证结论（侦察定论）

### 1. Hook 面（method_setImplementation，安装器 FUN_0044bfbc）
共 8 个替换函数（_bbhooks_fresh.txt）：
| 函数 | 替换的选择器 |
|---|---|
| FUN_0045be70 | initWithViewModel: |
| FUN_00456650 | layoutInternal |
| FUN_00464c44 | layoutSubviews |
| FUN_0046313c | contentTextSize?（脚本命名带 ?，实际在做内容文字着色，引用 BubbleBoxMgr.currentBubble）|
| FUN_00461734 | titleTextView |
| FUN_0045316c | statusTips |
| FUN_004508a8 | voiceTimeLength |
| FUN_0045f9a4 | unknown |

**不 hook rowHeight、不 hook isShowChatRoomDisplayName。**

### 2. 数据预写层（核心）
- 分组计算 `+[merge:]`（00303fc4，_efuncs\merge__00303fc4.c）：算完把结果以 NSNumber bool 写到 **param_3（viewModel）** 上：
  `setB_isFirstMessage: / setB_isLastMessage: / setB_isMiddleMessage: / setB_isNeedHideHead: / setB_isCompleted:`（objc_msgSend 直写）。
- **apply 函数 FUN_00414c90**（_funcs\FUN_00414c90_00414c90.c，由 FUN_00425b78 两处调用）：遍历消息集合，每个元素读 model/messageWrap/m_uiMessageType/**revision**，revision 不一致则把 BubbleBox 自己 merge 模型的 joinsPrevious/joinsNext/policy/kind 结果 setB_* 五连写回 viewModel，然后 `resetLayoutCache` + `cellView setNeedsLayout`。
- **b_* 标志 = 唯一事实源**。后续所有钩子（测量/渲染）只读 viewModel 上的标志，零查询、零数组交叉引用、零查询期重建。

### 3. 尺寸计算 FUN_0042ef1c（返回 16 字节 = CGSize）
输入：
- `[param_1 measure:param_2]`（原生测量，经全局函数指针 DAT_004d2140 调用）
- viewModel：isHeadPart / isTailPart / isShowChatRoomDisplayName / isShowHeadImage
- BubbleBoxConfig：mergeLayoutValue（NSNumber→doubleValue）/ layoutSpace / enabledAvatarCard
- BubbleBoxMgr.currentBubble.space
- b_isFirstMessage / b_isLastMessage / b_isCompleted
- 另调 _BBReferAdditionalHeight(param_2)、FUN_00429830、FUN_0042bf78 辅助
输出：合并感知的内容尺寸（供原生 rowHeight 链自然消费）。

### 4. revision 三件套（配置失效机制）
- 全局 revision 计数器 DAT_004a58e0（BubbleBoxConfig.c，约 40 个配置 setter 各自 +1）。
- apply 函数逐元素比对 revision → 不一致才重写标志 + resetLayoutCache。
- 效果：配置变更原子失效，无轮询、无 TTL、无查询期清缓存。

## 二、我们的问题在它的架构下为什么不存在

| 我们的反复出问题的点 | BubbleBox 的解法 |
|---|---|
| 判定钩与 rowHeight 钩引用不同数组对象 → 失效检测恒真 → rebuild 风暴卡死 | 两类钩子都不引用数组：只读 viewModel 关联标志。rebuild+apply 是唯一写方，事件驱动 |
| 异步建数据源 + 原生同步测量 → 首测固化错值 | 预写发生在测量之前（数据到达即 apply），且 apply 同刻调 resetLayoutCache 强制重测 |
| 查询期重建/限频保鲜/清缓存等补丁摞补丁 | 查询路径零重建：读不到标志就回退原生值，绝不触发重建 |
| 配置切换需 reloadData 手动触发 | revision +1 → apply 重写 → resetLayoutCache/setNeedsLayout 原生自刷新 |

## 三、我们的落地方案（保持 v3 语义，换数据管线）

### 保留（不动）
- BBMergeModel 分组规则（shouldJoin/isSeparatorMessage/切片 run 合并）——已验证正确
- rowHeight 钩的补偿语义（v3：非组尾 −sp、组首 N 补偿、切片门控、末片规则）
- isShowChatRoomDisplayName 判定钩（v3 语义：查预写数据翻转昵称显示）
- layoutInternal/updateNodeStatus 渲染钩、日志探针体系、viewDidAppear+200ms begin/endUpdates

### 新增：apply 预写层（BBMergeModel 内）
`rebuild` 完成后同步执行 `applyToNodeArray:`：
1. 遍历节点数组，取每节点 viewModel；
2. 用关联对象写入：`bbMergePos`（NSUInteger：Single/First/Middle/Last）、`bbSliceRole`（单片/首片/中片/末片，从切片 run 得出）、`bbRevision`（NSUInteger）；
3. 全局 revision +1（g_bbRevision）。
**一条消息一个 entry 的 run 语义沿用**：切片所有片写同一 pos，sliceRole 逐片标注。

### 改造：两个消费钩子改为纯关联对象读取
- rowHeight 钩：`vm.bbRevision == g_bbRevision` 才接管；不等 → **直接返回 orig**（禁止触发 rebuild）。切片/组尾/昵称补偿判定全部改读 bbMergePos+bbSliceRole。
- isShowChatRoomDisplayName 判定钩：同样只读 bbMergePos（读不到 → 返回 orig）。
- 删除两个钩子里的 BBMergeModel 查询链、nodeArray 传参、失效检测、限频保鲜、TTL。

### 事件驱动触发点（rebuild+apply 的唯一入口）
1. 进聊天 viewDidAppear（现有）
2. 新消息管线：30ms 轮询确认节点追加 → rebuild+apply → begin/endUpdates（现有 mergeDoReload 语义，但不碰表格操作的路径保留）
3. 滚动加载历史：现有保鲜逻辑改为「发现 None → 限频 0.5s → rebuild+apply」——这是唯一允许由读侧间接触发的地方，且触发的是重建而不是在读路径内重建
4. 配置变更：revision +1（等效 BubbleBox 的 ~40 个 setter）→ 重跑 apply → 现有 reloadData 逻辑

### 删除清单
- MsgMergeHook.m：rowHeight 钩内的 positionForWrap 查询链与数组引用
- 判定钩内的现场查询/数组比对
- BBMergeModel positionForWrap 的查询期保鲜重查逻辑（queryPos None 限频重读）——职责移到事件层
- 所有因查询链而生的幂等守卫/双数据源归一化补丁

## 四、风险与验证
- 首测窗口：apply 在 AsyncOnAddMsg/进聊天时同步完成，先于 WeChat 首测 → 无固化（v3 已实证「同链路同刻」路径可行，本方案把写入时机再提前）
- 验证手段：现有 [NJH]/[NJD]/[CELL]/[Model] 日志全出口对账；重点场景 = 语音收发期、长文本切片滚动加载、配置切换
- 每阶段前台等构建（git.exe + wait_build.ps1 -HeadSha）

## 五、实施顺序
1. BBMergeModel：加 revision + applyToNodeArray（关联对象写入）
2. MsgMergeHook：rowHeight 钩与判定钩切换为关联对象读取，删查询链
3. 事件层：三处触发点收口到「rebuild+apply」单一入口
4. 构建 → 装机 → 日志对账
