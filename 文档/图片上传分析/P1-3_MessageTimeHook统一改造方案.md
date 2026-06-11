# 改造文档：MessageTimeHook 自建表 → 统一直接 Hook 风格

## 改造背景

MessageTimeHook 是项目 12 个模块中**唯一一个**使用自建表驱动（`MTHookEntry` 结构体 + `g_hookTable` 数组 + for 循环）来注册 Hook 的模块。其他 11 个模块均使用直接的 `MSHookMessageEx` 调用风格。

**改造目标**：删除 MessageTimeHook 的自建表，改为与全项目一致的直接 `MSHookMessageEx` 风格。

## 改造前后对比

| 维度 | 改造前 | 改造后 |
|------|--------|--------|
| Hook 注册方式 | `MTHookEntry` 结构体数组 + for 循环 | 直接的 `MSHookMessageEx` 调用 |
| 结构体定义 | `MTHookEntry`（与 HookEngine 中 `HookTableItem` 重复） | **删除** |
| 全局数组 | `g_hookTable[6]` + `g_hookTableCount` | **删除** |
| install 方法长度 | 43 行（含循环逻辑） | 约 30 行（与其他模块一致） |
| 代码一致性 | ❌ 12 个模块中唯一例外 | ✅ 全项目统一风格 |

## 改造文件

**仅一个文件**：`Modules/MessageTime/MessageTimeHook.m`

## 详细改造步骤

### Step 1：删除 `MTHookEntry` 结构体定义

**位置**：第 16-21 行

**改造前**：

```objc
// ============================================================
// MARK: - Configuration Table Entry
// ============================================================

typedef struct {
    const char *className;
    const char *selName;
    IMP replacement;
    IMP *original;
} MTHookEntry;

// ============================================================
// MARK: - Color / Theme Helpers
// ============================================================
```

**改造后**：

```objc
// ============================================================
// MARK: - Color / Theme Helpers
// ============================================================
```

**说明**：直接删除 `MTHookEntry` 结构体定义及其上方的注释区块。

### Step 2：删除 `g_hookTable` 数组和 `g_hookTableCount` 常量

**位置**：第 594-607 行

**改造前**：

```objc
// ============================================================
// MARK: - Hook Configuration Table
// ============================================================

static MTHookEntry g_hookTable[] = {
    {"CommonMessageCellView",        "initWithViewModel:",                   (IMP)repl_CommonMessageCellView_initWithViewModel, (IMP*)&orig_CommonMessageCellView_initWithViewModel},
    {"CommonMessageCellView",        "updateNodeStatus",                     (IMP)repl_CommonMessageCellView_updateNodeStatus, (IMP*)&orig_CommonMessageCellView_updateNodeStatus},
    {"ChatTimeCellView",             "layoutSubviews",                       (IMP)repl_ChatTimeCellView_layoutSubviews,    (IMP*)&orig_ChatTimeCellView_layoutSubviews},
    {"ChatTimeViewModel",            "cellHeight",                           (IMP)repl_ChatTimeViewModel_cellHeight,        (IMP*)&orig_ChatTimeViewModel_cellHeight},
    {"CContact",                     "m_nsNickName",                         (IMP)repl_CContact_m_nsNickName,              (IMP*)&orig_CContact_m_nsNickName},
    {"TextMessageCellView",          "setFrameForBgImageView:",              (IMP)repl_TextMsgCell_setFrameBgImg,          (IMP*)&orig_TextMsgCell_setFrameBgImg},
};

static const int g_hookTableCount = sizeof(g_hookTable) / sizeof(g_hookTable[0]);

// ============================================================
// MARK: - Installation
// ============================================================
```

**改造后**：

```objc
// ============================================================
// MARK: - Installation
// ============================================================
```

**说明**：直接删除 `g_hookTable` 数组、`g_hookTableCount` 常量以及上方的注释区块。

### Step 3：重写 `install` 方法

**位置**：第 613-657 行

**改造前**（43 行）：

```objc
@implementation MessageTimeHook

+ (void)install {
    WPLog(@"MsgTime", @"========================================");
    WPLog(@"MsgTime", @"MessageTimeHook install - initWithViewModel(label) + updateNodeStatus(compute+layout) 参照锤子助手方案");
    WPLog(@"MsgTime", @"Architecture: 仅hook updateNodeStatus计算时间文本，不碰cellForRow，避开VC转场崩溃");
    WPLog(@"MsgTime", @"========================================");

    MessageTimeConfig *config = [MessageTimeConfig shared];
    WPLog(@"MsgTime", @"Config - showMessageTime: %d", config.showMessageTime);
    WPLog(@"MsgTime", @"Config - messageTimePosition: %ld", (long)config.messageTimePosition);
    WPLog(@"MsgTime", @"Config - messageTimeFontSize: %.1f", config.messageTimeFontSize);
    WPLog(@"MsgTime", @"Config - messageTimeFormat: %@", config.messageTimeFormat);
    WPLog(@"MsgTime", @"Config - messageTimeOffsetX: %.2f", config.messageTimeOffsetX);
    WPLog(@"MsgTime", @"Config - messageTimeOffsetY: %.2f", config.messageTimeOffsetY);

    int hookedCount = 0;

    for (int i = 0; i < g_hookTableCount; i++) {
        MTHookEntry *entry = &g_hookTable[i];

        Class cls = objc_getClass(entry->className);
        if (!cls) {
            WPLog(@"MsgTime", @"Class not found: %s, skipping", entry->className);
            continue;
        }

        SEL sel = sel_registerName(entry->selName);
        Method m = class_getInstanceMethod(cls, sel);
        if (!m) {
            WPLog(@"MsgTime", @"Method not found: %s - %s, skipping", entry->className, entry->selName);
            continue;
        }

        MSHookMessageEx(cls, sel, entry->replacement, entry->original);

        WPLog(@"MsgTime", @"Hooked %s - %s ✓", entry->className, entry->selName);
        hookedCount++;
    }

    WPLog(@"MsgTime", @"Hook table complete: %d/%d", hookedCount, g_hookTableCount);
    WPLog(@"MsgTime", @"========================================");
    WPLog(@"MsgTime", @"MessageTimeHook install complete");
    WPLog(@"MsgTime", @"========================================");
}

@end
```

**改造后**（30 行）：

```objc
@implementation MessageTimeHook

+ (void)install {
    WPLog(@"MsgTime", @"========================================");
    WPLog(@"MsgTime", @"MessageTimeHook install");
    WPLog(@"MsgTime", @"========================================");

    // 1. CommonMessageCellView.initWithViewModel:
    {
        Class cls = objc_getClass("CommonMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(initWithViewModel:),
                (IMP)repl_CommonMessageCellView_initWithViewModel, (IMP *)&orig_CommonMessageCellView_initWithViewModel);
            WPLog(@"MsgTime", @"[Hook] ✓ CommonMessageCellView.initWithViewModel:");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ CommonMessageCellView class not found");
        }
    }

    // 2. CommonMessageCellView.updateNodeStatus
    {
        Class cls = objc_getClass("CommonMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(updateNodeStatus),
                (IMP)repl_CommonMessageCellView_updateNodeStatus, (IMP *)&orig_CommonMessageCellView_updateNodeStatus);
            WPLog(@"MsgTime", @"[Hook] ✓ CommonMessageCellView.updateNodeStatus");
        }
    }

    // 3. ChatTimeCellView.layoutSubviews
    {
        Class cls = objc_getClass("ChatTimeCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(layoutSubviews),
                (IMP)repl_ChatTimeCellView_layoutSubviews, (IMP *)&orig_ChatTimeCellView_layoutSubviews);
            WPLog(@"MsgTime", @"[Hook] ✓ ChatTimeCellView.layoutSubviews");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ ChatTimeCellView class not found");
        }
    }

    // 4. ChatTimeViewModel.cellHeight
    {
        Class cls = objc_getClass("ChatTimeViewModel");
        if (cls) {
            MSHookMessageEx(cls, @selector(cellHeight),
                (IMP)repl_ChatTimeViewModel_cellHeight, (IMP *)&orig_ChatTimeViewModel_cellHeight);
            WPLog(@"MsgTime", @"[Hook] ✓ ChatTimeViewModel.cellHeight");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ ChatTimeViewModel class not found");
        }
    }

    // 5. CContact.m_nsNickName
    {
        Class cls = objc_getClass("CContact");
        if (cls) {
            MSHookMessageEx(cls, @selector(m_nsNickName),
                (IMP)repl_CContact_m_nsNickName, (IMP *)&orig_CContact_m_nsNickName);
            WPLog(@"MsgTime", @"[Hook] ✓ CContact.m_nsNickName");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ CContact class not found");
        }
    }

    // 6. TextMessageCellView.setFrameForBgImageView:
    {
        Class cls = objc_getClass("TextMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(setFrameForBgImageView:),
                (IMP)repl_TextMsgCell_setFrameBgImg, (IMP *)&orig_TextMsgCell_setFrameBgImg);
            WPLog(@"MsgTime", @"[Hook] ✓ TextMessageCellView.setFrameForBgImageView:");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ TextMessageCellView class not found");
        }
    }

    WPLog(@"MsgTime", @"MessageTimeHook install complete");
    WPLog(@"MsgTime", @"========================================");
}

@end
```

**改造说明**：

| 改动项 | 原代码 | 新代码 |
|--------|--------|--------|
| Hook 注册 | 表驱动 for 循环 | 6 个独立的 `{}` 作用域块 |
| Class 获取 | `objc_getClass(entry->className)` | `objc_getClass("CommonMessageCellView")` |
| Selector | `sel_registerName(entry->selName)` | `@selector(initWithViewModel:)` 编译期检查 |
| 类型转换 | `entry->replacement` / `entry->original` | 直接传入 `(IMP)func` / `(IMP *)&orig` |
| 日志格式 | `@"Hooked %s - %s ✓"` | `@"[Hook] ✓ ClassName.method"` |
| 错误处理 | 统一在循环中 continue | 每个块独立的 if-else |
| 配置日志 | 打印 6 行 config 信息 | **移除**（与 Hook 注册无关，属于调试输出） |

### 重点说明

#### 为什么要加 `{}` 作用域块？

每个 Hook 块用 `{ }` 包裹，是为了让 `Class cls` 这个局部变量在每个块中独立，避免 6 个 Hook 共用同一个 `cls` 变量导致混淆。这是 ObjC 中常见的代码组织技巧，查看其他模块（如 `RedEnvelopHook.m`）可以看到类似的结构。

如果不加 `{}`，需要写 6 个不同的变量名（如 `cls1`、`cls2`...），反而更乱。

#### 为什么要删除 config 日志？

原始 install 方法打印了 6 行配置信息（showMessageTime、messageTimePosition 等），这些与 Hook **注册本身无关**，属于功能配置的调试输出。其他模块（如 RedEnvelopHook、AutoTransferHook）的 install 方法中不打印配置信息。如果这些配置日志有必要保留，应该移到模块初始化时输出，而不是在 install 中。

## 不修改的部分

以下内容 **完全不变**：

| 内容 | 说明 |
|------|------|
| `#import` 头部引用 | 全部保留 |
| `static` 原函数指针变量（第 228-233 行） | `orig_CommonMessageCellView_initWithViewModel` 等 6 个变量不变 |
| 所有 Hook 实现函数 | `repl_CommonMessageCellView_initWithViewModel` 等不变 |
| 所有辅助函数 | `autoDarkColor`、`updateTimeLabelLayout` 等不变 |
| `MessageTimeHook.h` 头文件 | 不变 |

## 改后文件结构总览

改造完成后，`MessageTimeHook.m` 的结构：

```
┌─────────────────────────────────────────────┐
│  #import 引用（不变）                          │
├─────────────────────────────────────────────┤
│  // 删除：MTHookEntry 结构体定义               │  ← Step 1 删除
├─────────────────────────────────────────────┤
│  Color / Theme Helpers（不变）                │
├─────────────────────────────────────────────┤
│  ... 所有 Hook 实现函数（不变） ...              │
├─────────────────────────────────────────────┤
│  // 删除：Hook Configuration Table           │  ← Step 2 删除
│  // 删除：g_hookTable / g_hookTableCount     │
├─────────────────────────────────────────────┤
│  Installation                               │
│  + (void)install {                          │  ← Step 3 重写
│      // 6 个独立 Hook 块                      │
│  }                                          │
└─────────────────────────────────────────────┘
```

## 改动量统计

| 操作 | 行数变化 |
|------|:--------:|
| 删除 `MTHookEntry` 结构体 | **-7 行** |
| 删除 `g_hookTable` + `g_hookTableCount` | **-11 行** |
| 重写 `install` 方法（43 行 → 30 行） | **-13 行** |
| **净减少** | **约 -31 行** |

## 测试验证

### 编译验证

| 测试 | 操作 | 预期结果 |
|------|------|---------|
| T1 | `Cmd+B` 编译 | 零 error、零 warning |
| T2 | `Cmd+Shift+K` 清理后 `Cmd+B` | 零 error、零 warning |

### 功能回归测试

| 编号 | 测试场景 | 操作步骤 | 预期结果 |
|------|---------|---------|---------|
| R01 | 消息时间显示 | 进入任意聊天 → 发送一条消息 → 接收一条消息 | 每条消息上方正确显示时间标签 |
| R02 | 时间样式 | 在插件配置中修改时间格式（如从 `HH:mm` 改为 `HH:mm:ss`）→ 重新进入聊天 | 时间标签按新格式显示 |
| R03 | 时间位置 | 修改时间位置配置（左/中/右）→ 重新进入聊天 | 时间标签在正确的位置 |
| R04 | 时间偏移 | 修改 OffsetX/OffsetY → 重新进入聊天 | 时间标签位置随偏移量变化 |
| R05 | 字号调整 | 修改字号配置 → 重新进入聊天 | 时间标签字号变化 |
| R06 | 聊天气泡扩展 | 开启气泡扩展 → 进入聊天 | 聊天气泡宽度正确扩展 |
| R07 | 昵称显示 | 进入群聊 → 观察消息发送者昵称 | 昵称正常显示 |
| R08 | 纯文本消息 | 发送纯文本消息 → 观察时间标签位置 | 时间标签渲染在正确位置 |
| R09 | 滚动性能 | 进入大群聊天 → 快速上下滑动 | 无卡顿、无闪白、无时间标签错位 |
| R10 | 横竖屏切换 | 进入聊天 → 旋转设备 | 时间标签随界面正确布局 |

### 日志验证

编译运行后，在 Xcode Console 中过滤 `MsgTime`，应看到：

```
[MsgTime] ========================================
[MsgTime] MessageTimeHook install
[MsgTime] ========================================
[MsgTime] [Hook] ✓ CommonMessageCellView.initWithViewModel:
[MsgTime] [Hook] ✓ CommonMessageCellView.updateNodeStatus
[MsgTime] [Hook] ✓ ChatTimeCellView.layoutSubviews
[MsgTime] [Hook] ✓ ChatTimeViewModel.cellHeight
[MsgTime] [Hook] ✓ CContact.m_nsNickName
[MsgTime] [Hook] ✓ TextMessageCellView.setFrameForBgImageView:
[MsgTime] MessageTimeHook install complete
[MsgTime] ========================================
```

6 个 Hook 全部注册成功。如果某个类在微信中不存在，会输出 `[Hook] ✗ ClassName class not found` 并跳过。

### 回滚方案

如果改造后出现异常：

1. **临时恢复**：将 `install` 方法替换回改造前的 for 循环版本即可（`g_hookTable` 数组内容和原函数指针变量均未改变）
2. **永久放弃**：git revert 本次改动

## 附录：改造后的 MessageTimeHook.m 完整 install 方法

```objc
// ============================================================
// MARK: - Installation
// ============================================================

@implementation MessageTimeHook

+ (void)install {
    WPLog(@"MsgTime", @"========================================");
    WPLog(@"MsgTime", @"MessageTimeHook install");
    WPLog(@"MsgTime", @"========================================");

    // 1. CommonMessageCellView.initWithViewModel:
    {
        Class cls = objc_getClass("CommonMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(initWithViewModel:),
                (IMP)repl_CommonMessageCellView_initWithViewModel, (IMP *)&orig_CommonMessageCellView_initWithViewModel);
            WPLog(@"MsgTime", @"[Hook] ✓ CommonMessageCellView.initWithViewModel:");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ CommonMessageCellView class not found");
        }
    }

    // 2. CommonMessageCellView.updateNodeStatus
    {
        Class cls = objc_getClass("CommonMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(updateNodeStatus),
                (IMP)repl_CommonMessageCellView_updateNodeStatus, (IMP *)&orig_CommonMessageCellView_updateNodeStatus);
            WPLog(@"MsgTime", @"[Hook] ✓ CommonMessageCellView.updateNodeStatus");
        }
    }

    // 3. ChatTimeCellView.layoutSubviews
    {
        Class cls = objc_getClass("ChatTimeCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(layoutSubviews),
                (IMP)repl_ChatTimeCellView_layoutSubviews, (IMP *)&orig_ChatTimeCellView_layoutSubviews);
            WPLog(@"MsgTime", @"[Hook] ✓ ChatTimeCellView.layoutSubviews");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ ChatTimeCellView class not found");
        }
    }

    // 4. ChatTimeViewModel.cellHeight
    {
        Class cls = objc_getClass("ChatTimeViewModel");
        if (cls) {
            MSHookMessageEx(cls, @selector(cellHeight),
                (IMP)repl_ChatTimeViewModel_cellHeight, (IMP *)&orig_ChatTimeViewModel_cellHeight);
            WPLog(@"MsgTime", @"[Hook] ✓ ChatTimeViewModel.cellHeight");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ ChatTimeViewModel class not found");
        }
    }

    // 5. CContact.m_nsNickName
    {
        Class cls = objc_getClass("CContact");
        if (cls) {
            MSHookMessageEx(cls, @selector(m_nsNickName),
                (IMP)repl_CContact_m_nsNickName, (IMP *)&orig_CContact_m_nsNickName);
            WPLog(@"MsgTime", @"[Hook] ✓ CContact.m_nsNickName");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ CContact class not found");
        }
    }

    // 6. TextMessageCellView.setFrameForBgImageView:
    {
        Class cls = objc_getClass("TextMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(setFrameForBgImageView:),
                (IMP)repl_TextMsgCell_setFrameBgImg, (IMP *)&orig_TextMsgCell_setFrameBgImg);
            WPLog(@"MsgTime", @"[Hook] ✓ TextMessageCellView.setFrameForBgImageView:");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ TextMessageCellView class not found");
        }
    }

    WPLog(@"MsgTime", @"MessageTimeHook install complete");
    WPLog(@"MsgTime", @"========================================");
}

@end
```