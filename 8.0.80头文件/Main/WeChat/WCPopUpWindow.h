@interface WCPopUpWindow : MMUIWindow
{
    id /* block */ _nonViewAreaTouchHandler; // +0x8
    CGRect _viewFrame; // +0x10
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (CGRect)viewFrame;
- (void)setViewFrame:(CGRect)arg1;
- (id /* block */)nonViewAreaTouchHandler;
- (void)setNonViewAreaTouchHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
