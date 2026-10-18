# Spec：MsgMerge 头像骑气泡 —— XOS 1.5.9 实证一比对齐

## 1. 背景与目标

用户指令：「不行，你去分析xos到底是怎么实现的，对齐他」——废弃此前拍常数/锚定的半成品方案，按 XOS159 反编译实证重建骑行实现。

三个历史病灶的对齐方式：
| 病灶 | XOS 的答案（实证） |
|---|---|
| 组间重叠 | 头像仅悬垂 8pt，吃上一行原生底部空白（~10pt），结构上不可能顶进气泡 |
| 扩行量过大（我们 39pt vs XOS 23pt） | XOS **根本不扩行**——骑行零行高变更，视觉抬升来自头像负 y |
| 左右缝隙不对称（左 20/右 4） | 头像钉固定偏移、气泡保持原生基线（16/5），**无按行计算 → 无不对称可能** |

## 2. XOS 实证模型（反编译精读闭环，全部已验证）

1. **rowHeight 钩（FUN_00099820）**：只收缩不扩张——基础 −10、昵称行再 −13、HeightReduce 可配、下限 30。+3 属 BubbleWrapRefer，与骑行无关。→ **骑行本身零行高变更**。
2. **头像钉位（FUN_00097fa0/981bc/97308 → FUN_000ac078）**：`y = (基准自消伪影) − 8.0 + mesMsgMergeReverseAvatarDownOffset`（±100 钳位），|Δ|>1 才经 CATransaction `setFrame:`。悬垂行顶上方 8pt。
3. **气泡不挪 y**：±GapReduce（群+10/私−10，半值条件）与 −13 调整的作用对象经 helper 消歧确认是**头像视图**（FUN_002959c0 = `getHeadImageView`、FUN_002978a0 = `isHidden`、FUN_002925a0 = `bounds`、FUN_0029e5e0 = `setFrame:`）。
4. **头像显隐（FUN_000abc94）**：按 isSender/isGroup × 4 个 HideAvatar 配置；合并组内非首条消息强制 `setHidden:YES`。
5. **视觉定标**：头像顶(−8) 相对气泡顶(昵称行 16) 抬升 24pt ≈ 双机实测 23pt ✓；无昵称行(5) 抬升 13pt。

## 3. 我方现状（MsgMergeHook.m）

- **measure 层** `repl_CMVM_measure`（L919-987）：骑行组首行 `rideAdd = olRideExpand(cfg, nickRow)` 扩行 —— **废除**。保留 reduce（mmSpacing+mmHeightReduce 组内缩减）路径。
- **渲染层** `applyOwnLayout`（L588-728）：骑行头行头像坐回行顶 y=2、cont 下移 `olRideExpand(cfg)`（L713 **单参调用 vs L576 双参签名，当前编译必炸**）—— 重写。
- **配置** `MsgMergeConfig.h/.m`：`mmAvatarRideDepth`（±100）语义由「扩行偏置」改为「头像下垂偏置」（XOS ReverseAvatarDownOffset 同款）。
- 横向 x 形态（头像 ±3 咬合、cont ±44 钻入、昵称重排头像右侧）为 XOS 探针实证，**保留不动**。

## 4. 变更清单（唯一文件组：MioPlugin/Modules/MsgMerge）

### 4.1 MsgMergeHook.m

**A. 删除骑行锚定 helpers（L569-579）**：`olRideHeadY` / `olRideAnchorC` / `olRideExpand` 整段删除。

**B. applyOwnLayout 头像 y 钉位（L695-699）**：
```objc
// 旧：
f.origin.y = (active && rideOK) ? bHead.origin.y : (f.origin.y + 2.0);
// 新（XOS 实证：悬垂行顶上方 8pt + 可配下垂偏置）：
f.origin.y = (active && rideOK) ? (-8.0 + olClamp(cfg.mmAvatarRideDepth, 100)) : (f.origin.y + 2.0);
```
同步更新 L682-684 注释块（扩行叙事 → 悬垂叙事）。

**C. cont 纵向（L711-713）**：
```objc
double newDY = rideTop ? olRideExpand(cfg) : 0.0;
// →
double newDY = 0.0;   // XOS 实证气泡保持原生基线（16/5）不动；lastDY 还原路径保留（旧版扩行残留自愈）
```

**D. measure 层（L929-981）**：删除 ①骑行扩行整块（L946-969，含 nickRow 判定）；门控改为：
```objc
if (reduce <= 0) return s;
...
BOOL isTail = (pos == MOMergePositionLast || pos == MOMergePositionSingle);
if (isTail) return s;
if (split != 0 && split != 3) return s;
double h = (double)s.height - reduce;
if (h < 24.0) h = 24.0;
```
同步更新函数头注释（L909-917）与文件头自摆范围注释（L548-553）。

### 4.2 MsgMergeConfig.h（及 .m 如有默认值注释）

`mmAvatarRideDepth` 注释改为：骑行头像下垂偏置（XOS mesMsgMergeReverseAvatarDownOffset 同款，±100；0 = 头像悬垂行顶上方 8pt）。

## 5. 保留项（明确不动）

- kOLLastDY 增量管理 + cont y 失效检测（还原路径必需）
- 横向形态：头像 ±3、cont ±44 钻入、昵称重排（L687-690、L701-708）
- 切片行门控（split≠0 不参与骑行 y 变更，维持 +2 咬合）
- isShowChatRoomDisplayName 判定钩、reduce 紧凑路径、BG-DUMP 日志（验证通过后再清理）

## 6. 风险与边界

- 头像悬垂 −8 依赖上一行底部空白 ≥8pt：reduce=0 时原生空白 ~10pt ✓；用户开大 mmSpacing 收缩时可能与上一行气泡轻微贴近——XOS 同等行为（其旋钮亦允许），可后续用 depth 负值回拉。
- 列表首行头像冒进顶部 inset：可接受（XOS 同）。
- 切片行（split≠0）已门控，泡体无缝不受影响。

## 7. 验证步骤

1. 本地语法自检（olRideExpand 删除后无残留引用，L713 炸点消除）。
2. commit + push → GitHub Actions 前台阻塞构建（curl + git credential fill 流程）→ 下载 dist 制品。
3. 用户装机：合并转发页对照 XOS 截图核对——头像悬垂量（~24pt 抬升）、左右一致性、组间不重叠、组内钻入形态不变。
4. 通过后清理 BG-DUMP 日志（单独小改动）。
