@interface WCFinderFeedPickerTabView : MMUIView
{
    BOOL _isUsingPlaneStyle; // +0x8
    id <WCFinderFeedPickerTabViewDelegate> _delegate; // +0x10
    NSMutableArray * _tabButtons; // +0x18
    NSMutableArray * _tabTitles; // +0x20
    unsigned long long _currentIndex; // +0x28
    UIScrollView * _scrollView; // +0x30
}
- (id)initWithTabViewModels:(id)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateTabButtonState:(long long)arg1;
- (void)updateButtonSelectedState:(unsigned long long)arg1;
- (void)setButtonSelectedState:(unsigned long long)arg1;
- (void)revertButtonSelectedState:(unsigned long long)arg1;
- (void)selectIndex:(unsigned long long)arg1;
- (void)tabButtonClicked:(id)arg1;
- (void)tabButtonSelectedWithIndex:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isUsingPlaneStyle;
- (void)setIsUsingPlaneStyle:(BOOL)arg1;
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
