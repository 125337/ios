@interface MessagePageSheetPresentationController : UIPresentationController
{
    BOOL _isLifeCycleUnpair; // +0x8
}
- (void)callFromViewControllerDisappear;
- (void)callFromViewControllerAppear;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (BOOL)isLifeCycleUnpair;
- (void)setIsLifeCycleUnpair:(BOOL)arg1;
@end

