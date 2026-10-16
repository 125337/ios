# 消除昵称补偿 · 对齐 BubbleBox 实施步骤（v2）

> 目标：删除 MsgMerge 的昵称补偿链（N 实测/持久化/消费/N 变化 reload），改走「布局阶段前翻转原生昵称显示判定」路线。
> 版本：v2（2026-10-15）。v1 的「测量缓存调整」主路线经复核降级为备选诊断，修订记录见文末。
> 边界：本文档是执行计划。所有实施动作需在后续会话中经明确确认后进行；分析会话不动代码。
> 证据基线：《BubbleBox反编译\BubbleBoxExport\》（一手反编译）、微信头文件（8.0.60/8.0.78）、MioPlugin(69).log（[RH] 原始日志）。索引见第十一节。

---

## 〇、步骤总览（checklist）

- [ ] **P0** 判定翻转探针（第一优先）：swizzle `-[CommonMessageViewModel isShowChatRoomDisplayName]` 对合并组 Middle/Last 返 NO，观察 rowHeight/bgTop/昵称文本是否**稳定**全回收
- [ ] **P0b** 确定性压测：滚动 / 重排 / 重进会话 / 新消息到达后复测，排除 MioPlugin(69).log 里已观察到的「同一分钟 54↔65 波动」类时序依赖
- [ ] **A3** Ghidra 静态补刀：FUN_0042ef1c 调用方导出（BubbleBox 的 frame 应用点，交叉印证用，非阻塞）
- [ ] **B** 决策门：P0 三出口（路线一实施 / 路线一+布局层配合 / 降级 N 常量化）
- [ ] **C** 实施（实验开关 → 判定翻转钩子 → 双算验证 → 删除补偿链，独立提交）
- [ ] **D** 回归验收（五场景 + 三件套）

---

## 一、背景与问题定位（含历史实验时间线）

### 1.1 为什么现在需要昵称补偿

原生微信对群收行：昵称区每行预留（bgTop=16、行高 65；昵称开关关时 bgTop=5、行高 54）。MsgMerge 隐藏组内非首条昵称后需要回收这 11pt，现行做法是 rowHeight 钩子按位置减实测 N。

### 1.2 历史实验时间线（为什么走到今天这一步）

| 提交 | 实验 | 结果 |
|---|---|---|
| 212031c3（10-14 09:48） | 视图层断供：`getNameLabel` 对 Middle/Last 返 nil | 附 [RH] 日志观察 orig 行高 |
| （[RH] 日志期） | `MioPlugin(69).log` 实测（h=orig，diff 已核实） | Middle/Last 的 orig rowHeight **54 与 65 同分钟并存**（pos=3 h=54 多次；pos=4 h=54 与 h=65 相邻出现）——视图层断供的回收**真实但不稳定** |
| 75fc22b7 | 依 [RH] 54 的窗口收窄补偿为仅组首 | 随后观察到间隙不均 |
| e9cb1147 | [CELL] 探针（451245 批次）：**布局阶段仍预留**（bgTop=16） | 补偿扩到组中 = 用「行高再减 + 气泡溢出盖洞」绕过布局层预留 |

**结论**：视图层断供（getNameLabel）是写入链末端，不是判定源；它对 rowHeight 的影响时有时无，且完全不影响布局阶段的 bgTop 预留。补偿是绕开这两个缺陷的 workaround，不是正解。

### 1.3 判定源已被头文件定位（v2 新增，路线一的基础）

`8.0.60微信头文件\WeChat\CommonMessageViewModel.h`（TextMessageViewModel 基类，全体消息 VM 共有）：

```
ivar:    id m_isShowChatRoomDisplayName;          // 存储属性
方法:    - (id)isShowChatRoomDisplayName;          // getter
         - (id)calIsShowChatRoomDisplayName;       // 原生「本行是否显示群昵称」计算方法
         - (id)isShowHeadImage;                    // 头像显示判定（独立标志）
```

8.0.78 同（L72）。**无原生 setter**（头文件与 BubbleBox 反编译均无 `setIsShowChatRoomDisplayName`）。`CContact` 上也有同名判定（会话级设置）。这就是「布局阶段前翻转原生『本行是否显示昵称』判定」的锚点：翻转 VM 级标志/Getter，让原生自己在 rowHeight 与 layoutInternal 两条链上得出「本行无昵称」。

---

## 二、BubbleBox 机制基线（v2 修正表述）

1. **可证实**：BubbleBox swizzle `contentTextSize`（TextMessageViewModel 测量缓存，替换函数 FUN_00456650 调原实现后按合并状态重算，切片感知）；安装器另挂 `initWithViewModel:/layoutInternal/updateNodeStatus/layoutSubviews/titleTextView/statusTips/voiceTimeLength`。
2. **可证实**：FUN_0042ef1c 是 frame 计算器（返回 CGRect；输入 = isHeadPart/isTailPart + 自有 `measure:` + `mergeLayoutValue/layoutSpace/space` + **原生的 `isShowChatRoomDisplayName`/`isShowHeadImage`** + `currentBubble`）——它读取的昵称/头像显示判定是微信 VM 的原生标志（见 1.3），不是 BubbleBox 私有配置。
3. **未证实（诚实边界）**：FUN_0042ef1c 的**调用方与 frame 应用点不在已导出的 52,590 函数集合内**。「BubbleBox 做了 frame 级重排」是合理推断（复刻文档 v1.1 同此解读），但应用代码未导出，不能当作实证引用。
4. **定性修正（v1 → v2）**：BubbleBox 应理解为「测量层调整 + 布局层自有 frame 计算」的双层架构；v1 所述「微信 layoutInternal 从被调整的缓存自洽推导」超出了证据范围，撤回。**但**：rowHeight 层零钩子、getNameLabel/getHeadImageView 零命中、配置无非昵称补偿键——这三条阴性结论不变，它没有 rowHeight 层补偿。

---

## 三、路线一（首选）：VM 判定翻转

### 3.1 原理

对合并组 Middle/Last 行，在**任何布局发生之前**让原生「本行是否显示昵称」判定为 NO：

```
翻转点：-[CommonMessageViewModel isShowChatRoomDisplayName]（swizzle getter，Middle/Last 返 NO）
       ↓ 原生两条链同时读到 NO
rowHeight 链：65 → 54（无昵称行高）
layoutInternal 链：bgTop 16 → 5（无昵称布局分支）
       ↓
全链自洽：无 Δ、无测量、无缓存值调整、无溢出盖洞依赖
```

与历史失败的 getNameLabel 断供的区别：断供在布局期写入链**末端**（label 取用），判定已在布局阶段做完、空间已预留；VM Getter 是**判定源**，先于布局阶段。

### 3.2 P0 探针（决定性实验，先于一切实施）

挂点：`-[CommonMessageViewModel isShowChatRoomDisplayName]`（MRC 工程按现有 getNameLabel 钩子同款模式），条件：`mmEnable` 且 BBMergeModel 位置 ∈ {Middle, Last} → 返 NO，其余透传。

观察项（每 lid 记录，跨滚动/重排/重进会话/新消息到达反复采样）：

| # | 观察项 | 路线一成立标准 |
|---|---|---|
| 1 | orig rowHeight（Middle/Last） | **稳定** 54（不再出现 MioPlugin(69).log 式 54↔65 波动） |
| 2 | bgTop（cell 坐标折算） | **稳定** 5（布局分支跟随，451245 的预留消失） |
| 3 | 昵称文本 | Middle/Last 不绘制；First 正常绘制且行高 65 |
| 4 | First 行 | orig rowHeight 保持 65，无副作用 |
| 5 | 发方行 / Single | 完全不变（对照组） |
| 6 | 头像显示 | 不受昵称标志影响（isShowHeadImage 独立；显隐仍由现有 setHidden 逻辑管） |
| 7 | 分组判定 | senderUser 判定（m_nsFromUsr/m_nsRealChatUsr）与该标志无关，BBMergeModel 位置不受影响（回归确认） |

**判读表（三出口）**：

| P0 结果 | 判定 | 去向 |
|---|---|---|
| 观察项 1-5 全部满足且跨场景稳定 | 路线一成立 | 直接进阶段 C，补偿链全删 |
| rowHeight 稳定回收（54）但 bgTop 仍 16 | 判定源只喂了行高链，布局层另有输入 | 加布局层配合手段（找 bgTop 的判定源，可能在 cellView 侧），或退路线三 |
| rowHeight 不回收（65 持续） | VM getter 不是 rowHeight 的输入 | 路线一判死；退 P1 诊断（测量缓存探针，v1 遗产）或直接路线三 |

**P0b 确定性压测**：成立标准不仅要求「回收」，更要求**跨时序稳定**——这是与 75fc22b7 教训的本质区别（当时把一个不稳定窗口当成了定论）。压测项：快速滚动往复 ×10、新旧消息交替、重进会话、切后台返回。

### 3.3 目标几何（路线一，气泡位置与现行完全一致，行高记账归位）

以群收单行文本（气泡高 37）、mmSpacing=12 为例：

| 行角色 | 现行（补偿式） | 路线一 | 气泡位置 |
|---|---|---|---|
| First | 65−11−12 = 42（气泡 16..53 **溢出行底 11pt**） | 65−12(sp) = 53（气泡 16..53 恰好贴底） | 两者相同 |
| Middle | 65−11−12 = 42（同样溢出盖洞） | 54−12(sp) = 42（气泡 5..42 贴底） | 两者相同 |
| Last | 65（原生） | 65（不翻转，保持原生） | 相同 |
| Single | 65 | 65 | 相同 |

组内间隙两种方案同为 5pt；路线一**消除对「cell 不裁剪 + 气泡溢出」的隐式依赖**（现行 First/Middle 气泡底 53 > 行高 42）。rowHeight 钩子只剩 a) 间距收拢分支。

---

## 四、路线二（备选诊断）：测量缓存探针（v1 主路线降级）

仅当 P0 落入「rowHeight 不回收」出口时启用：挂 `contentTextSize/contentHeight` 对比昵称开关两态，判定洞是否在缓存里。v1 的判读表与设计仍有效，但按 v2 复核结论降位：即使成立，它只能复刻现行溢出视觉并引入新机器（Δ/查表/切片规则/resetLayoutCache 时机），**机器总量不减**，仅在路线一、三都判死时作为最后手段。

## 五、路线三（保底）：N 常量化

rowHeight b) 分支保留但改为探针实测常量（带来源注释），删除 `MsgMergeEngine` 整文件、直测块、N-reload 联动。产物 = 现行视觉 + 一个数字，消灭全部测量机器。若 P0/P1 均不成立，这是终点——「完全无补偿」在此前提下不存在。

---

## 六、阶段 C：实施（路线一成立后）

### C0 原则

实验开关默认 NO；旧路径保留到新路径验证后独立提交删除；每步 CI 绿；先双算对比再目检。

### C1 配置键

`mmFlagFlip`（Bool，默认 NO）——「合并组内非组首行翻转原生昵称显示判定」。

### C2 判定翻转钩子

- 挂点：`-[CommonMessageViewModel isShowChatRoomDisplayName]`（全体消息 VM 基类，覆盖文本/媒体/表情各 VM）；
- 逻辑：orig 先行 → `mmEnable && mmFlagFlip` 且 BBMergeModel 位置 ∈ {Middle, Last} → 返 NO，其余透传 orig；
- 复用现有 `chatNameOfWrap`/BBMergeModel 查表路径（与 getNameLabel 钩子同构）；
- **不写 ivar**（m_isShowChatRoomDisplayName 无原生 setter，KVC 直写 ivar 影响面不可控；getter swizzle 足够且可逆）。

### C3 联动清理

- rowHeight 钩子 b) 分支删除（间距 a) 分支保留）；
- `applyMergeToCellView` ② 内直测块与 ④ N-reload 删除，`lb.hidden = !isFirst` 保留与否视 P0 观察项 3 结果定（若 flag=NO 时原生已不绘制且复用无残留，可进一步简化）；
- `getNameLabel` 断供钩子**退役评估**：判定源翻转后，断供（末端手段）理应冗余；退役需独立 mini 回归（昵称显隐 + 复用残留）。
- `didAppear` 重建 / AsyncOnAddMsg 重排链路保留原样（位置判定依赖不变）。

### C4 双算验证

同一行同时输出「路线一 rowHeight 最终值 vs 现行补偿式值」，采样集 diff ≤ 0.5pt 比例 ≥ 98% 后进入 C5。预期差异：First 行 53 vs 42（行高记账不同、气泡位置相同），判读时按「气泡位置逐一对齐、组内外间隙一致」为验收口径，而非行高数字全等。

### C5 删除补偿链（独立提交）

| 文件 | 删除内容 |
|---|---|
| `MsgMergeEngine.h/.m` | 整文件（`kNickBlockKey`、`+nicknameBlockHeight`、`+reportNicknameBlock:`） |
| `MsgMergeHook.m` | rowHeight **b) 分支**及 First/Middle + split∈{0,1} + @chatroom 条件 |
| `MsgMergeHook.m` | ② 内直测块（`bgTopWithinCell`、`g_plainBgY`、`reportNicknameBlock:` 调用）与 ④ N-reload（`s_lastAppliedN`、`g_mmChatTable`） |
| `MsgMergeHook.m` | `#import "MsgMergeEngine.h"`、静态函数 `bgTopWithinCell` |
| 持久化 | NSUserDefaults 键 `MioPlugin_MsgMerge_mmNickBlockHeight`（残留无害，不迁移） |

回滚 = revert C5 提交；C2 开关 off = 回到现行行为。

---

## 七、阶段 D：回归验收

| # | 场景 | 通过标准 |
|---|---|---|
| 1 | 收发交替连续消息 | 组内间隙均匀 = 目标间距；与 C4 双算基线一致 |
| 2 | 时间行打断 | 断组正常，组外间隙 = 原生 |
| 3 | 长文切片（split 1/2/3 入组） | 接缝 0 空隙；**切片行的 VM 同样走判定翻转，逐片观察无异常** |
| 4 | 微信昵称开关切换 | flag 翻转与全局开关正交，无冲突；First 行昵称随全局开关正常显隐 |
| 5 | 关闭 mmEnable / mmFlagFlip | 全量还原 |
| 6 | 性能 | 判定翻转 getter 在滚动期的调用频次（P0 顺带计数）无可感知卡顿 |

验证三件套照旧：数值对比 → Reveal 帧 → 场景目检。

---

## 八、风险表

| 风险 | 等级 | 缓解 |
|---|---|---|
| VM getter 不是 rowHeight 的输入（P0 出口三） | 中 | 路线三保底（N 常量化）；P1 缓存诊断备用 |
| rowHeight 回收但 bgTop 不跟随（P0 出口二） | 中 | 定位布局层 bgTop 判定源后组合；或退路线三 |
| 回收不稳定（重演 MioPlugin(69) 的 54↔65 波动） | 中 | P0b 确定性压测前置，不稳定即不算成立 |
| flag 兼作他用（其他 UI 读同一标志） | 低 | P0 观察项 6/7 专项；getter 条件限定 Middle/Last 且 mmEnable |
| 切片行误翻转 | 低 | 与 getNameLabel 钩子同构的查表条件；回归场景 3 专项 |
| 双版本差异 | 低 | 8.0.60/8.0.78 头文件均已确认三件套存在；双版本真机各跑 D-1/3 |

---

## 九、与 v1 的差异（修订记录）

1. **主路线更换**：v1 主推「contentTextSize/contentHeight 测量缓存调整」→ 降级为路线二（备选诊断）。理由（外部复核采纳）：它只能复刻现行溢出视觉，机器总量不减（Δ 常量 + 位置查表 + 切片规则 + resetLayoutCache 时机），且 bgTop=16 不跟随的既定事实使 11pt 洞依然存在、靠气泡溢出掩盖。
2. **新增路线一（VM 判定翻转）**：头文件新证据（m_isShowChatRoomDisplayName ivar + calIsShowChatRoomDisplayName，8.0.60/8.0.78 双版本确认）使「布局阶段前翻转原生判定」有了明确锚点；P0 探针前置为第一实验；A1 判读表补上第三去向（洞 = 昵称显示判定的输出）。
3. **BubbleBox 表述修正**：「微信 layoutInternal 从被调整的缓存自洽推导」撤回（frame 应用点未导出，属推断）；改为「测量层调整 + 布局层自有 frame 计算（应用点未导出）」的双层表述；FUN_0042ef1c 读取的 `isShowChatRoomDisplayName/isShowHeadImage` 经头文件核实为**微信原生 VM 标志**（非 BubbleBox 私有配置）。
4. **历史数据补注**：MioPlugin(69).log 的 [RH] h=orig 语义经 212031c3 diff 核实；Middle/Last orig 在同一分钟内 54/65 并存 = 视图层断供回收不稳定的一手记录，写入 1.2 时间线。

---

## 十、证据索引（复核用）

| 结论 | 证据位置 |
|---|---|
| 判定三件套（ivar/getter/cal）为微信原生 | `8.0.60微信头文件\WeChat\CommonMessageViewModel.h` L5/L61-63；8.0.78 L72；`CContact.h` 同名判定 |
| 无原生 setter | 两版头文件与 `BubbleBox反编译\BubbleBoxExport\` rg 零命中 `setIsShowChatRoomDisplayName` |
| BubbleBox 无 rowHeight 层钩子、无 getNameLabel/getHeadImageView | `_funcs\FUN_0044bfbc_0044bfbc.c`（安装器 swizzle 清单）+ 全量 rg 零命中 |
| BubbleBox 测量层调整 + 切片感知 | `_bbhooks_fresh.txt` FUN_00456650（DAT_004d22f8+PTR_s_contentTextSize 成对；parentModel/subViewModels/lastObject/isLongSplitMessage） |
| FUN_0042ef1c 读原生 VM 显示标志 | `_funcs\FUN_0042ef1c_0042ef1c.c` L1046（`_objc_msgSend(param_2, PTR_s_isShowChatRoomDisplayName)`） |
| FUN_0042ef1c 应用点未导出 | 全量 rg 无调用方（导出统计含 4,583 skipped / 12 failed） |
| 视图层断供回收不稳定 | `MioPlugin(69).log` L110-125、L232-276（[RH] h=orig，212031c3 diff 核实语义）；Middle/Last orig 54 与 65 并存 |
| 布局阶段预留不随断供消失 | [CELL] 探针 451245 批次（e9cb1147 注释）；《昵称空间测量问题与修复方案.md》（开关两态 65/16 ↔ 54/5） |
| 配置无非昵称补偿键 | `_full_class_method_index.txt` BubbleBoxConfig 228 方法 |
| 切片模型 | 探针 #32/#34、《消息合并探针标杆.md》 |

> 附注：外部复核引用的「判死定论原话」（唯一可行的昵称空间消除方向为在布局阶段前翻转原生判定……）未能在仓库现有文档、记忆备份（截至 10-12）与 AutoClaw 记忆中定位到原文；若可提供出处，应归档进本文档 1.2 时间线。该方向本身已由第十节头文件证据独立支撑，不依赖该引文。
