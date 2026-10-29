@interface WAUINavigationController : MMUINavigationController <WCSplitDetailLifecycleParticipating>
{
    BOOL _isInSheetMode; // +0x8
    BOOL _isKeepContextView; // +0x9
    BOOL _isForceFullScreenByOpenParam; // +0xa
    BOOL _isSimulatedNativeWeApp; // +0xb
    BOOL _isStashedForSplitTabSwitch; // +0xc
    BOOL _splitPresentUsePushStyle; // +0xd
    BOOL _isPresentedOverSplitDetail; // +0xe
    BOOL _confinesToPresentationContext; // +0xf
    BOOL _isPageTransitioning; // +0x10
    BOOL _definesContextBeforeAccessory; // +0x11
    BOOL _hasLoadResizable; // +0x12
    BOOL _hasAdjustSize; // +0x13
    BOOL _didApplyCompatAdjust; // +0x14
    BOOL _isPortrait; // +0x15
    BOOL _isResizable; // +0x16
    BOOL _isAuto; // +0x17
    BOOL _isGame; // +0x18
    BOOL _isEnableDark; // +0x19
    BOOL _isLayingOutDuoCompat; // +0x1a
    id <WAUINavigationControllerDelegate> _naviDelegate; // +0x20
    UIViewController * _viewControllerBeingPushedOrPopTo; // +0x28
    UIViewController * _splitDetailOverlayOwner; // +0x30
    WAMenuPopInteractiveTransition * _dismissInteractiveTransition; // +0x38
    long long _viewState; // +0x40
    long long _modalStyleBeforeSplitOverlay; // +0x48
    UIViewController * _accessoryContextOwner; // +0x50
    MMUINavigationBar * _customNavigationBar; // +0x58
    UIView * _bottomView; // +0x60
    double _lastScreenWidth; // +0x68
    NSMutableArray * _arrAppearAction; // +0x70
    NSMutableArray * _arrDidBeDismissedAction; // +0x78
    UIViewController * _weakTopVC; // +0x80
    NSMutableArray * _arrPageTransitionCompletion; // +0x88
    unsigned long long _pageTransitionSeq; // +0x90
    NSMutableArray * _letterboxCoverViews; // +0x98
    unsigned long long _pendingTransitionSeq; // +0xa0
    NSString * _lastDuoGeomLogSnapshot; // +0xa8
    CGSize _pendingTransitionSize; // +0xb0
}
+ (BOOL)shouldUseCustomeNavigationBar;
- (id)initWithRootViewController:(id)arg1;
- (id)init;
- (void)PushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)PushViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setOverrideUserInterfaceStyleIfNeeded:(id)arg1;
- (void)PresentModalViewControllerInPushAnimation:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)dismissPresentedViewController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)tryForceRotationWhenPushOrPop:(id)arg1 ToViewController:(id)arg2;
- (void)viewDidPresent:(BOOL)arg1;
- (void)addAppearAction:(id /* block */)arg1;
- (void)addDidBeDismissedAction:(id /* block */)arg1;
- (void)addPageTransitionCompletion:(id /* block */)arg1;
- (void)beginPageTransition;
- (void)endPageTransition;
- (void)dealloc;
- (void)addLetterboxCoversForTransitionIfNeeded;
- (void)removeLetterboxCovers;
- (void)viewDidBeDismissed;
- (void)doViewDidBeDismissedAction;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)doAppearAction;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (CGSize)compatContainerSizeWithTransitionSize:(CGSize)arg1;
- (BOOL)shouldPresentInSplitView;
- (void)wcSplitDetailWillBeRemovedExternally;
- (BOOL)wcSplitDetailCanBeCachedForTabRestore;
- (void)wcSplitDetailWillBeStashedForTabSwitch;
- (BOOL)wcSplitDetailCanBeRestoredFromTabCache;
- (void)wcSplitDetailDidDropFromTabCache;
- (void)presentFromViewController:(id)arg1 animated:(BOOL)arg2 forceFullScreen:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)splitDetailOverlayOwnerForPresentingViewController:(id)arg1 forAccessory:(BOOL)arg2;
- (void)repairSplitDetailOverlayLayoutIfNeeded;
- (void)endPresentingOverSplitDetail;
- (void)endAccessoryContextConfinement;
- (void)repairCompatGeometryAfterTransitionIfNeeded;
- (void)resizeAndTransformNavigationViewIfNeededWithTransitionSize:(CGSize)arg1;
- (void)duo_performResizeAndTransformWithTransitionSize:(CGSize)arg1;
- (BOOL)layoutDuoUnresizableGameWithTransitionSize:(CGSize)arg1;
- (void)applyDuoUnresizableGameLayoutWithLogicalSize:(CGSize)arg1 gameVC:(id)arg2 transitionSize:(CGSize)arg3;
- (void)resetCompatAdjustIfNeededWithTransitionSize:(CGSize)arg1;
- (BOOL)layoutDuoResizableGameInSafeAreaWithTransitionSize:(CGSize)arg1;
- (BOOL)hasScaleToAdaptIpad;
- (BOOL)isCurrentPagePortraitForIpad;
- (void)viewDidLoad;
- (void)onDuoUnfoldedStateDidChange:(id)arg1;
- (CGSize)preferredNavigationViewSize;
- (void)adjustViewSizeIfUnresizableWithTransitionSize:(CGSize)arg1;
- (void)scaleViewIfUnresizableWithTransitionSize:(CGSize)arg1;
- (void)addBottomView;
- (id)ipadCompatibleModeBottomViewBackgroundColor;
- (void)layoutCenterLoading;
- (double)bottomViewHeight;
- (double)bottomViewWidth;
- (BOOL)shouldUsePresentWhenPushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)updateStatusBarColorIfNeededForVC:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (id)naviDelegate;
- (void)setNaviDelegate:(id)arg1;
- (id)viewControllerBeingPushedOrPopTo;
- (void)setViewControllerBeingPushedOrPopTo:(id)arg1;
- (BOOL)isInSheetMode;
- (void)setIsInSheetMode:(BOOL)arg1;
- (BOOL)isKeepContextView;
- (void)setIsKeepContextView:(BOOL)arg1;
- (BOOL)isForceFullScreenByOpenParam;
- (void)setIsForceFullScreenByOpenParam:(BOOL)arg1;
- (BOOL)isSimulatedNativeWeApp;
- (void)setIsSimulatedNativeWeApp:(BOOL)arg1;
- (BOOL)isStashedForSplitTabSwitch;
- (void)setIsStashedForSplitTabSwitch:(BOOL)arg1;
- (BOOL)splitPresentUsePushStyle;
- (void)setSplitPresentUsePushStyle:(BOOL)arg1;
- (BOOL)isPresentedOverSplitDetail;
- (void)setIsPresentedOverSplitDetail:(BOOL)arg1;
- (id)splitDetailOverlayOwner;
- (void)setSplitDetailOverlayOwner:(id)arg1;
- (BOOL)confinesToPresentationContext;
- (void)setConfinesToPresentationContext:(BOOL)arg1;
- (id)dismissInteractiveTransition;
- (void)setDismissInteractiveTransition:(id)arg1;
- (long long)viewState;
- (void)setViewState:(long long)arg1;
- (BOOL)isPageTransitioning;
- (void)setIsPageTransitioning:(BOOL)arg1;
- (long long)modalStyleBeforeSplitOverlay;
- (void)setModalStyleBeforeSplitOverlay:(long long)arg1;
- (id)accessoryContextOwner;
- (void)setAccessoryContextOwner:(id)arg1;
- (BOOL)definesContextBeforeAccessory;
- (void)setDefinesContextBeforeAccessory:(BOOL)arg1;
- (id)customNavigationBar;
- (void)setCustomNavigationBar:(id)arg1;
- (BOOL)hasLoadResizable;
- (void)setHasLoadResizable:(BOOL)arg1;
- (BOOL)hasAdjustSize;
- (void)setHasAdjustSize:(BOOL)arg1;
- (BOOL)didApplyCompatAdjust;
- (void)setDidApplyCompatAdjust:(BOOL)arg1;
- (BOOL)isPortrait;
- (void)setIsPortrait:(BOOL)arg1;
- (BOOL)isResizable;
- (void)setIsResizable:(BOOL)arg1;
- (BOOL)isAuto;
- (void)setIsAuto:(BOOL)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg1;
- (BOOL)isEnableDark;
- (void)setIsEnableDark:(BOOL)arg1;
- (double)lastScreenWidth;
- (void)setLastScreenWidth:(double)arg1;
- (id)arrAppearAction;
- (void)setArrAppearAction:(id)arg1;
- (id)arrDidBeDismissedAction;
- (void)setArrDidBeDismissedAction:(id)arg1;
- (id)weakTopVC;
- (void)setWeakTopVC:(id)arg1;
- (id)arrPageTransitionCompletion;
- (void)setArrPageTransitionCompletion:(id)arg1;
- (unsigned long long)pageTransitionSeq;
- (void)setPageTransitionSeq:(unsigned long long)arg1;
- (id)letterboxCoverViews;
- (void)setLetterboxCoverViews:(id)arg1;
- (CGSize)pendingTransitionSize;
- (void)setPendingTransitionSize:(CGSize)arg1;
- (unsigned long long)pendingTransitionSeq;
- (void)setPendingTransitionSeq:(unsigned long long)arg1;
- (BOOL)isLayingOutDuoCompat;
- (void)setIsLayingOutDuoCompat:(BOOL)arg1;
- (id)lastDuoGeomLogSnapshot;
- (void)setLastDuoGeomLogSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
