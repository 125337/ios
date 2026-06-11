# P1-2 修复方案：统一原始函数指针命名风格

## 问题概述

当前项目中原始函数指针变量存在 **4 种不同的命名风格**，命名不一致增加了代码维护成本。

### 现状

| 风格 | 使用模块 | 示例 | 位置 |
|------|---------|------|------|
| `orig_` | `MessageTimeHook`、`ClearUnreadHook`、`RevokeHook`、`RedEnvelopHook`、`UIPurifyHook`（部分）、`HideAvatarHook`（推断） | `orig_CommonMessageCellView_initWithViewModel` | ✅ 目标风格 |
| `_orig_` | `ListCornerRadiusHook`、`PlaceholderTextHook`、`UIPurifyHook`（部分）、`ChatTopBarHook`、`ProfileCardBgHook` | `_orig_MMTableViewCell_layoutSubviews` | ❌ 需修改 |
| `__orig_` | `UIAttachLayoutHook` | `__orig_...` | ❌ 需修改 |
| `orig_at_` | `AutoTransferHook` | `orig_at_onNewSyncAddMessage` | ❌ 需修改 |

### 完全统计

| 文件 | 当前前缀 | 变量数量 | 操作 |
|------|---------|---------|------|
| `AutoTransfer/AutoTransferHook.m` | `orig_at_` | 7个变量 + 7处调用 | 全部重命名为 `orig_` |
| `ListCornerRadius/ListCornerRadiusHook.m` | `_orig_` | 9个变量 + 25处调用 | 全部重命名为 `orig_` |
| `PlaceholderText/PlaceholderTextHook.m` | `_orig_` | 1个变量 + 3处调用 | 全部重命名为 `orig_` |
| `Layout/UIPurifyHook.m` | `_orig_` | 12个变量 + 15处调用 | 全部重命名为 `orig_` |
| `Layout/UIAttachLayoutHook.m` | `__orig_` | 需检查 | 全部重命名为 `orig_` |
| `ChatTopBar/ChatTopBarHook.m` | `_orig_` | 需检查 | 全部重命名为 `orig_` |
| `HideAvatar/HideAvatarHook.m` | `_orig_` | 需检查 | 全部重命名为 `orig_` |
| `ProfileCardBg/ProfileCardBgHook.m` | `_orig_` | 需检查 | 全部重命名为 `orig_` |

---

## 目标

- 将所有非 `orig_` 风格的原始函数指针统一为 `orig_` 前缀
- 变量名 + 调用处 + `MSHookMessageEx` 注册处全部同步修改

---

## 详细修改步骤

### 通用修改方法

每个文件需要执行相同模式的修改，以 `PlaceholderTextHook.m` 为例：

**Step A**: 修改变量声明

```objc
// 修改前
static IMP _orig_MMGrowTextView_layoutSubviews = NULL;

// 修改后
static IMP orig_MMGrowTextView_layoutSubviews = NULL;
```

**Step B**: 修改调用处

```objc
// 修改前
if (_orig_MMGrowTextView_layoutSubviews) {
    ((void (*)(id, SEL))_orig_MMGrowTextView_layoutSubviews)(self, _cmd);
}

// 修改后
if (orig_MMGrowTextView_layoutSubviews) {
    ((void (*)(id, SEL))orig_MMGrowTextView_layoutSubviews)(self, _cmd);
}
```

**Step C**: 修改 `MSHookMessageEx` 注册处

```objc
// 修改前
MSHookMessageEx(cls, sel, (IMP)hooked_func, (IMP *)&_orig_MMGrowTextView_layoutSubviews);

// 修改后
MSHookMessageEx(cls, sel, (IMP)hooked_func, (IMP *)&orig_MMGrowTextView_layoutSubviews);
```

### 逐文件改造命令

对每个文件，可以使用 `sed` 执行全局替换。**建议逐个模块修改并编译验证**，不要一次性改所有文件。

**PlaceholderTextHook.m**:

```bash
# 变量声明 + 调用 + MSHookMessageEx 全部替换
# 将 _orig_ → orig_
sed -i '' 's/_orig_/orig_/g' PlaceholderTextHook.m
```

**ListCornerRadiusHook.m**:

```bash
# 注意：该文件变量声明是 static IMP _orig_... 风格
# 而有些函数指针声明是 static void (*_orig_...)(id, SEL) 风格
# 统一替换 _orig_ → orig_
sed -i '' 's/_orig_/orig_/g' ListCornerRadiusHook.m
```

**UIPurifyHook.m**:

```bash
# 注意：该文件同时使用 orig_ 和 _orig_ 两种风格
# orig_ 风格的要保留不变
# _orig_ 风格的改为 orig_
# 由于替换后文件名不能有冲突，需要手动处理
# 将 _orig_AppPatCell → orig_AppPatCell
# 将 _orig_SysMsgCell → orig_SysMsgCell
# 等
```

**AutoTransferHook.m**:

```bash
# 将 orig_at_ → orig_
sed -i '' 's/orig_at_/orig_/g' AutoTransferHook.m
```

**UIAttachLayoutHook.m**:

```bash
# 将 __orig_ → orig_
sed -i '' 's/__orig_/orig_/g' UIAttachLayoutHook.m
```

---

## 命名冲突检查

当把 `_orig_` 和 `orig_at_` 都改为 `orig_` 时，需要注意**同一文件内不能有重名变量**。

| 文件 | 改名后可能冲突的变量 | 处理方式 |
|------|---------------------|---------|
| `UIPurifyHook.m` | `orig_separatorColor`（已存在） vs 改名后的 `orig_AppPatCell_...` | 无冲突，命名不相同，因为 `orig_separatorColor` 和 `orig_AppPatCell_initWithViewModel` 不冲突 |
| `AutoTransferHook.m` | 所有 `orig_at_XXX` → `orig_XXX`，可能与 `RedEnvelopHook` 重名 | **不同文件之间不影响**，因为 `static` 变量的作用域是文件级别 |

---

## 代码量变化

| 文件 | 操作 | 行数变化 |
|------|------|---------|
| 所有被修改的文件 | 批量查找替换 | 0行（仅改名字） |

---

## 测试验证

### 功能测试

| 测试用例 | 操作 | 预期结果 |
|---------|------|---------|
| 1. 编译 | 修改后编译项目 | 编译成功，无 Undefined symbol 错误 |
| 2. 完整回归 | 进入所有被修改模块的功能页面 | 所有 Hook 功能正常，无崩溃 |

### 每个模块的回归测试

| 文件 | 受影响功能 | 验证方法 |
|------|-----------|---------|
| `AutoTransferHook.m` | 自动转账回复 | 触发自动转账 → 观察自动回复 |
| `ListCornerRadiusHook.m` | 列表圆角 | 进入聊天列表 → 观察 Cell 圆角 |
| `PlaceholderTextHook.m` | 聊天输入框占位符 | 进入聊天 → 输入文字 → 观察占位符 |
| `UIPurifyHook.m` | UI 净化功能 | 打开 UI 净化功能 → 观察界面效果 |
| `UIAttachLayoutHook.m` | 附件布局 | 发送图片/文件 → 观察布局 |
| `ChatTopBarHook.m` | 聊天顶部栏 | 进入聊天 → 观察顶部栏 |
| `HideAvatarHook.m` | 隐藏头像 | 打开隐藏头像 → 观察聊天界面 |
| `ProfileCardBgHook.m` | 资料卡背景 | 进入资料卡 → 观察背景图 |

### 推荐修改策略

1. **每次只改一个文件**
2. **改完后立即编译**
3. **编译通过后测试该文件对应的功能**
4. **确认无问题再改下一个文件**
5. **最后做全功能回归测试**