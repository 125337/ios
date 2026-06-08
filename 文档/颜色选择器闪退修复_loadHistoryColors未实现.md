# 颜色选择器闪退修复 · 缺少方法实现导致 unrecognized selector

> 现象：点击"Cell背景色"按钮后，颜色选择器还没弹出来就闪退
> 崩溃日志：`unrecognized selector sent to instance 0x...`
> 崩溃线程：主线程，viewDidLoad 过程中

---

## 1. 根因

**`loadHistoryColors` 方法声明了、调用了，但没有实现。**

```
WPHsvColorPickerController.m 类扩展 (line 23):
    - (void)loadHistoryColors;    ← 声明

viewDidLoad (line 71):
    [self loadHistoryColors];      ← 调用

整个 .m 文件 (1~433行):
    ...                            ← ⚠️ 没有任何 @implementation loadHistoryColors
```

ObjC 运行时发现 `self` 不响应 `loadHistoryColors` 选择器 → 抛出 `unrecognized selector` 异常 → SIGABRT。

### 为什么方法丢了？

之前重构 VC 时，`loadHistoryColors` 的**实现**在原代码中：

```objc
- (void)loadHistoryColors {          // ← 旧代码
    NSArray *saved = [[NSUserDefaults standardUserDefaults]
                        arrayForKey:@"WPColorPickerHistory"];
    if (saved) {
        self.historyColors = [saved mutableCopy];
    }
    [self updateHistoryColorButtons]; // ← 这个方法也被删了
}
```

但在组件化改造后：
- `updateHistoryColorButtons` → 移入 `WPColorPaletteView` 内部管理
- 旧的 `loadHistoryColors` 实现被删除了
- 但 **调用者** `[self loadHistoryColors]` 和 **声明** `- (void)loadHistoryColors;` 忘记删了

---

## 2. 修复：替换 `loadHistoryColors` 为新的实现

### 修改文件

`WPHsvColorPickerController.m`

### 操作

删除旧的声明（line 23） + 重新实现方法（确保从 UserDefaults 加载数据到 colorPalette）

### 具体改动

**① 从类扩展中删除过时的声明**：

```objc
// WPHsvColorPickerController.m, 类扩展 (约 line 23)
// 删除这一行:
// - (void)loadHistoryColors;
```

**② 在 viewDidLoad 中保留调用，但提供正确的实现**：

在 `@end` 之前（或 setupConstraints 之后）添加：

```objc
#pragma mark - 历史颜色加载

- (void)loadHistoryColors {
    NSArray *saved = [[NSUserDefaults standardUserDefaults] arrayForKey:@"WPColorPickerHistory"];
    if (saved) {
        self.historyColors = [saved mutableCopy];
        [self.colorPalette setHistoryHexes:self.historyColors];
    }
}
```

### 完整改动对照

```diff
// WPHsvColorPickerController.m

@interface WPHsvColorPickerController ()
@property (nonatomic, copy) void(^callback)(NSString *lightHex, NSString *darkHex);
@property (nonatomic, strong) WPHueSlider *hueSlider;
@property (nonatomic, strong) WPSaturationBrightnessView *sbView;
@property (nonatomic, strong) WPRGBAControl *rgbaControl;
@property (nonatomic, strong) WPHexInputView *hexInput;
@property (nonatomic, strong) WPColorPaletteView *colorPalette;
- (void)loadHistoryColors;                          // ← 删掉这一行
@end

...

- (void)viewDidLoad {
    ...
    [self setupUI];
    [self loadHistoryColors];                       // ← 保留调用
    ...
}

...

// 在 setupConstraints 之后、@end 之前添加:
+#pragma mark - 历史颜色加载
+
+- (void)loadHistoryColors {
+    NSArray *saved = [[NSUserDefaults standardUserDefaults] arrayForKey:@"WPColorPickerHistory"];
+    if (saved) {
+        self.historyColors = [saved mutableCopy];
+        [self.colorPalette setHistoryHexes:self.historyColors];
+    }
+}

@end
```

---

## 3. 为什么 viewDidLoad 中的顺序是合理的

```
viewDidLoad:
  1. setupScrollView        → 创建 scrollView + contentView
  2. setupUI                → 创建所有组件（包括 colorPalette）
       └── colorPalette = [[WPColorPaletteView alloc] init]
       └── [colorPalette setPresetColors:]     ← 预设色
       └── [colorPalette setMorandiColors:]    ← 莫兰迪
       └── [colorPalette setHistoryHexes:[]]   ← 空的历史色
  3. loadHistoryColors      → 从 UserDefaults 加载历史色
       └── [colorPalette setHistoryHexes:实际保存的历史]
  4. updateCurrentColorFromHex → 设置当前颜色
  5. syncToComponentsFromCurrentColor → 同步到各组件
```

步骤 3 在步骤 2 之后执行，因为 `colorPalette` 必须在调用 `loadHistoryColors` 之前已经创建。

---

## 4. 验证修复

| 检查项 | 预期 |
|--------|------|
| 编译无 warning | 无 `Method definition for 'loadHistoryColors' not found` |
| 点击 Cell背景色 | 颜色选择器正常弹出 |
| 历史颜色加载 | 之前保存的历史颜色出现在"历史"区 |
| 使用新颜色确认 | 新颜色出现在"历史"区第一位 |

---

## 5. 预防此类问题

ObjC 中方法声明但未实现 → 编译器只有 warning，**不会报 error**，运行时直接崩溃。建议：

1. **编译时开 `-Werror` 或检查所有 warning**：在 Build Settings 的 `Other Warning Flags` 加 `-Werror`
2. **查看 Xcode 的 warning 列表**：方法声明后未实现会显示 `Method definition for 'XXX' not found`

或者在当前项目中，编译后手动搜索所有 `@selector` 和声明，确保都有实现：

```
grep -n "^\s*-\|^\s*+" WPHsvColorPickerController.m | grep -v "@end" | grep -v "//"  # 列出所有方法
```