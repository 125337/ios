# WeChatPlugin UI 代码体积优化方案

> 当前 38 个编译文件中，UI/Settings 代码约 **2,900 行，占 33%**。

---

## 一、当前 UI 代码分布

| 分类 | 文件 | 行数 | UI占比 | 主要问题 |
|------|------|------|--------|----------|
| **UI净化Hook** | UIPurifyHook.m | 388 | 100% | 🟡 SysCell/PatCell 两组 5连Hook 完全相同 |
| **格式编辑器** | MessageTimeFormatEditorVC.m | 368 | 60% | 🔴 与 RevokeFormatEditorVC 98% 结构相同 |
| | RevokeFormatEditorVC.m | 261 | 50% | 🔴 与 MessageTimeFormatEditorVC 98% 结构相同 |
| **Setting VCs** | SettingRedEnvelopController.m | 184 | 70% | 🟡 buildUI 开头结尾部分重复 |
| | SettingGeneralFunctionController.m | 130 | 70% | 🟡 buildUI 开头结尾部分重复 |
| | SettingMessageTimeController.m | 129 | 70% | 🟡 buildUI 开头结尾部分重复 |
| | SettingRevokeController.m | 86 | 70% | 🟡 buildUI 开头结尾部分重复 |
| | SettingController.m | 187 | 50% | ✅ 父类 |
| **WP*VC 子页** | WPUIVC.m | 104 | 80% | 🟡 14 项导航，13 个 noop 占位 |
| | WPOtherVC.m | 104 | 80% | 🟡 含 16 行 reLog 死代码 |
| | WPAboutVC.m | 110 | 80% | 🟡 含 16 行 reLog 死代码 |
| | WPBackupVC.m | 133 | 80% | 🟡 含 16 行 reLog 死代码 |
| | WPUIPurifyVC.m | 94 | 80% | 🟡 6 个开关配置 |
| **主入口+分类** | SettingCategoryController.m | 582 | 60% | 🟡 含 16 行 configLog 死代码 |
| | SettingEntryHook.m | 323 | 30% | 🟡 4 个 open*Helper 函数相同模板 |
| **工具+辅助** | WPCommonUI.m | 134 | 100% | ✅ |
| | WPBorderLayer.m | 91 | 80% | ✅ 已精简 |
| | WeChatTweakGroupSelectsController.m | 217 | 50% | ✅ 重度依赖微信内部类 |
| | TintHook.m | 101 | 30% | ✅ 独立功能 |
| **合计** | **19 个文件** | **~3,660** | | |

---

## 二、优化方案（6 项，按风险从低到高排序）

### 优化 A：删除 4 个死 `*Log` 函数

| 文件 | 死函数 | 行数 |
|------|--------|------|
| `SettingCategoryController.m` | `configLog()` (lines 10-26) | 16 行 |
| `WPOtherVC.m` | `reLog()` (lines 6-22) | 16 行 |
| `WPAboutVC.m` | `reLog()` (lines 5-21) | 16 行 |
| `WPBackupVC.m` | `reLog()` (lines 6-22) | 16 行 |

**风险评估**: 🟢 零风险

| 风险维度 | 评估 |
|----------|------|
| 功能影响 | **无** — grep 确认全仓无任何 `configLog(` / `reLog(` 调用，这些文件已全部改用 `WPLog()` |
| 编译影响 | **无** — 删除 static 函数只在当前编译单元生效，不影响链接 |
| 回退难度 | **极易** — git revert 即可 |
| 受影响功能 | **0 个** |

**预计减少**: **64 行**

---

### 优化 B：合并 SettingEntryHook 的 4 个 open*Helper 导航函数

**当前**: `openUI:`、`openOther:`、`openBackup:`、`openAbout:` 四个方法仅 Helper 类名不同。

> 代码验证：4 个方法体完全相同（均为 12 行），差异仅为 `objc_getClass("WPXXXVCHelper")` 的字符串和 `WPLog` 标签。

**风险评估**: 🟢 低风险

| 风险维度 | 评估 |
|----------|------|
| 功能影响 | **极低** — 提取公共函数后，4 个方法变为一行转发调用，逻辑路径完全相同。需仔细核对类名字符串大小写（已确认：`WPUIVCHelper`、`WPOtherVCHelper`、`WPBackupVCHelper`、`WPAboutVCHelper`） |
| 编译影响 | **无** — 仅同一个 .m 文件内部重构 |
| 回退难度 | **极易** — git revert |
| 受影响功能 | 4 个导航入口（界面定制、其他功能、备份、关于）。验证：各点一遍确保正常 push |
| **失败模式** | 如果 helper 类名拼错 → `objc_getClass` 返回 nil → 日志 `makeVC returned nil` → 页面不跳转，不 crash |

**预计减少**: **~35 行**

---

### 优化 C：删除 WPUIVC.m 的 13 个 noop 占位导航项

**当前**: 14 个导航项，13 个 action 是 `@"noop:"`。

> 代码验证：`noop:` selector 在 `WeChatPluginSwitchHandler` 上 `respondsToSelector:` 返回 NO → `onNavigate:` 无操作。删除不影响 `openUIPurify:` 方法（该方法在同一个文件内的 category 中独立存在）。

**风险评估**: 🟢 低风险

| 风险维度 | 评估 |
|----------|------|
| 功能影响 | **无** — 点击 noop 项当前无任何行为，删除后菜单变短，用户体验轻微改变但无功能影响 |
| 编译影响 | **无** |
| 回退难度 | **极易** — git revert |
| 受影响功能 | 1 个（`界面净化` 导航，保留不变） |
| **注意事项** | 删 items 数组项后，需同时删除 `for` 循环和后面的 `y += cy + 40` 中计算的 `cy` 变量（因为 card 高度变短），否则 scrollView.contentSize 会多出空白 |

**预计减少**: **~25 行**

---

### 优化 D：UIPurifyHook — SysCell/PatCell 5连Hook 提取宏

> 代码验证：两组 hook 的 IMP 函数命名约定完全一致（`hook_SysCell_*` vs `hook_PatCell_*`，`_orig_SysCell_*` vs `_orig_PatCell_*`），宏 token pasting 已验证兼容。

**风险评估**: 🟡 低风险

| 风险维度 | 评估 |
|----------|------|
| 功能影响 | **极低** — 宏是纯文本替换，展开后代码与展开前逐字符相同。Clang 预处理阶段替换，二进制输出不变 |
| 编译影响 | **无** — 编译产物 bit-for-bit 相同 |
| 回退难度 | **极易** |
| 受影响功能 | 2 个 hook 组（撤回提示隐藏、拍一拍隐藏）。直接安装到真机验证这两个开关 |
| **失败模式** | 如果 hook 函数命名不一致 → 编译期报错（链接器找不到符号），不会静默失败 |

**预计减少**: **~30 行**

---

### 优化 E：提取 Settings VC 公共 buildUI 模板 ⚠️ 方案调整

**代码验证后发现的问题**:

```
4 个 VC 的 buildUI 结构对比：
                                   清理段              宽度获取                     起始Y    结尾
SettingRedEnvelopController      subviews+inputFields+masterSwitchKeys  [UIScreen mainScreen]    y=0  self.contentView.frame=... y+40
SettingGeneralFunctionController subviews+inputFields                   [UIScreen mainScreen]    y=0  self.contentView.frame=... y+40
SettingMessageTimeController     subviews+inputFields                   [UIScreen mainScreen]    y=0  self.contentView.frame=... y+40
SettingRevokeController          subviews+inputFields                   [UIScreen mainScreen]    y=0  self.contentView.frame=... y+40
```

| 风险维度 | 评估 |
|----------|------|
| 功能影响 | **中等** — 3 个 VC 可统一提取，但 SettingRedEnvelopController 清理段多了 `self.masterSwitchKeys = [NSMutableSet set];`，不能简单地用统一 beginBuildUI |
| 方案调整 | **放弃完全统一的 begin/end 方法**。改为：仅在 SettingController 父类添加 `endBuildUI:width:`（尾部 2 行），4 个子 VC 开头各自保留自己的清理段 |
| 受影响功能 | 4 个设置页面。验证：每个页面进入退出、开关切换后 rebuild 正常 |
| **失败模式** | 如果 `masterSwitchKeys` 没清 → 切换红包开关时展开态错乱；`contentOffset` 不归零 → rebuild 后 scrollView 位置不对 |

**方案**: 仅提取尾部公共代码，各 VC 开头保持独立（差异太大不宜统一）。

**预计减少**: **~20 行**（从原估 40 行下调）

---

### 优化 F：合并两个 FormatEditorVC → FormatEditorBaseVC 🔴 高收益高风险

> 代码验证：两者 98% 结构相同。差异仅为 6 个方法 + MessageTime 多了 `buildPseudoReadSectionAtY:width:`。

**风险评估**: 🔴 中高风险

| 风险维度 | 评估 |
|----------|------|
| 功能影响 | **高** — 涉及大量代码从子类移到基类，需要确保每个方法的 self 调用在子类/基类上下文中都正确 |
| 编译影响 | **中等** — +1 文件编译项，需更新 build-standalone.yml |
| 回退难度 | **中等** — 可从 git 回退，但改动分散在 3 个文件中 |
| 受影响功能 | 2 个功能（消息时间格式编辑、撤回消息格式编辑） |
| **失败模式分析** | 见下方详细说明 |

**具体失败场景**:

| 场景 | 后果 | 预防 |
|------|------|------|
| `viewDidLoad` 中 `[self buildHelpTableAtY:y width:w]` 在基类被调用，但子类把 `buildHelpTableAtY:` 误删或方法签名错误 | 编译报错（方法签名不匹配）或运行时方法找不到 | 基类声明抽象方法，子类 `#pragma mark - Required Overrides` |
| MessageTime 的 `buildPseudoReadSectionAtY:` 在基类 viewDidLoad 中不应被调用（Revoke 不需要） | Revoke 也显示伪已读段落 | 基类用 `buildExtraSectionAtY:` 钩子，默认返回 y |
| 两个子类的 `saveAction` 调用 `[self saveFormat:]`，但参数类型混淆 | 编译报错 | 统一声明 `- (void)saveFormat:(NSString *)format` |
| `dealloc` 中 `removeObserver` 从子类移到基类 | 无影响，dealloc 总是正确的 | 验证 |
| 键盘通知注册在基类 `viewDidLoad` 中，但子类如果有自己的 `viewDidLoad` 覆盖 | 键盘通知不注册 | 子类不覆盖 `viewDidLoad`，改为重写配置方法 |

**验证要求**:
- 两个格式编辑器分别打开、编辑、保存、关闭、恢复默认值
- 键盘弹出/收起时编辑区不被遮挡
- 真机测试（模拟器和真机键盘行为可能不同）

**预计减少**: **~300 行**

---

## 三、优化总表（含风险）

| # | 优化项 | 涉及文件 | 减少行数 | 风险 | 需真机验证 |
|---|--------|----------|----------|------|------------|
| A | 删除 4 个死 `*Log` 函数 | 4 文件 | **~64** | 🟢 零 | 否 |
| B | 合并 open*Helper 导航 | 1 文件 | **~35** | 🟢 低 | 否 |
| C | 删除 WPUIVC noop 占位 | 1 文件 | **~25** | 🟢 低 | 否 |
| D | UIPurifyHook 5连Hook 宏化 | 1 文件 | **~30** | 🟢 低 | 推荐 |
| E | 提取 buildUI 尾部模板 (调整后) | 5 文件 | **~20** | 🟡 中低 | 推荐 |
| F | 合并 FormatEditorVCs → BaseVC | 3 文件 | **~300** | 🔴 中高 | 必须 |
| **合计** | | **10 文件** | **~474** | | |

---

## 四、执行顺序

| 顺序 | 优化 | 风险 | 理由 |
|------|------|------|------|
| 1 | A：删除死日志 | 🟢 | 零风险，立即可做 |
| 2 | C：删除 noop 占位 | 🟢 | 零功能影响 |
| 3 | B：合并 open* 导航 | 🟢 | 单文件重构 |
| 4 | D：UIPurifyHook 宏化 | 🟢 | 编译产物 bit-for-bit 相同 |
| 5 | E：提取 buildUI 尾部 | 🟡 | 需验证 4 个页面的 rebuild |
| 6 | F：合并 FormatEditorVCs | 🔴 | 需双向真机测试，最后做 |

---

## 五、不接受的风险（红线）

以下场景不能发生，方案已设计保护：

| 红线 | 保护措施 |
|------|----------|
| 删除死日志后编译不过 | grep 预检 + git revert 秒级回退 |
| 合并 open* 后导航失灵 | git diff 检查类名一致性 + 构建验证 |
| FormatEditor 合并后键盘遮挡 | 基类完整保留 registerKeyboardNotifications / kbShow / kbHide |
| FormatEditor 合并后保存逻辑错误 | 子类 saveFormat: 方法独立，基类只转发调用 |
| buildUI 重构后 rebuild 异常 | 只提取尾部 2 行，不改变逻辑流 |