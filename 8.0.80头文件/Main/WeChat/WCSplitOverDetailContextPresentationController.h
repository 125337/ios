@interface WCSplitOverDetailContextPresentationController : UIPresentationController <WCSplitTransitionExt>
{
    BOOL _maskHidden; // +0x8
    BOOL _isTransitioning; // +0x9
    id <WCSplitOverDetailContextPresentationDelegate> _overDetailDelegate; // +0x10
    WCSplitOverDetailDimmingView * _dimmingMaskView; // +0x18
}
- (void)setMaskHidden:(BOOL)arg1;
- (BOOL)shouldRemovePresentersView;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)notifySplitOverDetailContextMaskHidden:(BOOL)arg1;
- (CGRect)frameOfPresentedViewInContainerView;
- (CGRect)presentedFrameWithContainerSize:(CGSize)arg1;
- (void)updatePresentedViewFrameWithContainerSize:(CGSize)arg1;
- (id)overDetailDelegate;
- (void)setOverDetailDelegate:(id)arg1;
- (BOOL)maskHidden;
- (id)dimmingMaskView;
- (void)setDimmingMaskView:(id)arg1;
- (BOOL)isTransitioning;
- (void)setIsTransitioning:(BOOL)arg1;
- (void).cxx_destruct;
@end
