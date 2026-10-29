@interface NewMainTabBarViewController : WCTabBarController <UITabBarControllerDelegate, WCLazyInitObjectProtocol, MMNewTipsMgrExt, MainTabBarControllerProtocol>
{
    unsigned int m_whatHasInit; // +0x8
    NewMainFrameViewController * m_mainFrameViewController; // +0x10
    MMTabbarItem * m_mainFrameTabItem; // +0x18
    ContactsViewController * m_contactsViewController; // +0x20
    MMTabbarItem * m_contacsTabItem; // +0x28
    FindFriendEntryViewController * m_findFriendEntryViewController; // +0x30
    MMTabbarItem * m_findFrientTabItem; // +0x38
    MoreViewController * m_moreViewController; // +0x40
    MMTabbarItem * m_moreTabItem; // +0x48
    NSMutableArray * m_arrViewController; // +0x50
    BOOL haveLazyInit; // +0x58
    BOOL _mainFrameTabInteractionsEnabled; // +0x59
    id <MainTabBarControllerDelegate> _mainDelegate; // +0x60
}
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)addTapGesture;
- (void)removeTapGesture;
- (void)setSelectedViewController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setAllTabBarItemEnabled:(BOOL)arg1;
- (void)hideTabBar;
- (void)showTabBar;
- (void)hideTabBarForIndex:(unsigned long long)arg1;
- (void)showTabBarForIndex:(unsigned long long)arg1;
- (void)hideTabBarWithNoViewHeightUpdateForIndex:(unsigned long long)arg1;
- (void)showTabBarWithNoViewHeightUpdateForIndex:(unsigned long long)arg1;
- (id)currentViewController;
- (id)currentTopViewController;
- (id)getCurrentViewController;
- (id)getViewControllerAtIndex:(unsigned int)arg1;
- (void)setTabBarItemSelectedIndex:(unsigned long long)arg1;
- (BOOL)tabBarItemIsSelectedAtIndex:(unsigned long long)arg1;
- (void)setTabBarItemTitle:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)setTabBarItemCustomIconView:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)setTabBarBadgeValue:(unsigned long long)arg1 forIndex:(unsigned long long)arg2;
- (void)setTabBarBadgeString:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)showRedDotOnTabBarItemAtIndex:(unsigned long long)arg1;
- (void)removeRedDotOnTabBarItemAtIndex:(unsigned long long)arg1;
- (id)tabBarItemAtIndex:(unsigned long long)arg1;
- (id)badgeViewAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onTabBarHiddenChanged:(BOOL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)moveFromToTabIndex:(unsigned long long)arg1 lastSelectedIsFindPage:(BOOL)arg2;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)goToLazyInitObject;
- (id)getNewMainFrameViewController;
- (id)getContactsViewController;
- (id)getTabBarBaseViewController:(unsigned long long)arg1;
- (id)getAllTabBaseViewControllersIfExist;
- (id)getNavigationContollerAtIndex:(unsigned long long)arg1;
- (id)getAllNavigationControllers;
- (void)OnMainFrameDoubleClicked:(id)arg1;
- (void)OnMainFrameSingleClicked:(id)arg1;
- (void)OnMainFrameLongPressed:(id)arg1;
- (void)OnMainTabBarHiddenChange:(BOOL)arg1;
- (BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)preloadRedDotLogic:(BOOL)arg1 selectedIndex:(unsigned long long)arg2 findFriendPageIndex:(long long)arg3;
- (void)checkDBCorrupt;
- (id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)makeSureFrame;
- (void)setMainFrameTabInteractionsEnabled:(BOOL)arg1;
- (void)didSingleTapTabBarItemAtIndex:(unsigned long long)arg1 wasSelected:(BOOL)arg2;
- (void)didDoubleTapTabBarItemAtIndex:(unsigned long long)arg1 wasSelected:(BOOL)arg2;
- (void)didLongPressTabBarItemAtIndex:(unsigned long long)arg1 wasSelected:(BOOL)arg2;
- (double)longPressDurationForTabBarItemAtIndex:(unsigned long long)arg1;
- (void)handleMoreTabLongPress;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)p_tryToInitAllControllers;
- (void)p_createTabBarItems;
- (void)p_createSlimViewControllers;
- (id)p_getNewMainFrameViewController;
- (void)p_createNewMainFrameViewController;
- (id)p_getContactsViewController;
- (void)p_createContactsViewController;
- (id)findFriendEntryViewController;
- (id)p_getFindFriendEntryViewController;
- (void)p_createFindFriendViewController;
- (id)p_getMoreViewController;
- (void)p_createMoreViewController;
- (void)recreateFindFriendViewController;
- (void)removeAllTabBarBaseViewController;
- (void)onCaptureScreen:(id)arg1;
- (BOOL)haveLazyInit;
- (void)setHaveLazyInit:(BOOL)arg1;
- (id)mainDelegate;
- (void)setMainDelegate:(id)arg1;
- (BOOL)mainFrameTabInteractionsEnabled;
- (void).cxx_destruct;
@end
