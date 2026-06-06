# WCRefine vs MioPlugin 背景图实现对比文档

## 概述

本文档对比 WCRefine 与 MioPlugin 在"资料卡片背景图"功能上的实现差异。WCRefine 功能更完善，支持视频+GIF+静态图三种媒体类型；MioPlugin 仅支持 GIF+静态图。

---

## 一、整体架构对比

| 维度 | WCRefine | MioPlugin |
|------|----------|-----------|
| **载体容器** | 自定义 `WCRefineToDoCardView`（独立 UIView） | 直接 Hook `MMUIButton`（微信原生资料卡按钮） |
| **Hook 目标** | `TextStateProfileTableView.layoutSubviews` | `MMUITableViewCell.layoutSubviews` |
| **背景视图** | `backgroundMediaImageView`(UIImageView) + `backgroundPlayerLayer`(AVPlayerLayer) | `mio_bgImageView`(UIImageView) |
| **媒体类型** | 静态图 / GIF 动图 / 视频 | 静态图 / GIF 动图 |
| **显示模式** | 出现在独立的 ToDo 卡片容器内 | 直接覆盖在资料卡 Cell 背景上 |
| **设置入口** | `WCRefineProfileCardBeautifyViewController` | `SettingCardBackgroundController`（卡片背景设置页） |

---

## 二、媒体类型支持对比

| 类型 | WCRefine | MioPlugin | 差异 |
|------|----------|-----------|------|
| **静态图片 (PNG/JPG)** | ✅ `[UIImage imageWithData:]` | ✅ `[UIImage imageWithContentsOfFile:]` | ★ 相同 |
| **GIF 动图** | ✅ `CGImageSource` + `animatedImageWithImages:` | ✅ `CGImageSource` + `animatedImageWithImages:` | ★ 相同 |
| **视频背景** | ✅ `AVPlayer` + `AVPlayerLayer` 无限循环 | ❌ 不支持 | **WCRefine 独有** |
| **深浅模式** | ✅ Light/Dark 独立路径、类型、偏移、透明度 | ✅ Light/Dark 独立路径、偏移 | MioPlugin 无深浅独立类型 |

---

## 三、视频背景实现对比

| 维度 | WCRefine | MioPlugin |
|------|----------|-----------|
| **视频播放器** | `AVPlayer` + `AVPlayerItem` | ❌ 不支持 |
| **视频图层** | `AVPlayerLayer` 插入 `cardContainer.layer` atIndex:0 | ❌ 不支持 |
| **内容模式** | `AVLayerVideoGravityResizeAspectFill`（等比填充） | ❌ 不支持 |
| **循环播放** | `AVPlayerItemDidPlayToEndTimeNotification` → seekTo:0 → play | ❌ 不支持 |
| **静音控制** | `player.volume` 根据 `toDoCardBackgroundVideoMuted` 配置 | ❌ 不支持 |
| **可见性控制** | `backgroundVideoPausedByVisibility` + `didMoveToWindow` | ❌ 不支持 |
| **透明度控制** | `playerLayer.opacity` 属性 | ❌ 不支持 |

---

## 四、GIF 动图实现对比

| 维度 | WCRefine | MioPlugin |
|------|----------|-----------|
| **解析 API** | `CGImageSourceCreateWithData` | `CGImageSourceCreateWithData` |
| **帧延迟读取** | `kCGImagePropertyGIFUnclampedDelayTime` → `kCGImagePropertyGIFDelayTime` | `kCGImagePropertyGIFUnclampedDelayTime` → `kCGImagePropertyGIFDelayTime` |
| **最小帧延迟** | **30ms** (0.03) | **20ms** (0.02) |
| **单帧处理** | `imageWithCGImage:scale:orientation:` 带 scale | `imageWithCGImage:` 不带 scale |
| **多帧处理** | `animatedImageWithImages:duration:` | `animatedImageWithImages:duration:` |
| **加载方式** | 同步 `dataWithContentsOfFile:` | 异步 `dispatch_async` 到全局队列 |

**差异分析**:
- WCRefine 的帧延迟保护为 30ms，MioPlugin 为 20ms，MioPlugin 更宽松
- WCRefine 的单帧 UIImage 创建带屏幕 scale，MioPlugin 不带（更简单但可能模糊）
- WCRefine 同步加载（在主线程进行），MioPlugin 异步加载（不阻塞主线程）

---

## 五、静态图片实现对比

| 维度 | WCRefine | MioPlugin |
|------|----------|-----------|
| **加载方式** | `[UIImage imageWithData:]` 通过 NSData | `[UIImage imageWithContentsOfFile:]` 直接文件 |
| **异步加载** | ❌ 同步（在主线程 updateBackgroundMediaIfNeeded 中） | ✅ 异步 dispatch_async |
| **加载完成回调** | 直接在同步流程中设置 image | `dispatch_async(dispatch_get_main_queue())` |

---

## 六、配置项对比

| 配置项 | WCRefine | MioPlugin |
|--------|----------|-----------|
| 功能总开关 | `toDoCardBackgroundUseMedia` | `cardBgBeautifyEnabled` |
| 素材开关 | ❌（由 type=nil 控制） | `cardBgMaterialEnabled` |
| 浅色模式图片路径 | `toDoCardBackgroundMediaPathLight` | `cardBgLightImagePath` |
| 深色模式图片路径 | `toDoCardBackgroundMediaPathDark` | `cardBgDarkImagePath` |
| 媒体类型(浅) | `toDoCardBackgroundMediaTypeLight` | ❌ 无（固定图片） |
| 媒体类型(深) | `toDoCardBackgroundMediaTypeDark` | ❌ 无（固定图片） |
| 视频静音 | `toDoCardBackgroundVideoMuted` | ❌ 不支持 |
| 透明度(浅) | `toDoCardBackgroundMediaOpacityLight` | ❌ 无 |
| 透明度(深) | `toDoCardBackgroundMediaOpacityDark` | ❌ 无 |
| X偏移(浅) | `toDoCardBackgroundMediaOffsetXLight` | `cardBgLightOffsetX` |
| X偏移(深) | `toDoCardBackgroundMediaOffsetXDark` | `cardBgDarkOffsetX` |
| Y偏移(浅) | `toDoCardBackgroundMediaOffsetYLight` | `cardBgLightOffsetY` |
| Y偏移(深) | `toDoCardBackgroundMediaOffsetYDark` | `cardBgDarkOffsetY` |
| 缩放(浅) | `toDoCardBackgroundMediaScaleLight` | ❌ 无（由 fillMode 控制） |
| 缩放(深) | `toDoCardBackgroundMediaScaleDark` | ❌ 无（由 fillMode 控制） |
| 填充模式 | ❌ 无（固定 AspectFill） | `cardBgFillMode` (4种) |
| 图层位置 | ❌ 固定最底层 | `cardBgLightLayer/DarkLayer` (底层/顶层) |
| 隐藏卡片 | ❌ 隐藏整个 ToDoCardView | `cardBgHidden`（隐藏资料内容） |
| 高度 | ❌ 无（由 ToDoCard 自身决定） | `cardBgHeight` |
| 列表间距 | ❌ 无 | `cardBgListSpacing` |

**总结**: WCRefine 配置更丰富（视频相关、透明度、缩放），MioPlugin 更灵活（填充模式、图层位置、高度控制）

---

## 七、缓存机制对比

| 维度 | WCRefine | MioPlugin |
|------|----------|-----------|
| **缓存 Key** | 基于 type+path+opacity+modDate+fileSize 拼接 | ❌ 无缓存机制 |
| **Key 生成时机** | 每次 `updateBackgroundMediaIfNeeded` | ❌ 无 |
| **Key 对比** | 与 `loadedBackgroundMediaKey` 比较 | ❌ 无 |
| **匹配后行为** | 只更新 frame 和透明度，不重新加载 | 每次都重新加载 |
| **已加载标记** | `loadedBackgroundMediaKey` 属性 | `objc_setAssociatedObject` + `kMioBgLoadedKey` |

**分析**: WCRefine 有完善的缓存 Key 机制，文件未变化时跳过加载，性能更优。MioPlugin 每次 layoutSubviews 都会重新加载图片。

---

## 八、生命周期管理对比

| 场景 | WCRefine | MioPlugin |
|------|----------|-----------|
| **layoutSubviews** | 调用 `updateBackgroundMediaIfNeeded` + 播放控制 | 调用 `handleButtonLayout` → 完整重建背景 |
| **深浅模式切换** | `traitCollectionDidChange_` → 调用 `updateBackgroundMediaIfNeeded` | ❌ 需等待下次 layoutSubviews |
| **进入/离开窗口** | `didMoveToWindow` → 播放/暂停视频 | ❌ 无处理 |
| **主动刷新** | `reloadContent` → `setNeedsLayout` | ❌ 无专门方法 |
| **dealloc** | 移除播放通知观察者，释放播放器和图层 | 释放 ImageView |

---

## 九、代码结构对比

### WCRefine（模块化设计）

```
WCRefineToDoCardView (独立视图类)
├── setupSubviews          → 创建子视图（包括 backgroundMediaImageView）
├── layoutSubviews         → 布局 + updateBackgroundMediaIfNeeded
├── updateBackgroundMediaIfNeeded → 核心媒体加载逻辑（~740行）
├── animatedImageWithGIFData_ → GIF 解析（~190行）
├── currentBackgroundMediaFrame → 帧计算
├── isDarkModeForBackgroundMedia → 模式判断
├── setBackgroundVideoActive: → 视频活跃控制
└── didMoveToWindow         → 可见性控制

FUN_0032b0d0 (Hook 入口)
└── layoutSubviews hook → 检测 MMUIButton → 调用设置方法
```

### MioPlugin（嵌入式设计）

```
handleButtonLayout (ProfileCardBgHook.m)
├── 资料卡主体设置
├── FIX-WHITE 白色视图清理
├── HideCard 隐藏卡片逻辑
├── 背景图创建与配置 (inline)
│   ├── UIImageView 创建/复用
│   ├── frame 计算（边距、偏移、填充模式）
│   └── 图层顺序控制
└── 加载标记

wp_loadBackgroundImageForImageView:isDark: (工具方法)
├── 异步队列加载
├── GIF/静态图分支
└── 主线程回调设置

SettingCardBackgroundController (设置页)
├── 手风琴式 UI 构建
└── PHPicker 选择图片
```

---

## 十、优劣分析

### WCRefine 优势

| 优势 | 说明 |
|------|------|
| **支持视频背景** | AVPlayer + AVPlayerLayer 完整视频播放能力 |
| **缓存机制完善** | 基于文件元数据的 Key 对比，避免重复加载 |
| **深浅模式独立配置** | 浅色/深色可以设置不同的媒体类型、透明度、缩放 |
| **透明度控制** | 支持图片/视频的透明度独立调节 |
| **缩放控制** | 独立的 Scale 配置，不依赖填充模式 |
| **生命周期管理完善** | 窗口可见性、视频播放暂停控制完整 |

### WCRefine 劣势

| 劣势 | 说明 |
|------|------|
| **ToDoCard 耦合** | 背景功能与 ToDoCard 视图深度耦合，不易分离 |
| **同步加载** | 媒体文件在主线程同步加载，可能卡顿 |
| **固定的 AspectFill** | 不支持其他填充模式 |
| **无图层位置选项** | 背景始终在最底层 |

### MioPlugin 优势

| 优势 | 说明 |
|------|------|
| **异步加载** | 图片在后台线程加载，不阻塞 UI |
| **填充模式多样** | 支持 ScaleToFill / AspectFit / AspectFill / 特殊模式 |
| **图层位置可选** | 支持底层/顶层切换 |
| **高度可调** | 可自定义资料卡高度和间距 |
| **独立于特定视图** | 直接在 Cell 层级操作，灵活度更高 |

### MioPlugin 劣势

| 劣势 | 说明 |
|------|------|
| **不支持视频** | 无法播放视频背景 |
| **无缓存机制** | 每次 layoutSubviews 都重新加载 |
| **无透明度控制** | 不能调节背景透明度 |
| **无缩放控制** | 依赖填充模式间接控制 |
| **生命周期简单** | 无窗口可见性处理 |

---

## 十一、关键代码对比

### 11.1 背景初始化对比

**WCRefine** (在 setupSubviews 中创建子视图):
```objc
- (void)setupSubviews {
    // ... 创建 cardContainer ...
    
    // 创建背景 ImageView
    UIImageView *bgImageView = [[UIImageView alloc] init];
    bgImageView.contentMode = UIViewContentModeScaleAspectFill;
    bgImageView.clipsToBounds = YES;
    bgImageView.userInteractionEnabled = NO;
    [self setBackgroundMediaImageView:bgImageView];
    [self.cardContainer addSubview:bgImageView];
    
    // ... 创建其他子视图 ...
}
```

**MioPlugin** (在 layoutSubviews 中动态创建):
```objc
// 在 handleButtonLayout 中
UIImageView *bgImageView = objc_getAssociatedObject(cellView, "mio_bgImageView");
if (!bgImageView) {
    bgImageView = [[UIImageView alloc] init];
    bgImageView.contentMode = ...; // 根据 fillMode 设置
    bgImageView.clipsToBounds = YES;
    bgImageView.userInteractionEnabled = NO;
    [cellView addSubview:bgImageView];
    objc_setAssociatedObject(cellView, "mio_bgImageView", bgImageView, ...);
}
```

### 11.2 视频背景创建对比

**WCRefine**:
```objc
// MediaType == 3 时
NSURL *url = [NSURL fileURLWithPath:mediaPath];
AVPlayer *player = [AVPlayer playerWithURL:url];
player.volume = muted ? 0 : 1.0;
[self setBackgroundPlayer:player];

AVPlayerLayer *playerLayer = [AVPlayerLayer playerLayerWithPlayer:player];
playerLayer.videoGravity = AVLayerVideoGravityResizeAspectFill;
playerLayer.opacity = opacity;
[self setBackgroundPlayerLayer:playerLayer];

[self.cardContainer.layer insertSublayer:playerLayer atIndex:0];

// 注册循环播放
[[NSNotificationCenter defaultCenter] addObserverForName:AVPlayerItemDidPlayToEndTimeNotification
    object:player.currentItem queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification *note) {
    if (!self.backgroundVideoPausedByVisibility) {
        [self.backgroundPlayer seekToTime:CMTimeMake(0, 1)];
        [self.backgroundPlayer play];
    }
}];

if (self.window && !self.backgroundVideoPausedByVisibility) {
    [player play];
}
```

**MioPlugin**: ❌ 不支持视频背景

### 11.3 GIF 解析对比

**WCRefine**:
```objc
// 同步加载
NSData *data = [NSData dataWithContentsOfFile:mediaPath];
UIImage *image = [self animatedImageWithGIFData:data];
if (!image) image = [UIImage imageWithData:data]; // 回退
bgImageView.image = image;
```

**MioPlugin**:
```objc
// 异步加载
dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
    NSData *data = [NSData dataWithContentsOfFile:path];
    // ... CGImageSource 解析 ...
    dispatch_async(dispatch_get_main_queue(), ^{
        imageView.image = resultImage;
        imageView.alpha = 1.0;
    });
});
```

### 11.4 缓存机制对比

**WCRefine**:
```objc
// 生成缓存 Key
NSString *key = [NSString stringWithFormat:@"%d_%@_%f_%@_%llu",
    mediaType, mediaPath, opacity, modDate, fileSize];

// 对比
NSString *loadedKey = self.loadedBackgroundMediaKey;
if ([loadedKey isEqualToString:key] && self.cardContainer && 
    !CGRectIsEmpty(currentFrame)) {
    // 只更新 frame 和透明度
    self.backgroundMediaImageView.frame = currentFrame;
    self.backgroundMediaImageView.alpha = opacity;
    self.backgroundPlayerLayer.frame = currentFrame;
    self.backgroundPlayerLayer.opacity = opacity;
    return;
}

// 完整加载
self.loadedBackgroundMediaKey = key;
// ... 创建/加载资源 ...
```

**MioPlugin**: ❌ 无缓存机制，每次 layoutSubviews 都完全重建

---

## 十二、总结

| 对比项 | 胜出方 | 说明 |
|--------|--------|------|
| **媒体类型丰富度** | WCRefine | 视频+GIF+静态图 |
| **加载性能** | WCRefine | 有缓存 Key 机制，避免重复加载 |
| **UI 流畅度** | MioPlugin | 异步加载不阻塞主线程 |
| **配置灵活性** | 各有优势 | WCRefine: 透明度/缩放；MioPlugin: 填充模式/图层位置 |
| **代码可维护性** | WCRefine | 模块化设计，功能与视图绑定清晰 |
| **架构独立性** | MioPlugin | 不依赖特定视图，在 Cell 层级可复用 |
| **视频支持** | WCRefine (唯一) | MioPlugin 完全不支持 |
| **深浅模式** | WCRefine | 支持独立媒体类型和透明度 |

### 建议

如果 MioPlugin 要增加视频背景支持，需要：

1. 在 `handleButtonLayout` 中增加视频分支（类似 WCRefine 的 MediaType==3 分支）
2. 创建 `AVPlayer` + `AVPlayerLayer` 并插入到 Cell 内容视图的 layer 中
3. 注册 `AVPlayerItemDidPlayToEndTimeNotification` 实现循环播放
4. 增加 `didMoveToWindow` 或 KVO 处理窗口可见性
5. 配置项增加：视频路径、视频静音、透明度
6. 在 `SettingCardBackgroundController` 中增加视频选择器支持（`PHPickerFilter videosFilter`）