@interface ChatBotHorizontalPageView : UIView <UIScrollViewDelegate>
{
    NSMutableArray * _pageInfoArray; // +0x8
    UIScrollView * _scrollView; // +0x10
    UIView * _tabContainerView; // +0x18
    UIView * _indicatorView; // +0x20
    NSArray * _tabLabels; // +0x28
    long long _currentIndex; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 pageContentInfos:(id)arg2;
- (void)setupPageContent:(id)arg1;
- (void)setupTabContainer;
- (void)setupIndicatorView;
- (void)setupScrollView;
- (void)layoutSubviews;
- (void)setupScrollViewSize;
- (void)tabLabelTapped:(id)arg1;
- (void)scrollToPage:(long long)arg1;
- (void)updateTabLabelsAppearance:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)pageInfoArray;
- (void)setPageInfoArray:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)tabContainerView;
- (void)setTabContainerView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)tabLabels;
- (void)setTabLabels:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (void).cxx_destruct;
@end
