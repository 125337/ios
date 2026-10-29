@interface WASplitDetailOverlayPresentationController : UIPresentationController
{
    UIView * _hostView; // +0x8
    UIView * _dimmingView; // +0x10
    BOOL _isTransitioning; // +0x18
}
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)presentedView;
- (BOOL)shouldRemovePresentersView;
- (CGRect)frameOfPresentedViewInContainerView;
- (CGRect)paneFrameForContainerSize:(CGSize)arg1;
- (CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
- (void)layoutHostView;
- (void)layoutNavigationViewInHost:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)containerViewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void).cxx_destruct;
@end
