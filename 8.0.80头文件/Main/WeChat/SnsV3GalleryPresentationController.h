@interface SnsV3GalleryPresentationController : UIPresentationController
{
    BOOL _transitioningGallery; // +0x8
    UIViewController * _gallerySourceViewController; // +0x10
}
- (BOOL)shouldRemovePresentersView;
- (CGRect)frameOfPresentedViewInContainerView;
- (void)containerViewDidLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (id)gallerySourceViewController;
- (void)setGallerySourceViewController:(id)arg1;
- (BOOL)transitioningGallery;
- (void)setTransitioningGallery:(BOOL)arg1;
- (void).cxx_destruct;
@end
