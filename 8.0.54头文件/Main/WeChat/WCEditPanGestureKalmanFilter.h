@interface WCEditPanGestureKalmanFilter : WCEditPanGestureFilter
{
    MMKalmanFilter * _xFilter; // +0x8
    MMKalmanFilter * _yFilter; // +0x10
    CGPoint _lastPoint; // +0x18
}
- (id)init;
- (id)genKalmanFilter;
- (CGPoint)filterWithMeasurePoint:(CGPoint)arg1;
- (void)clearData;
- (id)xFilter;
- (void)setXFilter:(id)arg1;
- (id)yFilter;
- (void)setYFilter:(id)arg1;
- (CGPoint)lastPoint;
- (void)setLastPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end

