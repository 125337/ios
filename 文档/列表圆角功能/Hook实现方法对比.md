# Hook 实现方法对比文档

> MioPlugin 有 5 个反编译版没有的 Hook。本文分析反编译版是如何在不用这些 Hook 的情况下实现相同功能。

---

## 一、总览

根据 [反编译版vsMioPlugin全面对比.md](file:///www/wwwroot/ios/插件/微信优化反编译最新/反编译版vsMioPlugin全面对比.md) 2.3 节：

| # | MioPlugin 独有 Hook | 功能 | 反编译版如何实现 |
|---|---------------------|------|----------------|
| 5 | `NewMainFrameViewController::viewDidLayoutSubviews` | 清除 plain UIView 白色背景 | **合并在** `UIView::layoutSubviews` Hook 中处理 |
| 7 | `MMTableSectionHeaderView::setFrame:` | 同步 button 高度到 section header | **直接在** `MMUIButton` Hook 中使用 `setFrame:` 调整 button 自身 |
| 12 | `UIView::layoutSubviews`（搜索框辅助） | 搜索框圆角双保险 | **不需要**，`WCSearchBar` Hook 直接操作 `searchBoxContainer` |
| 13 | `WCSearchBar::layoutSubviews` | 搜索框圆角 | **相同 Hook**，但在独立模块 `FUN_00021b3c` 中 |
| 16 | `MMUIButton::layoutSubviews`（辅助） | DisableLabelWidthAdjustment / 媒体圆角 / QR码隐藏 | **分散到**各自主 Hook 中 |

---

## 二、逐一详解

### 2.1 #5 `NewMainFrameViewController::viewDidLayoutSubviews` — 白色背景清除

#### MioPlugin 实现

两个 Hook 配合工作：

**Hook A**：[`WPSessionSpacingHook.m:68-96`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPSessionSpacingHook.m#L68-L96) `UIView::layoutSubviews`

```objc
// 在 tableView 的直接子 UIView 中清除背景色
if (_wp_isTableViewClass(NSStringFromClass([parent class]))) {
    view.backgroundColor = [UIColor clearColor];
}
```

**Hook B**：[`WPSessionSpacingHook.m:112-119`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPSessionSpacingHook.m#L112-L119) `NMFVC::viewDidLayoutSubviews`

```objc
// 遍历整个视图树，清除 UITableView 子视图中的 plain UIView 背景
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

**为什么需要两个 Hook**：
- Hook A 在 `layoutSubviews` 中处理，但每次只处理单个 UIView
- Hook B 在 `viewDidLayoutSubviews` 中做全量遍历，兜底清除漏网之鱼

#### 反编译版替代实现

**只用 1 个 Hook**：[`wxyh1.6.5.dylib.c`](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c) `FUN_0000cc74` (line 12434-12619)，Hook `UIView::layoutSubviews`

解码后等价逻辑：

```objc
// UIView::layoutSubviews Hook
static void hooked_UIView_layoutSubviews(id self, SEL _cmd) {
    orig_layoutSubviews(self, _cmd);
    
    // 1. 检查是否启用了 listCornerRadius
    if (!isEnabled) return;
    
    // 2. 只处理类名恰好是 "UIView" 的（非子类）
    if (![className isEqualToString:@"UIView"]) return;
    
    // 3. 找到父 VC
    UIViewController *vc = findParentVC(self);
    
    // ★ 4. 多 VC 白名单判断
    if ([vc isKindOfClass:NewMainFrameViewController] ||
        [vc isKindOfClass:BrandSessionViewController] ||
        [vc isKindOfClass:ChatBoxSessionListViewController] ||
        [vc isKindOfClass:OpenIMBrandContactListViewController] ||
        [vc isKindOfClass:ContactTagNewDetailViewController] ||
        [vc isKindOfClass:ChatRoomListViewController] ||
        [vc isKindOfClass:BrandServiceContactsViewController]) {
        
        // 5. 检查父视图是否是 TableView
        UIView *parent = self.superview;
        if ([parent isKindOfClass:MMTableView] || 
            [parent isKindOfClass:MMMainTableView]) {
            // ★ 关键：设置 clearColor
            [self setBackgroundColor:[UIColor clearColor]];
        }
    }
}
```

#### 对比结论

| 维度 | MioPlugin | 反编译版 |
|------|-----------|---------|
| Hook 数量 | **2 个** | **1 个** |
| 实现策略 | Hook A 实时处理 + Hook B 全量兜底 | 单一 Hook 条件命中处理 |
| 覆盖范围 | 更广（viewDidLayoutSubviews 遍历整棵树） | 较窄（仅在 UIView::layoutSubviews 触发时） |
| 代码复杂度 | 两个相对简单的 Hook | 一个复杂的条件分支 Hook |
| 本质 | 双保险 | 单点精确打击 |

---

### 2.2 #7 `MMTableSectionHeaderView::setFrame:` — 按钮高度同步

#### MioPlugin 实现

[`ProfileCardBgHook.m:11-61`](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L11-L61)

```objc
static void _hooked_headerSetFrame(id self, SEL _cmd, CGRect newFrame) {
    _orig_headerSetFrame(self, _cmd, newFrame);
    
    // 1. 检查 cardBgEnabled && cardBgHeight > 0
    // 2. 确认在 MoreViewController 中
    // 3. 找到包含 MMHeadImageView 的 MMUIButton（资料卡按钮）
    // 4. ★ 如果按钮高度 < cardBgHeight，就给按钮设置新高度
    if (targetButton.frame.size.height < targetH && targetH > 0) {
        CGRect f = targetButton.frame;
        f.size.height = targetH;
        targetButton.frame = f;
    }
}
```

**设计思路**：Header 的 `setFrame:` 被系统调用后，MioPlugin 拦截并检查资料卡按钮，如果按钮高度不够就补足。

#### 反编译版替代实现

**不需要这个 Hook**。反编译版在 [`FUN_00007b4c`](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c) (MMUIButton cardBg Hook, line 9550) 中**直接设置按钮自身的 frame**：

解码后等价逻辑：

```objc
// MMUIButton::layoutSubviews Hook (cardBg 路径)
static void hooked_MMUIButton_layoutSubviews_cardBg(id self, SEL _cmd) {
    orig_layoutSubviews(self, _cmd);
    
    // 检测是否资料卡按钮（通过 MMHeadImageView 子视图判断）
    if (!isProfileCard) return;
    
    // ★ 直接读取 ProfileCardHeight 配置，设置按钮自身 frame
    CGFloat targetH = config.profileCardHeight;
    if (targetH > 0 && self.frame.size.height < targetH) {
        CGRect f = self.frame;
        f.size.height = targetH;
        self.frame = f;  // ★ 直接改按钮自身，不走 header 中转
    }
}
```

#### 对比结论

| 维度 | MioPlugin | 反编译版 |
|------|-----------|---------|
| Hook 对象 | `MMTableSectionHeaderView::setFrame:` | `MMUIButton::layoutSubviews` |
| 触发时机 | Header frame 变化后 | 按钮自身 layoutSubviews |
| 修改对象 | 找到资料卡按钮后改按钮 frame | 直接改按钮自身 frame |
| 本质 | **间接同步**：header → 遍历子视图 → 找到按钮 → 改高度 | **直接设置**：按钮 layout 时自己检查并设置高度 |

**为什么反编译版不需要 `setFrame:` Hook**：它直接在按钮的 layoutSubviews 中完成了高度设置，不依赖 header 的通知。MioPlugin 采用 header setFrame 中转，是因为它的按钮高度逻辑与 header 耦合（需要等 header 布局完成后才能确定最终高度）。

---

### 2.3 #12 `UIView::layoutSubviews`（搜索框辅助）— 搜索框圆角双保险

#### MioPlugin 实现

[`WPSearchBoxHook.m:18-46`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPSearchBoxHook.m#L18-L46)

```objc
// ★ 辅助 Hook：UIView::layoutSubviews（搜索框路径）
static void replaced_UIView_layoutSubviews(id self, SEL _cmd) {
    orig(self, _cmd);
    
    if (!config.listCornerRadiusEnabled || !config.listSearchCornerRadius) return;
    if (![NSStringFromClass([view class]) isEqualToString:@"UIView"]) return;
    
    // 只在 NewMainFrameVC / FTSHomeVC 中
    UIViewController *vc = findParentVC(view);
    
    // 尺寸过滤：宽>200、高30~60
    CGSize size = view.bounds.size;
    if (size.width < 200 || size.height < 30 || size.height > 60) return;
    
    // 应用圆角
    view.layer.cornerRadius = radius;
    view.layer.masksToBounds = YES;
}
```

**为什么需要辅助 Hook**：MioPlugin 的 `WCSearchBar` Hook 通过 `_searchField` / `_textField` 查找搜索框，在某些微信版本中这个 ivar 可能不存在。所以额外加了一个 `UIView` Hook 通过尺寸匹配来兜底。

#### 反编译版替代实现

**不需要辅助 Hook**。反编译版在 [`FUN_00025530`](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c#L26231-L26273) `WCSearchBar::layoutSubviews`（独立模块 `FUN_00021b3c`，line 24465）中通过 `searchBoxContainer` 属性直接定位：

解码后等价逻辑：

```objc
// WCSearchBar::layoutSubviews Hook（独立模块）
static void hooked_WCSearchBar_layoutSubviews(id self, SEL _cmd) {
    orig_layoutSubviews(self, _cmd);
    
    if (!config.searchBoxRoundCornerEnabled) return;
    
    NSInteger radius = config.searchBoxCornerRadius ?: 18;
    
    // ★ 直接获取 searchBoxContainer（WCSearchBar 的属性）
    UIView *container = [self searchBoxContainer];
    if (container) {
        container.layer.cornerRadius = radius;
        container.layer.masksToBounds = YES;
    }
}
```

#### 对比结论

| 维度 | MioPlugin | 反编译版 |
|------|-----------|---------|
| Hook 数量 | **2 个**（WCSearchBar + UIView 辅助） | **1 个**（WCSearchBar） |
| 核心实现 | WCSearchBar（_searchField）+ UIView（尺寸匹配兜底） | WCSearchBar（searchBoxContainer 属性） |
| 可靠性 | 双保险，互为主备 | 单 Hook，依赖 searchBoxContainer |
| 本质 | 防御性编程 | 信任 API 稳定性 |

**为什么反编译版不需要辅助 Hook**：它使用的 `searchBoxContainer` 是 WCSearchBar 的公开属性，比 `_searchField` ivar 更稳定可靠，不需要额外兜底。

---

### 2.4 #13 `WCSearchBar::layoutSubviews` — 搜索框圆角（模块归属不同）

#### MioPlugin 实现

[`ListCornerRadiusHook.m:142-158`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L142-L158)

```objc
// 纳入 Cell 列表圆角功能模块
static void replaced_WCSearchBar_layoutSubviews(id self, SEL _cmd) {
    orig(self, _cmd);
    
    if (!config.listCornerRadiusEnabled || !config.listSearchCornerRadius) return;
    
    NSInteger radius = config.listSearchBoxCornerRadius ?: 18;
    UIView *container = [self searchBoxContainer];
    if (container) {
        container.layer.cornerRadius = radius;
        container.layer.masksToBounds = YES;
    }
}
```

#### 反编译版实现

[`wxyh1.6.5.dylib.c`](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c#L24464-L24465) 独立模块 `FUN_00021b3c`

```c
// 独立模块注册
uVar1 = _objc_getClass("WCSearchBar");
_MSHookMessageEx(uVar1, "layoutSubviews", FUN_00025530, &DAT_0013ab90);
```

实现函数 `FUN_00025530`（line 26231-26273）与 MioPlugin 的逻辑几乎一致：
1. 读取 `SearchBoxRoundCornerEnabled`
2. 读取 `SearchBoxCornerRadius`（默认 18）
3. 获取 `searchBoxContainer`
4. 设置 `cornerRadius` + `masksToBounds = YES`

#### 对比结论

| 维度 | MioPlugin | 反编译版 |
|------|-----------|---------|
| Hook 是否相同 | ✅ `WCSearchBar::layoutSubviews` | ✅ `WCSearchBar::layoutSubviews` |
| 实现逻辑 | 几乎相同 | 几乎相同 |
| 模块归属 | Cell 列表圆角功能 | 独立模块 `FUN_00021b3c`（共 16 个 Hook） |
| 配置键 | `listSearchCornerRadius` | `SearchBoxRoundCornerEnabled` |
| 本质 | 功能归类不同，实现相同 |

---

### 2.5 #16 `MMUIButton::layoutSubviews`（辅助）— 分散功能集中管理

#### MioPlugin 实现

[`WPAuxiliaryHooks.m:148-186`](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/WPAuxiliaryHooks.m#L148-L186)

在一个辅助 Hook 中集中处理 3 个功能：

```objc
static void _hooked_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    _orig_MMUIButton_layoutSubviews(self, _cmd);
    
    // 功能 1：媒体圆角
    if (config.listMediaCornerEnabled) {
        view.layer.cornerRadius = radius;
        view.layer.masksToBounds = YES;
    }
    
    // 功能 2：QR码隐藏
    if (config.listHideRightQRCode) {
        if ([className containsString:@"QRCode"]) {
            view.hidden = YES;
        }
    }
    
    // 功能 3：DisableLabelWidthAdjustment（Label sizeToFit）
    if (config.listDisableLabelWidthAdjustment) {
        for (UIView *subview in view.subviews) {
            if ([subview isKindOfClass:[UILabel class]]) {
                [label sizeToFit];
            }
        }
    }
}
```

#### 反编译版替代实现

反编译版**没有这个独立辅助 Hook**，而是将 3 个功能分散到已有的 Hook 中：

**功能 1：媒体圆角**

在独立模块 `FUN_00021b3c` 中，有专门的 Hook 处理：
- `WCImageView` / `WCImageFullScreenViewContainer` / `WCSNSNodeVideoView` 等
- 配置键 `TimelineMediaRoundCornerEnabled`
- MioPlugin 的 `listMediaCornerEnabled` 只是其中一部分（MMUIButton 上的媒体项）

**功能 2：QR码隐藏**

在 [`FUN_0000d898`](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c#L13014-L13021) `MMUIButton` listCornerRadius Hook 中处理：

解码后等价逻辑：

```objc
// 在 FUN_0000d898 的资料卡按钮子视图遍历中
for (UIView *subview in button.subviews) {
    if (是 MMUIButton || 是 UIButton) {
        if (config.hideQRCodeButton) {
            // 隐藏 QR 码按钮
            [subview setHidden:YES];
        }
    }
}
```

**功能 3：DisableLabelWidthAdjustment**

在 [`FUN_0000d898`](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c#L13023-L13041) `MMUIButton` listCornerRadius Hook 中处理：

解码后等价逻辑：

```objc
// 在 FUN_0000d898 的资料卡按钮子视图遍历中
if (DisableLabelWidthAdjustment == OFF) {
    for (UIView *subview in button.subviews) {
        if ([subview isKindOfClass:[UILabel class]]) {
            if ([subview.text length] > 0) {
                [subview sizeToFit];  // 只在文本非空时调用
            }
        }
    }
}
```

#### 对比结论

| 功能 | MioPlugin 实现位置 | 反编译版实现位置 |
|------|-------------------|----------------|
| 媒体圆角 | `WPAuxiliaryHooks.m` MMUIButton Hook | 独立模块 `FUN_00021b3c`，多个专门 Hook（WCImageView 等） |
| QR码隐藏 | `WPAuxiliaryHooks.m` MMUIButton Hook | `FUN_0000d898` MMUIButton 主 Hook 的子视图遍历中 |
| Label 宽度禁用 | `WPAuxiliaryHooks.m` MMUIButton Hook | `FUN_0000d898` MMUIButton 主 Hook 的子视图遍历中 |

| 维度 | MioPlugin | 反编译版 |
|------|-----------|---------|
| Hook 数量 | **1 个辅助 Hook**（3 合 1） | **0 个额外 Hook**（功能已在现有 Hook 中） |
| 设计理念 | **集中式**：辅助功能收拢到独立 Hook | **嵌入式**：辅助功能嵌入主功能 Hook |
| 代码内聚 | 低（辅助功能与主功能分离） | 高（在同一遍历中完成所有子视图处理） |
| 本质 | 关注点分离 | 性能优先（一次遍历做所有事） |

---

## 三、总结

### 3.1 反编译版为什么少用 Hook

| 策略 | 说明 | 涉及 MioPlugin Hook |
|------|------|-------------------|
| **合并同类 Hook** | 多个相似功能合并到同一个 Hook 中处理 | #5（白色背景清除合并到 UIView Hook） |
| **直接操作目标** | 不通过中间对象中转，直接在目标对象的 Hook 中完成 | #7（按钮高度直接在按钮 Hook 中设置，不走 header 中转） |
| **信任稳定 API** | 使用公开属性而非私有 ivar，减少兜底 Hook | #12（searchBoxContainer vs _searchField 双保险） |
| **功能嵌入主流程** | 辅助功能嵌入主功能 Hook 的子视图遍历中 | #16（QR隐藏/Label处理嵌入主 Hook 遍历） |
| **模块化隔离** | 不同功能域用独立模块管理，不混合 | #13（搜索框在独立模块 FUN_00021b3c） |

### 3.2 Hook 数量对比

```
反编译版：11 个 Hook，完成所有功能
MioPlugin：16 个 Hook，完成相同 + 增强功能

差异来源：
  +2  白色背景清除（#5 + UIView Hook → 反编译版合并在 1 个 UIView Hook）
  +1  按钮高度同步（#7 → 反编译版直接在按钮 Hook 中处理）
  +1  搜索框辅助（#12 → 反编译版不需要，searchBoxContainer 更可靠）
  +1  MMUIButton 辅助（#16 → 反编译版功能分散在现有 Hook 中）
  ─────────────────
  +5  总计
```

### 3.3 两种设计哲学

| | 反编译版 | MioPlugin |
|------|---------|-----------|
| Hook 策略 | **少而精**，能合并就合并 | **多而全**，每个关注点独立 Hook |
| 优点 | 更少 Hook = 更低性能开销 + 更少冲突风险 | 代码更清晰、每个 Hook 职责单一、更容易维护 |
| 缺点 | 单个 Hook 内部逻辑复杂、难以阅读 | Hook 数量多、需要协调多个 Hook 的执行顺序 |
| 适用场景 | 对性能敏感、追求最小侵入 | 团队协作、追求代码可维护性 |