@interface BackgroundMoveView : UIView <MoveWithTouchAlgorithmDelegate>
{
    MoveWithTouchAlgorithm * m_moveAlgorithm; // +0x8
    id <BackgroundMoveViewDelegate> m_delegate; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)adsorbToWindow;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)m_moveAlgorithm;
- (void)setM_moveAlgorithm:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
