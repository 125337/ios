@interface WCFinderTopPullStatusView : UIView
{
    BOOL _enable; // +0x8
    BOOL _isDragging; // +0x9
    id <WCFinderTopPullStatusViewDelegate> _delegate; // +0x10
    unsigned long long _state; // +0x18
    UIView * _container; // +0x20
    UIScrollView * _gestureView; // +0x28
    UILabel * _label; // +0x30
    WCFinderAnimationLoadingView * _loadingView; // +0x38
    id /* block */ _uninstallBlock; // +0x40
}
+ (id)placeholder:(id)arg1 commit:(id /* block */)arg2;
- (void)installToContainer:(id)arg1 scrollView:(id)arg2 uninstallBlock:(id /* block */)arg3;
- (void)setEnable:(BOOL)arg1;
- (void)handlePan:(id)arg1;
- (BOOL)_stateIsHidden;
- (BOOL)_shouldPullShowSelf;
- (BOOL)_allowTopPull;
- (void)onTriggerPull;
- (void)onTapRetry;
- (void)onNormal;
- (void)onLoading;
- (void)onError;
- (void)onNomore;
- (void)onChangeState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)ensureDisplayForState:(unsigned long long)arg1;
- (id)ensureLoadingView:(BOOL)arg1;
- (id)ensureLabel:(BOOL)arg1;
- (void)layoutSubviews;
- (void)_doLayout;
- (void)willMoveToSuperview:(id)arg1;
- (BOOL)enable;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)gestureView;
- (void)setGestureView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id /* block */)uninstallBlock;
- (void)setUninstallBlock:(id /* block */)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (void).cxx_destruct;
@end
