@interface MMBGMSelectedTabBarView : MMUIView
{
    id <MMBGMSelectedTabBarViewDelegate> _delegate; // +0x8
    NSMutableArray * _tabButtons; // +0x10
    NSMutableArray * _tabTitles; // +0x18
    unsigned long long _currentIndex; // +0x20
    UIScrollView * _scrollView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 tabModel:(id)arg2;
- (void)initViews;
- (void)layoutSubviews;
- (void)manualTriggerSelectBtnAtIndex:(unsigned long long)arg1;
- (void)updateTabButtonState:(long long)arg1;
- (void)selectIndex:(unsigned long long)arg1;
- (void)tabButtonClicked:(id)arg1;
- (void)tabButtonSelectedWithIndex:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabButtons;
- (void)setTabButtons:(id)arg1;
- (id)tabTitles;
- (void)setTabTitles:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void).cxx_destruct;
@end

