@interface MiniTaskInteractionGuidePushTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    UIViewController * animatedTransitionRespondViewController; // +0x8
    UIImageView * _fakeSnapShotImageView; // +0x10
}
- (id)initWithViewController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (id)fakeSnapShotImageView;
- (void)setFakeSnapShotImageView:(id)arg1;
- (void).cxx_destruct;
@end
