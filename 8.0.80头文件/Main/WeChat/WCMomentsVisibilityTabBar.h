@interface WCMomentsVisibilityTabBar : UIView
{
    NSArray * _titles; // +0x8
    long long _selectedIndex; // +0x10
    double _indicatorOffset; // +0x18
    id <WCMomentsVisibilityTabBarDelegate> _delegate; // +0x20
    NSMutableArray * _buttons; // +0x28
    UIView * _indicator; // +0x30
    UIView * _separatorLine; // +0x38
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitles:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setIndicatorOffset:(double)arg1;
- (void)layoutSubviews;
- (void)layoutIndicator;
- (double)widthForButtonTitle:(id)arg1 selected:(BOOL)arg2;
- (void)refreshStyles;
- (void)onTapButton:(id)arg1;
- (id)titles;
- (long long)selectedIndex;
- (double)indicatorOffset;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)buttons;
- (void)setButtons:(id)arg1;
- (id)indicator;
- (void)setIndicator:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
