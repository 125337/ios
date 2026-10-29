@interface WxpayWebViewHandoffRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    int _identity; // +0x8
    UIView * _canvas; // +0x10
    UIScrollView * _scroll; // +0x18
    NSString * _policy; // +0x20
    CGPoint _start; // +0x28
}
- (id)init;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)send:(long long)arg1 point:(CGPoint)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)canvas;
- (void)setCanvas:(id)arg1;
- (id)scroll;
- (void)setScroll:(id)arg1;
- (id)policy;
- (void)setPolicy:(id)arg1;
- (CGPoint)start;
- (void)setStart:(CGPoint)arg1;
- (int)identity;
- (void)setIdentity:(int)arg1;
- (void).cxx_destruct;
@end
