#import "SideGroupsDirView.h"
#import "../../Core/WPUtility.h"

static const CGFloat kSDDirRowHeight = 48.0;

@interface SideGroupsDirView ()
@property (nonatomic, strong) NSMutableArray<UIView *> *rows;
@property (nonatomic, strong) NSMutableArray<UILabel *> *titleLabels;
@property (nonatomic, strong) NSMutableArray<UILabel *> *countLabels;
@property (nonatomic, strong) NSMutableArray<UILabel *> *badgeLabels;
@property (nonatomic, strong) NSMutableArray<UILabel *> *chevrons;
@property (nonatomic, copy) NSArray<NSString *> *titles;
@property (nonatomic, copy) NSArray<NSNumber *> *counts;
@property (nonatomic, copy) NSArray<NSNumber *> *unread;
@end

@implementation SideGroupsDirView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        _rows = [NSMutableArray array];
        _titleLabels = [NSMutableArray array];
        _countLabels = [NSMutableArray array];
        _badgeLabels = [NSMutableArray array];
        _chevrons = [NSMutableArray array];
        _titles = @[];
        _counts = @[];
        _unread = @[];
        UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(sdTap:)];
        [self addGestureRecognizer:tap];
        UILongPressGestureRecognizer *lp =
            [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(sdLongPress:)];
        [self addGestureRecognizer:lp];
    }
    return self;
}

// 行外观取系统动态文字色，跟随微信明暗主题（不额外加配置项）
- (UIColor *)sdTextColor    { return [WPUtility isDarkModeForView:self] ? UIColor.whiteColor : [UIColor colorWithRed:0.1 green:0.1 blue:0.1 alpha:1]; }
- (UIColor *)sdCountColor   { return [WPUtility isDarkModeForView:self] ? [UIColor colorWithWhite:1 alpha:0.55] : [UIColor colorWithWhite:0 alpha:0.45]; }
- (UIColor *)sdChevronColor { return [WPUtility isDarkModeForView:self] ? [UIColor colorWithWhite:1 alpha:0.3] : [UIColor colorWithWhite:0 alpha:0.25]; }

- (UILabel *)sdMakeLabel:(CGFloat)size color:(UIColor *)color into:(UIView *)parent {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectZero];
    l.font = [UIFont systemFontOfSize:size];
    l.textColor = color;
    l.backgroundColor = UIColor.clearColor;
    [parent addSubview:l];
    return l;
}

- (void)rebuildRowsIfNeeded {
    NSInteger n = (NSInteger)self.titles.count;
    while ((NSInteger)self.rows.count > n) {
        [self.rows.lastObject removeFromSuperview];
        [self.rows removeLastObject];
        [self.titleLabels removeLastObject];
        [self.countLabels removeLastObject];
        [self.badgeLabels removeLastObject];
        [self.chevrons removeLastObject];
    }
    while ((NSInteger)self.rows.count < n) {
        UIView *row = [[UIView alloc] initWithFrame:CGRectZero];
        row.backgroundColor = UIColor.clearColor;
        row.userInteractionEnabled = NO; // 点击由整体手势按 y 命中
        [self addSubview:row];
        [self.rows addObject:row];
        [self.titleLabels addObject:[self sdMakeLabel:16 color:self.sdTextColor into:row]];
        [self.countLabels addObject:[self sdMakeLabel:14 color:self.sdCountColor into:row]];
        UILabel *badge = [self sdMakeLabel:11 color:UIColor.whiteColor into:row];
        badge.backgroundColor = [UIColor colorWithRed:1 green:0.23 blue:0.19 alpha:1];
        badge.textAlignment = NSTextAlignmentCenter;
        badge.layer.cornerRadius = 8;
        badge.layer.masksToBounds = YES;
        badge.hidden = YES;
        [self.badgeLabels addObject:badge];
        UILabel *chev = [self sdMakeLabel:18 color:self.sdChevronColor into:row];
        chev.text = @"›";
        [self.chevrons addObject:chev];
    }
}

- (void)reloadGroups:(NSArray<NSString *> *)titles
              counts:(NSArray<NSNumber *> *)counts
              unread:(NSArray<NSNumber *> *)unread {
    self.titles = [titles copy];
    self.counts = [counts copy] ?: @[];
    self.unread = [unread copy] ?: @[];
    [self rebuildRowsIfNeeded];
    for (NSInteger i = 0; i < (NSInteger)self.titles.count; i++) {
        self.titleLabels[i].text = self.titles[i];
        NSUInteger c = (i < (NSInteger)self.counts.count) ? self.counts[i].unsignedIntegerValue : 0;
        self.countLabels[i].text = [NSString stringWithFormat:@"· %lu", (unsigned long)c];
        NSUInteger u = (i < (NSInteger)self.unread.count) ? self.unread[i].unsignedIntegerValue : 0;
        UILabel *badge = self.badgeLabels[i];
        badge.text = u > 99 ? @"99+" : (u > 0 ? [NSString stringWithFormat:@"%lu", (unsigned long)u] : @"");
        badge.hidden = badge.text.length == 0;
        if (!badge.hidden) [badge sizeToFit];
    }
    [self setNeedsLayout];
}

- (void)layoutSubviews {
    [super layoutSubviews];
    NSInteger n = (NSInteger)self.rows.count;
    CGFloat W = self.bounds.size.width;
    if (n == 0 || W <= 0) return;
    for (NSInteger i = 0; i < n; i++) {
        CGFloat y = i * kSDDirRowHeight;
        BOOL over = (y + kSDDirRowHeight > self.bounds.size.height && i > 0);
        self.rows[i].hidden = over; // 超高截断（组多时靠侧栏切换）
        if (over) continue;
        self.rows[i].frame = CGRectMake(0, y, W, kSDDirRowHeight);

        UILabel *badge = self.badgeLabels[i];
        CGFloat bw = 0;
        if (!badge.hidden) {
            bw = MAX(16, badge.frame.size.width + 8);
            badge.frame = CGRectMake(W - 14 - 14 - 8 - bw, (kSDDirRowHeight - 16) / 2.0, bw, 16);
        }
        self.chevrons[i].frame = CGRectMake(W - 14 - 14, (kSDDirRowHeight - 22) / 2.0, 14, 22);

        UILabel *title = self.titleLabels[i];
        CGSize ts = [title sizeThatFits:CGSizeMake(CGFLOAT_MAX, 20)];
        title.frame = CGRectMake(20, (kSDDirRowHeight - 20) / 2.0, MIN(ts.width, W * 0.6), 20);
        UILabel *count = self.countLabels[i];
        CGSize cs = [count sizeThatFits:CGSizeMake(CGFLOAT_MAX, 18)];
        count.frame = CGRectMake(CGRectGetMaxX(title.frame) + 6, (kSDDirRowHeight - 18) / 2.0, cs.width + 2, 18);
    }
}

#pragma mark - 交互

- (NSInteger)sdHitIndex:(CGPoint)p {
    NSInteger idx = (NSInteger)(p.y / kSDDirRowHeight);
    if (idx < 0 || idx >= (NSInteger)self.rows.count || self.rows[idx].hidden) return -1;
    return idx;
}

- (void)sdTap:(UITapGestureRecognizer *)g {
    NSInteger idx = [self sdHitIndex:[g locationInView:self]];
    if (idx >= 0 && self.onSelectIndex) self.onSelectIndex(idx);
}

- (void)sdLongPress:(UILongPressGestureRecognizer *)g {
    if (g.state != UIGestureRecognizerStateBegan) return;
    NSInteger idx = [self sdHitIndex:[g locationInView:self]];
    if (idx >= 0 && self.onLongPressIndex) self.onLongPressIndex(idx);
}

@end
