@interface MainTabBarViewController : MMTabBarController <MMTabBarControllerDelegate, WCLazyInitObjectProtocol, MMNewTipsMgrExt, MMUIHookViewDelegate>
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
    BOOL _recoverTabBarItems; // +0x59
    id <MainTabBarControllerDelegate> _mainDelegate; // +0x60
}
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
- (void)OnMainTabBarHiddenChange:(BOOL)arg1;
- (BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)checkDBCorrupt;
- (id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)init;
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
- (BOOL)haveLazyInit;
- (void)setHaveLazyInit:(BOOL)arg1;
- (id)mainDelegate;
- (void)setMainDelegate:(id)arg1;
- (BOOL)recoverTabBarItems;
- (void)setRecoverTabBarItems:(BOOL)arg1;
- (void).cxx_destruct;
@end

