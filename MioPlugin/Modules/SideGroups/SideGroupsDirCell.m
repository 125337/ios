#import "SideGroupsDirCell.h"
#import "../../Core/WPUtility.h"

@interface SideGroupsDirCell ()
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *countLabel;
@property (nonatomic, strong) UILabel *badgeLabel;
@property (nonatomic, strong) UILabel *chevronLabel;
@end

@implementation SideGroupsDirCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        self.backgroundColor = UIColor.clearColor;
        self.selectionStyle = UITableViewCellSelectionStyleDefault;
        self.contentView.backgroundColor = UIColor.clearColor;

        _titleLabel = [self sdMakeLabel:13];
        _countLabel = [self sdMakeLabel:12];
        _badgeLabel = [self sdMakeLabel:11];
        _badgeLabel.textAlignment = NSTextAlignmentCenter;
        _badgeLabel.textColor = UIColor.whiteColor;
        _badgeLabel.backgroundColor = [UIColor colorWithRed:1 green:0.23 blue:0.19 alpha:1];
        _badgeLabel.layer.cornerRadius = 9;
        _badgeLabel.layer.masksToBounds = YES;
        _badgeLabel.hidden = YES;
        _chevronLabel = [self sdMakeLabel:13];
        _chevronLabel.text = @"›";

        UILongPressGestureRecognizer *lp =
            [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(sdLongPress:)];
        [self addGestureRecognizer:lp];
    }
    return self;
}

- (UILabel *)sdMakeLabel:(CGFloat)size {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectZero];
    l.font = [UIFont systemFontOfSize:size];
    l.backgroundColor = UIColor.clearColor;
    [self.contentView addSubview:l];
    return l;
}

- (void)configureTitle:(NSString *)title count:(NSUInteger)count unread:(NSUInteger)unread expanded:(BOOL)expanded {
    self.titleLabel.text = title ?: @"";
    self.countLabel.text = [NSString stringWithFormat:@"· %lu", (unsigned long)count];
    self.chevronLabel.text = expanded ? @"˅" : @"›"; // ˅=组内会话在列 ›=已收起
    UILabel *badge = self.badgeLabel;
    badge.text = unread > 99 ? @"99+" : (unread > 0 ? [NSString stringWithFormat:@"%lu", (unsigned long)unread] : @"");
    badge.hidden = badge.text.length == 0;
    [self setNeedsLayout];
}

// 行外观跟随明暗主题（每次布局现取，无额外配置项）
- (void)layoutSubviews {
    [super layoutSubviews];
    BOOL dark = [WPUtility isDarkModeForView:self];
    self.titleLabel.textColor = dark ? UIColor.whiteColor : [UIColor colorWithRed:0.1 green:0.1 blue:0.1 alpha:1];
    self.countLabel.textColor = dark ? [UIColor colorWithWhite:1 alpha:0.55] : [UIColor colorWithWhite:0 alpha:0.45];
    self.chevronLabel.textColor = dark ? [UIColor colorWithWhite:1 alpha:0.3] : [UIColor colorWithWhite:0 alpha:0.25];

    CGFloat W = self.contentView.bounds.size.width;
    CGFloat H = self.contentView.bounds.size.height;
    if (W <= 0 || H <= 0) return;

    // 布局从右往左（XOS 实测：chevron 右缘距 18，badge 与箭头间距 6）
    // badge 宽度用 sizeThatFits 现测（frame 唯一来源是这里，避免复用残留/隐式动画闪跳）
    self.chevronLabel.frame = CGRectMake(W - 18 - 12, (H - 16) / 2.0, 12, 16);
    UILabel *badge = self.badgeLabel;
    CGFloat bw = 0;
    if (!badge.hidden) {
        CGFloat tw = [badge sizeThatFits:CGSizeMake(CGFLOAT_MAX, 18)].width;
        bw = MAX(18, tw + 8);
        badge.frame = CGRectMake(W - 18 - 12 - 6 - bw, (H - 18) / 2.0, bw, 18); // 18 高，紧邻箭头左侧
    }

    UILabel *title = self.titleLabel;
    CGSize ts = [title sizeThatFits:CGSizeMake(CGFLOAT_MAX, 18)];
    title.frame = CGRectMake(18, (H - 18) / 2.0, MIN(ts.width, W * 0.6), 18); // XOS: label x=18
    UILabel *count = self.countLabel;
    CGSize cs = [count sizeThatFits:CGSizeMake(CGFLOAT_MAX, 16)];
    count.frame = CGRectMake(CGRectGetMaxX(title.frame) + 5, (H - 16) / 2.0, cs.width + 2, 16);
}

- (void)sdLongPress:(UILongPressGestureRecognizer *)g {
    if (g.state == UIGestureRecognizerStateBegan && self.onLongPress) self.onLongPress();
}

@end
