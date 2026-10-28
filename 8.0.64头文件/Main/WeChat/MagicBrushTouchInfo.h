@interface MagicBrushTouchInfo : NSObject
{
    unsigned long long _touchId; // +0x8
    double _x; // +0x10
    double _y; // +0x18
}
- (id)description;
- (unsigned long long)touchId;
- (void)setTouchId:(unsigned long long)arg1;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
@end
