@interface MMFlutterEdgeGesture : UIScreenEdgePanGestureRecognizer
{
    NSObject<MMFlutterEdgeGestureDelegate> * _touchDelegate; // +0x8
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)touchDelegate;
- (void)setTouchDelegate:(id)arg1;
@end
