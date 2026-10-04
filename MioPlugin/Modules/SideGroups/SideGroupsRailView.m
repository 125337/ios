#import "SideGroupsRailView.h"
#import "SideGroupsConfig.h"
#import "../../Core/WPUtility.h"

@interface SideGroupsRailView ()
@property (nonatomic, strong) NSMutableArray<UIButton *> *buttons;
@property (nonatomic, strong) NSMutableArray<UILabel *> *badges;
@property (nonatomic, copy) NSArray<NSString *> *titles;
@property (nonatomic, copy) NSArray<NSNumber *> *unread;
@property (nonatomic, copy) NSString *lastConfigSig;   // 宽/字号/颜色/暗色 变化检测
@property (nonatomic, copy) NSString *lastDataSig;     // 标题/角标数据变化检测（每帧 pass 都会调 reload，没变直接返回）
@end

@implementation SideGroupsRailView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        _selectedIndex = 0;
        _buttons = [NSMutableArray array];
        _badges = [NSMutableArray array];
        _titles = @[];
        _unread = @[];
        UILongPressGestureRecognizer *lp =
            [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(sdLongPress:)];
        [self addGestureRecognizer:lp];
    }
    return self;
}

#pragma mark - 颜色解析（浅/深色，空回落默认）

// 侧栏容器背景不画色（透出微信原生底色，明暗自适应）；仅选中胶囊可自定义
- (UIColor *)sdSelColor {
    SideGroupsConfig *cfg = [SideGroupsConfig shared];
    NSString *hex = [WPUtility isDarkModeForView:self] ? cfg.sdRailSelColorDark : cfg.sdRailSelColor;
    if (cfg.sdRailSelColorCustom && hex.length) return [WPUtility colorFromHex:hex] ?: self.sdDefaultSel;
    return self.sdDefaultSel;
}

- (UIColor *)sdTextColor {
    SideGroupsConfig *cfg = [SideGroupsConfig shared];
    BOOL dark = [WPUtility isDarkModeForView:self];
    NSString *hex = dark ? cfg.sdRailTextColorDark : cfg.sdRailTextColor;
    if (cfg.sdRailTextColorCustom && hex.length) return [WPUtility colorFromHex:hex] ?: UIColor.whiteColor;
    // 默认随微信底色：背景透出微信原生底色，浅色黑字 / 深色白字
    return dark ? UIColor.whiteColor : UIColor.blackColor;
}

- (UIColor *)sdDefaultSel {
    // 选中胶囊默认随明暗：浅色用低透明黑（白 0.28 在微信浅底上贴不住），深色保持白 0.28
    return [WPUtility isDarkModeForView:self]
        ? [UIColor colorWithWhite:1 alpha:0.28]
        : [UIColor colorWithWhite:0 alpha:0.12];
}

- (CGFloat)sdFontSize {
    return [SideGroupsConfig resolveFontSize:12];
}

#pragma mark - 配置应用（签名比对）

- (void)applyConfig {
    SideGroupsConfig *cfg = [SideGroupsConfig shared];
    NSString *sig = [NSString stringWithFormat:@"%d|%.1f|%.1f|%d|%d|%@|%@|%@|%@|%@",
                     (int)cfg.sdPosition, cfg.sdRailWidth, cfg.sdRailFontSize,
                     (int)cfg.sdFontCustom, (int)cfg.sdShowUnreadBadge,
                     cfg.sdRailSelColorCustom ? cfg.sdRailSelColor : @"",
                     cfg.sdRailSelColorCustom ? cfg.sdRailSelColorDark : @"",
                     cfg.sdRailTextColorCustom ? cfg.sdRailTextColor : @"",
                     cfg.sdRailTextColorCustom ? cfg.sdRailTextColorDark : @"",
                     @([WPUtility isDarkModeForView:self]).stringValue];
    BOOL appearanceChanged = NO;
    if (![sig isEqualToString:self.lastConfigSig]) {
        self.lastConfigSig = sig;
        appearanceChanged = YES;
    }
    if (!appearanceChanged) return; // 没变化不写任何外观（写回风暴防线）
    self.backgroundColor = UIColor.clearColor; // 背景让微信自己画
    [self rebuildButtonsIfNeeded];
    [self applySelectionAppearance];
}

#pragma mark - 按钮管理

- (void)rebuildButtonsIfNeeded {
    SideGroupsConfig *cfg = [SideGroupsConfig shared];
    NSInteger n = (NSInteger)self.titles.count;
    while ((NSInteger)self.buttons.count > n) {
        UIButton *b = self.buttons.lastObject;
        UILabel *l = self.badges.lastObject;
        [b removeFromSuperview]; [l removeFromSuperview];
        [self.buttons removeLastObject]; [self.badges removeLastObject];
    }
    while ((NSInteger)self.buttons.count < n) {
        NSInteger i = (NSInteger)self.buttons.count;
        UIButton *b = [UIButton buttonWithType:UIButtonTypeSystem];
        b.tag = i;
        b.titleLabel.font = [UIFont systemFontOfSize:self.sdFontSize];
        b.titleLabel.lineBreakMode = NSLineBreakByTruncatingTail;
        b.titleLabel.textAlignment = NSTextAlignmentCenter;
        b.backgroundColor = UIColor.clearColor;
        [b addTarget:self action:@selector(sdButtonTap:) forControlEvents:UIControlEventTouchUpInside];
        [self addSubview:b];
        [self.buttons addObject:b];

        UILabel *badge = [[UILabel alloc] initWithFrame:CGRectZero];
        badge.font = [UIFont systemFontOfSize:9];
        badge.textColor = UIColor.whiteColor;
        badge.backgroundColor = [UIColor colorWithRed:1 green:0.23 blue:0.19 alpha:1];
        badge.textAlignment = NSTextAlignmentCenter;
        badge.layer.cornerRadius = 6;
        badge.layer.masksToBounds = YES;
        badge.hidden = !cfg.sdShowUnreadBadge;
        [self addSubview:badge];
        [self.badges addObject:badge];
    }
    for (NSInteger i = 0; i < n; i++) {
        UIButton *b = self.buttons[i];
        b.titleLabel.font = [UIFont systemFontOfSize:self.sdFontSize];
        [b setTitle:self.titles[i] forState:UIControlStateNormal];
        [b setTitleEdgeInsets:UIEdgeInsetsZero];
        b.hidden = NO;
        UILabel *badge = self.badges[i];
        badge.hidden = !cfg.sdShowUnreadBadge;
    }
    [self refreshBadges];
    [self setNeedsLayout];
}

- (void)refreshBadges {
    for (NSInteger i = 0; i < (NSInteger)self.badges.count; i++) {
        UILabel *badge = self.badges[i];
        NSUInteger count = 0;
        if (i < (NSInteger)self.unread.count) count = self.unread[i].unsignedIntegerValue;
        badge.text = count > 99 ? @"99+" : (count > 0 ? [NSString stringWithFormat:@"%lu", (unsigned long)count] : @"");
        badge.hidden = badge.text.length == 0;
        [badge sizeToFit];
    }
    [self setNeedsLayout];
}

// 选中态外观（XOS updateSelectionBackground Misc_part2.c:13993 同语义）
- (void)applySelectionAppearance {
    UIColor *text = self.sdTextColor;
    for (NSInteger i = 0; i < (NSInteger)self.buttons.count; i++) {
        UIButton *b = self.buttons[i];
        BOOL sel = (i == self.selectedIndex);
        b.backgroundColor = sel ? self.sdSelColor : UIColor.clearColor;
        b.layer.cornerRadius = 8;
        [b setTitleColor:sel ? UIColor.whiteColor : text forState:UIControlStateNormal];
    }
}

#pragma mark - 数据刷新

- (void)reloadTitles:(NSArray<NSString *> *)titles badges:(NSArray<NSNumber *> *)unread {
    // 数据签名门闩：每帧 pass 都会调，标题/角标没变直接返回（setNeedsLayout 会引发布局风暴）
    NSString *sig = [NSString stringWithFormat:@"%@|%@", [titles componentsJoinedByString:@"\x1F"],
                     [unread componentsJoinedByString:@"\x1F"]];
    if ([sig isEqualToString:self.lastDataSig]) return;
    self.lastDataSig = sig;
    self.titles = [titles copy];
    self.unread = [unread copy] ?: @[];
    [self rebuildButtonsIfNeeded];
    [self applySelectionAppearance];
}

- (void)setSelectedIndex:(NSInteger)selectedIndex {
    _selectedIndex = selectedIndex;
    [self applySelectionAppearance];
}

#pragma mark - 布局（竖排居中列，XOS SideRailView.layoutSubviews 同语义）

- (void)layoutSubviews {
    [super layoutSubviews];
    NSInteger n = (NSInteger)self.buttons.count;
    if (n == 0) return;
    CGFloat W = self.bounds.size.width;
    CGFloat H = self.bounds.size.height;
    if (W <= 0 || H <= 0) return;
    CGFloat rowW = W - 8;
    CGFloat rowH = MIN(rowW, (H - 12) / n);
    CGFloat total = rowH * n;
    CGFloat y = (H - total) / 2.0;
    for (NSInteger i = 0; i < n; i++) {
        UIButton *b = self.buttons[i];
        b.frame = CGRectMake(4, y + i * rowH, rowW, rowH);
        UILabel *badge = self.badges[i];
        CGSize bs = badge.frame.size;
        if (bs.width < 12) bs.width = 12;
        if (bs.height < 12) bs.height = 12;
        badge.frame = CGRectMake(CGRectGetMaxX(b.frame) - bs.width - 1,
                                 CGRectGetMinY(b.frame) - 3, bs.width, bs.height);
    }
}

#pragma mark - 交互

- (void)sdButtonTap:(UIButton *)sender {
    if (sender.tag < 0 || sender.tag >= (NSInteger)self.buttons.count) return;
    self.selectedIndex = sender.tag;
    if (self.onSelectIndex) self.onSelectIndex(sender.tag);
}

- (void)sdLongPress:(UILongPressGestureRecognizer *)g {
    if (g.state != UIGestureRecognizerStateBegan) return;
    CGPoint p = [g locationInView:self];
    for (UIButton *b in self.buttons) {
        if (CGRectContainsPoint(b.frame, p)) {
            if (self.onLongPressIndex) self.onLongPressIndex(b.tag);
            return;
        }
    }
}

@end
