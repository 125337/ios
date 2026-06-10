# CardBgConfig.m GIF 残留 · 死代码确认与清理

## 1. 残留定位

**文件：** [CardBgConfig.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/CardBgConfig.m)

| 行号 | 代码 | 所在方法 |
|------|------|---------|
| L60 | `NSString *gifPath = [dir stringByAppendingPathComponent:@"MioCardBg.gif"];` | `backgroundImagePath` |
| L61 | `if ([fm fileExistsAtPath:gifPath]) return gifPath;` | `backgroundImagePath` |
| L78 | `[fm removeItemAtPath:[dir stringByAppendingPathComponent:@"MioCardBg.gif"] error:nil];` | `deleteBackgroundImage` |

---

## 2. 死代码确认

### 2.1 `backgroundImagePath` L59-L61 — 读取侧死代码

**问题：** 这段代码从 `MioCardBackground/` 目录中查找 `MioCardBg.gif` 文件并优先返回。但全项目搜索 `MioCardBg.gif` 字符串发现，**现在没有任何代码向 `MioCardBackground/` 目录写入 `.gif` 文件**。

```objc
// 之前：GIF 上传按钮 → pickImageForMode:101 → 写入 MioCardBg.gif
// 现在：GIF 上传按钮已删除，无任何代码写 MioCardBg.gif
```

唯一曾经写入 `.gif` 的路径是 `SettingCardBackgroundController.m` 的 `pickImageForMode:101`（mode 101 的 GIF 选择器），这个按钮和对应代码已经在上一轮清理中删除。现在的 `picker:didFinishPicking:` 中只写了 `MioCardBg.png`。

**证据链：**

1. `MioCardBg.gif` 作为写入目标 → **不存在**（[SettingCardBackgroundController.m L350](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m#L350) 写的是 `MioCardBg.png`）
2. `MioCardBg.gif` 作为文件复制目标 → **不存在**（搜索全项目无结果）
3. `MioCardBg.gif` 作为 `NSData writeToFile:` 目标 → **不存在**（搜索全项目无结果）
4. 第三方导入 → **不可能**（iOS 沙箱隔离）

**结论：** `MioCardBg.gif` 在 `MioCardBackground/` 目录中永不可能出现。L59-L61 永远不会返回。**确认死代码。**

### 2.2 `deleteBackgroundImage` L78 — 删除侧死代码

**问题：** 这段代码尝试删除 `MioCardBackground/MioCardBg.gif`。根据 2.1 的结论，这个文件不存在，`removeItemAtPath:` 对不存在的文件会静默返回 NO。此调用不产生任何实际效果。

**证据链：**
1. `MioCardBg.gif` 永不可能存在于该目录中
2. `removeItemAtPath:` 对不存在的文件是安全的（不抛异常），但也是无意义的

**结论：** L78 永不会有文件可删。每次调用 `deleteBackgroundImage` 时，L77 就已经删除了唯一的 `MioCardBg.png`，L78 实际上是一个不会命中任何文件的空操作。**确认死代码。**

---

## 3. 附赠：ProfileCardBgHook.m 中的连带死代码

因为 `backgroundImagePath` 永不可能返回 `.gif` 路径，`ProfileCardBgHook.m` 中两处 GIF 动画解码代码也变成了死代码：

**文件：** [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

| 行号 | 代码 | 所在方法 | 说明 |
|------|------|---------|------|
| L206-L256 | `if ([ext isEqualToString:@"gif"]) { ... }` | `loadBackgroundImageSync` | GIF 帧动画解码、帧数组构建、总时长计算、`animatedImageWithImages:duration:` 创建 |
| L323-L385 | `if ([ext isEqualToString:@"gif"]) { ... }` | `loadBackgroundImageForImageView:` | GIF 帧动画解码 + `FLAnimatedImageView`/`FLAnimatedImage` 分支 |
| L371-L385 | `FLAnimatedImageView *animatedImageView = ...` | `loadBackgroundImageForImageView:` | FLAnimatedImage 创建与动画播放设置 |

这些代码在 GIF 上传功能被清理后，全部变成不可达路径。**建议一并删除。**

---

## 4. 清理方案

### 4.1 CardBgConfig.m

#### 4.1.1 简化 `backgroundImagePath` — 删除 GIF 优先检查

旧代码（L55-L68）：
```objc
+ (NSString *)backgroundImagePath {
    NSString *dir = [self backgroundImageDirectory];
    NSFileManager *fm = [NSFileManager defaultManager];

    // GIF 优先
    NSString *gifPath = [dir stringByAppendingPathComponent:@"MioCardBg.gif"];
    if ([fm fileExistsAtPath:gifPath]) return gifPath;

    // 其次 PNG
    NSString *pngPath = [dir stringByAppendingPathComponent:@"MioCardBg.png"];
    if ([fm fileExistsAtPath:pngPath]) return pngPath;

    return nil;
}
```

新代码：
```objc
+ (NSString *)backgroundImagePath {
    NSString *dir = [self backgroundImageDirectory];
    NSString *pngPath = [dir stringByAppendingPathComponent:@"MioCardBg.png"];
    if ([[NSFileManager defaultManager] fileExistsAtPath:pngPath]) return pngPath;
    return nil;
}
```

#### 4.1.2 简化 `deleteBackgroundImage` — 删除 GIF 文件清理

旧代码（L74-L79）：
```objc
+ (void)deleteBackgroundImage {
    NSFileManager *fm = [NSFileManager defaultManager];
    NSString *dir = [self backgroundImageDirectory];
    [fm removeItemAtPath:[dir stringByAppendingPathComponent:@"MioCardBg.png"] error:nil];
    [fm removeItemAtPath:[dir stringByAppendingPathComponent:@"MioCardBg.gif"] error:nil];
}
```

新代码：
```objc
+ (void)deleteBackgroundImage {
    NSFileManager *fm = [NSFileManager defaultManager];
    NSString *dir = [self backgroundImageDirectory];
    [fm removeItemAtPath:[dir stringByAppendingPathComponent:@"MioCardBg.png"] error:nil];
}
```

---

### 4.2 ProfileCardBgHook.m（建议一揽子清理）

#### 4.2.1 `loadBackgroundImageSync` — 删除 GIF 分支，只保留 PNG

旧代码（L206-L256）：
```objc
NSString *ext = imagePath.pathExtension.lowercaseString;

if ([ext isEqualToString:@"gif"]) {
    // ... ~50 行 GIF 帧动画解码代码
}

// 普通图片（PNG/JPEG）
UIImage *result = [UIImage imageWithContentsOfFile:imagePath];
return result;
```

新代码：
```objc
// 普通图片（PNG）
UIImage *result = [UIImage imageWithContentsOfFile:imagePath];
return result;
```

#### 4.2.2 `loadBackgroundImageForImageView:` — 删除 GIF 分支及 FLAnimatedImage 引用

旧代码（L321-L385）：
```objc
NSString *ext = imagePath.pathExtension.lowercaseString;

if ([ext isEqualToString:@"gif"]) {
    // ... ~50 行 GIF 帧动画解码 + FLAnimatedImage 分支
} else {
    UIImage *resultImage = [UIImage imageWithContentsOfFile:imagePath];
    // ...
}
```

新代码（只保留普通图片分支）：
```objc
UIImage *resultImage = [UIImage imageWithContentsOfFile:imagePath];
```

> 清理后如果 `FLAnimatedImage` / `FLAnimatedImageView` 不再被任何地方引用，可以考虑移除相关 import 和第三方库依赖。

---

## 5. 修改总览

| 文件 | 删除 | 修改 | 说明 |
|------|------|------|------|
| [CardBgConfig.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/CardBgConfig.m) | **2 行** | 0 | 删 `backgroundImagePath` 的 GIF 检查 + `deleteBackgroundImage` 的 GIF 清理 |
| [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)（建议） | **~110 行** | 0 | 删两处 GIF 动画解码代码 + FLAnimatedImage 分支 |
| **合计** | **~112 行** | **0** | |

## 6. 验证

| 测试场景 | 预期结果 |
|---------|---------|
| 选择静态背景图 | 保存为 `MioCardBg.png`，资料卡正常显示 |
| 删除背景图 | 只删除 `.png` 文件（目录中本就无 `.gif`） |
| 已有旧 `.gif` 文件的用户升级 | `.gif` 文件不主动删除，但不再被读取（用户重新选图后会覆盖） |