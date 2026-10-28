@interface MMFinderLiveExitSqaureTransitionController : MMFinderLiveEnterSqaureTransitionController <MMFinderLiveEnterSqaurePanGestureHandlerDelegate>
{
    double _currentPlayerBottonHeight; // +0x28
    CGRect _originPlayerControlViewFrame; // +0x30
}
- (id)init;
- (BOOL)isSpecialState;
- (void)onWillEnterSqaureInteractiveTransitionBeginHandle:(BOOL)arg1;
- (void)onEnterSqaureInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(CGPoint)arg3 isPop:(BOOL)arg4;
- (void)prepareForAnimation;
- (void)performAniamtorDelay:(double)arg1 completion:(id /* block */)arg2;
- (void)performRecoverAnimator:(id /* block */)arg1;
- (void)onWillExitSqaureInteractiveTransitionBeginHandle:(BOOL)arg1;
- (void)animationDidEnd:(BOOL)arg1;
- (CGRect)originPlayerControlViewFrame;
- (void)setOriginPlayerControlViewFrame:(CGRect)arg1;
- (double)currentPlayerBottonHeight;
- (void)setCurrentPlayerBottonHeight:(double)arg1;
@end
