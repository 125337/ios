@interface ChatBotFullScreenPresentationController : UIPresentationController
{
    BOOL _keepPresentingViewVisible; // +0x8
    BOOL _isRunningCustomTransition; // +0x9
    BOOL _dismissFinished; // +0xa
}
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (CGRect)frameOfPresentedViewInContainerView;
- (BOOL)shouldRemovePresentersView;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)containerViewDidLayoutSubviews;
- (BOOL)shouldSkipPresentedViewAlignment;
- (BOOL)keepPresentingViewVisible;
- (void)setKeepPresentingViewVisible:(BOOL)arg1;
- (BOOL)isRunningCustomTransition;
- (void)setIsRunningCustomTransition:(BOOL)arg1;
- (BOOL)dismissFinished;
- (void)setDismissFinished:(BOOL)arg1;
@end
