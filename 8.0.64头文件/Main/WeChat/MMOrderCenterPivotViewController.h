@interface MMOrderCenterPivotViewController : MMUIViewController <UIScrollViewDelegate, MMOrderCenterTableViewControllerExt>
{
    NSArray * _items; // +0x70
    UIScrollView * _tabScrollView; // +0x78
    UIView * _tabContainerView; // +0x80
    UIView * _currentTabIndicatorBarView; // +0x88
    UIScrollView * _pageContainerView; // +0x90
    long long _selectedIndex; // +0x98
    id <MMOrderCenterTabNumberingDataProvider> _tabNumberingProvider; // +0xa0
}
- (id)initWithItems:(id)arg1 tabNumberingProvider:(id)arg2;
- (void)updateDisplayName:(id)arg1 atIndex:(long long)arg2;
- (void)updateNumbering:(long long)arg1 atIndex:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)onTabViewTapped:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onGlobalOrderRefreshRequestedByOrderTableViewController:(id)arg1;
- (void)layoutTabs;
- (void)layoutControllers;
- (void)selectItemAtIndex:(long long)arg1 scrollPageContainer:(BOOL)arg2;
- (void)attachViewControllerAtIndex:(long long)arg1;
- (void)fetchAndUpdateTabNumberingWithForce:(BOOL)arg1;
- (void)updateTabNumberingWithTabCountItems:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)tabScrollView;
- (void)setTabScrollView:(id)arg1;
- (id)tabContainerView;
- (void)setTabContainerView:(id)arg1;
- (id)currentTabIndicatorBarView;
- (void)setCurrentTabIndicatorBarView:(id)arg1;
- (id)pageContainerView;
- (void)setPageContainerView:(id)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (id)tabNumberingProvider;
- (void)setTabNumberingProvider:(id)arg1;
- (void).cxx_destruct;
@end
