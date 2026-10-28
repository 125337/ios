@interface CAppViewControllerManager : MMObject <MainTabBarControllerDelegate, WCPayWalletLockVerifyLogicDelegate, UISplitViewControllerDelegate, AppUserInterfaceSizeDelegate, WCSplitViewControllerExt, UITabBarControllerDelegate, MMKernelExt, IMsgExt>
{
    UIWindow * m_window; // +0x8
    unsigned int m_uCurrentTabViewIndex; // +0x10
    NSMutableArray * m_vecViewController; // +0x18
    BOOL m_bFromReg; // +0x20
    PreEnterWechatLogic * m_PreEnterWechatLogic; // +0x28
    MainTabBarViewController * m_tabbarController; // +0x30
    MMMainViewController * m_mainViewController; // +0x38
    SplitViewEmptyViewController * m_emptyVc; // +0x40
    NSMutableArray * m_detailViewControllers; // +0x48
    BOOL m_lastPush; // +0x50
    BOOL _m_isHandlingOrientationEvent; // +0x51
    WCSplitViewController * m_newSplitViewController; // +0x58
    NSMutableArray * _m_presentedViewControllers; // +0x60
    UIViewController * _m_lastPresentedViewController; // +0x68
    NSMutableDictionary * _splitDetailViewControllerDict; // +0x70
}
+ (BOOL)hasEnterWechatMain;
+ (id)getAppViewControllerManager;
+ (id)getTabBarController;
+ (id)getCurrentNavigationController;
+ (id)getRootNavigationController;
+ (id)topMostController;
+ (id)topViewControllerOfMainWindow;
+ (id)topViewControllerOfMainWindow:(BOOL)arg1 cls:(Class)arg2;
+ (id)topViewControllerOfWindow:(id)arg1;
+ (id)viewControllersHierecyOfWindow:(id)arg1;
+ (id)topNavigationControllerOnMainWindow;
+ (id)navigationControllerListWithViewController:(id)arg1;
+ (id)rootPresentingViewControllerWithViewController:(id)arg1;
+ (BOOL)isVisibleChildViewControllerOf:(id)arg1 ToFindViewController:(id)arg2;
+ (id)getPrevNavigationControllerFor:(id)arg1;
+ (BOOL)shouldTopRightMenuShowID:(id)arg1;
- (id)getMainWindowViewController;
- (void)openView:(unsigned int)arg1 launchOptions:(id)arg2 isAppUpdated:(BOOL)arg3;
- (BOOL)checkResentFailMsgForNotification:(id)arg1 isFromLaunch:(BOOL)arg2;
- (void)resendAllFailMsgFromLocalNotification:(id)arg1;
- (void)reSendAllMsgFromNotificationDone;
- (void)restartAllFailUploadFromLocalNotification;
- (id)initWithWindow:(id)arg1;
- (void)updateMainWindow:(id)arg1;
- (void)registerNotification;
- (void)unRegisterNotification;
- (id)getPreEnterWechatLogic;
- (id)getNewMainFrameViewController;
- (id)getContactsViewController;
- (id)getTabBarBaseViewController:(unsigned long long)arg1;
- (void)recreateFindFriendViewController;
- (id)getCurFindFriendEntryViewController;
- (void)createTabbarController;
- (BOOL)shouldUseSplitView;
- (void)createMainFrameWithShowStyle:(id)arg1 startPreStep:(BOOL)arg2;
- (void)createSplitViewControllerWithNavigationController:(id)arg1;
- (void)moveToFindTabWithEntry:(unsigned long long)arg1 routeBlock:(id /* block */)arg2;
- (id)findLastPresentedViewControllerWith:(id)arg1;
- (void)dismissAllPresentedViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)presentAllViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)resetNavItem:(id)arg1;
- (void)onAppFirstBecomeActive:(id)arg1;
- (void)forceUsingSingleColumnMode;
- (void)endForceUsingSingleColumnMode;
- (BOOL)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
- (id)getRightViewControllerForSplitView;
- (void)splitViewPopToRootViewController;
- (void)setPrimaryHidden;
- (void)setPrimaryShown;
- (void)setRightViewControllerForSplitView:(id)arg1 forPush:(BOOL)arg2;
- (void)setRightViewControllerForSplitView:(id)arg1 forPush:(BOOL)arg2 complete:(id /* block */)arg3;
- (double)getLeftColumnWidthForSplitView;
- (void)onMainTabBarMainFrameDoubleClicked:(id)arg1;
- (void)onMainTabBarMainFrameSingleClicked:(id)arg1;
- (BOOL)mainTabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)mainTabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)dismissToRootViewController;
- (void)dismissToRootViewControllerForIndex:(long long)arg1;
- (void)safeMoveToRootViewControllerWithCompletion:(id /* block */)arg1;
- (void)safeMoveToRoot:(id)arg1 completion:(id /* block */)arg2;
- (void)moveToRootViewController;
- (void)recursiveDismiss:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)moveToRootViewControllerForIndex:(long long)arg1 completion:(id /* block */)arg2;
- (void)dirctMoveToRootViewControllerForIndex:(long long)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)moveToTabAndShowMainView:(long long)arg1 completion:(id /* block */)arg2;
- (void)moveToTab:(long long)arg1 showMainView:(BOOL)arg2;
- (void)moveToTab:(long long)arg1 showMainView:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(BOOL)arg3 animated:(BOOL)arg4;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(BOOL)arg3 animated:(BOOL)arg4 extraInfo:(id)arg5;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(BOOL)arg3 animated:(BOOL)arg4 extraInfo:(id)arg5 completion:(id /* block */)arg6;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(BOOL)arg3 animated:(BOOL)arg4 reuse:(BOOL)arg5 extraInfo:(id)arg6 completion:(id /* block */)arg7;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(BOOL)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(BOOL)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2;
- (void)newMessageByEnterpriseContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(BOOL)arg3 showSessionList:(BOOL)arg4 animated:(BOOL)arg5 extraInfo:(id)arg6;
- (void)setAllTabBarItemEnabled:(BOOL)arg1;
- (void)openFirstView;
- (void)openMainFrameFirstStep:(BOOL)arg1;
- (void)openMainFrame:(BOOL)arg1 showStyle:(id)arg2 startPreStep:(BOOL)arg3;
- (void)openMainFrame:(BOOL)arg1 showStyle:(id)arg2;
- (void)closeMainFrame;
- (id)getMMMainViewController;
- (id)getSplitDetailNavigationController;
- (id)getSplitViewController;
- (BOOL)isUsingSplitView;
- (BOOL)isSplitViewPrimaryHidden;
- (id)getSplitPresentedViewController;
- (unsigned int)getAppIconTotalUnReadCount;
- (void)addViewToRootView:(id)arg1;
- (void)removeViewFromRootView:(id)arg1;
- (void)addViewControllerToRootView:(id)arg1;
- (void)removeViewFromRootViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)removeViewController:(id)arg1;
- (id)getTopViewController;
- (id)viewControllers;
- (unsigned int)getCurTabBarIndex;
- (void)jumpToURLShardBy3rdApp:(id)arg1;
- (void)jumpToCameraScan:(long long)arg1;
- (void)jumpToCameraScan:(long long)arg1 showMainView:(BOOL)arg2;
- (void)jumpToCameraScanInTopViewController:(long long)arg1;
- (void)jumpToStorage:(unsigned long long)arg1;
- (void)jumpToAlbum;
- (void)jumpToShareCard;
- (void)jumpToShareCardAndCheck;
- (void)internalJumpToShareCard;
- (void)jumpToOfflinePay;
- (void)jumpToMyQrCode;
- (void)jumpToWriteNote;
- (void)jumpToQuickCall;
- (void)jumpToOfflinePayWithEntryVC:(id)arg1;
- (void)jumpToSettingPrivacy:(BOOL)arg1;
- (void)jumpToSetting;
- (void)jumpToSettingWcRecentPrivacy:(long long)arg1;
- (void)openPluginFeature:(long long)arg1;
- (BOOL)isNowInRootViewController;
- (BOOL)jumpToMomentsTimelineAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)refreshLanguage:(long long)arg1 withChildScene:(id)arg2;
- (void)refreshLanguage:(long long)arg1;
- (void)changeLanguage;
- (id)getMainWindow;
- (void)HandleMainFrameJump:(id)arg1;
- (void)HandleFindFriendJump:(id)arg1;
- (void)HandleMoreJump:(id)arg1;
- (void)JumpToViewController:(id)arg1;
- (void)jumpToChat:(id)arg1 msgToLocate:(id)arg2;
- (void)UIWindowDidBecomeKeyNotification:(id)arg1;
- (void)UIWindowDidResignKeyNotification:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (id)getTabBarController;
- (id)getMMSplitViewController;
- (id)getMMTabBarController;
- (void)didChangeScreenCapture:(id)arg1;
- (void)didTakeSnapshot:(id)arg1;
- (void)captureScreenIfNeeded;
- (id)formatCGFloat:(double)arg1;
- (void)printTreeView;
- (void)printView:(id)arg1 linePrefix:(id)arg2 lines:(id)arg3;
- (id)makeViewDesc:(id)arg1 str:(id)arg2;
- (void)onAppUserInterfaceSizeChanged:(id)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 animation:(long long)arg2 viewController:(id)arg3;
- (void)setStatusBarStyle:(long long)arg1 viewController:(id)arg2;
- (void)onWCSplitDisplayModeChanged:(long long)arg1;
- (id)m_newSplitViewController;
- (void)setM_newSplitViewController:(id)arg1;
- (id)m_presentedViewControllers;
- (void)setM_presentedViewControllers:(id)arg1;
- (id)m_lastPresentedViewController;
- (void)setM_lastPresentedViewController:(id)arg1;
- (BOOL)m_isHandlingOrientationEvent;
- (void)setM_isHandlingOrientationEvent:(BOOL)arg1;
- (id)splitDetailViewControllerDict;
- (void)setSplitDetailViewControllerDict:(id)arg1;
- (void).cxx_destruct;
@end
