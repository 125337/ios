@interface WCEditPanGestureLowPassFilter : WCEditPanGestureFilter
{
    double _factor; // +0x8
    CGPoint _lastPoint; // +0x10
}
- (id)init;
- (CGPoint)filterWithMeasurePoint:(CGPoint)arg1;
- (void)clearData;
- (double)factor;
- (void)setFactor:(double)arg1;
- (CGPoint)lastPoint;
- (void)setLastPoint:(CGPoint)arg1;
@end

