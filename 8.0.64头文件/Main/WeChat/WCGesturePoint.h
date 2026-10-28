@interface WCGesturePoint : MMObject
{
    double _x; // +0x8
    double _y; // +0x10
}
+ (id)gesturePointWithCGPoint:(CGPoint)arg1;
- (double)distanceTo:(id)arg1;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
@end
