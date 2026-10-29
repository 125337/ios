@interface WAMainFrameTopHeaderView : MMUIView
{
    BOOL _showState; // +0x8
    BOOL _isSpread; // +0x9
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)showState;
- (void)setShowState:(BOOL)arg1;
- (BOOL)isSpread;
- (void)setIsSpread:(BOOL)arg1;
@end
