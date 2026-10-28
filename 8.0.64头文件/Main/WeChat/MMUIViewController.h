@interface MMUIViewController : UIViewController <MiniTaskEdgeGestureHandlerDelegate, MMUIViewControllerExt, MMSceneDelegateExt, IUiUtilExt, MMUIViewControllerDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, MMSnackBarContainer>
{
    BOOL m_isPopByClickingURL; // +0x8
    MMLoadingView * m_loadingViewX; // +0x10
    unsigned int m_uiVcType; // +0x18
    UIView * m_navHeaderView; // +0x20
    UILabel * m_newsTitleRecordLabel; // +0x28
    NSMutableArray * m_fullScreenViews; // +0x30
    BOOL m_bAnimated; // +0x38
    BOOL m_bIsBeingPoped; // +0x39
    BOOL m_bInteractivePopEnabled; // +0x3a
    BOOL m_bDisableAdjustInsetAndOffset; // +0x3b
    double lastScreenWidth; // +0x40
    UINavigationController * m_navigationController; // +0x48
    MMTitleView * m_baseTitleView; // +0x50
    NSMutableDictionary * m_dicDeepLink; // +0x58
    NSMutableDictionary * m_dicContentInsetAutolayout; // +0x60
    NSMutableArray * m_arrEndUserOpInfo; // +0x68
    UIBarButtonItem * m_leftBarBtnItem; // +0x70
    UIBarButtonItem * m_rightBarBtnItem; // +0x78
    UIColor * m_titleColor; // +0x80
    UIColor * m_subTitleColor; // +0x88
    UIFont * m_titleFont; // +0x90
    MMUINavigationBar * fakeNaviView; // +0x98
    UIView * m_navSepLine; // +0xa0
    UIScrollView * m_observeScrollView; // +0xa8
    CGPoint m_observeScrollViewLastOffset; // +0xb0
    BOOL m_hasAppear; // +0xc0
    BOOL m_bIsBeingInteractivePop; // +0xc1
    BOOL m_hasAdjustInset; // +0xc2
    double m_navWidth; // +0xc8
    NSString * m_navTitle; // +0xd0
    NSString * m_navSubTitle; // +0xd8
    BOOL m_navLoading; // +0xe0
    UIView * m_navSubLeftView; // +0xe8
    UIView * m_navRightView; // +0xf0
    double m_navTitleOffset; // +0xf8
    BOOL m_navCustomView; // +0x100
    BOOL m_willPopFromCustomTransitioninig; // +0x101
    BOOL _m_bAnimating; // +0x102
    BOOL _isDuringInteractivePop; // +0x103
    BOOL _isAppearing; // +0x104
    BOOL _m_willBePoped; // +0x105
    BOOL _wcautoAdjustsScrollViewInsets; // +0x106
    BOOL _m_bStopPopWhenDeleteContact; // +0x107
    BOOL _disableAccessibilityCheck; // +0x108
    BOOL _disableCheckLeaksWhenQuit; // +0x109
    BOOL _forbidCreateNavHeader; // +0x10a
    BOOL _layoutRightInSplitView; // +0x10b
    BOOL _isNavBarAccessibilityHiddenBefore; // +0x10c
    BOOL _didObserveInteractivePopGRForDeselectCell; // +0x10d
    BOOL _isBeingRotation; // +0x10e
    unsigned int _checkLeaksDelays; // +0x110
    UIView * bottomView; // +0x118
    UIView * m_errorTipsBar; // +0x120
    MMSnackBar * _snackBar; // +0x128
    WCProgressViewHelper * _progressViewX; // +0x130
    UIViewController * _presentingModalViewController; // +0x138
    UIViewController * _presentedModalViewController; // +0x140
    MMNavBarInteractiveConfig * _navBarInteractiveConfig; // +0x148
    WCEventTrackingSystemConfig * _trackingSystemConfig; // +0x150
    id /* block */ _viewAppearBlock; // +0x158
    id /* block */ _viewDidQuitBlock; // +0x160
    UIPanGestureRecognizer * _interactiveDismissPanGesture; // +0x168
    _TtC7WCUIKit16MMHostingManager * _hostingController; // +0x170
    UIPanGestureRecognizer * _scrollViewInteractivePanGesture; // +0x178
    long long _orientationBeforeRotation; // +0x180
}
+ (void)load;
+ (void)hookMMUIViewController;
+ (BOOL)hookViewDidBePushed;
+ (BOOL)hookViewDidBePoped;
+ (BOOL)hookViewDidAppear;
+ (BOOL)hookViewDidDisappear;
+ (BOOL)hookViewDidBePresented;
+ (BOOL)hookViewDidBeDismissed;
+ (BOOL)isMiniTaskFeatureEnable;
- (id)transitionRootView;
- (void)viewWillAppearInNavBar:(BOOL)arg1;
- (void)viewWillDisappearInNavBar:(BOOL)arg1;
- (void)viewDidLayoutSubviewsInNavBar;
- (void)onScrollViewContentOffsetChanged:(CGPoint)arg1;
- (void)onScrollViewInteractivePan:(id)arg1;
- (void)handleBeginScrolling:(id)arg1;
- (BOOL)isDarkBackground;
- (void)handleFade:(id)arg1;
- (void)internalHandleFade:(id)arg1;
- (void)updateFadeBkgAlpha;
- (void)updateBGTransparentWithForceUpdate:(BOOL)arg1;
- (void)setScrollState:(id)arg1;
- (void)handleDidScrolling:(id)arg1;
- (void)restoreNavigationBarToFullSizeOnScrollToTop;
- (void)restoreNavigationBarToFullSizeAnimatedWithDuration:(double)arg1;
- (void)restoreNavigationBarToFullSize;
- (void)setNavigationBarY:(double)arg1;
- (void)fixScrollViewContentOffset;
- (void)setNavigationBarAlpha:(double)arg1 withTitleIncluded:(BOOL)arg2;
- (BOOL)isScrollViewExceedsTop;
- (double)statusBarHeight;
- (double)navigationBarHeight;
- (double)scrollViewContentInsetTopForInteractive;
- (double)scrollViewContentInsetBottomForInteractive;
- (id)titleView;
- (BOOL)stickyToExpand;
- (long long)navigationBarHiddenStatus;
- (void)handleNavigationBarHiddenStatusOnAppear;
- (void)handleNavigationBarHiddenStatusOnDisappear;
- (double)getNavigationBarHeight;
- (void)applyGradientMaskToLabel:(id)arg1;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (BOOL)isShowInPageSheet;
- (BOOL)isBeingDismissedFromPageSheet;
- (void)updateIsBeingDismissFromPageSheet:(BOOL)arg1;
- (BOOL)isInteractiveTrasitioning;
- (id)genHeroDissmissPanGR;
- (void)handleHeroHorizonalPanWithGr:(id)arg1;
- (void)setWCBizAuthTitle:(id)arg1;
- (void)stopBizLoading;
- (void)startCommonLoading:(BOOL)arg1;
- (void)startCommonLoading;
- (void)startCommonLoadingBlocked;
- (void)sf_viewDidBePushed:(BOOL)arg1;
- (void)sf_viewDidBePoped:(BOOL)arg1;
- (void)sf_viewDidAppear:(BOOL)arg1;
- (void)sf_viewDidDisappear:(BOOL)arg1;
- (void)sf_viewDidBePresented:(BOOL)arg1;
- (void)sf_viewDidBeDismissed:(BOOL)arg1;
- (BOOL)isPerformanceMonitorSwitch;
- (BOOL)isFinderTabPage:(id)arg1;
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (long long)preferredQuickReplyMsgStyle;
- (void)viewWillPresentQuickReplySession:(id)arg1;
- (void)viewDidAppearFromQuickReplySession;
- (BOOL)shouldMiniTaskGestureBegin;
- (BOOL)canShowMiniTaskStarFloatingView;
- (BOOL)canPushMiniTaskViewController;
- (void)onMiniTaskPushGestureEnded:(BOOL)arg1;
- (void)checkAndUpdateLeftNavBarItemForMiniTaskEntry;
- (void)bindMiniTaskEdgeGestureHandler;
- (id)MiniTaskEdgeGestureHandler;
- (BOOL)shouldMiniInteractiveTransitionBegin:(id)arg1;
- (void)onMiniInteractiveTransitionBegin:(id)arg1;
- (void)onMiniInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(CGPoint)arg3;
- (void)onMiniInteractiveTransitionWillEnd:(id)arg1 isComplete:(BOOL)arg2;
- (BOOL)shouldBlockMiniInteractiveTransitionComplete:(id)arg1;
- (void)onOpenNavLeftMiniTask;
- (void)openMiniTaskViewController:(long long)arg1;
- (BOOL)openMiniTaskInteractionGuideControllerWithPageActionInfo:(id)arg1 tips:(id)arg2;
- (void)openMiniTaskViewControllerWithGesture:(id)arg1 transitionContext:(id)arg2 animated:(BOOL)arg3 pageActionInfo:(id)arg4;
- (void)openChatBotVoIPViewControllerWithInteractiveController:(id)arg1 transitionContext:(id)arg2 guideTransitionContext:(id)arg3 animated:(BOOL)arg4 pageActionInfo:(id)arg5;
- (void)openMiniTaskViewControllerWithInteractiveController:(id)arg1 transitionContext:(id)arg2 guideTransitionContext:(id)arg3 animated:(BOOL)arg4 pageActionInfo:(id)arg5;
- (BOOL)canPushMiniTaskGuideController:(BOOL)arg1;
- (BOOL)canPushMiniTaskViewController:(BOOL)arg1;
- (BOOL)canPresentMiniTaskDetailPageDerectly;
- (unsigned long long)genMiniTaskPageActionScene;
- (id)miniTaskContextId;
- (id)createInfoForReportWhenLaunchMiniTaskWithTaskData:(id)arg1 isFromLeftEdgeGesture:(BOOL)arg2;
- (id)finder_animatedTransitioning;
- (void)setFinder_animatedTransitioning:(id)arg1;
- (void)startLoadingBlockedAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
- (void)startLoadingNonBlockAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
- (void)startLoadingWithText:(id)arg1 atPageName:(id)arg2 moduleName:(id)arg3 identification:(id)arg4;
- (void)startLoadingWithText:(id)arg1 block:(BOOL)arg2 atPageName:(id)arg3 moduleName:(id)arg4 identification:(id)arg5;
- (void)startLoadingWithText:(id)arg1 delayAnimation:(double)arg2 block:(BOOL)arg3 atPageName:(id)arg4 moduleName:(id)arg5 identification:(id)arg6;
- (void)stopLoadingAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3 endReasonType:(unsigned long long)arg4;
- (void)stopLoadingWithOKText:(id)arg1 atPageName:(id)arg2 moduleName:(id)arg3 identification:(id)arg4 endReasonType:(unsigned long long)arg5;
- (void)stopLoadingWithOKText:(id)arg1 completionBlock:(id /* block */)arg2 atPageName:(id)arg3 moduleName:(id)arg4 identification:(id)arg5 endReasonType:(unsigned long long)arg6;
- (void)stopLoadingWithFailText:(id)arg1 atPageName:(id)arg2 moduleName:(id)arg3 identification:(id)arg4 endReasonType:(unsigned long long)arg5;
- (void)stopLoadingWithFailText:(id)arg1 completionBlock:(id /* block */)arg2 atPageName:(id)arg3 moduleName:(id)arg4 identification:(id)arg5 endReasonType:(unsigned long long)arg6;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 atPageName:(id)arg3 moduleName:(id)arg4 identification:(id)arg5 endReasonType:(unsigned long long)arg6;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 completionBlock:(id /* block */)arg3 atPageName:(id)arg4 moduleName:(id)arg5 identification:(id)arg6 endReasonType:(unsigned long long)arg7;
- (void)startLoadingBlockedAsModule:(id)arg1 identification:(id)arg2;
- (void)startLoadingNonBlockAsModule:(id)arg1 identification:(id)arg2;
- (void)startLoadingWithText:(id)arg1 asModule:(id)arg2 identification:(id)arg3;
- (void)startLoadingWithText:(id)arg1 block:(BOOL)arg2 asModule:(id)arg3 identification:(id)arg4;
- (void)startLoadingWithText:(id)arg1 delayAnimation:(double)arg2 block:(BOOL)arg3 asModule:(id)arg4 identification:(id)arg5;
- (void)stopLoadingAsModule:(id)arg1 identification:(id)arg2 endReasonType:(unsigned long long)arg3;
- (void)stopLoadingWithOKText:(id)arg1 asModule:(id)arg2 identification:(id)arg3 endReasonType:(unsigned long long)arg4;
- (void)stopLoadingWithOKText:(id)arg1 completionBlock:(id /* block */)arg2 asModule:(id)arg3 identification:(id)arg4 endReasonType:(unsigned long long)arg5;
- (void)stopLoadingWithFailText:(id)arg1 asModule:(id)arg2 identification:(id)arg3 endReasonType:(unsigned long long)arg4;
- (void)stopLoadingWithFailText:(id)arg1 completionBlock:(id /* block */)arg2 asModule:(id)arg3 identification:(id)arg4 endReasonType:(unsigned long long)arg5;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 asModule:(id)arg3 identification:(id)arg4 endReasonType:(unsigned long long)arg5;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 completionBlock:(id /* block */)arg3 asModule:(id)arg4 identification:(id)arg5 endReasonType:(unsigned long long)arg6;
- (void)registerDelayDeleteSessionHandler;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (unsigned long long)dr_pageId;
- (void)setDr_pageId:(unsigned long long)arg1;
- (unsigned long long)dr_bizGroupId;
- (void)setDr_bizGroupId:(unsigned long long)arg1;
- (id)dr_pageName;
- (void)setDr_pageName:(id)arg1;
- (id)dr_pageParams;
- (id)dr_refPageParams;
- (id)dr_sourcePageParams;
- (id)dr_reportPolicy;
- (long long)dr_pageStep;
- (void)setDr_pageStep:(long long)arg1;
- (unsigned long long)dr_pageInTime;
- (void)setDr_pageInTime:(unsigned long long)arg1;
- (unsigned long long)dr_sessionInTime;
- (void)setDr_sessionInTime:(unsigned long long)arg1;
- (id)drReportIntervals;
- (id)drLastReportTimes;
- (id)dr_relatedModel;
- (void)setDr_relatedModel:(id)arg1;
- (BOOL)dr_isFullSubPage;
- (void)setDr_isFullSubPage:(BOOL)arg1;
- (id)dr_isHalfSubPage;
- (void)setDr_isHalfSubPage:(id)arg1;
- (id /* block */)dr_bindPageReportInfo;
- (id /* block */)dr_setPageId;
- (id /* block */)dr_setBizGroupId;
- (id /* block */)dr_setPageName;
- (void)setDr_dynamicParamsBlock:(id /* block */)arg1;
- (id /* block */)dr_setDynamicParamsBlock;
- (id /* block */)dr_addDynamicParamsBlock;
- (id /* block */)dr_getDynamicParamsBlocks;
- (id /* block */)dr_setPageParam;
- (id /* block */)dr_setPageParams;
- (id /* block */)dr_removePageParam;
- (id /* block */)dr_removePageParams;
- (id /* block */)dr_resetPageParams;
- (id /* block */)dr_setPageEventParam;
- (id /* block */)dr_setPageEventParams;
- (id /* block */)dr_removePageEventParam;
- (id /* block */)dr_removePageEventParams;
- (id /* block */)dr_getPageEventParam;
- (id /* block */)dr_setRefPageParam;
- (id /* block */)dr_setRefPageParams;
- (id /* block */)dr_removeRefPageParams;
- (id /* block */)dr_resetRefPageParams;
- (id /* block */)dr_setInnerProperty;
- (id /* block */)dr_setInnerPropertys;
- (id /* block */)dr_removeInnerProperty;
- (id /* block */)dr_resetInnerProperty;
- (id /* block */)dr_getInnerProperty;
- (id /* block */)dr_setPageReportPolicy;
- (id /* block */)dr_setPageReportPolicy2;
- (id /* block */)dr_setCgiPolicy;
- (id /* block */)dr_setEventCallback;
- (id /* block */)dr_setPageReportInterval;
- (id /* block */)dr_setPageIsFilter;
- (id /* block */)dr_setPageIsNotFilterSame;
- (void)setReportParam:(id)arg1;
- (id)reportParam;
- (id)presentedModalViewController;
- (id)presentingModalViewController;
- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (BOOL)hasAppear;
- (void)startLoadingWithText:(id)arg1 block:(BOOL)arg2;
- (void)startLoadingWithText:(id)arg1 delayAnimation:(double)arg2 block:(BOOL)arg3;
- (void)stopLoading;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithFailText:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)showOKText:(id)arg1;
- (void)showFailText:(id)arg1;
- (void)showIcon:(id)arg1 text:(id)arg2;
- (void)showOKText:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)showFailText:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)progressViewX;
- (id)snackBar;
- (double)preferSnackBarBottomOffset;
- (void)adjustTableViewRect;
- (void)adjustTableViewInset:(id)arg1;
- (void)adjustSubviewRects;
- (void)adjustViewAndNavBarRect;
- (void)adjustNavHeaderView;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)disMissSelf;
- (BOOL)accessibilityPerformEscape;
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateNavibarSepline;
- (void)fixNavigationBarInIOS13;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (double)getSafeBottomInset;
- (double)getSafeTopInset;
- (double)getContentViewY;
- (BOOL)isStatusBarHidden;
- (double)getContentViewYforTranslucentNaviBar;
- (double)getContentViewHeight;
- (double)getVisibleHeight;
- (double)getVisibleHeightOri:(long long)arg1;
- (void)setAutolayoutTopOffset:(double)arg1 forView:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)setWcautoAdjustsScrollViewInsets:(BOOL)arg1;
- (void)handleDeprecatedRotationCallback;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)adjustContentInsets;
- (void)viewSafeAreaInsetsDidChange;
- (void)onMainWindowFrameChanged;
- (void)viewWillLayoutSubviews;
- (void)removeNavigationBarBkg;
- (void)restoreNavigationBarBkg;
- (void)updateNavigationBar;
- (void)setIsPopByClickingURL;
- (void)willAppear;
- (void)adjustView;
- (void)willDisappear;
- (void)didAppear;
- (void)didDisshow;
- (void)willDisshow;
- (void)willShow;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setSubTitleColor:(id)arg1;
- (id)getTitleColor;
- (void)setTitle:(id)arg1 rightView:(id)arg2;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
- (void)setTitle:(id)arg1 leftLoading:(BOOL)arg2;
- (void)setTitle:(id)arg1 subTitle:(id)arg2 leftLoading:(BOOL)arg3 rightView:(id)arg4;
- (void)setTitle:(id)arg1 subTitle:(id)arg2 leftLoading:(BOOL)arg3 rightView:(id)arg4 titleOffset:(double)arg5;
- (void)setTitle:(id)arg1 subTitle:(id)arg2 leftLoading:(BOOL)arg3 rightView:(id)arg4 subLeftView:(id)arg5 titleOffset:(double)arg6;
- (void)setTitle:(id)arg1 subTitle:(id)arg2 leftLoading:(BOOL)arg3 rightView:(id)arg4 subLeftView:(id)arg5 titleOffset:(double)arg6 rightViewLeftMargin:(double)arg7;
- (void)setTitle:(id)arg1 subTitle:(id)arg2 leftLoading:(BOOL)arg3 rightView:(id)arg4 rightViewLeftMargin:(double)arg5 subLeftView:(id)arg6 titleOffset:(double)arg7;
- (void)setTitleView:(id)arg1;
- (BOOL)hasTitle;
- (void)setNavBarInteractiveConfig:(id)arg1;
- (double)adjustedStatusBarHeight;
- (void)observeScrollview;
- (id)getMainScrollView;
- (double)getLeftBarButtonWidth;
- (double)getRightBarButtonWidth;
- (void)reloadTitleView;
- (void)setTitleInterfaceOritation:(long long)arg1;
- (void)setTitleOnly:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)setBottomView:(id)arg1;
- (void)changeTopBarsHiddenAnimated:(BOOL)arg1;
- (void)setTopBarsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimation:(long long)arg2;
- (void)setStatusBarFontWhite;
- (void)setStatusBarFontDefault;
- (void)setStatusBarFontBlack;
- (void)setStatusBarStyle:(long long)arg1;
- (void)setViewAppearBlock:(id /* block */)arg1;
- (void)setViewAppearBlock:(id /* block */)arg1 callbackWhenNextAppear:(BOOL)arg2;
- (void)protectStatusBarFromBeingFuckedByForeGround:(SEL)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (BOOL)isSearchControllerPop;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)startForcedRotationToPortrait;
- (void)willForceChangeOrientation;
- (void)didForceChangeOrientation;
- (long long)currentInterfaceOrientation;
- (void)forceRotateToOrientation:(long long)arg1;
- (void)resetViewStatus;
- (id)getViewController;
- (id)tagForActivePage;
- (id)tagForCurrentPage;
- (id)obtainSessionParamExpects;
- (id)businessInfoForCurrentPage;
- (BOOL)isPushedIn;
- (BOOL)isPresentedIn;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)removeDuplicateBarButton;
- (id)findMainTableView;
- (void)deselectCellAlongsideTransition;
- (void)deselectMainTableView;
- (id)_findMainMMTableView;
- (void)observeInteractivePopGRForDeselectCell;
- (void)unobserveInteractivePopGRForDeselectCell;
- (void)handleInteractivePopGR:(id)arg1;
- (id)_cellForMainTableViewSelectedRow;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)viewDidBePopedOrDismissedDuplicate;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)debugCheckLeaks;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willAppearFromSearchController;
- (void)didAppearFromSearchController;
- (void)willDisappearToSearchController;
- (void)didDisappearToSearchController;
- (void)didAskSearchControllerShouldBeginWithResult:(BOOL)arg1;
- (BOOL)hidesStatusBar;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (void)setNeedsStatusBarAppearanceUpdate;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (BOOL)shouldHandleStatusBarInMainWindow;
- (void)tryPerformStatusBarUpdateInTopWindow;
- (void)updateStatusBarColor;
- (BOOL)useTransparentNavibar;
- (id)navigationBarBackgroundColor;
- (id)realNavigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (BOOL)showNavigationBarSepLine;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onNavigationBarBackgroundColorChange;
- (id)navigationTitleColor;
- (id)navigationTitleFont;
- (id)navigationSubTitleColor;
- (long long)getForegroundColor;
- (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4;
- (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 accessibility:(id)arg5;
- (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 color:(id)arg5;
- (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 accessibility:(id)arg5 color:(id)arg6;
- (id)getDefaultForegroundColor;
- (void)initNavHeaderIfNeed;
- (void)initNavibarSepLine;
- (id)getNavBarSepLine;
- (void)setNavBarBottomLineHidden:(BOOL)arg1;
- (void)restoreNavHeaderIfNeed;
- (BOOL)useCustomNavibar;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (BOOL)isSeachActive;
- (BOOL)isChildControllerOf:(id)arg1;
- (void)addFakeNaviView;
- (void)internalAddFakeNaviView:(id)arg1;
- (double)navigationAreaHeight;
- (void)restoreNavigationBar;
- (void)removeFakeNaviView;
- (void)onNavigationBarAlphaChanged;
- (void)onNavigationBarHiddenChanged;
- (BOOL)isTopInCurrentNavController;
- (BOOL)isInNavigationHiddenTrasition;
- (void)foreNavigationBarShow;
- (BOOL)shouldHideNavigationBar;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewDidPresent:(BOOL)arg1;
- (void)viewWillBeInteractivePoped;
- (void)viewDidBeInteractivePoped;
- (void)viewWillInteractivePop;
- (void)resignSubviewResponder:(id)arg1;
- (BOOL)isSubviewResponder:(id)arg1;
- (void)didBeginEditing:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)shouldInteractivePop;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)setInteractiveDismissEnabled:(BOOL)arg1 panGesture:(id)arg2;
- (BOOL)interactiveDismissEnabled;
- (BOOL)shouldInteractiveDismiss;
- (void)onInteractiveDismissComplete;
- (BOOL)shouldSkipNavInteractiveGesture;
- (void)mmUIViewControllerHandleScreenEdgePanGesture:(id)arg1;
- (unsigned long long)modalTransitionPanGestureType;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)dismissSearchControllIfNeeded;
- (void)setupDeepLinkConfig;
- (void)setDeepLinkParam:(id)arg1;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)parseDeepLink:(id)arg1 animation:(BOOL)arg2;
- (void)appendEndOpInfo:(id)arg1;
- (void)reportEndOpInfo;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)showErrorTipsBar:(id)arg1;
- (void)hideErrorTipsBar;
- (void)didMoveToNewScene:(id)arg1;
- (void)didChangeToOrientation:(long long)arg1 previousOrientation:(long long)arg2;
- (void)onMainSceneOrientationDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)onSubSceneOrientationDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (BOOL)shouldFixParentAppearEventWhenPresented;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (id)hostingController;
- (void)injected;
- (BOOL)shouldRestrictContentViewSize;
- (void)restrictContentViewSize;
- (id)loadingViewX;
- (void)setLoadingViewX:(id)arg1;
- (unsigned int)m_uiVcType;
- (void)setM_uiVcType:(unsigned int)arg1;
- (id)m_newsTitleRecordLabel;
- (void)setM_newsTitleRecordLabel:(id)arg1;
- (id)bottomView;
- (BOOL)m_bAnimated;
- (void)setM_bAnimated:(BOOL)arg1;
- (BOOL)m_bIsBeingPoped;
- (void)setM_bIsBeingPoped:(BOOL)arg1;
- (BOOL)m_bInteractivePopEnabled;
- (void)setM_bInteractivePopEnabled:(BOOL)arg1;
- (BOOL)m_bDisableAdjustInsetAndOffset;
- (void)setM_bDisableAdjustInsetAndOffset:(BOOL)arg1;
- (id)m_arrEndUserOpInfo;
- (void)setM_arrEndUserOpInfo:(id)arg1;
- (BOOL)m_bIsBeingInteractivePop;
- (void)setM_bIsBeingInteractivePop:(BOOL)arg1;
- (id)m_errorTipsBar;
- (void)setM_errorTipsBar:(id)arg1;
- (BOOL)m_willPopFromCustomTransitioninig;
- (void)setM_willPopFromCustomTransitioninig:(BOOL)arg1;
- (void)setSnackBar:(id)arg1;
- (void)setProgressViewX:(id)arg1;
- (void)setPresentingModalViewController:(id)arg1;
- (void)setPresentedModalViewController:(id)arg1;
- (BOOL)m_bAnimating;
- (void)setM_bAnimating:(BOOL)arg1;
- (BOOL)isDuringInteractivePop;
- (void)setIsDuringInteractivePop:(BOOL)arg1;
- (BOOL)isAppearing;
- (void)setIsAppearing:(BOOL)arg1;
- (BOOL)m_willBePoped;
- (void)setM_willBePoped:(BOOL)arg1;
- (BOOL)wcautoAdjustsScrollViewInsets;
- (BOOL)m_bStopPopWhenDeleteContact;
- (void)setM_bStopPopWhenDeleteContact:(BOOL)arg1;
- (id)navBarInteractiveConfig;
- (id)trackingSystemConfig;
- (void)setTrackingSystemConfig:(id)arg1;
- (BOOL)disableAccessibilityCheck;
- (void)setDisableAccessibilityCheck:(BOOL)arg1;
- (BOOL)disableCheckLeaksWhenQuit;
- (void)setDisableCheckLeaksWhenQuit:(BOOL)arg1;
- (unsigned int)checkLeaksDelays;
- (void)setCheckLeaksDelays:(unsigned int)arg1;
- (id /* block */)viewAppearBlock;
- (id /* block */)viewDidQuitBlock;
- (void)setViewDidQuitBlock:(id /* block */)arg1;
- (BOOL)forbidCreateNavHeader;
- (void)setForbidCreateNavHeader:(BOOL)arg1;
- (id)interactiveDismissPanGesture;
- (void)setInteractiveDismissPanGesture:(id)arg1;
- (void)setHostingController:(id)arg1;
- (BOOL)layoutRightInSplitView;
- (void)setLayoutRightInSplitView:(BOOL)arg1;
- (id)scrollViewInteractivePanGesture;
- (void)setScrollViewInteractivePanGesture:(id)arg1;
- (BOOL)isNavBarAccessibilityHiddenBefore;
- (void)setIsNavBarAccessibilityHiddenBefore:(BOOL)arg1;
- (long long)orientationBeforeRotation;
- (void)setOrientationBeforeRotation:(long long)arg1;
- (BOOL)didObserveInteractivePopGRForDeselectCell;
- (void)setDidObserveInteractivePopGRForDeselectCell:(BOOL)arg1;
- (BOOL)isBeingRotation;
- (void)setIsBeingRotation:(BOOL)arg1;
- (void).cxx_destruct;
@end
