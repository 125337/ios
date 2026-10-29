@interface FTSHijackVoiceInputView : FTSFloatingVoiceInputView
{
    NSLayoutConstraint * _bottomRoundedTopConstraint; // +0x8
    UIView * _keyboardCoverView; // +0x10
}
- (void)setupViews;
- (BOOL)shouldSetupKeyboardObservers;
- (void)updateFloatingButtonConstraintsInDefualtModal:(BOOL)arg1;
- (void)updateBottomRoundedViewPosition;
- (void)updateKeyboardCoverViewHeight;
- (double)topHeightWhenKeyboardInvisible:(double)arg1;
- (void)setupBottomRoundedView;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)externalGestureBegan;
- (void)dismissEditMenuInView:(id)arg1;
- (void)externalGestureChangedAtWindowLocation:(CGPoint)arg1;
- (void)externalGestureEndedAtWindowLocation:(CGPoint)arg1;
- (void)externalGestureCancelled;
- (id)bottomRoundedTopConstraint;
- (void)setBottomRoundedTopConstraint:(id)arg1;
- (id)keyboardCoverView;
- (void)setKeyboardCoverView:(id)arg1;
- (void).cxx_destruct;
@end
