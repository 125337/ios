#import "SessionGroupsStripView.h"
#import "SessionGroupsConfig.h"
#import "../../Config/WPColorUtil.h"
#import <objc/message.h>

static NSString * const kIndicatorAnimKey = @"wcr_tg_indicator"; // Misc_part19.c:7922-8020

@interface SessionGroupsStripView ()
@property (nonatomic, strong) UIView *cardBackgroundView;   // Misc_part19.c:4751-4913 层级
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIView *indicatorView;
@property (nonatomic, strong) NSArray<UIButton *> *tabButtons;
@property (nonatomic, strong) NSMutableArray<UILabel *> *badgeViews;
@property (nonatomic, assign) NSInteger styleIndicator;     // WCR 内部风格值 0胶囊 1线条 2圆点 3隐藏
@end

@implementation SessionGroupsStripView

+ (CGFloat)preferredHeight {
    return 44.0; // Misc_part19.c:5673-5679
}

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = UIColor.clearColor;
        self.clipsToBounds = YES;

        _cardBackgroundView = [[UIView alloc] initWithFrame:self.bounds];
        _cardBackgroundView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        _cardBackgroundView.backgroundColor = UIColor.clearColor;
        [self addSubview:_cardBackgroundView];

        _scrollView = [[UIScrollView alloc] initWithFrame:self.bounds];
        _scrollView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        _scrollView.showsHorizontalScrollIndicator = NO;
        _scrollView.showsVerticalScrollIndicator = NO;
        _scrollView.alwaysBounceHorizontal = YES;
        _scrollView.delaysContentTouches = NO;
        if (@available(iOS 11.0, *)) {
            _scrollView.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever; // =2，Misc_part19.c
        }
        [self addSubview:_scrollView];

        _indicatorView = [[UIView alloc] initWithFrame:CGRectZero];
        _indicatorView.userInteractionEnabled = NO;
        [_scrollView addSubview:_indicatorView];

        _tabButtons = @[];
        _badgeViews = [NSMutableArray array];
        _selectedIndex = 0;
    }
    return self;
}

- (NSInteger)tabCount {
    return (NSInteger)_tabButtons.count;
}

#pragma mark - 样式解析（sgIndicator → WCR style）

// WCR IndicatorStyle 实证：0=胶囊 1=线条 2=圆点 3=隐藏（Misc_part19.c:6678-6772）
// 我们配置 sgIndicator：0无 1胶囊 2线条 3圆点
- (NSInteger)wcrIndicatorStyle {
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    switch (cfg.sgIndicator) {
        case 1: return 0;
        case 2: return 1;
        case 3: return 2;
        default: return 3;
    }
}

- (UIColor *)wcrBrandColor {
    return [UIColor colorWithRed:0x07 / 255.0 green:0xC1 / 255.0 blue:0x60 / 255.0 alpha:1.0];
}

- (BOOL)isDarkMode {
    if (@available(iOS 12.0, *)) {
        return self.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    return NO;
}

// 深浅色取对应 hex，空/非法回 fallback（对齐 WCR colorFromHex:fallback:，Misc_part19.c FUN_01ef0c74）
- (UIColor *)colorFromConfigLight:(NSString *)lightKey dark:(NSString *)darkKey fallback:(UIColor *)fallback {
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    NSString *hex = [self isDarkMode] ? [cfg valueForKey:darkKey] : [cfg valueForKey:lightKey];
    if (hex.length == 0) return fallback;
    UIColor *c = [WPColorUtil colorFromHexString:hex];
    return c ?: fallback;
}

// 卡片背景：WCR resolvedCardColor（Misc_part19.c:5137-5242）默认链 = corner 未启用 →
// [WCRefineOfficialTheme colorNamed:@"cellBackgroundColor" fallback:systemBackgroundColor]。
// 必须是不透明实体底：table section header 有 sticky 悬停特性，滚动悬停时实体底遮挡
// 滚过的行（clearColor 会透出下方内容，视觉上条与列表"重叠"）
- (UIColor *)resolvedCardColor {
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    if (cfg.sgBgColorCustom) {
        return [self colorFromConfigLight:@"sgBgColor" dark:@"sgBgColorDark" fallback:[self defaultCardColor]];
    }
    return [self defaultCardColor];
}

// WCR 主题色 cellBackgroundColor 的 fallback 语义：浅=白 深=黑，与微信首页 cell 底一致
- (UIColor *)defaultCardColor {
    return UIColor.systemBackgroundColor;
}

- (UIColor *)resolvedIndicatorColor {
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    if (cfg.sgIndicatorColorCustom) {
        return [self colorFromConfigLight:@"sgIndicatorColor" dark:@"sgIndicatorColorDark"
                                 fallback:[self defaultIndicatorColor]];
    }
    return [self defaultIndicatorColor];
}

// 指示器默认：胶囊 → 浅 #666666 0x47 / 深 #FFFFFF 0x33；线条/圆点 → Brand（Misc_part19.c:5293-5331）
- (UIColor *)defaultIndicatorColor {
    if (_styleIndicator == 1 || _styleIndicator == 2) return [self wcrBrandColor];
    return [self isDarkMode] ? [UIColor colorWithWhite:1.0 alpha:0x33 / 255.0]
                             : [UIColor colorWithWhite:0x66 / 255.0 alpha:0x47 / 255.0];
}

// 未选中文字：WCR resolvedTextColor 默认 浅 labelColor / 深白（Misc_part19.c:5393-5481）
- (UIColor *)resolvedTextColor {
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    if (cfg.sgTextColorCustom) {
        return [self colorFromConfigLight:@"sgTextColor" dark:@"sgTextColorDark"
                                 fallback:[self defaultTextColor]];
    }
    return [self defaultTextColor];
}

- (UIColor *)defaultTextColor {
    return [self isDarkMode] ? [UIColor colorWithWhite:1.0 alpha:0.72] : UIColor.labelColor;
}

// 选中文字：WCR resolvedHighlightColor 默认恒白（Misc_part19.c:5491-5560）。胶囊模式灰底白字照搬；
// 线条/圆点模式白色在浅底不可见，沿用 Brand（WCR 渲染处 highlight 同样服务于可读性）
- (UIColor *)resolvedHighlightColor {
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    if (cfg.sgHighlightColorCustom) {
        return [self colorFromConfigLight:@"sgHighlightColor" dark:@"sgHighlightColorDark"
                                 fallback:[self defaultHighlightColor]];
    }
    return [self defaultHighlightColor];
}

- (UIColor *)defaultHighlightColor {
    if (_styleIndicator == 1 || _styleIndicator == 2) return [self wcrBrandColor];
    return UIColor.whiteColor;
}

#pragma mark - 构建 Tab

- (void)reloadTabTitles:(NSArray<NSString *> *)titles {
    for (UIButton *b in _tabButtons) [b removeFromSuperview];
    for (UILabel *v in _badgeViews) [v removeFromSuperview];
    [_badgeViews removeAllObjects];
    _styleIndicator = [self wcrIndicatorStyle];

    // 字号链路 = WCR titleFontSize（Misc_part19.c:4986-5030 + homeNicknameFontSize 4918-4980）：
    // 1) 自定义开关开 → 自定义值（钳位 12~20，越界回落，Misc_part19.c:5010-5024）
    // 2) 关 → [UIFont dynamicLength:17]（微信私有动态字体 API，跟随"设置→通用→字体大小"，
    //    selector 实证自 WCR dylib 字符串；调用与 >1.0 守卫同 Misc_part19.c:4933-4954）
    // 3) 微信私有 API 不存在 → 17
    CGFloat fontSize = 17.0;
    SessionGroupsConfig *fontCfg = [SessionGroupsConfig shared];
    if (fontCfg.sgTitleFontCustom) {
        CGFloat v = fontCfg.sgTitleFontSize;
        if (v >= 12.0 && v <= 20.0) fontSize = v;
    } else {
        SEL dynLen = NSSelectorFromString(@"dynamicLength:");
        if ([UIFont respondsToSelector:dynLen]) {
            double scaled = ((double (*)(id, SEL, double))objc_msgSend)([UIFont class], dynLen, 17.0);
            if (scaled > 1.0) fontSize = scaled;
        }
    }
    NSMutableArray<UIButton *> *btns = [NSMutableArray array];
    for (NSInteger i = 0; i < (NSInteger)titles.count; i++) {
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom]; // type 0，Misc_part19.c:7319
        btn.tag = i;
        btn.titleLabel.font = [UIFont systemFontOfSize:fontSize weight:UIFontWeightMedium];
        [btn setTitle:titles[i] forState:UIControlStateNormal];
        [btn addTarget:self action:@selector(handleTap:) forControlEvents:UIControlEventTouchUpInside];
        UILongPressGestureRecognizer *lp = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(handleLongPress:)];
        [btn addGestureRecognizer:lp];
        [_scrollView addSubview:btn];
        [btns addObject:btn];
    }
    _tabButtons = [btns copy];

    for (NSUInteger i = 0; i < titles.count; i++) {
        UILabel *badge = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 10, 10)];
        badge.layer.cornerRadius = 5.0;
        badge.layer.masksToBounds = YES;
        badge.backgroundColor = [UIColor colorWithRed:0xFA / 255.0 green:0x51 / 255.0 blue:0x51 / 255.0 alpha:1.0];
        badge.textColor = UIColor.whiteColor;
        badge.font = [UIFont systemFontOfSize:9.0];
        badge.textAlignment = NSTextAlignmentCenter;
        badge.hidden = YES;
        badge.userInteractionEnabled = NO;
        [_scrollView addSubview:badge];
        [_badgeViews addObject:badge];
    }
    [self refreshAppearance];
    [self layoutButtons];
}

- (void)applySelectionColors {
    for (NSInteger i = 0; i < (NSInteger)_tabButtons.count; i++) {
        UIButton *btn = _tabButtons[i];
        BOOL selected = (i == _selectedIndex);
        // WCR setSelectedTabId 消费处（Misc_part19.c:7808-7812）：选中→Highlight、未选中→Text
        [btn setTitleColor:selected ? [self resolvedHighlightColor] : [self resolvedTextColor]
                  forState:UIControlStateNormal];
    }
}

- (void)refreshAppearance {
    _styleIndicator = [self wcrIndicatorStyle];
    _cardBackgroundView.backgroundColor = [self resolvedCardColor]; // WCR applyAppearance，Misc_part19.c:5601-5654
    [self applySelectionColors];
    _indicatorView.backgroundColor = [self resolvedIndicatorColor];
    if (_styleIndicator == 3) {
        _indicatorView.hidden = YES; // style==3 隐藏，Misc_part19.c:6829
    } else {
        _indicatorView.hidden = NO;
        [self applyIndicatorFrame:[self frameOfSelectedButton] withAnimation:NO velocity:0];
    }
    [self setNeedsLayout];
}

- (void)layoutButtons {
    if (_tabButtons.count == 0) return;
    CGFloat W = self.bounds.size.width;
    CGFloat H = self.bounds.size.height;
    if (W <= 0) W = [UIScreen mainScreen].bounds.size.width;
    CGFloat btnH = 32.0;                        // Misc_part19.c:6242
    CGFloat top = (H - btnH) / 2.0;             // Misc_part19.c:6196

    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    BOOL equalSplit = cfg.sgTabCentered;        // usesEqualSplitLayout，Misc_part19.c:6033-6056

    if (equalSplit) {
        // centerSlotCount：config<1→全部；>8→8；<2→1（Misc_part19.c:6067-6106）
        NSInteger slotCount = cfg.sgVisibleTabCount;
        if (slotCount < 1) slotCount = (NSInteger)_tabButtons.count;
        if (slotCount > 8) slotCount = 8;
        if (slotCount < 2) slotCount = 1;
        CGFloat margin = 8.0;
        CGFloat slotW = (W - margin * 2) / (CGFloat)MIN((NSInteger)_tabButtons.count, slotCount); // 6300-6302
        for (NSInteger i = 0; i < (NSInteger)_tabButtons.count; i++) {
            UIButton *btn = _tabButtons[i];
            CGFloat bw = [self widthForButton:btn];
            CGFloat x = margin + i * slotW + (slotW - bw) / 2.0; // 槽内余量平分居中，6322
            btn.frame = CGRectMake(x, top, bw, btnH);
        }
    } else {
        CGFloat x = 12.0; // 非等分起点，Misc_part19.c:6230
        for (NSInteger i = 0; i < (NSInteger)_tabButtons.count; i++) {
            UIButton *btn = _tabButtons[i];
            CGFloat bw = [self widthForButton:btn];
            btn.frame = CGRectMake(x, top, bw, btnH);
            x += bw + 8.0; // 间距 8，6268
        }
    }
    // contentSize = max(x+4, W)，Misc_part19.c:6272-6275
    CGFloat contentW = W;
    UIButton *last = _tabButtons.lastObject;
    if (last) contentW = MAX(last.frame.origin.x + last.frame.size.width + 4.0, W);
    _scrollView.contentSize = CGSizeMake(contentW, H);
    [self layoutBadges];
    // 指示器无条件重算（Frida 实证：refreshAppearance 时按钮 frame 为零会把 hidden 置 YES，
    // 若此处被 hidden 门闩挡住则永远无法恢复——hidden 门闩已移除）
    [self applyIndicatorFrame:[self frameOfSelectedButton] withAnimation:NO velocity:0];
}

- (CGFloat)widthForButton:(UIButton *)btn {
    // 按钮宽 = 文字宽 + 28，最小 44（Misc_part19.c:6428-6455）
    NSString *title = btn.currentTitle ?: @"";
    CGSize size = [title sizeWithAttributes:@{NSFontAttributeName: btn.titleLabel.font}];
    CGFloat w = ceil(size.width) + 28.0;
    return MAX(w, 44.0);
}

- (CGRect)indicatorFrameForButton:(UIButton *)btn {
    // Misc_part19.c:6678-6772
    CGRect f = btn.frame;
    switch (_styleIndicator) {
        case 0: // 胶囊 = 整按钮 frame
            return f;
        case 1: // 线条
            return CGRectMake(f.origin.x + 8.0, f.origin.y + f.size.height - 2.0, MAX(f.size.width - 16.0, 16.0), 2.0);
        case 2: // 圆点 6x6
            return CGRectMake(CGRectGetMidX(f) - 3.0, f.origin.y + f.size.height - 6.0, 6.0, 6.0);
        default:
            return CGRectZero;
    }
}

- (CGRect)frameOfSelectedButton {
    if (_selectedIndex < 0 || _selectedIndex >= (NSInteger)_tabButtons.count) return CGRectZero;
    return [self indicatorFrameForButton:_tabButtons[_selectedIndex]];
}

- (void)applyIndicatorFrame:(CGRect)frame withAnimation:(BOOL)animated velocity:(CGFloat)velocity {
    if (CGRectIsNull(frame) || CGRectIsEmpty(frame)) {
        _indicatorView.hidden = YES;
        return;
    }
    _indicatorView.hidden = (_styleIndicator == 3);

    // 胶囊圆角：h/2 默认，可被 sgCapsuleRadius 覆盖（Misc_part19.c:6954-6966）
    if (_styleIndicator == 0) {
        CGFloat r = frame.size.height / 2.0;
        CGFloat cfgR = [SessionGroupsConfig shared].sgCapsuleRadius;
        if (cfgR > 0) r = MIN(cfgR, frame.size.height / 2.0);
        _indicatorView.layer.cornerRadius = r;
    } else if (_styleIndicator == 2) {
        _indicatorView.layer.cornerRadius = 3.0;
    } else {
        _indicatorView.layer.cornerRadius = 1.0;
    }

    [CATransaction begin];
    [CATransaction setDisableActions:YES]; // Misc_part19.c:6949-6993
    _indicatorView.frame = frame;
    [CATransaction commit];

    if (animated) [self springAnimateIndicatorToX:CGRectGetMidX(frame) velocity:velocity];
}

// CASpringAnimation stiffness=360 damping=34，initialVelocity clamp ±12（Misc_part19.c:7922-8020）
- (void)springAnimateIndicatorToX:(CGFloat)targetMidX velocity:(CGFloat)velocity {
    if (@available(iOS 9.0, *)) {
        CASpringAnimation *anim = [CASpringAnimation animationWithKeyPath:@"position.x"];
        CGFloat delta = targetMidX - _indicatorView.layer.position.x;
        if (delta == 0) return;
        anim.fromValue = @(targetMidX - delta);
        anim.toValue = @(targetMidX);
        anim.stiffness = 360.0;
        anim.damping = 34.0;
        anim.mass = 1.0;
        CGFloat v = velocity / delta;
        anim.initialVelocity = MAX(-12.0, MIN(12.0, v));
        [anim setDuration:anim.settlingDuration];
        anim.fillMode = kCAFillModeForwards;
        anim.removedOnCompletion = NO;
        [_indicatorView.layer addAnimation:anim forKey:kIndicatorAnimKey];
    }
}

#pragma mark - 角标

- (void)updateBadges:(NSArray<NSNumber *> *)badges redDots:(NSArray<NSNumber *> *)dots {
    SessionGroupsConfig *cfg = [SessionGroupsConfig shared];
    for (NSInteger i = 0; i < (NSInteger)_badgeViews.count; i++) {
        UILabel *badge = _badgeViews[i];
        if (i >= (NSInteger)_tabButtons.count) { badge.hidden = YES; continue; }
        NSInteger unread = 0;
        BOOL dot = NO;
        if (cfg.sgShowUnreadBadge && badges && i < (NSInteger)badges.count) unread = badges[i].integerValue;
        if (cfg.sgShowGroupRedDot && dots && i < (NSInteger)dots.count) dot = dots[i].boolValue;
        // 红点 only = showRedDot && !showUnread（Misc_part19.c:7566-7568）
        if (unread > 0) {
            badge.hidden = NO;
            badge.text = unread > 99 ? @"99+" : [NSString stringWithFormat:@"%ld", (long)unread];
            [badge sizeToFit];
            CGRect f = badge.frame;
            CGFloat bw = MAX(f.size.width + 6.0, 10.0); // 缺省 10x10，6507-6508
            badge.frame = CGRectMake(0, 0, bw, 10.0);
            badge.layer.cornerRadius = 5.0;
        } else if (dot) {
            badge.hidden = NO;
            badge.text = @"";
            badge.frame = CGRectMake(0, 0, 10.0, 10.0);
        } else {
            badge.hidden = YES;
        }
        [self layoutBadge:badge onButton:_tabButtons[i]];
    }
}

- (void)layoutBadge:(UILabel *)badge onButton:(UIButton *)btn {
    // x = btn.maxX - badgeW + 4，y = 2（Misc_part19.c:6473-6555）
    CGFloat x = CGRectGetMaxX(btn.frame) - badge.frame.size.width + 4.0;
    badge.frame = CGRectMake(x, 2.0, badge.frame.size.width, badge.frame.size.height);
}

- (void)layoutBadges {
    for (NSInteger i = 0; i < (NSInteger)_badgeViews.count && i < (NSInteger)_tabButtons.count; i++) {
        [self layoutBadge:_badgeViews[i] onButton:_tabButtons[i]];
    }
}

#pragma mark - 选中与预览

- (void)setSelectedIndex:(NSInteger)index velocity:(CGFloat)velocity animated:(BOOL)animated {
    if (index < 0 || index >= (NSInteger)_tabButtons.count) return;
    _selectedIndex = index;
    [self applySelectionColors];
    [self applyIndicatorFrame:[self frameOfSelectedButton] withAnimation:animated velocity:velocity];
    // 选中按钮滚到可视区
    UIButton *btn = _tabButtons[index];
    [_scrollView scrollRectToVisible:btn.frame animated:animated];
}

- (void)previewIndex:(NSInteger)index progress:(CGFloat)progress {
    if (index < 0 || index >= (NSInteger)_tabButtons.count) return;
    if (_styleIndicator == 3) return;
    if (index == _selectedIndex) return;
    CGRect cur = [self indicatorFrameForButton:_tabButtons[_selectedIndex]];
    CGRect tgt = [self indicatorFrameForButton:_tabButtons[index]];
    if (CGRectIsEmpty(cur) || CGRectIsEmpty(tgt)) return;
    // progress 插值（Misc_part19.c:6944-6946）
    CGFloat x = cur.origin.x + (tgt.origin.x - cur.origin.x) * progress;
    CGFloat w = cur.size.width + (tgt.size.width - cur.size.width) * progress;
    [self applyIndicatorFrame:CGRectMake(x, cur.origin.y, w, cur.size.height) withAnimation:NO velocity:0];
}

- (void)cancelPreview {
    [self applyIndicatorFrame:[self frameOfSelectedButton] withAnimation:NO velocity:0];
}

#pragma mark - 事件

- (void)handleTap:(UIButton *)sender {
    if ((NSInteger)sender.tag == _selectedIndex) return;
    if (self.onSelectIndex) self.onSelectIndex((NSInteger)sender.tag);
}

// 长按动作入口（WCR wcrGrouping_handleHomeItemLongPress，wcrGrouping_.c:8807）：按住 tab 触发
- (void)handleLongPress:(UILongPressGestureRecognizer *)gr {
    if (gr.state != UIGestureRecognizerStateBegan) return;
    UIView *v = gr.view;
    if (![v isKindOfClass:[UIButton class]]) return;
    if (self.onLongPressIndex) self.onLongPressIndex((NSInteger)((UIButton *)v).tag);
}

- (void)layoutSubviews {
    [super layoutSubviews];
    [self layoutButtons];
    // 宿主 header cell 的原生 separator 由微信"首页卡片头容器"包装机制才会上色；手动 alloc
    // 的 cell 绕过了该机制（backgroundColor=nil 透明不可见）。每次布局补上：strip →
    // contentView → cell → table，cell.superview 即表格，取其 separatorColor（微信动态色）
    UIView *content = self.superview;
    UIView *cell = content.superview;
    UITableView *table = cell.superview;
    if ([cell isKindOfClass:[UITableViewCell class]] && [table isKindOfClass:[UITableView class]]) {
        for (UIView *v in cell.subviews) {
            if ([NSStringFromClass(v.class) containsString:@"SeparatorView"]) {
                v.backgroundColor = [(UITableView *)table separatorColor];
            }
        }
    }
}

- (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection {
    [super traitCollectionDidChange:previousTraitCollection];
    [self refreshAppearance];
    [self layoutButtons];
}

@end
