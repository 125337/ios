@interface MsgImgFullScreenPresentationController : UIPresentationController
{
    UIViewController * _sourceViewController; // +0x8
}
- (BOOL)shouldIgnoreCallback;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (id)sourceViewController;
- (void)setSourceViewController:(id)arg1;
- (void).cxx_destruct;
@end
