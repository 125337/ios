@interface WAMenuPopAnimatedTransition : WAMenuBaseAnimatedTransition <MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting; // +0x18
    UIViewController * animatedTransitionRespondViewController; // +0x20
}
- (id)initWithViewController:(id)arg1;
- (void)innerTransition:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (void).cxx_destruct;
@end

