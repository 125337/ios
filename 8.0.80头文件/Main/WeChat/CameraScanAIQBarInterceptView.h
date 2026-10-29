@interface CameraScanAIQBarInterceptView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isDismissing; // +0x8
    BOOL _isPresenting; // +0x9
    id <CameraScanAIQBarInterceptViewDelegate> _delegate; // +0x10
    double _expansionProgress; // +0x18
    double _rightPanStartX; // +0x20
    UIPanGestureRecognizer * _rightPanGesture; // +0x28
    UIButton * _cancelButton; // +0x30
    UIButton * _askAIButton; // +0x38
}
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 backgroundImage:(id)arg3 delegate:(id)arg4;
- (void)didMoveToSuperview;
- (void)onCancelButtonClicked;
- (void)onRightPanGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onBlankAreaTapped:(id)arg1;
- (void)applyExpansionProgress;
- (void)animateToExpansionProgress:(double)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)dismissWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)onAskAIButtonClicked;
- (void)onAskAIButtonTouchDown:(id)arg1;
- (void)onAskAIButtonTouchUp:(id)arg1;
- (void)setAskAIButtonHighlightMaskVisible:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)expansionProgress;
- (void)setExpansionProgress:(double)arg1;
- (double)rightPanStartX;
- (void)setRightPanStartX:(double)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (BOOL)isPresenting;
- (void)setIsPresenting:(BOOL)arg1;
- (id)rightPanGesture;
- (void)setRightPanGesture:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)askAIButton;
- (void)setAskAIButton:(id)arg1;
- (void).cxx_destruct;
@end
