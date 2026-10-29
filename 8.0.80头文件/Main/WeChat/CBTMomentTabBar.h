@interface CBTMomentTabBar : UIView
{
    CBTMomentTabBarConfig * _config; // +0x8
    unsigned long long _curIndex; // +0x10
    NSMutableArray * _tabBarItemViewArr; // +0x18
    UIView * _indicatorView; // +0x20
}
- (id)initWithConfig:(id)arg1;
- (unsigned long long)getCurIndex;
- (id)getConfig;
- (void)layoutContentViews;
- (void)onSelecetedIndex:(unsigned long long)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (unsigned long long)curIndex;
- (void)setCurIndex:(unsigned long long)arg1;
- (id)tabBarItemViewArr;
- (void)setTabBarItemViewArr:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
