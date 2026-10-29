@interface MMFinderLiveEnterSquareAnimiatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting; // +0x8
    BOOL _isPresent; // +0x9
    BOOL _isPop; // +0xa
    UIViewController * animatedTransitionRespondViewController; // +0x10
    id <MMFinderLiveEnterSquareAnimiatedDelegate> _delegate; // +0x18
    MMFinderLiveEnterSqaureTransitionContext * _context; // +0x20
}
- (id)initWithViewController:(id)arg1;
- (id)initWithTransitionContext:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)initailFinderLiveSquareAnimationWithViewController:(id)arg1;
- (void)finderLiveSquareAnimateTransition:(id)arg1;
- (double)finderLiveSquareAnimationTransitionDuration:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (BOOL)isPresent;
- (void)setIsPresent:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isPop;
- (void)setIsPop:(BOOL)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end

