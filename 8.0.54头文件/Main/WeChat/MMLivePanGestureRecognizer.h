@interface MMLivePanGestureRecognizer : UIPanGestureRecognizer
{
    id /* block */ _touchCallback; // +0x8
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id /* block */)touchCallback;
- (void)setTouchCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

