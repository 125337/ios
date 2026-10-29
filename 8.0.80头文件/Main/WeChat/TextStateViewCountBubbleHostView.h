@interface TextStateViewCountBubbleHostView : UIControl
{
    id /* block */ _bubbleTapHandler; // +0x8
    TextStateViewCountBubbleView * _trackingBubble; // +0x10
    CGPoint _touchBeganPoint; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)bubbleAtPoint:(CGPoint)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id /* block */)bubbleTapHandler;
- (void)setBubbleTapHandler:(id /* block */)arg1;
- (id)trackingBubble;
- (void)setTrackingBubble:(id)arg1;
- (CGPoint)touchBeganPoint;
- (void)setTouchBeganPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end
