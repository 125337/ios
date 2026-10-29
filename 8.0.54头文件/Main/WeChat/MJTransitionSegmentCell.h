@interface MJTransitionSegmentCell : MJSegmentCell <MJUIResponderProtocol>
{
    MJDashLine * _dashLine; // +0x8
    UIView * _transitionButtonContainer; // +0x10
    MMUIButton * _transitionButton; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupWithSegmentViewModel:(id)arg1;
- (void)syncWithMutation;
- (void)updateButtonIconIsBlank:(BOOL)arg1 isEnabled:(BOOL)arg2 isHighlighted:(BOOL)arg3;
- (void)showBorderViewAnimated:(BOOL)arg1;
- (void)hideBorderViewAnimated:(BOOL)arg1;
- (void)transitionButtonTouchUpInside:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (id)specialHitTestReceiver;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)dashLine;
- (id)transitionButtonContainer;
- (id)transitionButton;
- (void).cxx_destruct;
@end

