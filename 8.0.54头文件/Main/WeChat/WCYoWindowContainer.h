@interface WCYoWindowContainer : MMUIWindow
{
    NSObject<WCYoWindowDelegate> * _yoWindowDelegate; // +0x8
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)yoWindowDelegate;
- (void)setYoWindowDelegate:(id)arg1;
- (void).cxx_destruct;
@end

