@interface MMSnackBarWindowViewController : MMWindowViewController <MMUIWindowPassThroughDelegate, MMSnackBarViewDelegate, MMStandardOverlayExt>
{
    BOOL _isDragDismissing; // +0x7c
    MMSnackBarConfig * _config; // +0x80
    id /* block */ _actionHandlerBlock; // +0x88
    id /* block */ _willAppearHandlerBlock; // +0x90
    id /* block */ _didDisappearHandlerBlock; // +0x98
    UIViewController * _snackBarContainer; // +0xa0
    UIPanGestureRecognizer * _dragToCloseGesture; // +0xa8
    CGPoint _dragToCloseStartCenter; // +0xb0
}
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (BOOL)shouldWrapViewWithSafeArea;
- (void)loadView;
- (id)init;
- (void)dealloc;
- (void)showSnackBar;
- (void)updateSnackBar;
- (void)dismissSnackBarContainer;
- (void)hideSnackBar:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)ensureSnackBarView;
- (double)snackBarLayoutWidth;
- (void)viewDidTransitionToNewSize;
- (void)refreshSnackBarLayout;
- (void)setSnackBarContainer:(id)arg1;
- (void)updateDragToCloseGestureForSnackBarView:(id)arg1;
- (id)snackBarView;
- (void)handleDragToCloseGesture:(id)arg1;
- (BOOL)shouldDismissSnackBarWithTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 view:(id)arg3;
- (void)finishDragToCloseForView:(id)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3;
- (void)cancelDragToCloseForView:(id)arg1;
- (void)restartAutoHideIfNeeded;
- (void)addNotifications;
- (id)snackBarHookTag;
- (void)onStandardOverlayLayoutChanged;
- (void)addContainerNotifications;
- (void)removeContainerNotifications;
- (void)removeNotification;
- (BOOL)shouldPassThroughFor:(id)arg1;
- (void)onNeedDoAction;
- (void)onNeedHideSnackBar;
- (id)topViewControllerInMainWindow;
- (id)config;
- (void)setConfig:(id)arg1;
- (id /* block */)actionHandlerBlock;
- (void)setActionHandlerBlock:(id /* block */)arg1;
- (id /* block */)willAppearHandlerBlock;
- (void)setWillAppearHandlerBlock:(id /* block */)arg1;
- (id /* block */)didDisappearHandlerBlock;
- (void)setDidDisappearHandlerBlock:(id /* block */)arg1;
- (id)snackBarContainer;
- (id)dragToCloseGesture;
- (void)setDragToCloseGesture:(id)arg1;
- (CGPoint)dragToCloseStartCenter;
- (void)setDragToCloseStartCenter:(CGPoint)arg1;
- (BOOL)isDragDismissing;
- (void)setIsDragDismissing:(BOOL)arg1;
- (void).cxx_destruct;
@end
