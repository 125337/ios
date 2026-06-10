# MioChatAvatarTitleView 全面重构方案

> 目标：将现有的"大锅烩式"代码拆分为职责独立的模块，各司其职，顺手修复图标/GIF 分隔符不可见 Bug

---

## 1. 现有问题清单

| # | 问题 | 严重度 | 说明 |
|---|------|--------|------|
| 1 | `layoutSubviews` 188 行做所有事 | 🔴 高 | 布局 + 状态管理 + 字体设置全部混在一起 |
| 2 | `loadSeparatorIcon` 用 `dispatch_async` | 🔴 高 | 本地文件读取不需要异步，导致时序问题 |
| 3 | `loadSeparatorIcon` 设 hidden/sizeToFit | 🔴 高 | 与 `layoutSubviews` 的 hidden 覆盖形成竞争 |
| 4 | 图标/GIF 分隔符在布局中被强制隐藏 | 🔴 高 | L244 `separatorView.hidden = YES` 无条件执行 |
| 5 | 图标/GIF 分隔符没有 frame | 🔴 高 | `layoutSubviews` 从未设置 `separatorView.frame` |
| 6 | `updateAvatars` 末尾无 `setNeedsLayout` | 🟡 中 | 数据加载后布局未及时刷新 |
| 7 | `setupSubviews` 和 `layoutSubviews` 重复设 font | 🟡 中 | titleLabel font 在两处都设置 |
| 8 | `hasSeparator` 定义在顶部但只在 Mode 2/3 使用 | 🟢 低 | 变量作用域过大 |
| 9 | `applyPositionOffset` 声明了但未实现 | 🟢 低 | Header 中有声明，.m 中无实现 |
| 10 | Mode 0/1/4/5/6/7 重复写 separatorView hidden=YES | 🟢 低 | 8 个 mode 分支中 6 个都在重复隐藏分隔符组件 |

---

## 2. 重构后模块划分

重构后的文件将分为 7 个清晰的职责模块：

```
┌────────────────────────────────────────────────┐
│  1. Init & Setup         —— 创建 subview       │
│  2. Mode Management      —— 显示/隐藏控制      │
│  3. Layout               —— frame 计算         │
│  4. Data Loading         —— 头像+分隔符加载    │
│  5. Helpers              —— 纯计算辅助函数     │
│  6. Gestures             —— 点击事件           │
│  7. Public Methods       —— 外部调用入口       │
└────────────────────────────────────────────────┘
```

---

## 3. 每个方法的单一职责定义

### 3.1 `setupSubviews` — 只创建 subview

**当前问题：** 在 setupSubviews 中读 config 设置 font 和 textColor，这些应该属于"数据"而非"初始化"。

**改造后：**
```objc
- (void)setupSubviews {
    self.backgroundColor = [UIColor clearColor];
    self.clipsToBounds = YES;

    // leftAvatarView
    self.leftAvatarView = [self makeAvatarImageViewWithAction:@selector(onLeftAvatarTapped:)];
    [self addSubview:self.leftAvatarView];

    // rightAvatarView
    self.rightAvatarView = [self makeAvatarImageViewWithAction:@selector(onRightAvatarTapped:)];
    [self addSubview:self.rightAvatarView];

    // separatorView (图标/GIF)
    self.separatorView = [self makeSeparatorImageView];
    [self addSubview:self.separatorView];

    // separatorTextLabel
    self.separatorTextLabel = [self makeSeparatorLabel];
    [self addSubview:self.separatorTextLabel];

    // titleLabel
    self.titleLabel = [self makeTitleLabel];
    [self addSubview:self.titleLabel];
}
```

> 将 subview 的创建细节拆分为独立的工厂方法（makeAvatarImageViewWithAction: / makeSeparatorImageView / makeSeparatorLabel / makeTitleLabel），每个方法只负责创建一个 subview 的通用属性（contentMode、clipsToBounds、初始 hidden=YES 等）。**不涉及字体尺寸、颜色等根据 config 变化的值。**

### 3.2 `updateMode` — 新方法，只控制显示/隐藏

**职责：** 根据 `chatDisplayMode` 和分隔符配置，决定每个 subview 的 hidden 状态。**不涉及任何 frame 计算。**

```objc
- (void)updateMode {
    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    NSInteger mode = config.chatDisplayMode;

    // 先全部隐藏，再按需显示
    self.leftAvatarView.hidden = YES;
    self.rightAvatarView.hidden = YES;
    self.separatorView.hidden = YES;
    self.separatorTextLabel.hidden = YES;
    self.titleLabel.hidden = YES;

    switch (mode) {
        case 7:
            // 双方头像重叠
            self.leftAvatarView.hidden = NO;
            self.rightAvatarView.hidden = NO;
            break;

        case 5:
            // 对方头像 + 名字在左侧
            self.leftAvatarView.hidden = NO;
            self.titleLabel.hidden = NO;
            break;

        case 6:
            // 对方头像 + 名字在右侧
            self.leftAvatarView.hidden = NO;
            self.titleLabel.hidden = NO;
            break;

        case 0:
            // 自己头像（居中、无名字）
            self.rightAvatarView.hidden = NO;
            break;

        case 4:
            // 自己头像（居中、名字在下方）
            self.rightAvatarView.hidden = NO;
            self.titleLabel.hidden = NO;
            break;

        case 1:
            // 对方头像（居中、无名字）
            self.leftAvatarView.hidden = NO;
            break;

        case 2:
        case 3:
        default: {
            // 双方头像，可能有分隔符
            self.leftAvatarView.hidden = NO;
            self.rightAvatarView.hidden = NO;

            BOOL hasTextSep = config.chatSeparatorText.length > 0;
            BOOL hasIconSep = (config.chatSeparatorIcon.length > 0
                    && [[NSFileManager defaultManager] fileExistsAtPath:config.chatSeparatorIcon])
                    || (config.chatSeparatorGIF.length > 0
                    && [[NSFileManager defaultManager] fileExistsAtPath:config.chatSeparatorGIF]);

            if (hasTextSep) {
                self.separatorTextLabel.hidden = NO;
            } else if (hasIconSep) {
                self.separatorView.hidden = NO;
            }
            // 都没有 → 全部隐藏，只有两头像

            if (mode == 3) {
                self.titleLabel.hidden = NO;
            }
            break;
        }
    }
}
```

### 3.3 `layoutSubviews` — 只做 frame 计算

**职责：** 根据当前 mode，纯数学计算每个可见 subview 的 frame。**不设置 hidden，不设置 font，不设置 text。**

```objc
- (void)layoutSubviews {
    [super layoutSubviews];
    // ★ 不能在这里调用 updateMode！updateMode 由外部触发

    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    NSInteger mode = config.chatDisplayMode;
    CGFloat totalH = self.bounds.size.height;
    CGFloat totalW = self.bounds.size.width;
    CGFloat avatarSize = config.chatAvatarSize;
    CGFloat avatarSpacing = config.chatAvatarSpacing;
    CGFloat halfSpacing = avatarSpacing * 0.5;
    CGFloat nameFontSize = config.chatNicknameFontSize;

    // ====== avatarY：大部分模式居中，Mode 3/4 偏上留空间给名字 ======
    CGFloat avatarY;
    if (mode == 3 || mode == 4) {
        avatarY = (totalH - avatarSize - 4 - nameFontSize) * 0.5 + 1;
    } else {
        avatarY = (totalH - avatarSize) * 0.5;
    }

    switch (mode) {
        case 7:
            [self layoutMode7WithTotalH:totalH totalW:totalW
                             avatarSize:avatarSize avatarY:avatarY
                                 config:config];
            break;

        case 5:
            [self layoutMode5WithTotalH:totalH totalW:totalW
                             avatarSize:avatarSize avatarY:avatarY
                             nameFontSize:nameFontSize config:config];
            break;

        case 6:
            [self layoutMode6WithTotalH:totalH totalW:totalW
                             avatarSize:avatarSize avatarY:avatarY
                             nameFontSize:nameFontSize config:config];
            break;

        case 0:
        case 4:
            [self layoutMode0Or4WithTotalH:totalH totalW:totalW
                                avatarSize:avatarSize avatarY:avatarY
                              nameFontSize:nameFontSize mode:mode config:config];
            break;

        case 1:
            [self layoutMode1WithTotalH:totalH totalW:totalW
                             avatarSize:avatarSize avatarY:avatarY
                                 config:config];
            break;

        case 2:
        case 3:
        default:
            [self layoutMode2Or3WithTotalH:totalH totalW:totalW
                                avatarSize:avatarSize avatarY:avatarY
                              avatarSpacing:avatarSpacing halfSpacing:halfSpacing
                              nameFontSize:nameFontSize mode:mode config:config];
            break;
    }
}
```

> 每个 mode 的布局逻辑被拆分为独立的方法，避免一个巨无霸方法。

#### 3.3.1 各 Mode 布局方法详细实现

```objc
// Mode 7：双方头像重叠
- (void)layoutMode7WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                   avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                       config:(ChatTopBarConfig *)config {
    self.leftAvatarView.frame = CGRectMake(0, avatarY, avatarSize, avatarSize);
    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

    CGFloat smallSize = avatarSize * 0.85;
    CGFloat offset = avatarSize * 0.7;
    self.rightAvatarView.frame = CGRectMake(offset,
        avatarY + (avatarSize - smallSize), smallSize, smallSize);
    self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:smallSize];
}
```

```objc
// Mode 5：对方头像 + 名字在左侧
- (void)layoutMode5WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                   avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                nameFontSize:(CGFloat)nameFontSize
                      config:(ChatTopBarConfig *)config {
    CGFloat nameWidth = [self calculateNameWidth];
    CGFloat gap = 8.0;

    self.titleLabel.textAlignment = NSTextAlignmentLeft;
    self.titleLabel.frame = CGRectMake(
        (totalW - avatarSize - nameWidth - gap) * 0.5 + config.chatNicknameOffsetX,
        avatarY + (avatarSize - nameFontSize) * 0.5 - config.chatNicknameOffsetY,
        nameWidth, nameFontSize);

    self.leftAvatarView.frame = CGRectMake(
        CGRectGetMaxX(self.titleLabel.frame) + gap,
        avatarY, avatarSize, avatarSize);
    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];
}
```

```objc
// Mode 6：对方头像 + 名字在右侧
- (void)layoutMode6WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                   avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                nameFontSize:(CGFloat)nameFontSize
                      config:(ChatTopBarConfig *)config {
    CGFloat nameWidth = [self calculateNameWidth];
    CGFloat gap = 8.0;

    CGFloat avatarX = (totalW - avatarSize - nameWidth - gap) * 0.5;
    self.leftAvatarView.frame = CGRectMake(avatarX, avatarY, avatarSize, avatarSize);
    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

    self.titleLabel.textAlignment = NSTextAlignmentRight;
    self.titleLabel.frame = CGRectMake(
        avatarX + avatarSize + gap + config.chatNicknameOffsetX,
        avatarY + (avatarSize - nameFontSize) * 0.5 - config.chatNicknameOffsetY,
        nameWidth, nameFontSize);
}
```

```objc
// Mode 0：自己头像居中 / Mode 4：自己头像+名字在下方
- (void)layoutMode0Or4WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                      avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                    nameFontSize:(CGFloat)nameFontSize
                            mode:(NSInteger)mode config:(ChatTopBarConfig *)config {
    BOOL showName = (mode == 4);

    self.rightAvatarView.frame = CGRectMake(
        (totalW - avatarSize) * 0.5, avatarY, avatarSize, avatarSize);
    self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

    if (showName) {
        self.titleLabel.textAlignment = NSTextAlignmentCenter;
        self.titleLabel.frame = CGRectMake(
            0 + config.chatNicknameOffsetX,
            avatarY + avatarSize + 1 - config.chatNicknameOffsetY,
            totalW, nameFontSize);
    }
}
```

```objc
// Mode 1：对方头像居中
- (void)layoutMode1WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                   avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                       config:(ChatTopBarConfig *)config {
    self.leftAvatarView.frame = CGRectMake(
        (totalW - avatarSize) * 0.5, avatarY, avatarSize, avatarSize);
    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];
}
```

```objc
// Mode 2/3：双方头像（核心修复区域）
- (void)layoutMode2Or3WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                      avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                   avatarSpacing:(CGFloat)avatarSpacing halfSpacing:(CGFloat)halfSpacing
                    nameFontSize:(CGFloat)nameFontSize mode:(NSInteger)mode
                          config:(ChatTopBarConfig *)config {
    BOOL showName = (mode == 3);
    CGFloat sepSize = config.chatSeparatorSize;

    // ── 根据 updateMode 决定的 hidden 状态，判断当前是什么分隔符 ──
    BOOL hasText = !self.separatorTextLabel.hidden;
    BOOL hasIcon = !self.separatorView.hidden;

    if (hasText) {
        // ── 文本分隔符 ──
        [self.separatorTextLabel sizeToFit];
        CGFloat textW = self.separatorTextLabel.frame.size.width;
        CGFloat totalContentW = avatarSize + halfSpacing + textW + halfSpacing + avatarSize;
        CGFloat startX = (totalW - totalContentW) * 0.5;

        self.leftAvatarView.frame = CGRectMake(startX, avatarY, avatarSize, avatarSize);
        self.separatorTextLabel.frame = CGRectMake(
            startX + avatarSize + halfSpacing,
            (totalH - self.separatorTextLabel.frame.size.height) * 0.5,
            textW, self.separatorTextLabel.frame.size.height);
        self.rightAvatarView.frame = CGRectMake(
            CGRectGetMaxX(self.separatorTextLabel.frame) + halfSpacing,
            avatarY, avatarSize, avatarSize);

    } else if (hasIcon) {
        // ── 图标/GIF 分隔符 ──
        CGFloat iconW = sepSize > 0 ? sepSize : avatarSize;
        CGFloat iconH = sepSize > 0 ? sepSize : avatarSize;
        CGFloat totalContentW = avatarSize + halfSpacing + iconW + halfSpacing + avatarSize;
        CGFloat startX = (totalW - totalContentW) * 0.5;

        self.leftAvatarView.frame = CGRectMake(startX, avatarY, avatarSize, avatarSize);
        self.separatorView.frame = CGRectMake(
            startX + avatarSize + halfSpacing,
            (totalH - iconH) * 0.5,
            iconW, iconH);
        self.separatorView.contentMode = UIViewContentModeScaleAspectFit;
        self.rightAvatarView.frame = CGRectMake(
            CGRectGetMaxX(self.separatorView.frame) + halfSpacing,
            avatarY, avatarSize, avatarSize);

    } else {
        // ── 无分隔符 ──
        CGFloat totalContentW = avatarSize * 2 + avatarSpacing;
        CGFloat startX = (totalW - totalContentW) * 0.5;

        self.leftAvatarView.frame = CGRectMake(startX, avatarY, avatarSize, avatarSize);
        self.rightAvatarView.frame = CGRectMake(
            startX + avatarSize + avatarSpacing,
            avatarY, avatarSize, avatarSize);
    }

    // 头像圆角（所有子路径共用）
    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];
    self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

    // 名字在下方（Mode 3 专用）
    if (showName) {
        self.titleLabel.textAlignment = NSTextAlignmentCenter;
        self.titleLabel.frame = CGRectMake(
            0 + config.chatNicknameOffsetX,
            avatarY + avatarSize + 1 - config.chatNicknameOffsetY,
            totalW, nameFontSize);
    }
}
```

### 3.4 Separator 加载方法 — 只设置内容

**改造后职责：** 只加载图片/文本数据到对应的 view。**不设 hidden，不设 frame，不设 sizeToFit。**

```objc
- (BOOL)loadSeparatorIcon {
    ChatTopBarConfig *config = [ChatTopBarConfig shared];

    // 1. 优先检查 GIF 文件路径
    NSString *gifPath = config.chatSeparatorGIF;
    if (gifPath.length && [[NSFileManager defaultManager] fileExistsAtPath:gifPath]) {
        NSData *data = [NSData dataWithContentsOfFile:gifPath];
        UIImage *gifImage = [UIImage imageWithData:data];
        if (gifImage) {
            self.separatorView.image = gifImage;
            return YES;
        }
    }

    // 2. 检查静态图标文件路径
    NSString *iconPath = config.chatSeparatorIcon;
    if (iconPath.length && [[NSFileManager defaultManager] fileExistsAtPath:iconPath]) {
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

```objc
- (void)loadSeparatorText {
    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    self.separatorTextLabel.text = config.chatSeparatorText.length > 0
        ? config.chatSeparatorText : nil;
}
```

### 3.5 `updateAvatars` — 只加载数据 + 触发刷新

```objc
- (void)updateAvatars {
    if (!self.chatController) return;

    // ... 获取 contact、wxid、nickname、selfWxid（与现有代码逻辑完全一致）

    // 加载头像图片
    self.leftAvatarView.image = opponentAvatar ?: [UIImage imageNamed:@"DefaultHead"];
    self.rightAvatarView.image = selfAvatar ?: [UIImage imageNamed:@"DefaultHead"];

    // 加载分隔符内容（只设数据，不设状态）
    if (![self loadSeparatorIcon]) {
        [self loadSeparatorText];
    }

    // 构造名字文本
    // ... 群人数 / 添加时间逻辑（与现有代码完全一致）
    self.titleLabel.text = titleText;

    // 刷新模式状态 + 触发布局
    [self updateMode];
    [self setNeedsLayout];
}
```

### 3.6 `titleLabel` 字体统一设置位置

**原则：字体只在一个地方设置。**

在 `layoutSubviews` 的 `layoutMode2Or3WithTotalH:...`、`layoutMode5WithTotalH:...` 等方法中设置 font。

或者在 `updateAvatars` 中设置（因为 font 通常根据 title 内容确定）：

```objc
// 在 updateAvatars 中设置
self.titleLabel.font = [UIFont systemFontOfSize:config.chatNicknameFontSize];
self.separatorTextLabel.font = [UIFont systemFontOfSize:MAX(8.0, MIN(config.chatSeparatorSize * 0.4, 16.0)) weight:UIFontWeightMedium];
self.separatorTextLabel.textColor = [UIColor grayColor];
```

> 建议：在 `updateMode` 或 `updateAvatars` 中统一设置，因为它们是"数据刷新"的一部分。

---

## 4. 整体调用流程

重构后，布局刷新的完整链路：

```
外部 hook（ChatTopBarHook）调用：
  └→ [titleView updateAvatars]                   ① 入口
       ├→ 读取 contact、wxid、图片              ② 数据加载
       ├→ loadSeparatorIcon / loadSeparatorText  ③ 只设内容
       ├→ 设置 label.image / .text               ④ 填充数据
       ├→ [self updateMode]                      ⑤ 决定各 view 显示/隐藏
       └→ [self setNeedsLayout]                  ⑥ 触发布局

系统自动调用：
  └→ [titleView layoutSubviews]                   ⑦ 纯 frame 计算
       └→ 根据 mode 分发到对应 layoutModeX 方法    ⑧ 各模式独立计算
```

---

## 5. 需删除的代码

| 代码 | 位置 | 原因 |
|------|------|------|
| `[sv setHidden:YES]` | setupSubviews L56 | 不应在初始化时设 hidden，`updateMode` 统一管理 |
| `[st setHidden:YES]` | setupSubviews L65 | 同上 |
| `[tl setHidden:YES]` | setupSubviews L74 | 同上 |
| `[tl setFont:...]` | setupSubviews L71 | 与其他位置重复，由 `updateAvatars` 统一设置 |
| `[st setFont:...]` | setupSubviews L62-63 | 同上 |
| `[st setTextColor:...]` | setupSubviews L64 | 同上 |
| `applyPositionOffset` 声明 | MioChatAvatarTitleView.h L25 | 未实现，删除声明 |
| `layoutSubviews` L91-L95 | 当前代码 | 移入 `updateMode` |
| `layoutSubviews` 中所有的 hidden 设置 | 当前代码 | 全部移入 `updateMode` |
| `layoutSubviews` 中所有的 font 设置 | 当前代码 | 全部移入 `updateAvatars` |
| `loadSeparatorIcon` 中的 dispatch_async | 当前代码 L384, L399 | 不需要异步 |
| `loadSeparatorIcon` 中的 hidden 和 sizeToFit | 当前代码 L389, L404-405 | 由 `updateMode` 和 `layoutSubviews` 管理 |
| `loadSeparatorText` 中的 dispatch_async | 当前代码 L416 | 不需要异步 |
| `loadSeparatorText` 中的 hidden 和 sizeToFit | 当前代码 L418-419 | 由 `updateMode` 和 `layoutSubviews` 管理 |

---

## 6. 完整文件结构（伪代码）

```
@implementation MioChatAvatarTitleView

// ============================================================
// MARK: - 1. Init & Setup
// ============================================================
- (instancetype)initWithFrame:...
- (void)setupSubviews
- (UIImageView *)makeAvatarImageViewWithAction:(SEL)action
- (UIImageView *)makeSeparatorImageView
- (UILabel *)makeSeparatorLabel
- (UILabel *)makeTitleLabel

// ============================================================
// MARK: - 2. Mode Management
// ============================================================
- (void)updateMode

// ============================================================
// MARK: - 3. Layout (8 个独立方法)
// ============================================================
- (void)layoutSubviews    ← dispatch to mode-specific methods
- (void)layoutMode7...
- (void)layoutMode5...
- (void)layoutMode6...
- (void)layoutMode0Or4...
- (void)layoutMode1...
- (void)layoutMode2Or3... ← 核心修复区域，三选一

// ============================================================
// MARK: - 4. Data Loading
// ============================================================
- (void)updateAvatars     ← 入口：加载数据 + updateMode + setNeedsLayout
- (NSString *)getSelfWxid
- (UIImage *)loadAvatarWithPriorityForWxid:contact:
- (BOOL)loadSeparatorIcon ← 同步，只设 image
- (void)loadSeparatorText ← 同步，只设 text
- (void)silentLoadContactExtInfo:

// ============================================================
// MARK: - 5. Helpers
// ============================================================
- (CGFloat)calculateCornerRadiusForSize:
- (CGFloat)calculateNameWidth

// ============================================================
// MARK: - 6. Gestures
// ============================================================
- (void)onLeftAvatarTapped:
- (void)onRightAvatarTapped:

@end
```

---

## 7. 修改步骤

| 步骤 | 操作 | 涉及方法 | 行数变化 |
|------|------|---------|---------|
| 1 | 清理 setupSubviews | 移除 font/hidden 设置，抽取工厂方法 | 旧 53 行 → 新 30 行 |
| 2 | 新建 updateMode | 从 layoutSubviews 中提取所有 hidden 逻辑 | 新增约 55 行 |
| 3 | 拆分 layoutSubviews | 每个 mode 一个独立方法，Mode 2/3 三选一 | 旧 188 行 → 新 90 行（总计 8 方法） |
| 4 | 简化 loadSeparatorIcon | 移除 dispatch_async/hidden/sizeToFit | 34 行 → 28 行 |
| 5 | 简化 loadSeparatorText | 同上 | 10 行 → 4 行 |
| 6 | 调整 updateAvatars | 末尾加 updateMode + setNeedsLayout, 加 font 设置 | 旧 64 行 → 新 70 行 |
| 7 | 删除 applyPositionOffset 声明 | MioChatAvatarTitleView.h | -1 行 |
| **合计** | | | **净减约 80 行** |

---

## 8. 验证清单

| # | 测试场景 | 预期结果 |
|---|---------|---------|
| 1 | Mode 0（自己头像） | 右头像居中显示，无名字 |
| 2 | Mode 1（对方头像） | 左头像居中显示，无名字 |
| 3 | Mode 2（双方头像，无分隔符） | 两头像并排，中间为 avatarSpacing |
| 4 | Mode 2 + 文本分隔符 | 两头像之间显示文本 |
| 5 | Mode 2 + 图标分隔符 | 两头像之间显示图标（**修复点**） |
| 6 | Mode 2 + GIF 分隔符 | 两头像之间播放 GIF（**修复点**） |
| 7 | Mode 3（双方+名字） | 同上，名字在下方 |
| 8 | Mode 4（自己+名字） | 头像居中，名字在下方 |
| 9 | Mode 5（名字左+头像） | 名字在左侧，头像在右侧 |
| 10 | Mode 6（头像左+名字） | 头像在左侧，名字在右侧 |
| 11 | Mode 7（头像重叠） | 两头像在左侧重叠显示 |
| 12 | 切换聊天 | updateAvatars 被调用，布局刷新 |
| 13 | 清除分隔符后 | 分隔符消失，两头像间距恢复 |