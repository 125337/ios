# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v35 — 修正 alignment 映射分析：UI 改了但代码逻辑未同步，映射实际仍不一致)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug

### 🔴 Bug J：对齐方式 — 需改用 frame.origin.y 移动

**现状**：UI 标签已改为 0=底部, 1=居中, 2=顶部，但代码逻辑仍按旧映射（0=居中, 1=底部, 2=顶部）判断，导致对齐效果与选择相反。需改为 `frame.origin.y` 移动，新代码将使用正确映射。

#### 当前代码问题定位

| 位置 | 问题 | 修复 |
|:-----|:-----|:-----|
| [L564](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L564) | `btnBgImg.clipsToBounds = YES` | 改为 `NO`（允许图片溢出 frame） |
| [L544-551](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L544-L551) | 分支A：`contentsRect` 按旧映射判断 | 删除，改用 frame.origin.y（新映射） |
| [L581-588](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L581-L588) | 分支B：`contentsRect` 按旧映射判断 | 删除，改用 frame.origin.y（新映射） |
| [L621-624](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L621-L624) | 异步回调无 alignment 计算 | 添加 AspectFill 溢出量 + alignment 偏移 |

#### 微信优化的对齐方式完整还原

**1. alignment 值映射**

| 值 | 微信优化 | MioPlugin UI | MioPlugin 代码逻辑 | 状态 |
|:---:|:---:|:---:|:---:|:---:|
| 0 | 底部 | 底部 | 居中（旧映射） | ❌ 代码未同步 |
| 1 | 居中 | 居中 | 底部（旧映射） | ❌ 代码未同步 |
| 2 | 顶部 | 顶部 | 顶部（旧映射） | ✅ 碰巧一致 |

**说明**：UI 标签已改为与微信优化一致，但代码中的 `contentsRect` 判断仍按旧映射（0=居中, 1=底部, 2=顶部）执行。修复时删除 `contentsRect` 代码，新代码直接按新映射（0=底部, 1=居中, 2=顶部）计算即可，无需兼容旧数据。

**2. 核心机制：clipsToBounds = NO + frame.origin.y 移动**

微信优化对齐方式的实现原理：

```
imageView.clipsToBounds = NO   ← 图片可以溢出 imageView 的 frame
button.masksToBounds = YES     ← button 裁剪溢出部分

AspectFill 模式下：
  图片高度 > imageView 高度时，图片上下各溢出 overflow/2
  默认（居中）：图片上下均等溢出，显示中间部分
  移动 frame.origin.y → 改变图片在 button 内的可见区域
```

图示（button 高 100pt，AspectFill 后图片高 200pt，overflow=100pt）：

```
默认居中（origin.y = 0）：
  图片范围：y=-50 到 y=150（相对 button）
  button 裁剪：y=0 到 y=100
  可见区域：图片像素 50~150（中间部分）✅ 居中

顶部对齐（origin.y = +50）：
  imageView 下移 50pt → 图片范围：y=0 到 y=200
  button 裁剪：y=0 到 y=100
  可见区域：图片像素 0~100（顶部部分）✅ 顶部

底部对齐（origin.y = -50）：
  imageView 上移 50pt → 图片范围：y=-100 到 y=100
  button 裁剪：y=0 到 y=100
  可见区域：图片像素 100~200（底部部分）✅ 底部
```

**3. FUN_00008e48 完整还原**（[L6898-L6957](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6898-L6957)）

```objc
// FUN_00008e48(superview, image, isDark)
// 返回结构体 {double xOffset, double yOffset}

- (void)calculateAlignmentOffset:(UIView *)superview
                           image:(UIImage *)image
                          isDark:(BOOL)isDark {
    NSUserDefaults *config = [[NSUserDefaults alloc] initWithSuiteName:@"com.cyansmoke.wechattweak"];

    // ① 读取用户配置的偏移量
    CGFloat userYOffset = [config floatForKey:isDark
        ? @"ProfileCardBackgroundDarkYOffset"
        : @"ProfileCardBackgroundLightYOffset"];
    CGFloat userXOffset = [config floatForKey:isDark
        ? @"ProfileCardBackgroundDarkXOffset"
        : @"ProfileCardBackgroundLightXOffset"];

    // ② 读取 alignment，做默认值保护
    NSString *alignmentKey = isDark
        ? @"ProfileCardBackgroundDarkAlignment"
        : @"ProfileCardBackgroundLightAlignment";
    NSInteger alignment = [config integerForKey:alignmentKey];
    if (alignment == 0) {
        id obj = [config objectForKey:alignmentKey];
        if (!obj) {
            [config setInteger:1 forKey:alignmentKey];
            [config synchronize];
            alignment = 1;
        }
    }

    // ③ ★ 如果 image 非空，根据 AspectFill 溢出量 + alignment 计算 yOffset
    CGFloat yOffset = userYOffset;
    if (image != nil) {
        NSInteger contentMode = [config integerForKey:@"ProfileCardBackgroundContentMode"];
        CGRect superviewBounds = [superview bounds];
        CGSize imageSize = [image size];

        // ★ Ghidra 反编译丢失了以下浮点计算（ARM64 d0-d7 寄存器追踪失败）
        if (contentMode != 1) {  // 非 AspectFit
            CGFloat viewWidth = superviewBounds.size.width;
            CGFloat viewHeight = superviewBounds.size.height;

            if (imageSize.width > 0 && imageSize.height > 0) {
                CGFloat scale = viewWidth / imageSize.width;
                CGFloat renderedH = imageSize.height * scale;
                CGFloat overflow = renderedH - viewHeight;

                if (overflow > 0) {
                    switch (alignment) {
                        case 0:  // 底部对齐
                            yOffset = userYOffset - overflow / 2.0;
                            break;
                        case 2:  // 顶部对齐
                            yOffset = userYOffset + overflow / 2.0;
                            break;
                        case 1:  // 居中对齐（默认）
                        default:
                            yOffset = userYOffset;
                            break;
                    }
                }
            }
        }
    }

    // 返回 {userXOffset, yOffset}
}
```

**4. yOffset 在 frame 计算中的使用**

**首次 layoutSubviews**（[L6582-L6589](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6582-L6589)）：

```c
// 首次调用：param_2=0（图片未加载），alignment 不参与计算
dVar21 = FUN_00008e48(button, 0, isDark);
// → frame = (userXOffset, userYOffset, width, height), alpha = 0
```

**异步图片加载完成后** `FUN_00008bbc`（[L6835-L6867](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6835-L6867)）：

```c
[imageView setImage:loadedImage];
superview = [imageView superview];

// ★ 重新计算（这次 image 非空）
dVar13 = FUN_00008e48(superview, loadedImage, isDark);
// → frame = (userXOffset, userYOffset + alignmentOffset, width, height), alpha = 1.0
```

**5. 完整的对齐计算流程**

```
首次 layoutSubviews:
  FUN_00008e48(button, nil, isDark)
    → image=nil，alignment 不参与计算
    → frame = (userXOffset, userYOffset, width, height)
    → alpha = 0（不可见）

异步图片加载完成后:
  FUN_00008bbc(block, ..., loadedImage)
    → [imageView setImage:loadedImage]
    → FUN_00008e48(button, loadedImage, isDark)
    → image 非空，alignment 参与计算：
       1. 计算 AspectFill 溢出量 overflow
       2. 根据 alignment 计算 alignmentOffset
       3. yOffset = userYOffset + alignmentOffset
    → frame = (userXOffset, yOffset, width, height)
    → alpha = 1.0（可见）
```

**6. 为什么 Ghidra 丢失了 yOffset 计算**

ARM64 调用约定中，`CGRect` 和 `CGSize` 等结构体通过浮点寄存器 `d0-d7` 返回。Ghidra 在追踪以下调用时丢失了返回值：

```c
FUN_000c6960(uVar3, ..., &cf_ProfileCardBackgroundContentMode);  // contentMode
FUN_000c35e0(uVar1);    // [superview bounds] → CGRect
FUN_000cfc00(lVar2);    // [image size] → CGSize
```

`FUN_00008e48` 返回的 16 字节结构体中，Ghidra 只捕获了 `d0`（xOffset），丢失了 `d1`（yOffset）。

#### 修复方案：3 步改动

**步骤 1**：`clipsToBounds` 改为 `NO`

```objc
// L564: 修改前
btnBgImg.clipsToBounds = YES;
// 修改后
btnBgImg.clipsToBounds = NO;  // ★ 允许图片溢出 frame
```

**步骤 2**：删除 `contentsRect` 对齐代码（分支 A L544-551 和分支 B L581-588）

```objc
// ❌ 删除以下代码（两处）
NSInteger alignment = isDark ? config.cardBgDarkAlignment : config.cardBgLightAlignment;
if (alignment == 1) {
    existingBgImg.layer.contentsRect = CGRectMake(0, 0.5, 1, 0.5);
} else if (alignment == 2) {
    existingBgImg.layer.contentsRect = CGRectMake(0, 0, 1, 0.5);
} else {
    existingBgImg.layer.contentsRect = CGRectMake(0, 0, 1, 1);
}
```

**步骤 3**：在异步图片加载完成后，计算 alignment 偏移并修改 frame.origin.y

在 [L621](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L621) `finalImg.image = resultImage` 之后添加：

```objc
if (resultImage) {
    finalImg.image = resultImage;
    finalImg.alpha = 1.0;
    finalImg.hidden = NO;

    // ★ 计算 alignment 偏移
    NSInteger fillMode = config.cardBgFillMode;
    NSInteger alignment = capturedIsDark ? config.cardBgDarkAlignment : config.cardBgLightAlignment;
    CGFloat userOffsetY = capturedIsDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;

    // 只在 AspectFill 模式下计算（fillMode=0 或 fillMode=3）
    if ((fillMode == 0 || fillMode == 3) && resultImage.size.width > 0) {
        CGFloat imgW = resultImage.size.width;
        CGFloat imgH = resultImage.size.height;
        CGFloat viewW = finalSelf.bounds.size.width;
        CGFloat viewH = finalSelf.bounds.size.height;

        CGFloat scale = viewW / imgW;
        CGFloat renderedH = imgH * scale;
        CGFloat overflow = renderedH - viewH;

        if (overflow > 0) {
            CGFloat alignmentOffset = 0;
            switch (alignment) {
                case 0:  // 底部对齐
                    alignmentOffset = -overflow / 2.0;
                    break;
                case 2:  // 顶部对齐
                    alignmentOffset = overflow / 2.0;
                    break;
                case 1:  // 居中对齐（默认）
                default:
                    alignmentOffset = 0;
                    break;
            }
            CGRect f = finalImg.frame;
            f.origin.y = userOffsetY + alignmentOffset;
            finalImg.frame = f;
        }
    }
}
```

---

### 🔴 Bug K：间距和高度调整不生效 — 待修复

#### 根因：Hook 目标错误

**反编译铁证**（[L6176](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6176)）：

```c
_MSHookMessageEx(uVar1, "tableView:heightForHeaderInSection:", FUN_00008874, &DAT_0013a958);
```

微信优化 Hook 的是 `WCTableViewManager` 的 `tableView:heightForHeaderInSection:`，不是 `cellHeightFor:`。

#### 当前代码问题定位

| 位置 | 问题 | 修复 |
|:-----|:-----|:-----|
| [L8-57](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L8-L57) | `_hooked_cellHeightFor` Hook 错误目标 | 整段删除 |
| [L741-752](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L741-L752) | `initCellHeightHook` 注册错误 Hook | 替换为 `heightForHeaderInSection:` Hook |

#### `FUN_00008874` 完整还原（[L6691-L6750](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6691-L6750)）

```c
double FUN_00008874(id self, SEL _cmd, id tableView, long long section) {
    double result = orig(self, _cmd, tableView, section);

    UIResponder *responder = [tableView nextResponder];
    while (responder && ![responder isKindOfClass:[UIViewController class]]) {
        responder = [responder nextResponder];
    }

    if (DAT_0013a968 == 0) {
        DAT_0013a968 = objc_getClass("MoreViewController");
    }

    if (section == 1 && [responder isKindOfClass:DAT_0013a968]) {
        NSUserDefaults *config = [NSUserDefaults suiteName:@"com.cyansmoke.wechattweak"];
        if ([config boolForKey:@"ProfileCardBackgroundEnabled"]) {
            NSInteger spacing = [config integerForKey:@"ProfileCardSpacing"];
            if (spacing == 0) spacing = 9;
            result += spacing;
        }
    }

    return result;
}
```

#### 为什么 Hook `heightForHeaderInSection:` 能影响资料卡高度

微信"我"页面的布局结构：

```
UITableView
├── Section 0: 其他内容
├── Section 1: ★ 资料卡区域
│   ├── Header ← ★ 资料卡就在这里！（不是 Cell）
│   │   └── MMTableViewCell (作为 header view)
│   │       └── contentView → MMUIButton → MMHeadImageView
│   └── Cells: 设置项（服务、收藏、朋友圈...）
└── Section 2+: 更多设置项
```

**资料卡被放在 Section 1 的 Header 中**，所以 `heightForHeaderInSection:1` 返回值就是资料卡的高度。

#### 修复方案

**1. 删除** `_hooked_cellHeightFor` 函数和 `_orig_cellHeightFor` 指针（[L8-L57](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L8-L57)）

**2. 替换** `initCellHeightHook` 方法（[L741-L752](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L741-L752)）：

```objc
static double (*_orig_heightForHeader)(id, SEL, id, long long);
static double _hooked_heightForHeader(id self, SEL _cmd, id tableView, long long section) {
    double result = _orig_heightForHeader(self, _cmd, tableView, section);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgEnabled) return result;

    if (section != 1) return result;

    UIResponder *responder = [tableView nextResponder];
    UIViewController *vc = nil;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder;
            break;
        }
        responder = [responder nextResponder];
    }
    if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) {
        return result;
    }

    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0 && result < customHeight) {
        result = customHeight;
    }

    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) {
        result += spacing;
    }

    return result;
}

+ (void)initCellHeightHook {
    Class tableMgrClass = objc_getClass("WCTableViewManager");
    if (tableMgrClass) {
        MSHookMessageEx(tableMgrClass,
                        @selector(tableView:heightForHeaderInSection:),
                        (IMP)_hooked_heightForHeader,
                        (IMP *)&_orig_heightForHeader);
        WPLog(@"CardBg", @"[OK] WCTableViewManager::heightForHeaderInSection: (spacing+height)");
    } else {
        WPLog(@"CardBg", @"[WARN] WCTableViewManager class not found!");
    }
}
```

**3. 首次运行加日志确认 section 值**：

```objc
NSLog(@"[CardBg-Diag] heightForHeader: section=%lld, result=%.1f, vc=%@",
      section, result, vc ? NSStringFromClass([vc class]) : @"nil");
```

---

## 2. 已修复 Bug（简要）

| Bug | 说明 |
|-----|------|
| ✅ A-D | position 语义拆分 / case 0 边框 / skipMasksToFit 守卫 / masksToBounds 顺序 |
| ✅ H | 背景图 frame 高度 1704pt → 改用 button.bounds |
| ✅ I | fillMode contentMode 映射反了 → 修正映射 + fillMode=3 跳过圆角 |
| ✅ UI | alignment UI 标签改为 0=底部 1=居中 2=顶部（代码逻辑待同步） |

---

## 3. 待修复汇总

| 优先级 | Bug | 改动量 | 方案 |
|:------:|:---:|:-----:|------|
| **P0** | **K** 间距/高度不生效 | ~30 行 | 删除 `cellHeightFor:` Hook，新增 `WCTableViewManager.tableView:heightForHeaderInSection:` Hook，section==1 判断 |
| **P1** | **J** 对齐方式 | ~20 行 | 删除 contentsRect，改 `clipsToBounds=NO`，异步回调中计算 AspectFill 溢出量 + frame.origin.y 偏移 |
| **P2** | **G** 折叠置顶逻辑丢失 | ~12 行 | wp_applyStandardCorner 中插入折叠检测 |

---

## 4. 视图层级

```
MoreViewController
└── WCTableViewManager (m_tableViewMgr)
      ├── tableView:heightForRowAtIndexPath:  ← 普通设置行高度
      ├── tableView:heightForHeaderInSection: ← ★ 资料卡高度（section 1 的 header）
      └── UITableView
            ├── Section 0: 其他内容
            ├── Section 1:
            │   ├── Header ← ★ 资料卡（MMTableViewCell 作为 headerView）
            │   │   └── contentView → MMUIButton (ProfileCardBgHook)
            │   │       ├── UIImageView tag=999902 (bgImageView)
            │   │       │   ├── clipsToBounds = NO  ← ★ 允许图片溢出 frame
            │   │       │   ├── contentMode = AspectFill
            │   │       │   └── frame.origin.y ← ★ alignment 通过此值控制垂直对齐
            │   │       └── MMHeadImageView (头像)
            │   └── Cells: 服务、收藏、朋友圈...
            └── Section 2+: 更多设置项
```

---

## 5. 配置项说明

| 配置项 | 类型 | 默认值 | 状态 | 说明 |
|:------:|:-----:|:------:|:---:|------|
| `cardBgEnabled` | BOOL | NO | ✅ | 总开关 |
| `cardBgHidden` | BOOL | NO | ✅ | 隐藏卡片内容 |
| `cardBgFillMode` | NSInteger | 0 | ✅ | 0=AspectFill 1=AspectFit 2=ScaleToFill 3=AspectFill+无圆角 |
| `cardBgLight/DarkImagePath` | NSString* | nil | ✅ | 背景图路径 |
| `cardBgLight/DarkAlignment` | NSInteger | 0 | ⚠️ | 垂直对齐 UI=0底部1居中2顶部，但代码逻辑仍按旧映射，需随 Bug J 一起修复 |
| `cardBgLight/DarkLayer` | NSInteger | 0 | ✅ | 图层位置 0=底层 1=顶层 |
| `cardBgLight/DarkOffsetX` | CGFloat | 0 | ✅ | X 偏移 |
| `cardBgLight/DarkOffsetY` | CGFloat | 0 | ✅ | Y 偏移（alignment 偏移在此基础上叠加） |
| `cardBgHeight` | CGFloat | 144 | ❌ | 需移入 heightForHeaderInSection: Hook |
| `cardBgListSpacing` | CGFloat | 9 | ❌ | 需移入 heightForHeaderInSection: Hook |

---

## 6. 历史踩坑记录

| # | 问题 | 根因 | 解决方式 |
|:-:|:-----|:-----|:---------|
| A | 图片文件不存在 | 用户未保存背景图 | picker 保存后文件存在 |
| B | 白色 UIView 遮挡 bgImageView | UIDynamicProviderColor 白色板 | FIX-WHITE 遍历隐藏 |
| C | 点"我"卡死 watchdog | setFrame: height 触发循环 | 移除 height 修改（需移入 heightForHeader Hook） |
| D | 第二次 orig 覆盖 | if 块内外各调一次 orig | 标志位模式 |
| E | v13 过渡期圆角边距全丢 | early return 跳过通用代码 | 删除 early return |
| F | 圆角不裁剪 | Cell 层 masksToBounds=NO | 改 MMUIButton 层做圆角 |
| G | bgImageView 全宽无边距 | margin 在 orig 之后 | margin 移到 orig 之前 |
| H | 普通 Cell 白底丢失 | needsCardBgTransparency 条件过宽 | 增加 isProfileCardCell 判断 |
| I | 只开卡片背景全部 Cell 加圆角 | 入口"或"关系无二次守卫 | 重构为独立模块 |
| J | 关闭卡片背景资料卡无圆角 | early return 返回过早 | 删除 return |
| K | position 语义错位 + 缺 case 0 | 一变量两用语义冲突 | 拆为 cornerType + borderType |
| L | skipMasksToFit 无守卫 | 只看 fillMode 没看 cardBgEnabled | 加 && config.cardBgEnabled |
| M | masksToBounds 覆盖 | handleCellLayout 在 masksToBounds=YES 之前 | 交换执行顺序 |
| N | 背景图 frame 高度 1704pt | superview.superview 不是 Cell | 改用 button.bounds |
| O | fillMode 效果与微信优化不同 | contentMode 映射反了 + fillMode=3 缺跳过圆角 | 修正映射 + fillMode=3 跳过圆角 |
| **P** | **对齐方式始终居中** | **contentsRect 裁剪方式不对** | **改用 frame.origin.y 移动 + clipsToBounds=NO** |
| **Q** | **间距/高度不生效** | **Hook 了 cellHeightFor: 而非 heightForHeaderInSection:** | **Hook WCTableViewManager 的 heightForHeaderInSection:** |
