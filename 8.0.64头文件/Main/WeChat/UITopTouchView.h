@interface UITopTouchView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isTopTouch; // +0x8
    BOOL _isTransGesture; // +0x9
    id _touchTarget; // +0x10
    NSMutableArray * _requestFailed2EdgePanGesArr; // +0x18
    SEL _touchSelBegan; // +0x20
    SEL _touchSelMoved; // +0x28
    SEL _touchSelEnded; // +0x30
    SEL _touchSelCancelled; // +0x38
}
- (void)transGesture:(BOOL)arg1;
- (void)addTopTouchTarget:(id)arg1 began:(SEL)arg2 moved:(SEL)arg3 ended:(SEL)arg4 cancelled:(SEL)arg5;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)addRequestFailed2EdgePanGes:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)addGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void).cxx_destruct;
@end
