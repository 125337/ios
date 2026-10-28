@interface MMCellTapGestureRecognizer : UIGestureRecognizer
{
    id <MMCellTapGestureRecognizerActionDelegate> _actionDelegate; // +0x8
    UITouch * _touch; // +0x10
    CGPoint _point; // +0x18
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (CGPoint)point;
- (void)setPoint:(CGPoint)arg1;
- (id)touch;
- (void)setTouch:(id)arg1;
- (void).cxx_destruct;
@end
