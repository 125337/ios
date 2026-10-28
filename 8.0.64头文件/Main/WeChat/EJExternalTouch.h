@interface EJExternalTouch : NSObject
{
    int _touchId; // +0x8
    double _x; // +0x10
    double _y; // +0x18
}
- (int)touchId;
- (void)setTouchId:(int)arg1;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
@end
