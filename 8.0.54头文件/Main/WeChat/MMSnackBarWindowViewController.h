@interface MMSnackBarWindowViewController : MMWindowViewController <MMSnackBarWindowViewDelegate, MMUIWindowPassThroughDelegate, MMSnackBarViewDelegate>
{
    MMSnackBarConfig * _config; // +0x78
    id /* block */ _actionHandlerBlock; // +0x80
    id /* block */ _willAppearHandlerBlock; // +0x88
    UIViewController * _snackBarContainer; // +0x90
}
- (void)loadView;
- (id)init;
- (void)dealloc;
- (void)showSnackBar;
- (void)updateSnackBar;
- (void)hideSnackBar:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)ensureSnackBarView;
- (id)snackBarView;
- (void)addNotifications;
- (void)removeNotification;
- (double)snackBarBottomInsetOffset;
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
- (id)snackBarContainer;
- (void)setSnackBarContainer:(id)arg1;
- (void).cxx_destruct;
@end

