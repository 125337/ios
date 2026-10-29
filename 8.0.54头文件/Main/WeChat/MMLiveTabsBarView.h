@interface MMLiveTabsBarView : UIView
{
    id <MMLiveTabsBarViewDelegate> _delegate; // +0x8
    MMLiveTabsBarViewInitParameter * _param; // +0x10
    NSArray * _tabButtons; // +0x18
    UIView * _tabIndicatorView; // +0x20
    double _currentIndex; // +0x28
}
- (id)initWithParameter:(id)arg1;
- (void)layoutSubviews;
- (void)setTabTitles:(id)arg1;
- (void)setCurrentIndex:(double)arg1;
- (void)buildTabsWithTitles:(id)arg1;
- (void)buildTabIndicatorIfNeeded;
- (id)buildTabButtonWithIndex:(unsigned long long)arg1 title:(id)arg2;
- (void)onSelectTab:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (id)tabButtons;
- (void)setTabButtons:(id)arg1;
- (id)tabIndicatorView;
- (void)setTabIndicatorView:(id)arg1;
- (double)currentIndex;
- (void).cxx_destruct;
@end

