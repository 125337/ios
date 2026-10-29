@interface MMFinderLiveEnterSqaureTransitionController : NSObject <MMFinderLiveEnterSqaurePanGestureHandlerDelegate, MMFinderLiveEnterSquareAnimiatedDelegate>
{
    BOOL _isAnimating; // +0x8
    MMFinderLiveEnterSqaurePanGestureHandler * _handler; // +0x10
    id <MMFinderLiveEnterAndExitSqaureTransitionControllerDelegatge> _delegate; // +0x18
    MMFinderLiveEnterSqaureTransitionContext * _context; // +0x20
}
- (id)init;
- (void)onEnterSquareContext:(id)arg1;
- (void)onEnterSqaureInteractiveTransitionBegin:(id)arg1 isPop:(BOOL)arg2;
- (void)onWillEnterSqaureInteractiveTransitionBeginHandle:(BOOL)arg1;
- (void)onWillExitSqaureInteractiveTransitionBeginHandle:(BOOL)arg1;
- (void)onEnterSqaureInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(CGPoint)arg3 isPop:(BOOL)arg4;
- (void)onEnterSqaureInteractiveTransitionWillEnd:(id)arg1 isComplete:(BOOL)arg2 isPop:(BOOL)arg3;
- (void)onEnterSqaureInteractiveTransitionDidEnd:(id)arg1 isComplete:(BOOL)arg2 isPop:(BOOL)arg3;
- (void)onEnterSqaureInteractiveTransitionDidEndHandle:(BOOL)arg1;
- (void)prepareForAnimation;
- (void)performAnimationWithComplete:(BOOL)arg1 delay:(double)arg2;
- (void)performAniamtorDelay:(double)arg1;
- (void)performRecoverAnimator;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)animationControllerForTrasitionType:(unsigned long long)arg1 fromVC:(id)arg2 toVC:(id)arg3;
- (id)handler;
- (void)animationDidEnd:(BOOL)arg1;
- (void)setHandler:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end

