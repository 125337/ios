@interface WAUINavigationController : MMUINavigationController
{
    BOOL _isInSheetMode; // +0x8
    BOOL _hasLoadResizable; // +0x9
    BOOL _hasAdjustSize; // +0xa
    BOOL _isPortrait; // +0xb
    BOOL _isResizable; // +0xc
    BOOL _isAuto; // +0xd
    BOOL _isGame; // +0xe
    BOOL _isEnableDark; // +0xf
    id <WAUINavigationControllerDelegate> _naviDelegate; // +0x10
    UIViewController * _viewControllerBeingPushedOrPopTo; // +0x18
    WAMenuPopInteractiveTransition * _dismissInteractiveTransition; // +0x20
    long long _viewState; // +0x28
    MMUINavigationBar * _customNavigationBar; // +0x30
    UIView * _bottomView; // +0x38
    double _lastScreenWidth; // +0x40
    NSMutableArray * _arrAppearAction; // +0x48
    UIViewController * _weakTopVC; // +0x50
}
+ (BOOL)shouldUseCustomeNavigationBar;
- (id)initWithRootViewController:(id)arg1;
- (id)init;
- (void)PushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)PushViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)PresentModalViewControllerInPushAnimation:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)dismissPresentedViewController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)tryForceRotationWhenPushOrPop:(id)arg1 ToViewController:(id)arg2;
- (void)viewDidPresent:(BOOL)arg1;
- (void)addAppearAction:(id /* block */)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)doAppearAction;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)resizeAndTransformNavigationViewIfNeeded;
- (BOOL)hasScaleToAdaptIpad;
- (BOOL)isCurrentPagePortraitForIpad;
- (void)viewDidLoad;
- (CGSize)preferredNavigationViewSize;
- (void)adjustViewSizeIfUnresizable;
- (void)scaleViewIfUnresizable;
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
- (id)dismissInteractiveTransition;
- (void)setDismissInteractiveTransition:(id)arg1;
- (long long)viewState;
- (void)setViewState:(long long)arg1;
- (id)customNavigationBar;
- (void)setCustomNavigationBar:(id)arg1;
- (BOOL)hasLoadResizable;
- (void)setHasLoadResizable:(BOOL)arg1;
- (BOOL)hasAdjustSize;
- (void)setHasAdjustSize:(BOOL)arg1;
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
- (id)weakTopVC;
- (void)setWeakTopVC:(id)arg1;
- (void).cxx_destruct;
@end

