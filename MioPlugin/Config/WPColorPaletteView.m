#import "WPColorPaletteView.h"
#import "WPColorUtil.h"

static CGFloat const kButtonSize  = 36;
static CGFloat const kSpacing     = 10;
static CGFloat const kMaxHistory  = 20;
static CGFloat const kSectionGap  = 12;
static CGFloat const kLabelWidth  = 40;

@interface WPColorPaletteView ()
@property (nonatomic, strong) NSMutableArray<UIColor *> *presets;
@property (nonatomic, strong) NSMutableArray<UIColor *> *morandiColors;
@property (nonatomic, strong) NSMutableArray<UIColor *> *historyColors;
@property (nonatomic, strong) NSMutableArray<UIScrollView *> *scrollViews;
@property (nonatomic, strong) NSMutableArray<UILabel *> *sectionLabels;
@end

@implementation WPColorPaletteView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        _presets      = [NSMutableArray array];
        _morandiColors = [NSMutableArray array];
        _historyColors = [NSMutableArray array];
        _scrollViews  = [NSMutableArray array];
        _sectionLabels = [NSMutableArray array];
    }
    return self;
}

- (instancetype)initWithCoder:(NSCoder *)coder {
    self = [super initWithCoder:coder];
    if (self) {
        _presets      = [NSMutableArray array];
        _morandiColors = [NSMutableArray array];
        _historyColors = [NSMutableArray array];
        _scrollViews  = [NSMutableArray array];
        _sectionLabels = [NSMutableArray array];
    }
    return self;
}

#pragma mark - 设置数据

- (void)setPresetColors:(NSArray<UIColor *> *)colors {
    [self.presets setArray:colors];
    [self rebuildAll];
}

- (void)setMorandiColors:(NSArray<UIColor *> *)colors {
    [self.morandiColors setArray:colors];
    [self rebuildAll];
}

- (void)setHistoryHexes:(NSArray<NSString *> *)hexes {
    [self.historyColors removeAllObjects];
    for (NSString *hex in hexes) {
        UIColor *c = [WPColorUtil colorFromHexString:hex];
        if (c) [self.historyColors addObject:c];
    }
    [self rebuildAll];
}

- (void)addToHistory:(UIColor *)color {
    // 去重：相似色不重复添加
    for (UIColor *existing in self.historyColors) {
        if ([WPColorUtil isColor:color similarToColor:existing]) {
            return;
        }
    }
    [self.historyColors insertObject:color atIndex:0];
    if (self.historyColors.count > kMaxHistory) {
        [self.historyColors removeLastObject];
    }
    [self rebuildHistoryOnly];
}

- (NSArray<NSString *> *)historyHexes {
    NSMutableArray *result = [NSMutableArray array];
    for (UIColor *c in self.historyColors) {
        [result addObject:[WPColorUtil hexStringFromColor:c]];
    }
    return [result copy];
}

#pragma mark - 重建 UI

- (void)rebuildAll {
    // 清理旧 UI
    for (UIView *v in self.subviews) [v removeFromSuperview];
    [self.scrollViews removeAllObjects];
    [self.sectionLabels removeAllObjects];

    NSArray *titles = @[@"预设", @"莫兰迪", @"历史"];
    NSArray *lists  = @[self.presets, self.morandiColors, self.historyColors];

    UIView *lastView = nil;
    for (int i = 0; i < 3; i++) {
        NSArray *colors = lists[i];
        if (colors.count == 0 && i < 2) continue; // 预设/莫兰迪为空时跳过

        // 容器
        UIView *row = [[UIView alloc] init];

        // Label
        UILabel *label = [[UILabel alloc] init];
        label.text = titles[i];
        label.font = [UIFont systemFontOfSize:13 weight:UIFontWeightMedium];
        label.textColor = [UIColor secondaryLabelColor];

        // ScrollView
        UIScrollView *sv = [[UIScrollView alloc] init];
        sv.showsHorizontalScrollIndicator = NO;

        // 色块
        UIView *inner = [[UIView alloc] init];
        CGFloat x = 0;
        for (UIColor *color in colors) {
            UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
            btn.frame = CGRectMake(x, 0, kButtonSize, kButtonSize);
            btn.backgroundColor = color;
            btn.layer.cornerRadius = kButtonSize / 2;
            btn.layer.borderWidth = 1;
            btn.layer.borderColor = [UIColor colorWithWhite:0.8 alpha:0.3].CGColor;
            btn.clipsToBounds = YES;
            [btn addTarget:self action:@selector(colorButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
            [inner addSubview:btn];
            x += kButtonSize + kSpacing;
        }

        CGFloat totalW = MAX(0, x - kSpacing);
        inner.frame = CGRectMake(0, 0, totalW, kButtonSize);
        sv.contentSize = CGSizeMake(totalW, kButtonSize);
        [sv addSubview:inner];

        [row addSubview:label];
        [row addSubview:sv];
        [self addSubview:row];

        [self.scrollViews addObject:sv];
        [self.sectionLabels addObject:label];

        // ——— Row 的 Auto Layout ———
        row.translatesAutoresizingMaskIntoConstraints = NO;
        label.translatesAutoresizingMaskIntoConstraints = NO;
        sv.translatesAutoresizingMaskIntoConstraints = NO;

        [NSLayoutConstraint activateConstraints:@[
            [row.leadingAnchor constraintEqualToAnchor:self.leadingAnchor],
            [row.trailingAnchor constraintEqualToAnchor:self.trailingAnchor],
            [row.heightAnchor constraintEqualToConstant:44],

            [label.leadingAnchor constraintEqualToAnchor:row.leadingAnchor],
            [label.centerYAnchor constraintEqualToAnchor:row.centerYAnchor],
            [label.widthAnchor constraintEqualToConstant:kLabelWidth],

            [sv.leadingAnchor constraintEqualToAnchor:label.trailingAnchor constant:8],
            [sv.trailingAnchor constraintEqualToAnchor:row.trailingAnchor],
            [sv.topAnchor constraintEqualToAnchor:row.topAnchor],
            [sv.bottomAnchor constraintEqualToAnchor:row.bottomAnchor],
        ]];

        // 垂直位置
        [row.topAnchor constraintEqualToAnchor:lastView ? lastView.bottomAnchor : self.topAnchor
                                      constant:lastView ? 0 : 0].active = YES;
        lastView = row;
    }

    // 最后一个 row 的底部约束
    [lastView.bottomAnchor constraintEqualToAnchor:self.bottomAnchor].active = YES;
}

- (void)rebuildHistoryOnly {
    // 只刷新第 3 个 section（历史色）
    if (self.scrollViews.count < 3) {
        [self rebuildAll];
        return;
    }

    UIScrollView *sv = self.scrollViews[2];
    // 移除旧的 inner
    for (UIView *sub in sv.subviews) [sub removeFromSuperview];

    UIView *inner = [[UIView alloc] init];
    CGFloat x = 0;
    for (UIColor *color in self.historyColors) {
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(x, 0, kButtonSize, kButtonSize);
        btn.backgroundColor = color;
        btn.layer.cornerRadius = kButtonSize / 2;
        btn.layer.borderWidth = 1;
        btn.layer.borderColor = [UIColor colorWithWhite:0.8 alpha:0.3].CGColor;
        btn.clipsToBounds = YES;
        [btn addTarget:self action:@selector(colorButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
        [inner addSubview:btn];
        x += kButtonSize + kSpacing;
    }

    CGFloat totalW = MAX(0, x - kSpacing);
    inner.frame = CGRectMake(0, 0, totalW, kButtonSize);
    sv.contentSize = CGSizeMake(totalW, kButtonSize);
    [sv addSubview:inner];
}

#pragma mark - 事件

- (void)colorButtonTapped:(UIButton *)btn {
    UIColor *color = btn.backgroundColor;
    if (!color || !self.colorDidTap) return;
    self.colorDidTap(color);
}

#pragma mark - 布局

- (CGSize)intrinsicContentSize {
    return CGSizeMake(UIViewNoIntrinsicMetric, 3 * 44); // 3 sections × 44
}

@end