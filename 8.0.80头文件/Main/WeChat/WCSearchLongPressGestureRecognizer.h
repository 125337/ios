@interface WCSearchLongPressGestureRecognizer : UILongPressGestureRecognizer
{
    BOOL _didCaptureTouchDown; // +0x8
    id /* block */ _touchDownHandler; // +0x10
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id /* block */)touchDownHandler;
- (void)setTouchDownHandler:(id /* block */)arg1;
- (BOOL)didCaptureTouchDown;
- (void)setDidCaptureTouchDown:(BOOL)arg1;
- (void).cxx_destruct;
@end
