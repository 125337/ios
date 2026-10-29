@interface WCFinderTabPageViewController : MMUIViewController <UIScrollViewDelegate, WCFinderTabPageViewBasicViewDelegate>
{
    BOOL _enableScrollPage; // +0x70
    WCFinderTabPageModel * _currentSelectPageModel; // +0x78
    MMScrollView * _tabScrollView; // +0x80
    double _tabMargin; // +0x88
    UIColor * _scrollViewBackgroundColor; // +0x90
    double _fontSize; // +0x98
    double _topInset; // +0xa0
    double _bottomInset; // +0xa8
    double _lineMargin; // +0xb0
    NSMutableArray * _tabPageModelArray; // +0xb8
    UIView<WCFinderTabPageViewBasicProtocol> * _tabView; // +0xc0
    unsigned long long _hasAddViewFlag; // +0xc8
    NSMapTable * _childViewRelayoutFlags; // +0xd0
}
- (id)initWithTabPageModelArray:(id)arg1;
- (id)initWithTabPageModelArray:(id)arg1 tabHeaderView:(id)arg2;
- (void)setEnableScrollPage:(BOOL)arg1;
- (void)setTabName:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)resetWithTabPageModelArray:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)resetWithTabPageModelArray:(id)arg1 toIndex:(unsigned long long)arg2 alignment:(long long)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewDidPresent:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)genTabHeaderViewWithTabPageModelArray:(id)arg1;
- (id)genTabHeaderViewWithTabPageModelArray:(id)arg1 alignment:(long long)arg2;
- (void)configureTabPageHeaderView:(id)arg1;
- (void)viewDidLoad;
- (void)reloadToIndex:(unsigned long long)arg1;
- (void)setTabView:(id)arg1;
- (void)setUpTabScrollView;
- (void)childViewControllerAppear:(id)arg1;
- (void)childViewControllerDisAppear:(id)arg1;
- (void)_childViewTransitionIsAppear:(BOOL)arg1 childViewController:(id)arg2;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)setSelectVCIndex:(unsigned long long)arg1;
- (void)_setSelectVCIndex:(unsigned long long)arg1 shouldScroll:(BOOL)arg2 isTriggerByUser:(BOOL)arg3;
- (void)switchTabPageViewControllerFrom:(id)arg1 to:(id)arg2 isTriggerByUser:(BOOL)arg3;
- (void)addChildViewControllerWithIndex:(unsigned long long)arg1;
- (void)removeChildViewControllerWithIndex:(unsigned long long)arg1;
- (void)removeAllChildViewController;
- (void)replaceTabViewControllerWith:(id)arg1 AtIndex:(unsigned long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_addChildViewToScrollViewWithIndex:(unsigned long long)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)reloadCurrentTabPageLayout;
- (BOOL)_hasChildViewDidAddWithIndex:(unsigned long long)arg1;
- (void)finderTabPageView:(id)arg1 didSelectIndex:(unsigned long long)arg2 isTriggerByUser:(BOOL)arg3;
- (BOOL)enableScrollPage;
- (id)currentSelectPageModel;
- (void)setCurrentSelectPageModel:(id)arg1;
- (id)tabScrollView;
- (void)setTabScrollView:(id)arg1;
- (double)tabMargin;
- (void)setTabMargin:(double)arg1;
- (id)scrollViewBackgroundColor;
- (void)setScrollViewBackgroundColor:(id)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (double)topInset;
- (void)setTopInset:(double)arg1;
- (double)bottomInset;
- (void)setBottomInset:(double)arg1;
- (double)lineMargin;
- (void)setLineMargin:(double)arg1;
- (id)tabPageModelArray;
- (void)setTabPageModelArray:(id)arg1;
- (id)tabView;
- (unsigned long long)hasAddViewFlag;
- (void)setHasAddViewFlag:(unsigned long long)arg1;
- (id)childViewRelayoutFlags;
- (void)setChildViewRelayoutFlags:(id)arg1;
- (void).cxx_destruct;
@end
