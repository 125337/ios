# GIF 动图上传功能 · 全面清理文档

## 1. 清理范围

| 模块 | 文件 | 清理原因 |
|------|------|---------|
| **聊天顶栏分隔符** | `SettingChatTopBarController.m` | GIF 选择器无法工作（`loadFileRepresentationForTypeIdentifier:kUTTypeGIF` 对非 GIF 类型返回 error），且无有效替代方案 |
| **聊天顶栏分隔符** | `ChatTopBarConfig.h` / `.m` | GIF 相关静态方法只被分隔符使用 |
| **聊天顶栏分隔符** | `MioChatAvatarTitleView.m` | GIF 加载分支因无 GIF 文件永远不会命中 |
| **资料卡背景** | `SettingCardBackgroundController.m` | 同样无法上传动图，且 `pickImageForMode:` 中两个模式用的都是相同的 `imagesFilter`，GIF 模式纯属多余 |

---

## 2. 改动详情（按文件）

### 2.1 SettingChatTopBarController.m

**文件：** [SettingChatTopBarController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingChatTopBarController.m)

#### 2.1.1 删除 ActionSheet 中的「选择 GIF 动图」按钮 — L180-L184

旧代码：
```objc
[alert addAction:[UIAlertAction actionWithTitle:@"选择GIF动图"
                                         style:UIAlertActionStyleDefault
                                       handler:^(UIAlertAction *action) {
    [self onPickGIFImage];
}]];
```

新代码：**直接删除这 5 行。**

#### 2.1.2 删除 `onPickGIFImage` 方法 — L248-L257

旧代码：
```objc
- (void)onPickGIFImage {
    PHPickerConfiguration *config = [[PHPickerConfiguration alloc] init];
    config.selectionLimit = 1;
    config.filter = [PHPickerFilter imagesFilter];

    PHPickerViewController *picker = [[PHPickerViewController alloc] initWithConfiguration:config];
    picker.delegate = self;
    picker.view.tag = 200;
    [self presentViewController:picker animated:YES completion:nil];
}
```

新代码：**直接删除这整个方法（10 行）。**

#### 2.1.3 删除 delegate 中的 tag 200 处理分支 — L516-L554

旧代码（L492-L555）：
```objc
if (picker.view.tag == 100) {
    // ... 静态图片加载（保留）
} else if (picker.view.tag == 200) {
    WPLog(@"Mio-Separator", @"  tag=200 → 选择GIF动图");
    [result.itemProvider loadFileRepresentationForTypeIdentifier:(__bridge NSString *)kUTTypeGIF ...
```

新代码：**删除整个 `else if` 分支（L516-L554），只保留 tag 100 的静态图片处理。** 修改后结构：

```objc
- (void)picker:(PHPickerViewController *)picker didFinishPicking:(NSArray<PHPickerResult *> *)results {
    if (results.count == 0) {
        [picker dismissViewControllerAnimated:YES completion:nil];
        return;
    }

    PHPickerResult *result = results.firstObject;
    ChatTopBarConfig *config = [ChatTopBarConfig shared];

    if (picker.view.tag == 100) {
        WPLog(@"Mio-Separator", @"  tag=100 → 选择静态图片");
        [result.itemProvider loadObjectOfClass:[UIImage class] completionHandler:^(__kindof id<NSItemProviderReading> object, NSError *error) {
            if (error || ![object isKindOfClass:[UIImage class]]) {
                WPLog(@"Mio-Separator", @"    加载图片失败: error=%@", error);
                return;
            }
            dispatch_async(dispatch_get_main_queue(), ^{
                UIImage *image = (UIImage *)object;
                WPLog(@"Mio-Separator", @"    图片加载成功: size=%.0fx%.0f", image.size.width, image.size.height);
                NSData *pngData = UIImagePNGRepresentation(image);
                NSString *miopngDir = [self ensureMiopngDirectory];
                NSString *iconPath = [miopngDir stringByAppendingPathComponent:@"separator_icon.png"];
                WPLog(@"Mio-Separator", @"    写入路径: %@", iconPath);
                [pngData writeToFile:iconPath atomically:YES];
                WPLog(@"Mio-Separator", @"    写入完成, data.length=%lu", (unsigned long)pngData.length);
                WPLog(@"Mio-Separator", @"    静态图标已保存到: %@", iconPath);
                [picker dismissViewControllerAnimated:YES completion:^{
                    WPLog(@"Mio-Separator", @"    dismiss 完成，调用 buildUI");
                    [self buildUI];
                }];
            });
        }];
    }
}
```

#### 2.1.4 删除副标题中的「GIF动图」判断 — L406-L407

旧代码（L402-L409）：
```objc
// 副标题：优先显示文本，其次GIF，最后静态图片
NSString *sepSub = @"未设置";
if (config.chatSeparatorText.length > 0) {
    sepSub = [NSString stringWithFormat:@"文本: %@", config.chatSeparatorText];
} else if ([ChatTopBarConfig hasSeparatorGIFFile]) {
    sepSub = @"GIF动图";
} else if ([ChatTopBarConfig hasSeparatorIconFile]) {
    sepSub = @"静态图片";
}
```

新代码：
```objc
// 副标题：优先显示文本，其次静态图片
NSString *sepSub = @"未设置";
if (config.chatSeparatorText.length > 0) {
    sepSub = [NSString stringWithFormat:@"文本: %@", config.chatSeparatorText];
} else if ([ChatTopBarConfig hasSeparatorIconFile]) {
    sepSub = @"静态图片";
}
```

`remove` 注释中的 `其次GIF`。

#### 2.1.5 删除 `deleteAllSeparators` 中的 GIF 文件删除 — L572-L577

旧代码（L565-L577）：
```objc
// 删除静态图片文件
NSString *iconPath = [miopngDir stringByAppendingPathComponent:@"separator_icon.png"];
if ([fm fileExistsAtPath:iconPath]) {
    WPLog(@"Mio-Separator", @"  删除静态图片: %@", iconPath);
    [fm removeItemAtPath:iconPath error:nil];
}

// 删除GIF文件
NSString *gifPath = [miopngDir stringByAppendingPathComponent:@"separator_icon.gif"];
if ([fm fileExistsAtPath:gifPath]) {
    WPLog(@"Mio-Separator", @"  删除GIF文件: %@", gifPath);
    [fm removeItemAtPath:gifPath error:nil];
}
```

新代码（删除 GIF 部分，保留静态图片部分）：
```objc
// 删除静态图片文件
NSString *iconPath = [miopngDir stringByAppendingPathComponent:@"separator_icon.png"];
if ([fm fileExistsAtPath:iconPath]) {
    WPLog(@"Mio-Separator", @"  删除静态图片: %@", iconPath);
    [fm removeItemAtPath:iconPath error:nil];
}
```

更新注释：
```objc
// 清空配置（只需清理文本，静态图片已删除）
```

---

### 2.2 ChatTopBarConfig.h

**文件：** [ChatTopBarConfig.h](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/ChatTopBarConfig.h)

删除 GIF 相关的 2 行声明（L70-L71、L74-L75）：

删除以下：
```objc
/// 判断是否存在 GIF 分隔符文件
+ (BOOL)hasSeparatorGIFFile;
/// 获取 GIF 分隔符文件的完整路径
+ (NSString *)separatorGIFPath;
```

删除后 `separatorIconPath` 声明上方保留空行。`hasAnySeparator` 声明保留。

---

### 2.3 ChatTopBarConfig.m

**文件：** [ChatTopBarConfig.m](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/ChatTopBarConfig.m)

#### 2.3.1 删除 `hasAnySeparator` 中的 GIF 检查 — L64-L65

旧代码（L62-L66）：
```objc
- (BOOL)hasAnySeparator {
    return self.chatSeparatorText.length > 0
        || [ChatTopBarConfig hasSeparatorIconFile]
        || [ChatTopBarConfig hasSeparatorGIFFile];
}
```

新代码：
```objc
- (BOOL)hasAnySeparator {
    return self.chatSeparatorText.length > 0
        || [ChatTopBarConfig hasSeparatorIconFile];
}
```

#### 2.3.2 删除 `separatorGIFPath` 方法 — L72-L74

删除以下 3 行：
```objc
+ (NSString *)separatorGIFPath {
    return [NSHomeDirectory() stringByAppendingPathComponent:@"Documents/Miopng/separator_icon.gif"];
}
```

#### 2.3.3 删除 `hasSeparatorGIFFile` 方法 — L80-L81

删除以下 2 行：
```objc
+ (BOOL)hasSeparatorGIFFile {
    return [[NSFileManager defaultManager] fileExistsAtPath:[self separatorGIFPath]];
}
```

---

### 2.4 MioChatAvatarTitleView.m

**文件：** [MioChatAvatarTitleView.m](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/MioChatAvatarTitleView.m)

#### 2.4.1 简化 `updateMode` 中的 `hasIconSep` — L137-L138

旧代码（L136-L138）：
```objc
BOOL hasTextSep = config.chatSeparatorText.length > 0;
BOOL hasIconSep = [ChatTopBarConfig hasSeparatorGIFFile]
               || [ChatTopBarConfig hasSeparatorIconFile];
```

新代码：
```objc
BOOL hasTextSep = config.chatSeparatorText.length > 0;
BOOL hasIconSep = [ChatTopBarConfig hasSeparatorIconFile];
```

#### 2.4.2 简化 `loadSeparatorIcon` 中的 GIF 优先检查 — L505-L530

旧代码（L505-L530）：
```objc
- (BOOL)loadSeparatorIcon {
    // 1. 优先检查 GIF 文件（硬编码路径）
    NSString *gifPath = [ChatTopBarConfig separatorGIFPath];
    if ([[NSFileManager defaultManager] fileExistsAtPath:gifPath]) {
        NSData *data = [NSData dataWithContentsOfFile:gifPath];
        UIImage *gifImage = [UIImage imageWithData:data];
        if (gifImage) {
            self.separatorView.image = gifImage;
            return YES;
        }
    }

    // 2. 检查静态图标文件（硬编码路径）
    NSString *iconPath = [ChatTopBarConfig separatorIconPath];
    if ([[NSFileManager defaultManager] fileExistsAtPath:iconPath]) {
        NSData *data = [NSData dataWithContentsOfFile:iconPath];
        UIImage *icon = [UIImage imageWithData:data];
        if (icon) {
            self.separatorView.image = icon;
            return YES;
        }
    }

    self.separatorView.image = nil;
    return NO;
}
```

新代码（删除 GIF 检查，只保留静态图片）：
```objc
- (BOOL)loadSeparatorIcon {
    NSString *iconPath = [ChatTopBarConfig separatorIconPath];
    if ([[NSFileManager defaultManager] fileExistsAtPath:iconPath]) {
        NSData *data = [NSData dataWithContentsOfFile:iconPath];
        UIImage *icon = [UIImage imageWithData:data];
        if (icon) {
            self.separatorView.image = icon;
            return YES;
        }
    }
    self.separatorView.image = nil;
    return NO;
}
```

---

### 2.5 SettingCardBackgroundController.m（附赠清理）

**文件：** [SettingCardBackgroundController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m)

资料卡背景也有一个完全相同的「选择 GIF 动图」按钮，起不了任何作用（`pickImageForMode:` 的 GIF 和静态模式使用了完全相同的 `imagesFilter`，且 GIF 加载同样可能失败）。一并清理。

#### 2.5.1 删除 ActionSheet 中的「选择 GIF 动图」按钮 — L292-L296

旧代码（L286-L296）：
```objc
[alert addAction:[UIAlertAction actionWithTitle:@"选择静态图片"
                                         style:UIAlertActionStyleDefault
                                       handler:^(UIAlertAction *action) {
    [self pickImageForMode:100];
}]];

[alert addAction:[UIAlertAction actionWithTitle:@"选择GIF动图"
                                         style:UIAlertActionStyleDefault
                                       handler:^(UIAlertAction *action) {
    [self pickImageForMode:101];
}]];
```

新代码（只保留静态图片按钮）：
```objc
[alert addAction:[UIAlertAction actionWithTitle:@"选择静态图片"
                                         style:UIAlertActionStyleDefault
                                       handler:^(UIAlertAction *action) {
    [self pickImageForMode:100];
}]];
```

#### 2.5.2 简化 `pickImageForMode:` 方法 — L321-L332

旧代码（L321-L332）：
```objc
- (void)pickImageForMode:(NSInteger)mode {
    PHPickerConfiguration *config = [[PHPickerConfiguration alloc] init];
    config.selectionLimit = 1;

    BOOL isGif = (mode == 101);
    config.filter = isGif ? [PHPickerFilter imagesFilter] : [PHPickerFilter imagesFilter];

    PHPickerViewController *picker = [[PHPickerViewController alloc] initWithConfiguration:config];
    picker.delegate = self;
    picker.view.tag = mode;
    [self presentViewController:picker animated:YES completion:nil];
}
```

`isGif` 变量完全多余（两个分支用的同一 filter）。既然已经没有 mode 101，直接简化为无参方法，删除 `isGif`：

新代码（删除 `mode` 参数和 `isGif`，将 `picker.view.tag = mode` → 移除）：
```objc
- (void)pickImage {
    PHPickerConfiguration *phConfig = [[PHPickerConfiguration alloc] init];
    phConfig.selectionLimit = 1;
    phConfig.filter = [PHPickerFilter imagesFilter];

    PHPickerViewController *picker = [[PHPickerViewController alloc] initWithConfiguration:phConfig];
    picker.delegate = self;
    [self presentViewController:picker animated:YES completion:nil];
}
```

> ⚠️ 同时需要更新 `onImageTap` 中的调用：`[self pickImageForMode:100]` → `[self pickImage]`

#### 2.5.3 简化 delegate 中的 GIF 处理 — L346-L417

旧代码（L344-L417）：
```objc
NSInteger mode = picker.view.tag;
BOOL isGif = (mode == 101);
// ...
NSString *targetFile = isGif ? @"MioCardBg.gif" : @"MioCardBg.png";
NSString *altExt = isGif ? @"MioCardBg.png" : @"MioCardBg.gif";
// ...
if (isGif) {
    [result.itemProvider loadDataRepresentationForTypeIdentifier:@"com.compuserve.gif" ...
} else {
    [result.itemProvider loadDataRepresentationForTypeIdentifier:@"public.image" ...
}
```

新代码（删除 `isGif` 相关变量，只保留「public.image」加载路径）：
```objc
NSInteger mode = picker.view.tag;
// ...
// 只保存为 PNG（因为只支持静态图片选择）
NSString *targetFile = @"MioCardBg.png";

// 删除旧的 altExt 逻辑（不再需要删除 .gif）

// ... 以下删除 GIF 分支，只保留 else 分支
[result.itemProvider loadDataRepresentationForTypeIdentifier:@"public.image"
                                       completionHandler:^(NSData *data, NSError *error) {
    if (error || !data) {
        WPLog(@"CardBg-Diag", @"[PICKER] Image load FAILED: error=%@", error ?: @"data nil");
        return;
    }
    WPLog(@"CardBg-Diag", @"[PICKER] Image data loaded, size=%lu bytes", (unsigned long)data.length);
    dispatch_async(dispatch_get_main_queue(), ^{
        BOOL written = [data writeToFile:targetPath atomically:YES];
        WPLog(@"CardBg-Diag", @"[PICKER] Image write to %@: %@", targetPath, written ? @"SUCCESS" : @"FAILED");
        [ConfigManager saveAll];
        [picker dismissViewControllerAnimated:YES completion:^{
            [self buildUI];
        }];
    });
}];
```

> `altPath` 和 `altExt` 也一并删除，不再需要删除备用扩展名。

同时删除 `altPath` 相关代码（L368-L376）：
```objc
NSString *altExt = isGif ? @"MioCardBg.png" : @"MioCardBg.gif";
// ...
NSString *altPath = [bgDir stringByAppendingPathComponent:altExt];
// ...
if ([fm fileExistsAtPath:altPath]) {
    [fm removeItemAtPath:altPath error:nil];
    WPLog(@"CardBg-Diag", @"[PICKER] Removed alt file: %@", altPath);
}
```

---

## 3. 修改总览

| 文件 | 删除 | 修改 | 说明 |
|------|------|------|------|
| `SettingChatTopBarController.m` | 29 行 | 5 行 | 删除 GIF 按钮、方法、delegate 分支、副标题判断、del 中的 GIF 文件删除 |
| `ChatTopBarConfig.h` | 4 行 | 0 行 | 删除 `hasSeparatorGIFFile`、`separatorGIFPath` 声明 |
| `ChatTopBarConfig.m` | 5 行 | 0 行 | 删除 `separatorGIFPath`、`hasSeparatorGIFFile` 方法，简化 `hasAnySeparator` |
| `MioChatAvatarTitleView.m` | 8 行 | 3 行 | 删除 `loadSeparatorIcon` 中 GIF 检查，简化 `hasIconSep` |
| `SettingCardBackgroundController.m` | ~35 行 | ~5 行 | 删除 GIF 按钮、isGif 变量、altExt/altPath、GIF 加载分支 |
| **合计** | **~81 行** | **~13 行** | |

## 4. 验证清单

| 测试场景 | 预期结果 | 关键验证点 |
|---------|---------|-----------|
| 点击「头像分隔符号」 | 弹窗中只有「输入文本」「选择静态图片」「清除分隔符」「取消」| GIF 按钮已消失 |
| 选择静态图片 | 保存为 `separator_icon.png`，顶栏正常显示 | 加载走 PNG 路径 |
| 设置文本分隔符 | 文本正常显示 | 函数不变 |
| 清除所有分隔符 | 图片和文本都被清空 | `deleteAllSeparators` 不再轮询 `.gif` |
| 点击「背景图」 | 弹窗中只有「选择静态图片」「删除背景图」「取消」| GIF 按钮已消失 |
| 选择背景图 | 保存为 `MioCardBg.png`，资料卡正常显示 | delegate 只走 `public.image` 分支 |
| 已存的 `.gif` 文件怎么办 | 不受影响（不主动删除），但不显示 | 清理后 `.gif` 文件仍在磁盘，但应用不再读它 |