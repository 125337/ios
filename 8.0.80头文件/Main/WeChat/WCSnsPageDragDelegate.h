@interface WCSnsPageDragDelegate : NSObject <FullScreenGestureDelegate>
{
    BOOL _adjustsGeometry; // +0x8
    BOOL _cancelsClose; // +0x9
    id <FullScreenGestureDelegate> _target; // +0x10
    WCSnsFullScreenGestureRecognizer * _gesture; // +0x18
    CGPoint _point; // +0x20
}
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)gesture;
- (void)setGesture:(id)arg1;
- (CGPoint)point;
- (void)setPoint:(CGPoint)arg1;
- (BOOL)adjustsGeometry;
- (void)setAdjustsGeometry:(BOOL)arg1;
- (BOOL)cancelsClose;
- (void)setCancelsClose:(BOOL)arg1;
- (void).cxx_destruct;
@end
