@interface WeAppCustomTabbar : UIView
{
    id <WeAppCustomTabbarDelegate> _delegate; // +0x8
    long long _selectedIndex; // +0x10
    NSArray * _items; // +0x18
    NSMutableArray * _tabBarBtns; // +0x20
    NSMutableDictionary * _imageViews; // +0x28
    NSMutableDictionary * _labelViews; // +0x30
    NSMutableDictionary * _badgeViews; // +0x38
    UIView * _intervalLine; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)layoutSubviews;
- (id)getTabbarLabelForIndex:(long long)arg1;
- (void)setTabbarItems:(id)arg1;
- (void)updateButtonForIndex:(long long)arg1;
- (void)layoutButtons;
- (void)onBtnClick:(id)arg1;
- (id)badgeViewForIndex:(long long)arg1;
- (void)setTabBarBadgeAsRedDotForIndex:(long long)arg1;
- (void)setTabBarBadgeString:(id)arg1 color:(id)arg2 forIndex:(long long)arg3;
- (void)hideTabBarBadgeForIndex:(long long)arg1;
- (void)adjustBadgeViewForIndex:(long long)arg1;
- (void)setAccessibilityValueForIndex:(unsigned long long)arg1 badgeStr:(id)arg2;
- (void)alterIntervalLine;
- (void)removeFromSuperview;
- (void)setHidden:(BOOL)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)selectedIndex;
- (id)items;
- (void)setItems:(id)arg1;
- (id)tabBarBtns;
- (void)setTabBarBtns:(id)arg1;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)labelViews;
- (void)setLabelViews:(id)arg1;
- (id)badgeViews;
- (void)setBadgeViews:(id)arg1;
- (id)intervalLine;
- (void)setIntervalLine:(id)arg1;
- (void).cxx_destruct;
@end
