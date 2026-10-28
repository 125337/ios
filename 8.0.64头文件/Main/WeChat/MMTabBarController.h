@interface MMTabBarController : UITabBarController <UIGestureRecognizerDelegate, MMTabBarDelegate>
{
    unsigned long long _viewControllersCount; // +0x8
    NSMutableArray * _tabBarBtns; // +0x10
    UITapGestureRecognizer * _doubleTapGesture; // +0x18
    BOOL _hasAddTapGesture; // +0x20
    UITapGestureRecognizer * _singleTapGesture; // +0x28
    MMTabBar * _customTabBar; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)makeSureFrame;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)relayoutButtons:(id)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setAllTabBarItemEnabled:(BOOL)arg1;
- (double)tabBarHeight;
- (void)hideTabBar;
- (void)showTabBar;
- (void)hideTabBarForIndex:(unsigned long long)arg1;
- (void)showTabBarForIndex:(unsigned long long)arg1;
- (void)hideTabBarWithNoViewHeightUpdateForIndex:(unsigned long long)arg1;
- (void)showTabBarWithNoViewHeightUpdateForIndex:(unsigned long long)arg1;
- (void)addTapGesture;
- (void)removeTapGesture;
- (void)handleTapGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)getTabBarBtnViews;
- (id)getTabBarBtnForIndex:(unsigned long long)arg1;
- (void)clearTabBtns;
- (void)setTabBarItemSelectedIndex:(unsigned long long)arg1;
- (BOOL)tabBarItemIsSelectedAtIndex:(unsigned long long)arg1;
- (void)setTabBarItemTitle:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)setTabBarItemCustomIconView:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)currentViewController;
- (id)currentTopViewController;
- (id)getViewControllerAtIndex:(unsigned int)arg1;
- (void)setTabBarBadgeValue:(unsigned long long)arg1 forIndex:(unsigned long long)arg2;
- (void)setTabBarBadgeString:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)showRedDotOnTabBarItemAtIndex:(unsigned long long)arg1;
- (void)removeRedDotOnTabBarItemAtIndex:(unsigned long long)arg1;
- (id)getTabbarItemForIndex:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onTabBarItemViewsRelayout;
- (id)getCurrentViewController;
- (void)onTabBarHiddenChanged:(BOOL)arg1;
- (id)customTabBar;
- (id)singleTapGesture;
- (void)setSingleTapGesture:(id)arg1;
- (void)setCustomTabBar:(id)arg1;
- (void).cxx_destruct;
@end
