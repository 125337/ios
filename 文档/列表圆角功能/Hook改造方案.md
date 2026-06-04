# MioPlugin Hook 改造文档

> 将 MioPlugin 的 #5、#7、#12 Hook 改造为反编译版的实现方式，减少 Hook 数量、降低复杂度。

---

## 一、改造总览

| 改造项 | 当前 Hook 数 | 改造后 | 改动文件数 | 策略 |
|--------|------------|--------|-----------|------|
| 2.1 白色背景清除 | 2（UIView + NMFVC::viewDidLayoutSubviews） | 1（UIView） | 1 个 | 移除冗余 Hook |
| 2.2 按钮高度同步 | 2（setFrame: + MMUIButton） | 1（MMUIButton） | 1 个 | 移除中转 Hook |
| 2.3 搜索框辅助 | 2（WCSearchBar + UIView） | 1（WCSearchBar） | 2 个 | 删除死代码文件 |

---

## 二、2.1 — 白色背景清除改造

### 2.1.1 现状分析

**当前有两个 Hook：**

- **Hook A**：[`WPSessionSpacingHook.m:68-96`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPSessionSpacingHook.m#L68-L96) `UIView::layoutSubviews`
  - 检查 className == "UIView"
  - 检查 bounds.height > 1.0
  - 查找父 VC，检查白名单
  - 检查父视图/祖父视图是否是 TableView
  - 设置 backgroundColor = clearColor

- **Hook B**：[`WPSessionSpacingHook.m:98-119`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPSessionSpacingHook.m#L98-L119) `NMFVC::viewDidLayoutSubviews`
  - 遍历整个视图树
  - 找到 UITableView 下的 plain UIView
  - 设置 backgroundColor = clearColor

### 2.1.2 为什么可以移除 Hook B

反编译版的 `FUN_0000cc74`（line 12434-12619）只用 1 个 UIView Hook，原因是：

1. **系统保证遍历覆盖**：UIKit 在布局过程中会对每个可见 UIView 调用 `layoutSubviews`，不需要额外做全量遍历
2. **Hook A 已经完整匹配反编译版的逻辑**：
   - 反编译版：className == "UIView" → VC白名单 → 父视图是 TableView → clearColor
   - Hook A：className == "UIView" → bounds检查 → VC白名单 → 父视图/祖父视图是 TableView → clearColor
3. Hook B 是额外的兜底措施（"双保险"），属于防御性编程，反编译版没有

### 2.1.3 具体改动

**文件**：[`WPSessionSpacingHook.m`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPSessionSpacingHook.m)

#### 改动 1：删除 `_orig_NMFVC_viewDidLayoutSubviews` 全局变量

**位置**：第 98 行

```objc
// ❌ 删除这一行
static void (*_orig_NMFVC_viewDidLayoutSubviews)(id, SEL);
```

#### 改动 2：删除 `_wp_clearPlainUIViewBackgrounds` 函数

**位置**：第 99-110 行

```objc
// ❌ 删除整个函数
static void _wp_clearPlainUIViewBackgrounds(UIView *root) {
    for (UIView *subview in root.subviews) {
        if ([subview isKindOfClass:[UITableView class]]) {
            for (UIView *child in subview.subviews) {
                if ([NSStringFromClass([child class]) isEqualToString:@"UIView"]) {
                    child.backgroundColor = [UIColor clearColor];
                }
            }
        }
        _wp_clearPlainUIViewBackgrounds(subview);
    }
}
```

#### 改动 3：删除 `_hooked_NMFVC_viewDidLayoutSubviews` 函数

**位置**：第 112-119 行

```objc
// ❌ 删除整个函数
static void _hooked_NMFVC_viewDidLayoutSubviews(id self, SEL _cmd) {
    _orig_NMFVC_viewDidLayoutSubviews(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    _wp_clearPlainUIViewBackgrounds(((UIViewController *)self).view);
}
```

#### 改动 4：删除 Hook 注册

**位置**：第 133-134 行，`WPInstallSessionSpacingHooks` 函数内

修改前：
```objc
MSHookMessageEx(nmfvc, @selector(viewDidLayoutSubviews),
    (IMP)_hooked_NMFVC_viewDidLayoutSubviews, (IMP *)&_orig_NMFVC_viewDidLayoutSubviews);
```

修改后：
```objc
// 删除上面 2 行
```

#### 改造后完整代码

```objc
#import "WPSessionSpacingHook.h"
#import "../../Config/PluginConfig.h"
#import <substrate.h>
#import <objc/runtime.h>

static CGFloat (*_orig_NMFVC_heightForHeader)(id, SEL, id, NSInteger);
static CGFloat _hooked_NMFVC_heightForHeader(id self, SEL _cmd, id tableView, NSInteger section) {
    CGFloat height = _orig_NMFVC_heightForHeader(self, _cmd, tableView, section);
    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return height;
    if (section == 1) {
        NSInteger spacing = (NSInteger)config.listPinnedSessionTopSpacing;
        height += (spacing > 0) ? spacing : 15;
    } else if (section >= 2) {
        NSInteger spacing = (NSInteger)config.listNormalSessionSpacing;
        height += (spacing > 0) ? spacing : 15;
    }
    return height;
}

static id (*_orig_NMFVC_viewForHeader)(id, SEL, id, NSInteger);
static id _hooked_NMFVC_viewForHeader(id self, SEL _cmd, id tableView, NSInteger section) {
    PluginConfig *config = [PluginConfig shared];
    if (config.listCornerRadiusEnabled && section > 0) {
        return [[UIView alloc] initWithFrame:CGRectZero];
    }
    return _orig_NMFVC_viewForHeader(self, _cmd, tableView, section);
}

static void (*_orig_setBgImageView)(id, SEL, id);
static void _hooked_setBgImageView(id self, SEL _cmd, id imageView) {
    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) {
        _orig_setBgImageView(self, _cmd, imageView);
    }
}

static BOOL _wp_isTableViewClass(NSString *name) {
    return [name isEqualToString:@"MMTableView"] ||
           [name isEqualToString:@"MMMainTableView"] ||
           [name isEqualToString:@"MainFrameTableView"] ||
           [name isEqualToString:@"TextStateProfileTableView"];
}

static BOOL _wp_isAllowedVC(NSString *name) {
    return [name isEqualToString:@"NewMainFrameViewController"] ||
           [name isEqualToString:@"BrandSessionViewController"] ||
           [name isEqualToString:@"ChatBoxSessionListViewController"] ||
           [name isEqualToString:@"OpenIMBrandContactListViewController"] ||
           [name isEqualToString:@"ContactTagNewDetailViewController"] ||
           [name isEqualToString:@"ChatRoomListViewController"] ||
           [name isEqualToString:@"BrandServiceContactsViewController"];
}

static UIViewController *_wp_findParentVC(UIView *view) {
    UIResponder *responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

static void (*_orig_UIView_layoutSubviews)(id, SEL);
static void _hooked_UIView_layoutSubviews(id self, SEL _cmd) {
    _orig_UIView_layoutSubviews(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    if (![NSStringFromClass([self class]) isEqualToString:@"UIView"]) return;

    UIView *view = (UIView *)self;
    if (view.bounds.size.height < 1.0) return;

    UIViewController *vc = _wp_findParentVC(view);
    if (!vc || !_wp_isAllowedVC(NSStringFromClass([vc class]))) return;

    UIView *parent = view.superview;
    if (!parent) return;

    if (_wp_isTableViewClass(NSStringFromClass([parent class]))) {
        view.backgroundColor = [UIColor clearColor];
        return;
    }

    UIView *gp = parent.superview;
    if (gp && _wp_isTableViewClass(NSStringFromClass([gp class]))) {
        view.backgroundColor = [UIColor clearColor];
    }
}

// ★ 以下全部删除
// static void (*_orig_NMFVC_viewDidLayoutSubviews)(id, SEL);
// static void _wp_clearPlainUIViewBackgrounds(UIView *root) { ... }
// static void _hooked_NMFVC_viewDidLayoutSubviews(id self, SEL _cmd) { ... }

void WPInstallSessionSpacingHooks(void) {
    Class uiView = objc_getClass("UIView");
    if (uiView) {
        MSHookMessageEx(uiView, @selector(layoutSubviews),
            (IMP)_hooked_UIView_layoutSubviews, (IMP *)&_orig_UIView_layoutSubviews);
    }
    Class nmfvc = objc_getClass("NewMainFrameViewController");
    if (nmfvc) {
        MSHookMessageEx(nmfvc, @selector(tableView:heightForHeaderInSection:),
            (IMP)_hooked_NMFVC_heightForHeader, (IMP *)&_orig_NMFVC_heightForHeader);
        MSHookMessageEx(nmfvc, @selector(tableView:viewForHeaderInSection:),
            (IMP)_hooked_NMFVC_viewForHeader, (IMP *)&_orig_NMFVC_viewForHeader);
        // ★ 删除：MSHookMessageEx(nmfvc, @selector(viewDidLayoutSubviews), ...)
    }
    Class header = objc_getClass("MMTableSectionHeaderView");
    if (header) {
        MSHookMessageEx(header, @selector(setBackgroundImageView:),
            (IMP)_hooked_setBgImageView, (IMP *)&_orig_setBgImageView);
    }
}
```

#### 改动摘要

| 操作 | 位置 | 说明 |
|------|------|------|
| 删除 | 第 98 行 | `_orig_NMFVC_viewDidLayoutSubviews` 全局变量 |
| 删除 | 第 99-110 行 | `_wp_clearPlainUIViewBackgrounds` 函数 |
| 删除 | 第 112-119 行 | `_hooked_NMFVC_viewDidLayoutSubviews` 函数 |
| 删除 | 第 133-134 行 | `viewDidLayoutSubviews` 的 MSHookMessageEx 注册 |

---

## 三、2.2 — 按钮高度同步改造

### 3.1 现状分析

**当前有两个 Hook 处理按钮高度：**

- **Hook A**：[`ProfileCardBgHook.m:11-61`](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L11-L61) `MMTableSectionHeaderView::setFrame:`
  - Header frame 变化后触发
  - 遍历子视图找到资料卡 MMUIButton
  - 如果按钮高度 < cardBgHeight，设置按钮高度

- **Hook B**：[`ProfileCardBgHook.m:746-803`](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L746-L803) `handleButtonLayout`
  - 从 `replaced_MMUIButton_layoutSubviews` 调用
  - 读取 cardBgHeight，如果按钮高度不够就设置
  - **已经自包含高度逻辑**，不依赖 header

### 3.2 为什么可以移除 setFrame: Hook

1. **`handleButtonLayout` 已经自包含高度逻辑**（line 749-774）：
```objc
CGFloat targetH = config.cardBgHeight;
if (targetH <= 0 || button.frame.size.height >= targetH) goto DO_CORNER;
// ... 遍历视图层级找到 container ...
bf.size.height = targetH;
button.frame = bf;
```

2. **触发顺序保证**：当系统调用 header 的 `setFrame:` 后，header 的子视图会触发 `layoutSubviews`，资料卡按钮的 `replaced_MMUIButton_layoutSubviews` → `handleButtonLayout` 会被执行，此时设置高度即可。

3. **反编译版的做法**：在 `FUN_00007b4c`（MMUIButton cardBg Hook）中直接设置按钮 frame，不通过 header 中转。

### 3.3 具体改动

**文件**：[`ProfileCardBgHook.m`](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

#### 改动 1：删除 `_orig_headerSetFrame` 全局变量

**位置**：第 9 行

```objc
// ❌ 删除这一行
static void (*_orig_headerSetFrame)(id, SEL, CGRect);
```

#### 改动 2：删除 `_hooked_headerSetFrame` 函数

**位置**：第 11-62 行

```objc
// ❌ 删除整个函数
static void _hooked_headerSetFrame(id self, SEL _cmd, CGRect newFrame) {
    _orig_headerSetFrame(self, _cmd, newFrame);
    // ... (全部删除)
}
```

#### 改动 3：精简 `initCellHeightHook` 方法

**位置**：第 886-912 行

修改前：
```objc
+ (void)initCellHeightHook {
    Class tableMgrClass = objc_getClass("WCTableViewManager");
    if (tableMgrClass) {
        MSHookMessageEx(tableMgrClass,
                        @selector(tableView:heightForHeaderInSection:),
                        (IMP)_hooked_heightForHeader,
                        (IMP *)&_orig_heightForHeader);
        WPLog(@"CardBg", @"[OK] WCTableViewManager::heightForHeaderInSection:");
    } else {
        WPLog(@"CardBg", @"[WARN] WCTableViewManager class not found!");
    }

    // ★ 最终方案：Hook header view 的 setFrame: 同步 button 高度
    Class headerViewClass = objc_getClass("MMTableSectionHeaderView");
    if (!headerViewClass) {
        headerViewClass = objc_getClass("MMUITableViewCell");
    }
    if (headerViewClass) {
        MSHookMessageEx(headerViewClass,
                        @selector(setFrame:),
                        (IMP)_hooked_headerSetFrame,
                        (IMP *)&_orig_headerSetFrame);
        WPLog(@"CardBg", @"[OK] %@::setFrame: (height sync)", NSStringFromClass(headerViewClass));
    } else {
        WPLog(@"CardBg", @"[WARN] MMTableSectionHeaderView/MMUITableViewCell class not found!");
    }
}
```

修改后：
```objc
+ (void)initCellHeightHook {
    Class tableMgrClass = objc_getClass("WCTableViewManager");
    if (tableMgrClass) {
        MSHookMessageEx(tableMgrClass,
                        @selector(tableView:heightForHeaderInSection:),
                        (IMP)_hooked_heightForHeader,
                        (IMP *)&_orig_heightForHeader);
        WPLog(@"CardBg", @"[OK] WCTableViewManager::heightForHeaderInSection:");
    } else {
        WPLog(@"CardBg", @"[WARN] WCTableViewManager class not found!");
    }
}
```

#### 改动摘要

| 操作 | 位置 | 说明 |
|------|------|------|
| 删除 | 第 9 行 | `_orig_headerSetFrame` 全局变量 |
| 删除 | 第 11-62 行 | `_hooked_headerSetFrame` 函数（含所有逻辑） |
| 删除 | 第 898-911 行 | `setFrame:` 的 MSHookMessageEx 注册及 class 查找 |

---

## 四、2.3 — 搜索框辅助改造

### 4.1 现状分析

**当前搜索框圆角涉及两个 Hook：**

- **主 Hook**：[`ListCornerRadiusHook.m:142-158`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L142-L158) `WCSearchBar::layoutSubviews`
  - 使用 `[self searchBoxContainer]` 获取搜索框容器
  - 设置 cornerRadius + masksToBounds

- **辅助 Hook**：[`WPSearchBoxHook.m:18-46`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPSearchBoxHook.m#L18-L46) `UIView::layoutSubviews`
  - 通过尺寸匹配来找到搜索框（宽>200、高30~60）
  - 作为兜底方案

### 4.2 关键发现：辅助 Hook 是死代码

经检查整个 MioPlugin 代码库：

```bash
$ grep -rn "WPInstallSearchBoxHook()" MioPlugin/
# 无结果！该函数从未被调用
```

- `Tweak.m` 第 8 行 `#import "WPSearchBoxHook.h"` — 导入了头文件
- `Tweak.m` 初始化函数中**没有调用** `WPInstallSearchBoxHook()`
- 整个 `WPSearchBoxHook.m` 的 Hook 从未注册

### 4.3 为什么可以删除

1. **主 Hook 已经使用 `searchBoxContainer`**（与反编译版 `FUN_00025530` 相同方式）
2. `searchBoxContainer` 是 WCSearchBar 的公开属性，比 `_searchField` ivar 更稳定
3. 辅助 Hook 本来就是死代码，删除无任何影响
4. 反编译版只用 1 个 WCSearchBar Hook，无辅助

### 4.4 具体改动

#### 文件 1：删除 `WPSearchBoxHook.m`

**路径**：[`/www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPSearchBoxHook.m`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPSearchBoxHook.m)

```objc
// ❌ 删除整个文件
```

#### 文件 2：删除 `WPSearchBoxHook.h`

**路径**：[`/www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPSearchBoxHook.h`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPSearchBoxHook.h)

```objc
// ❌ 删除整个文件
```

#### 文件 3：清理 `Tweak.m`

**文件**：[`Tweak.m`](file:///www/wwwroot/ios/MioPlugin/Tweak.m)

**位置**：第 8 行

修改前：
```objc
#import "Modules/ListCornerRadius/WPSearchBoxHook.h"
```

修改后：
```objc
// 删除这一行
```

#### 改动摘要

| 操作 | 文件 | 说明 |
|------|------|------|
| 删除 | `WPSearchBoxHook.m` | 整个文件（55 行） |
| 删除 | `WPSearchBoxHook.h` | 整个文件（3 行） |
| 删除 | `Tweak.m` 第 8 行 | `#import "WPSearchBoxHook.h"` |

---

## 五、改造影响汇总

### 5.1 Hook 数量变化

| 模块 | 改造前 | 改造后 | 变化 |
|------|--------|--------|------|
| WPSessionSpacingHook | 5 个 Hook | **4 个 Hook** | -1 |
| ProfileCardBgHook | 2 个 Hook | **1 个 Hook** | -1 |
| WPSearchBoxHook | 1 个 Hook（死代码） | **0 个 Hook** | -1 |
| **总计** | **16 个** | **13 个** | **-3** |

> 反编译版是 11 个 Hook，改造后 MioPlugin 为 13 个（多出的 2 个来自 `ListCornerRadiusHook` 的 WCSearchBar Hook 和 `WPAuxiliaryHooks` 的 MMUIButton 辅助 Hook，这些是正确的模块化差异）。

### 5.2 文件变化

| 操作 | 文件 |
|------|------|
| 修改 | `WPSessionSpacingHook.m` — 删除 ~25 行 |
| 修改 | `ProfileCardBgHook.m` — 删除 ~60 行 |
| 修改 | `Tweak.m` — 删除 1 行 import |
| 删除 | `WPSearchBoxHook.m` — 整个文件（55 行） |
| 删除 | `WPSearchBoxHook.h` — 整个文件（3 行） |

### 5.3 风险评估

| 改造项 | 风险等级 | 说明 |
|--------|---------|------|
| 2.1 白色背景清除 | **低** | UIView Hook 已完整覆盖所有场景，系统保证 layoutSubviews 会在布局时触发 |
| 2.2 按钮高度同步 | **低** | handleButtonLayout 在 MMUIButton::layoutSubviews 中调用，header frame 变化后会触发子视图 layout |
| 2.3 搜索框辅助 | **无** | 当前是死代码，从未被调用，删除无任何影响 |

### 5.4 验证方法

改造完成后，建议按以下步骤验证：

1. **白色背景清除**：打开微信"聊天"列表页，检查各 section 之间的白色背景是否已清除为透明
2. **按钮高度同步**：在"我"页面设置 `cardBgHeight > 0`，检查资料卡按钮高度是否正确
3. **搜索框圆角**：在微信首页检查搜索框圆角是否正常显示
4. **回归测试**：检查 Cell 列表圆角、边距、边框、资料卡背景图等所有现有功能是否正常