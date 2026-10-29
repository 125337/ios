@interface EcsNearByViewController : MMUIViewController <EcsNaviTabsViewDataSource, EcsNaviTabsViewDelegate, UIScrollViewDelegate>
{
    BOOL _alreadyCheckLBS; // +0x70
    MMScrollView * _timelineScrollView; // +0x78
    NSMutableArray * _viewControllersArray; // +0x80
    EcsNaviTabsView * _tabContainer; // +0x88
    long long _lastTabType; // +0x90
    SeePeopleNearbyViewController * _seePeapleNearbyVc; // +0x98
}
- (void)viewDidLoad;
- (BOOL)showNavigationBarSepLine;
- (void)initTabContainerView;
- (void)initScrollView;
- (void)updateTimelineScrollViewPageEnabledState;
- (void)initSubViewControllers;
- (id)tabConfigs;
- (void)setViewController:(id)arg1;
- (void)updateTimelineScrollViewContentSize;
- (void)refreshRightNavItem:(long long)arg1;
- (id)createMenuItem:(id)arg1 iconName:(id)arg2 action:(SEL)arg3;
- (void)handleMenuPeople;
- (void)selectTabIndex:(long long)arg1 manualyTappedType:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)changeSelectTabWithAnimated:(BOOL)arg1 index:(long long)arg2 completion:(id /* block */)arg3;
- (void)afterTabChanged:(long long)arg1 manualyTappedType:(unsigned long long)arg2 doubleClicked:(BOOL)arg3;
- (BOOL)enableTimelineScrollPageFeature;
- (BOOL)timelineScrollViewIsScrolling;
- (long long)timelineTabCount;
- (id)timelineTabConfigPriorityArray;
- (long long)getTabIndexFromTabType:(long long)arg1;
- (long long)getTimelineTabTypeFromIndex:(long long)arg1;
- (void)onTabsViewSingleClickTabType:(long long)arg1 refreshStyle:(long long)arg2;
- (void)onTabsViewDoubleClickTabType:(long long)arg1 refreshStyle:(long long)arg2;
- (void)onTabButtonCleanLeftIcon:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScroll;
- (id)timelineScrollView;
- (void)setTimelineScrollView:(id)arg1;
- (id)viewControllersArray;
- (void)setViewControllersArray:(id)arg1;
- (id)tabContainer;
- (void)setTabContainer:(id)arg1;
- (long long)lastTabType;
- (void)setLastTabType:(long long)arg1;
- (BOOL)alreadyCheckLBS;
- (void)setAlreadyCheckLBS:(BOOL)arg1;
- (id)seePeapleNearbyVc;
- (void)setSeePeapleNearbyVc:(id)arg1;
- (void).cxx_destruct;
@end
