# `MioChatAvatarTitleView.m` 死代码清理文档

涉及三个死代码问题，均在 [MioChatAvatarTitleView.m](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/MioChatAvatarTitleView.m) 中。

---

## 问题一：`dealloc` 中无意义通知移除

### 1.1 代码位置

```objc
// 第 21-23 行
- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}
```

### 1.2 根因分析

`removeObserver:self` 的作用是移除当前对象注册的所有通知观察者。但：

- 该文件中没有任何 `addObserver:selector:name:object:` 调用
- 整个 `ChatTopBar` 模块（`ChatTopBarHook.m`、`MioChatAvatarTitleView.m`）中也没有任何通知注册
- `UIView` 父类不会自动为该子类注册通知

这是一个典型的**模板/防御性代码残留** — 开发者在写 `dealloc` 时习惯性地加上了 `removeObserver:` "以防万一"，但实际并没有注册任何通知，该行代码是纯 no-op。

### 1.3 为什么不删也没问题

`[NSNotificationCenter removeObserver:]` 在没有任何观察者时调用是安全的，不会 crash，不会报错。

---

## 问题二：`updateFontSizes` 方法从未被调用

### 2.1 代码位置

```objc
// 第 26 行（.h 中声明，公开接口）
- (void)updateFontSizes;

// 第 421-430 行（.m 中实现）
- (void)updateFontSizes {
    PluginConfig *config = [PluginConfig shared];
    [self.titleLabel setFont:[UIFont systemFontOfSize:config.chatNicknameFontSize]];

    CGFloat sepFontSize = MAX(8.0, MIN(config.chatSeparatorSize * 0.4, 16.0));
    [self.separatorTextLabel setFont:[UIFont systemFontOfSize:sepFontSize weight:UIFontWeightMedium]];

    [self setNeedsLayout];
    [self layoutIfNeeded];
}
```

### 2.2 根因分析

- 方法声明在 `.h` 中（公开接口），实现在 `.m` 中
- **整个代码库中没有任何调用方**
- 仅在旧文档中被提及（对比微信优化的描述），说明是过去的刷新方案，已被 `setupSubviews` 替代

**为什么它变成了死代码：** 字体大小的更新逻辑已经迁移到了每次 `layoutSubviews` 中实时读取配置（结合 `MMGrowTextView` 的布局逻辑），不再需要单独调用 `updateFontSizes` 来刷新。

实际工作中的字体刷新方式：
- 昵称字体 → `applyPositionOffset` 中可能涉及，或 `setupSubviews` 中已设置
- 分隔符字体 → `setupSubviews` 中设置初始值，`layoutSubviews` 中不再重新设置字体，而是读取已有值

### 2.3 为什么不删也没问题

未被调用就是纯死代码，执行不到。但它在 `.h` 中是公开接口，如果外部有通过 `performSelector:` 或字符串方式调用，静态分析查不到。可以全局搜索 `updateFontSizes` 确认无引用（已在文档编写时完成搜索，结论：零引用）。

---

## 问题三：`separatorTextWidth` 方法从未被调用

### 3.1 代码位置

```objc
// 第 432-437 行（仅 .m 中定义，未在 .h 中声明，私有方法）
- (CGFloat)separatorTextWidth {
    NSString *text = self.separatorTextLabel.text;
    if (!text || text.length == 0) return 0;
    CGFloat fontSize = self.separatorTextLabel.font.pointSize;
    return [text sizeWithAttributes:@{NSFontAttributeName: [UIFont systemFontOfSize:fontSize weight:UIFontWeightMedium]}].width;
}
```

### 3.2 根因分析

- 未在 `.h` 中声明，是纯粹的私有辅助方法
- **整个代码库中零引用**
- 该方法的功能是计算分隔符文本的显示宽度

**为什么它变成了死代码：** 分隔符文本的宽度计算已在 `calculateNameWidth` 或 `layoutSubviews` 中内联处理，不再需要这个独立的辅助方法。该方法是重构过程中提取出来又废弃的中间产物。

### 3.3 为什么不删也没问题

私有方法，零引用，纯死代码，不会被执行到。

---

## 四、影响范围

**零影响。** 仅涉及 [MioChatAvatarTitleView.m](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/MioChatAvatarTitleView.m) 一个文件。

---

## 五、修改步骤

在 [MioChatAvatarTitleView.m](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/MioChatAvatarTitleView.m) 中：

### Step 1：删除 `dealloc` 方法

删除第 21-23 行：

```objc
- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}
```

### Step 2：删除 `updateFontSizes` 方法

删除第 421-430 行（整个方法块）：

```objc
- (void)updateFontSizes {
    PluginConfig *config = [PluginConfig shared];
    [self.titleLabel setFont:[UIFont systemFontOfSize:config.chatNicknameFontSize]];

    CGFloat sepFontSize = MAX(8.0, MIN(config.chatSeparatorSize * 0.4, 16.0));
    [self.separatorTextLabel setFont:[UIFont systemFontOfSize:sepFontSize weight:UIFontWeightMedium]];

    [self setNeedsLayout];
    [self layoutIfNeeded];
}
```

### Step 3：删除 `separatorTextWidth` 方法

删除第 432-437 行（整个方法块）：

```objc
- (CGFloat)separatorTextWidth {
    NSString *text = self.separatorTextLabel.text;
    if (!text || text.length == 0) return 0;
    CGFloat fontSize = self.separatorTextLabel.font.pointSize;
    return [text sizeWithAttributes:@{NSFontAttributeName: [UIFont systemFontOfSize:fontSize weight:UIFontWeightMedium]}].width;
}
```

### Step 4：删除 `.h` 中的公开声明

在 [MioChatAvatarTitleView.h](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/MioChatAvatarTitleView.h) 中删除第 26 行：

```objc
- (void)updateFontSizes;
```

---

## 六、验证步骤

1. 按上述步骤删除 4 处代码。
2. 编译项目，确认**无编译错误**。
3. 进入聊天顶栏功能，切换显示模式、调整数值，确认 UI 一切正常。

---

## 附：搜索证据

| 方法名 | 定义位置 | 声明位置 | 全局调用数 | 结论 |
|--------|---------|---------|-----------|------|
| `dealloc`（`removeObserver:`） | .m L22 | — | 0 | 死代码 |
| `updateFontSizes` | .m L421 | .h L26 | 0 | 死代码 |
| `separatorTextWidth` | .m L432 | 未声明（私有） | 0 | 死代码 |