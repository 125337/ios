@interface MMLiveMinimizeBackgroundMoveView : UIView <MoveWithTouchAlgorithmDelegate>
{
    UIImageView * _blurView; // +0x8
    MoveWithTouchAlgorithm * _moveAlgorithm; // +0x10
    id <MMLiveMinimizeBackgroundMoveViewDelegate> _delegate; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)adsorbToWindow;
- (void)layoutSubviews;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)moveAlgorithm;
- (void)setMoveAlgorithm:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

