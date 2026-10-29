@interface SmallCameraView : UIView <MoveWithTouchAlgorithmDelegate>
{
    BOOL _hasMoved; // +0x8
    MoveWithTouchAlgorithm * m_moveAlgorithm; // +0x10
    id <SmallCameraViewDelegate> delegate; // +0x18
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)adsorbToWindow;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (CGPoint)transformPointWithPoint:(CGPoint)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)m_moveAlgorithm;
- (void)setM_moveAlgorithm:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

