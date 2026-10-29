@interface WCImageFullScreenPresentationController : UIPresentationController
{
    UIViewController * _sourceViewController; // +0x8
}
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (id)sourceViewController;
- (void)setSourceViewController:(id)arg1;
- (void).cxx_destruct;
@end

