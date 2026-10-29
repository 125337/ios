@interface MiniTaskPushAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting; // +0x8
    BOOL _isPresent; // +0x9
    UIViewController * animatedTransitionRespondViewController; // +0x10
    UIView * _backgroundView; // +0x18
    MinimizeTaskData * _launchTaskData; // +0x20
    id <MiniTaskTransitionAnimationDelegate> _delegate; // +0x28
}
- (id)initWithViewController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (BOOL)isPresent;
- (void)setIsPresent:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)launchTaskData;
- (void)setLaunchTaskData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
