# MioPlugin 资料卡背景功能 — 实现步骤

> **创建日期**: 2026-06-02
> **参考**: [微信优化资料卡背景功能反编译深度分析.md](file:///www/wwwroot/ios/微信优化资料卡背景功能反编译深度分析.md)
> **目标文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)

---

## 0️⃣ 已完成部分（无需修改）

| 模块 | 文件 | 状态 | 说明 |
|------|------|:----:|------|
| 配置定义 | [PluginConfig.h L172-L185](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.h#L172-L185) | ✅ | 13 个 cardBg 属性已定义 |
| 设置 UI | [SettingCardBackgroundController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m) | ✅ | 完整 UI：开关/输入框/图片选择器(PHPicker)/填充模式/层级/偏移 |
| 图片保存 | [SettingCardBackgroundController.m L259-L305](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m#L259-L305) | ✅ | 静态图→PNG，GIF→原文件复制，存入 `Documents/` |
| 基础背景色 | [ListCornerRadiusHook.m L771-L774](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L771-L774) | ✅ | cardBgLight/DarkColor 已应用 |

---

## 1️⃣ 存储路径约定

### 1.1 目录结构

```
/var/mobile/Documents/
└── MioCardBackground/              ← ★ 专属目录（自动创建）
    ├── MioCardBgLight.png          ← 浅色静态图
    ├── MioCardBgLight.gif          ← 浅色 GIF 动图
    ├── MioCardBgDark.png           ← 深色静态图
    └── MioCardBgDark.gif           ← 深 GIF 动图
```

### 1.2 路径映射表

| 内容 | 完整路径 | 配置 Key |
|------|---------|---------|
| 浅色静态图 | `Documents/MioCardBackground/MioCardBgLight.png` | `cardBgLightImagePath` |
| 浅色 GIF | `Documents/MioCardBackground/MioCardBgLight.gif` | `cardBgLightImagePath`（存 GIF 路径） |
| 深色静态图 | `Documents/MioCardBackground/MioCardBgDark.png` | `cardBgDarkImagePath` |
| 深色 GIF | `Documents/MioCardBackground/MioCardBgDark.gif` | `cardBgDarkImagePath`（存 GIF 路径） |

### 1.3 获取目录的公共方法

**建议在 `ListCornerRadiusHook.m` 或新建一个工具方法中定义**：

```objc
+ (NSString *)wp_cardBackgroundDirectory {
    static NSString *dir = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *docsDir = [NSSearchPathForDirectoriesInDomains(
            NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
        dir = [docsDir stringByAppendingPathComponent:@"MioCardBackground"];

        NSFileManager *fm = [NSFileManager defaultManager];
        BOOL isDir = NO;
        BOOL exists = [fm fileExistsAtPath:dir isDirectory:&isDir];
        if (!exists) {
            [fm createDirectoryAtPath:dir
           withIntermediateDirectories:YES
                            attributes:nil
                                 error:nil];
        } else if (!isDir) {
            [fm removeItemAtPath:dir error:nil];
            [fm createDirectoryAtPath:dir
           withIntermediateDirectories:YES
                            attributes:nil
                                 error:nil];
        }
    });
    return dir;
}
```

### 1.4 需要同步修改 SettingCardBackgroundController.m

当前代码 [L275-L276](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m#L275-L276) 使用的是：

```objc
// 当前代码（需修改）
NSString *path = [NSHomeDirectory() stringByAppendingPathComponent:
    [NSString stringWithFormat:@"Documents/%@", filename]];
```

**改为**：

```objc
// 修改后
NSString *bgDir = [NSSearchPathForDirectoriesInDomains(
    NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
bgDir = [bgDir stringByAppendingPathComponent:@"MioCardBackground"];

NSFileManager *fm = [NSFileManager defaultManager];
BOOL isDir = NO;
if (![fm fileExistsAtPath:bgDir isDirectory:&isDir] || !isDir) {
    [fm createDirectoryAtPath:bgDir withIntermediateDirectories:YES
                     attributes:nil error:nil];
}

NSString *path = [bgDir stringByAppendingPathComponent:filename];
```

GIF 保存部分（[L293-L296](file:///www/root/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m#L293-L296)）也需要同步修改，将 `url.path` 复制到新目录而非直接使用临时 URL：

```objc
// GIF 修改后：复制到专属目录
NSString *bgDir = /* 同上 */;
NSString *destPath = [bgDir stringByAppendingPathComponent:filename]; // MioCardBgLight.gif 等
NSError *copyError = nil;
[fm copyItemAtURL:url toURL:[NSURL fileURLWithPath:destPath] error:&copyError];
if (mode == 101) {
    config.cardBgLightImagePath = destPath;
} else {
    config.cardBgDarkImagePath = destPath;
}
```

---

## 2️⃣ 配置项映射表（PluginConfig ↔ 功能）

| PluginConfig 属性 | 类型 | 默认值 | 对应微信优化配置 | 用途 |
|-------------------|------|:------:|---------------|------|
| `cardBgEnabled` | BOOL | NO | `ProfileCardBackgroundEnabled` | 总开关 |
| `cardBgHidden` | BOOL | NO | `ProfileCardHideCard` | 隐藏卡片内容 |
| `cardBgHeight` | CGFloat | 144 | `ProfileCardHeight` | 强制卡片高度 |
| `cardBgListSpacing` | CGFloat | 9 | `ProfileCardSpacing` | 卡片下方额外间距 |
| `cardBgLightImagePath` | NSString | nil | (文件路径) | 浅色背景图路径 |
| `cardBgDarkImagePath` | NSString | nil | (文件路径) | 深色背景图路径 |
| `cardBgFillMode` | NSInteger | 0 | `ProfileCardBackgroundContentMode` | 填充模式(0-3) |
| `cardBgLightLayer` | NSInteger | 0 | `ProfileCardBackgroundLightLayer` | 浅色图层位置(0=下,1=上) |
| `cardBgDarkLayer` | NSInteger | 0 | `ProfileCardBackgroundDarkLayer` | 深色图层位置(0=下,1=上) |
| `cardBgLightOffsetY` | CGFloat | 0 | `ProfileCardBackgroundLightYOffset` | 浅色 Y 偏移(-500~500) |
| `cardBgDarkOffsetY` | CGFloat | 0 | `ProfileCardBackgroundDarkYOffset` | 深色 Y 偏移(-500~500) |
| `cardBgLightOffsetX` | CGFloat | 0 | `ProfileCardBackgroundLightXOffset` | 浅色 X 偏移(-500~500) |
| `cardBgDarkOffsetX` | CGFloat | 0 | `ProfileCardBackgroundDarkXOffset` | 深色 X 偏移(-500~500) |

### FillMode 枚举

| 值 | 名称 | UIViewContentMode | 说明 |
|----|------|:----------------:|------|
| 0 | 填充模式 | `ScaleToFill` | 拉伸填满，可能变形 |
| 1 | 适应模式 | `ScaleAspectFit` | 等比适应，可能有留白 |
| 2 | 拉伸填充 | `ScaleAspectFill` | 等比填充，裁剪溢出 |
| 3 | 顶部填充 | `ScaleAspectFill` + 特殊处理 | 不受圆角 margin 影响 |

---

## 3️⃣ 实现架构

### 3.1 需要修改的文件

仅 **一个文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)

### 3.2 修改点分布

```
ListCornerRadiusHook.m
├── Cell Hook (replaced_MMTableViewCell_layoutSubviews)
│   └── 新增：Phase A - 背景图初始化与布局
│       ├── 高度调整 (cardBgHeight)
│       ├── HideCard 模式 (cardBgHidden)
│       ├── 创建/复用 UIImageView
│       ├── 计算 frame (含 offset)
│       ├── 图层顺序管理 (cardBgLight/DarkLayer)
│       └── 异步加载图片 dispatch
│
├── MMUIButton Hook (replaced_MMUIButton_layoutSubviews)
│   └── 无需修改（背景色已在现有代码中处理）
│
└── 新增静态方法
    ├── wp_loadBackgroundImageForCell:(UIImageView *)iv isDark:(BOOL)isDark
    │   └── 从文件加载图片（支持 GIF 动图），主线程设 image
    │
    └── wp_isCurrentDarkMode → BOOL
        └── 判断当前深浅模式
```

### 3.3 为什么不在 MMUIButton Hook 中处理？

根据微信优化的分析和 MioPlugin 现有架构：
- **MMUIButton 是视觉容器**（负责圆角/边框/masksToBounds）
- **Cell 是逻辑容器**（负责背景图的宿主）
- 背景图作为 Cell 的子视图插入，位于 MMUIButton 之下或之上
- 这样 MMUIButton 的 `masksToBounds=YES` 可以正确裁剪背景图

---

## 4️⃣ Step-by-Step 实现步骤

### Step 1: 新增深浅模式判断方法

**位置**: `@implementation ListCornerRadiusHook` 内部，任意位置

```objc
+ (BOOL)wp_isCurrentDarkMode {
    if (@available(iOS 13.0, *)) {
        UIApplication *app = [UIApplication sharedApplication];
        for (UIScene *scene in app.connectedScenes) {
            if ([scene isKindOfClass:[UIWindowScene class]]) {
                UIWindowScene *ws = (UIWindowScene *)scene;
                for (UIWindow *window in ws.windows) {
                    if (window.isKeyWindow) {
                        return window.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
                    }
                }
            }
        }
    }
    return NO;
}
```

**说明**: 微信优化通过 `connectedScenes → UIWindowScene → keyWindow → traitCollection` 判断。MioPlugin 可简化为直接读取当前 VC 的 traitCollection（如果可用），但上述方式更通用。

---

### Step 2: 新增背景图异步加载方法

**位置**: `@implementation ListCornerRadiusHook` 内部

```objc
+ (void)wp_loadBackgroundImageForImageView:(UIImageView *)imageView isDark:(BOOL)isDark {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        PluginConfig *config = [PluginConfig shared];
        NSString *imagePath = isDark ? config.cardBgDarkImagePath
                                     : config.cardBgLightImagePath;

        if (!imagePath || imagePath.length == 0) return;

        NSFileManager *fm = [NSFileManager defaultManager];
        if (![fm fileExistsAtPath:imagePath]) return;

        UIImage *resultImage = nil;
        NSString *ext = imagePath.pathExtension.lowercaseString;

        if ([ext isEqualToString:@"gif"]) {
            NSData *gifData = [NSData dataWithContentsOfFile:imagePath];
            if (gifData) {
                CGImageSourceRef source = CGImageSourceCreateWithData(
                    (__bridge CFDataRef)gifData, NULL);
                if (source) {
                    size_t count = CGImageSourceGetCount(source);
                    if (count < 2) {
                        CGImageRef cgImg = CGImageSourceCreateImageAtIndex(source, 0, NULL);
                        resultImage = [UIImage imageWithCGImage:cgImg];
                        CGImageRelease(cgImg);
                    } else {
                        NSMutableArray<UIImage *> *frames = [NSMutableArray array];
                        NSTimeInterval totalDuration = 0;
                        for (size_t i = 0; i < count; i++) {
                            CGImageRef frameImg = CGImageSourceCreateImageAtIndex(source, i, NULL);
                            if (frameImg) {
                                [frames addObject:[UIImage imageWithCGImage:frameImg]];
                                CGImageRelease(frameImg);

                                CFDictionaryRef props =
                                    CGImageSourceCopyPropertiesAtIndex(source, i, NULL);
                                if (props) {
                                    CFDictionaryRef gifDict = CFDictionaryGetValue(
                                        props, kCGImagePropertyGIFDictionary);
                                    if (gifDict) {
                                        CFNumberRef delayRef = CFDictionaryGetValue(
                                            gifDict, kCGImagePropertyGIFDelayTime);
                                        if (!delayRef) {
                                            delayRef = CFDictionaryGetValue(
                                                gifDict,
                                                kCGImagePropertyGIFUnclampedDelayTime);
                                        }
                                        NSTimeInterval delay = 0.1;
                                        if (delayRef) {
                                            CFNumberGetValue(delayRef,
                                                kCFNumberFloatType, &delay);
                                            if (delay < 0.02) delay = 0.1;
                                        }
                                        totalDuration += delay;
                                    }
                                    CFRelease(props);
                                }
                            }
                        }
                        CFRelease(source);
                        if (frames.count > 0) {
                            resultImage = [UIImage animatedImageWithImages:frames
                                                            duration:totalDuration];
                        }
                    }
                }
            }
        } else {
            resultImage = [UIImage imageWithContentsOfFile:imagePath];
        }

        if (resultImage && imageView) {
            dispatch_async(dispatch_get_main_queue(), ^{
                imageView.image = resultImage;
                imageView.alpha = 1.0;
            });
        }
    });
}
```

**关键细节**:
- 使用 `dispatch_get_global_queue` 作为后台队列（或创建专用串行队列 `"com.mioplugin.backgroundimage"`）
- GIF 解析使用 `CGImageSource` 底层 API，与微信优化一致
- 最小帧间隔保护 20ms
- 最终切回 main_queue 设置 `image` 和 `alpha=1.0`

---

### Step 3: 在 Cell Hook 中新增背景图逻辑

**位置**: `replaced_MMUITableViewCell_layoutSubviews` 方法内，**在调用 orig 之后、return 之前**

找到现有的资料卡分支代码（当前约 L263-L288 区域），在其内部添加背景图处理。

#### 3.1 在资料卡判断通过后、orig 调用前，添加高度调整

```objc
// 在现有的 if (isMoreVC && wp_isProfileCard:) 分支内
// ★ 在 orig 调用之前添加高度调整

PluginConfig *config = [PluginConfig shared];

if (config.cardBgEnabled) {
    // Phase A1: 高度调整
    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0) {
        CGFloat currentH = cellView.frame.size.height;
        if (currentH < customHeight) {
            CGRect f = cellView.frame;
            f.size.height = customHeight;
            cellView.frame = f;
        }
    }
}

// 然后才是原有的 orig 调用
if (_orig_MMTableViewCell_layoutSubviews) {
    ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews(self, _cmd);
}
```

#### 3.2 在 orig 调用之后、return 之前，添加完整的背景图逻辑

```objc
// orig 调用之后
if (config.cardBgEnabled) {

    BOOL isDark = [ListCornerRadiusHook wp_isCurrentDarkMode];

    // Phase A2: HideCard 模式
    if (config.cardBgHidden) {
        for (UIView *sub in cellView.subviews) {
            if (![sub isKindOfClass:[UIImageView class]]) {
                sub.hidden = YES;
            }
        }
        cellView.backgroundColor = [UIColor clearColor];
        UIColor *hideColor = [config colorFromHex:isDark
            ? config.listCardDarkBgColor : config.listCardLightBgColor];
        if (hideColor) {
            for (UIView *sub in cellView.subviews) {
                sub.backgroundColor = hideColor;
            }
        }
    }

    // Phase A3: 清理非目标 ImageView
    for (UIView *sub in cellView.subviews) {
        if ([sub isKindOfClass:[UIImageView class]]) {
            UIImageView *imgView = (UIImageView *)sub;
            if (imgView.image != nil &&
                ![imgView isEqual:objc_getAssociatedObject(cellView, "mio_bgImageView")]) {
                imgView.hidden = YES;
            } else if (imgView.image == nil) {
                imgView.hidden = YES;
            }
        }
    }

    // Phase A4: 创建/复用背景 UIImageView
    static const NSInteger kBgImageTag = 999901;
    UIImageView *bgImageView = (UIImageView *)[cellView viewWithTag:kBgImageTag];

    if (!bgImageView) {
        bgImageView = [[UIImageView alloc] init];
        bgImageView.tag = kBgImageTag;
        bgImageView.clipsToBounds = YES;
        bgImageView.userInteractionEnabled = NO;

        // 设置 contentMode
        NSInteger fillMode = config.cardBgFillMode;
        switch (fillMode) {
            case 1: bgImageView.contentMode = UIViewContentModeScaleAspectFit; break;
            case 2: bgImageView.contentMode = UIViewContentModeScaleAspectFill; break;
            default: bgImageView.contentMode = UIViewContentModeScaleToFill; break;
        }

        [cellView addSubview:bgImageView];
        objc_setAssociatedObject(cellView, "mio_bgImageView",
                                 bgImageView, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    // Phase A5: 计算 frame
    CGRect bounds = cellView.bounds;
    CGFloat margin = config.listCellMargin;
    if (margin <= 0) margin = 9;

    CGFloat imgW = bounds.size.width;
    CGFloat imgH = bounds.size.height;
    CGFloat imgX = 0;
    CGFloat imgY = 0;

    // 圆角开启且不是特殊模式时减去边距
    if (config.listCornerRadiusEnabled && config.cardBgFillMode != 3) {
        imgW -= margin * 2;
        imgX = margin;
    }

    // 应用偏移
    CGFloat offsetY = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;
    CGFloat offsetX = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
    imgY += offsetY;
    imgX += offsetX;

    bgImageView.frame = CGRectMake(imgX, imgY, imgW, imgH);

    // Phase A6: 图层顺序
    NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
    if (layerPos == 1) {
        // 上层：放到最顶
        [cellView bringSubviewToFront:bgImageView];
    } else {
        // 下层：放到底层
        [cellView sendSubviewToBack:bgImageView];
    }

    // Phase A7: 异步加载图片
    bgImageView.image = nil;  // 先清空避免闪烁
    bgImageView.alpha = 0.5; // 加载中的半透明状态
    [ListCornerRadiusHook wp_loadBackgroundImageForImageView:bgImageView
                                                     isDark:isDark];
}

return; // 资料卡分支结束
```

---

### Step 4: 处理 Spacing（列表向下间距）

**方案选择**: Spacing 影响的是资料卡 Cell 的高度计算，有两种实现方式：

#### 方案 A（推荐）：在 Cell Hook 中直接加高

在 Step 3.1 的 height 调整之后追加：

```objc
if (config.cardBgEnabled && config.cardBgListSpacing > 0) {
    CGFloat spacing = config.cardBgListSpacing;
    CGRect f = cellView.frame;
    f.size.height += spacing;
    f.origin.y -= spacing / 2.0;  // 向上扩展一半，向下扩展一半
    cellView.frame = f;
}
```

#### 方案 B（接近微信优化）：链式 Hook 中间层

需要额外 Hook 一个影响高度的函数（如 `sizeThatFits:` 或自定义的方法），在返回值上加上 spacing。复杂度较高，不推荐初期采用。

---

### Step 5: 确保 PluginConfig.load/save 包含新属性

检查 [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m):

**load 方法**中需添加：
```objc
_cardBgEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgEnabled"]];
_cardBgHidden = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgHidden"]];
_cardBgHeight = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgHeight"]];
_cardBgListSpacing = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgListSpacing"]];
_cardBgLightImagePath = [d stringForKey:[kPluginPrefix stringByAppendingString:@"CardBgLightImagePath"]];
_cardBgDarkImagePath = [d stringForKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkImagePath"]];
_cardBgFillMode = [d integerForKey:[kPluginPrefix stringByAppendingString:@"CardBgFillMode"]];
_cardBgLightLayer = [d integerForKey:[kPluginPrefix stringByAppendingString:@"CardBgLightLayer"]];
_cardBgDarkLayer = [d integerForKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkLayer"]];
_cardBgLightOffsetY = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgLightOffsetY"]];
_cardBgDarkOffsetY = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkOffsetY"]];
_cardBgLightOffsetX = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgLightOffsetX"]];
_cardBgDarkOffsetX = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkOffsetX"]];
```

**save 方法**中需添加对应的 set 调用。

---

## 5️⃣ 执行顺序总结（Cell Hook 内）

```
replaced_MMTableViewCell_layoutSubviews(self, _cmd)
│
├─ ① 判断是否 MoreVC + 是否资料卡 (wp_isProfileCard:)
│   └─ 不是 → 走原有逻辑
│
├─ ② cardBgEnabled 检查
│   ├─ cardBgHeight > 0 → 调整 cell 高度
│   └─ cardBgListSpacing > 0 → 调整 cell 高度+间距
│
├─ ③ ★ 调用 orig_MMTableViewCell_layoutSubviews(self, _cmd)
│   （这会触发 MMUIButton 的 layoutSubviews，处理圆角/边框等）
│
├─ ④ cardBgEnabled → 背景图逻辑:
│   ├─ HideCard → 隐藏子视图 + 渐变遮罩
│   ├─ 清理非目标 ImageView
│   ├─ 创建/复用 UIImageView (tag=999901)
│   ├─ 计算 frame (bounds - margin*2 + offsets)
│   ├─ 设置 contentMode (按 cardBgFillMode)
│   ├─ 图层顺序 (sendToBack / bringToFront)
│   └─ 异步加载图片 (wp_loadBackgroundImageForImageView:isDark:)
│
└─ ⑤ return
```

---

## 6️⃣ 注意事项

### 6.1 与现有圆角/边距功能的兼容性

| 场景 | 行为 |
|------|------|
| 圆角开启 + 背景开启 | 背景图宽度 `- 2*margin`，被 MMUIButton 的 masksToBounds 裁剪成圆角 |
| 圆角关闭 + 背景开启 | 背景图全宽显示 |
| 背景开启 + FillMode=3 | 背景图不受 margin 影响（全宽） |
| 背景开启 + HideCard | 子视图隐藏，只留背景图 |

### 6.2 性能考虑

- **每次 layoutSubviews 都会触发图片加载**？→ 应该加缓存或去重判断
- **优化建议**: 记录上次加载的图片路径，如果路径没变则跳过加载
- **UIImageView 复用**: 通过 tag=999901 保证每个 Cell 只有一个背景 ImageView

### 6.3 GIF 动图内存

- 大尺寸 GIF 可能占用较多内存
- 建议：加载后检查图片尺寸，超过 2048×2048 时做 downsample

### 6.4 线程安全

- `wp_loadBackgroundImageForImageView:isDark:` 在后台线程执行
- 最终 setImage 必须在 main queue
- 使用 __weak 引用 imageView 避免循环引用（block 捕获时注意）

---

## 7️⃣ 验证清单

编译后逐一验证：

- [ ] 开启"信息卡片背景"开关后，资料卡出现背景图
- [ ] 浅色模式下显示浅色背景图，深色模式下自动切换
- [ ] 选择 PNG 静态图正常显示
- [ ] 选择 GIF 动图正常播放动画
- [ ] Y/X 偏移量生效（正值方向正确）
- [ ] 填充模式切换正确（4 种模式视觉效果不同）
- [ ] "底层显示"/"顶层显示"切换正确
- [ ] 开启"隐藏信息卡片"后只显示背景图
- [ ] 自定义高度生效（大于原始高度时撑开）
- [ ] 列表向下间距生效（下方内容下移）
- [ ] 圆角开启时背景图被正确裁剪
- [ ] 圆角关闭时背景图全宽
- [ ] FillMode=3 特殊模式不受边距影响
- [ ] 删除背景图后恢复默认外观
- [ ] 关闭总开关后无任何背景图
- [ ] 滚动流畅无卡顿
- [ ] 内存无明显泄漏
