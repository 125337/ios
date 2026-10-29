@interface LiteAppWindow : UIWindow <UIGestureRecognizerDelegate>
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)close;
@end

