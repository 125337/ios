@interface WCSplitViewController : UIViewController <WCSplitDetailTransitionDelegate, IUiUtilExt>
{
    BOOL _autoCalculatePrimaryWidth; // +0x8
    double _primaryWidth; // +0x10
    UIViewController * _primaryViewController; // +0x18
    UINavigationController * _detailEmptyViewController; // +0x20
    long long _displayMode; // +0x28
    double _separatorWidth; // +0x30
    UIView * _separatorLine; // +0x38
    UIImageView * _snapshotImageView; // +0x40
    CGSize _lastSize; // +0x48
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)onMainWindowFrameChanged;
- (id)detailViewController;
- (id)detailTopNavigationController;
- (void)setPrimaryViewController:(id)arg1;
- (void)setDetailEmptyViewController:(id)arg1;
- (id)showDetailViewController:(id)arg1 showType:(long long)arg2;
- (id)showDetailViewController:(id)arg1 showType:(long long)arg2 animated:(BOOL)arg3 complete:(id /* block */)arg4;
- (void)internelShowDetailViewController:(id)arg1 canMixed:(BOOL)arg2 showType:(long long)arg3 forceFullScreen:(BOOL)arg4 animated:(BOOL)arg5 complete:(id /* block */)arg6;
- (void)presentDetailViewController:(id)arg1 showType:(long long)arg2 forceFullScreen:(BOOL)arg3 animated:(BOOL)arg4 complete:(id /* block */)arg5;
- (long long)currentDisplayMode;
- (long long)currentDetailShowType;
- (void)dismissDetailViewController:(BOOL)arg1;
- (void)dismissDetailViewController:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setPrimaryHidden:(BOOL)arg1;
- (void)setPrimaryWidth:(double)arg1;
- (long long)transitionTypeForAnimator:(id)arg1;
- (void)onPresentingBeginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)onPresentingEndAppearance;
- (void)onDetailViewControllerWillChangeMode:(BOOL)arg1;
- (void)onDetailViewControllerDidChangeMode:(BOOL)arg1;
- (BOOL)detailForceFullscreen;
- (BOOL)isInSplitMode;
- (void)updateContentLayout;
- (void)changeDisplayMode:(long long)arg1;
- (void)updateDetailViewControllerDisplayMode:(long long)arg1;
- (BOOL)detailViewControllerForceFullscreen;
- (BOOL)shouldUseSplitMode;
- (void)addDetailSnapshot;
- (void)removeDetailSnapshot;
- (double)primaryWidth;
- (BOOL)autoCalculatePrimaryWidth;
- (void)setAutoCalculatePrimaryWidth:(BOOL)arg1;
- (id)primaryViewController;
- (id)detailEmptyViewController;
- (long long)displayMode;
- (void)setDisplayMode:(long long)arg1;
- (double)separatorWidth;
- (void)setSeparatorWidth:(double)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)snapshotImageView;
- (void)setSnapshotImageView:(id)arg1;
- (CGSize)lastSize;
- (void)setLastSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

