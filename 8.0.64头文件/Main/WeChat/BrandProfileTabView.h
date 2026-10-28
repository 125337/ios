@interface BrandProfileTabView : MMUIView
{
    id <BrandProfileTabViewDelegate> _delegate; // +0x8
    NSArray * _itemInfoList; // +0x10
    UIFont * _titleFont; // +0x18
    UIColor * _titleNormalColor; // +0x20
    UIColor * _titleSelectedColor; // +0x28
    UIColor * _indicatorColor; // +0x30
    double _indicatorHeight; // +0x38
    double _indicatorWidth; // +0x40
    long long _selectedIndex; // +0x48
    long long _alwaysClickableIndex; // +0x50
    long long _indicatorIgnoreIndex; // +0x58
    NSMutableArray * _buttonList; // +0x60
    UIView * _indicatorView; // +0x68
    UIScrollView * _scrollView; // +0x70
}
- (id)init;
- (void)setupScrollView;
- (void)setupIndicatorView;
- (void)setItemInfoList:(id)arg1;
- (void)recreateButtonList;
- (void)layoutSubviews;
- (double)calcuteTabViewHeight;
- (BOOL)isNoSubviews;
- (void)onTabButtonClick:(id)arg1;
- (void)setSelectedIndex:(long long)arg1 selectType:(unsigned long long)arg2;
- (void)updateSelectedIndex:(long long)arg1;
- (void)updateSelectedIndicatorFrame:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)itemInfoList;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)titleNormalColor;
- (void)setTitleNormalColor:(id)arg1;
- (id)titleSelectedColor;
- (void)setTitleSelectedColor:(id)arg1;
- (id)indicatorColor;
- (void)setIndicatorColor:(id)arg1;
- (double)indicatorHeight;
- (void)setIndicatorHeight:(double)arg1;
- (double)indicatorWidth;
- (void)setIndicatorWidth:(double)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (long long)alwaysClickableIndex;
- (void)setAlwaysClickableIndex:(long long)arg1;
- (long long)indicatorIgnoreIndex;
- (void)setIndicatorIgnoreIndex:(long long)arg1;
- (id)buttonList;
- (void)setButtonList:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void).cxx_destruct;
@end
