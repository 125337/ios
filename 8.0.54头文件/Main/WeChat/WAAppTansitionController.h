@interface WAAppTansitionController : NSObject <MinimizeTransitionInterface, WASheetPresentationControllerDelegete, UIViewControllerTransitioningDelegate>
{
    BOOL _isMinimizedTask; // +0x8
    BOOL _isManualMinimizedTask; // +0x9
    BOOL _isSimulatedNativeAnimation; // +0xa
    BOOL _maskEnable; // +0xb
    BOOL _sheetMode; // +0xc
    BOOL _dismissFromMenuOrGesture; // +0xd
    BOOL _dismissFromGestureOnly; // +0xe
    BOOL _isInForceDismissAndPresentAnimationOnce; // +0xf
    unsigned int _miniPinedGestureType; // +0x10
    UINavigationController * _owerNav; // +0x18
    id <WAAppTansitionControllerDelegate> _delegate; // +0x20
    id <MinimizeTransitionInterface> _minimizationTransitionDelegate; // +0x28
    NSString * _taskBizKey; // +0x30
    long long _simulatedNativeAnimationType; // +0x38
    long long _restoreOrientationOnDismiss; // +0x40
    MiniTaskTransitionContext * _miniTaskVCAnimationContext; // +0x48
    WASheetPresentationController * _sheetPresentationController; // +0x50
    CGRect _simulatedNativeAnimationScreenRect; // +0x58
}
- (id)init;
- (void)dealloc;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)resetMinimizeState;
- (void)onMiniTaskDismissalGestureWillBegin;
- (void)onMiniTaskDismissalGestureWillEnd:(BOOL)arg1;
- (void)onPresentComplete:(BOOL)arg1;
- (void)updateMiniTaskSnapshot:(id)arg1;
- (void)onDidPresentViewController:(id)arg1;
- (void)onDidPushViewController:(id)arg1;
- (void)onDidAppear;
- (void)onClickEmbedExpandButton;
- (void)onMenuMore;
- (void)onMenuDisappear;
- (void)onInvokeExpandFullScreen:(unsigned long long)arg1;
- (void)onInvokeRecoverHalfScreen;
- (void)onEmbedWeAppExpandToFullScreen;
- (void)setFakeStatusBarColorInSheetMode:(id)arg1;
- (id)currentTaskWebView;
- (void)onFirstWebViewDidScroll:(id)arg1;
- (void)onFirstWebViewWillBeginDragging:(id)arg1;
- (void)onFirstWebViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)onFirstWebViewDidEndDragging:(id)arg1;
- (void)onFirstWebViewDidNavigateOut:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)genSystemPopAnimateTransitionWithWebViewController:(id)arg1;
- (id)genDismissAnimateTransitionWithWebViewController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)markForceDissmissAndPresentAnimationOnce;
- (id)minimizeTransition;
- (id)maximizeTransition;
- (BOOL)presentationControllerNeedZoom;
- (BOOL)dismissControllerNeedZoom;
- (BOOL)presentationControllerNeedMask;
- (BOOL)dismissControllerNeedMask;
- (void)onTapBackground;
- (void)onDragToDismiss;
- (void)onWillDragToExpand:(BOOL)arg1;
- (void)onDragToExpand:(BOOL)arg1;
- (void)onDragToNormalAfterExpand;
- (CGSize)sheetSize;
- (CGSize)landscapeSheetSize;
- (double)sheetExpandedHeight;
- (double)sheetCornerRadius;
- (unsigned long long)sheetRectCorner;
- (BOOL)sheetShouldRespondsToDragGesture:(id)arg1;
- (BOOL)sheetShouldForbidDragUpGesture:(id)arg1;
- (BOOL)sheetShouldForbidDragDownGesture:(id)arg1;
- (BOOL)sheetShouldRespondsToTapGesture:(id)arg1;
- (BOOL)sheetCanDragToExpand;
- (BOOL)sheetCanExpandToStatusBarArea;
- (void)sheetContentYDidChangeTo:(double)arg1;
- (void)sheetDragGestureDidBegin:(id)arg1;
- (void)sheetDragGestureDidEnd:(id)arg1;
- (void)sheetFrameDidChange:(CGRect)arg1;
- (unsigned long long)sheetLaunchMode;
- (id)sheetModeParameter;
- (id)sheetBackgroundColor;
- (BOOL)sheetBackgroundShouldBlur;
- (BOOL)sheetBackgroundUserInteractionEnabled;
- (id)headerViewForSheetPresentationController:(id)arg1;
- (BOOL)sheetShouldUseDraggingBarHeaderView;
- (BOOL)sheetShouldForbidDragDownGestureAfterExpand;
- (BOOL)sheetCanRecoverAfterExpand;
- (void)sheetPresentationTransitionWillBegin:(id)arg1;
- (void)sheetPresentationController:(id)arg1 presentTransitionDidEnd:(BOOL)arg2;
- (void)sheetDismissalTransitionWillBegin:(id)arg1;
- (void)sheetPresentationController:(id)arg1 dismissalTransitionDidEnd:(BOOL)arg2;
- (id)owerNav;
- (void)setOwerNav:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)minimizationTransitionDelegate;
- (void)setMinimizationTransitionDelegate:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (BOOL)isMinimizedTask;
- (void)setIsMinimizedTask:(BOOL)arg1;
- (BOOL)isManualMinimizedTask;
- (void)setIsManualMinimizedTask:(BOOL)arg1;
- (BOOL)isSimulatedNativeAnimation;
- (void)setIsSimulatedNativeAnimation:(BOOL)arg1;
- (long long)simulatedNativeAnimationType;
- (void)setSimulatedNativeAnimationType:(long long)arg1;
- (CGRect)simulatedNativeAnimationScreenRect;
- (void)setSimulatedNativeAnimationScreenRect:(CGRect)arg1;
- (long long)restoreOrientationOnDismiss;
- (void)setRestoreOrientationOnDismiss:(long long)arg1;
- (BOOL)maskEnable;
- (void)setMaskEnable:(BOOL)arg1;
- (BOOL)sheetMode;
- (void)setSheetMode:(BOOL)arg1;
- (BOOL)dismissFromMenuOrGesture;
- (void)setDismissFromMenuOrGesture:(BOOL)arg1;
- (BOOL)dismissFromGestureOnly;
- (void)setDismissFromGestureOnly:(BOOL)arg1;
- (id)miniTaskVCAnimationContext;
- (void)setMiniTaskVCAnimationContext:(id)arg1;
- (unsigned int)miniPinedGestureType;
- (void)setMiniPinedGestureType:(unsigned int)arg1;
- (id)sheetPresentationController;
- (void)setSheetPresentationController:(id)arg1;
- (BOOL)isInForceDismissAndPresentAnimationOnce;
- (void)setIsInForceDismissAndPresentAnimationOnce:(BOOL)arg1;
- (void).cxx_destruct;
@end

