@interface TSTrackedTouchItem : TSTrackedItem
{
    long long _phase; // +0x8
    double _force; // +0x10
    double _radius; // +0x18
    double _timestamp; // +0x20
    CGPoint _point; // +0x28
}
- (id)initWithUITouch:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)phase;
- (void)setPhase:(long long)arg1;
- (CGPoint)point;
- (void)setPoint:(CGPoint)arg1;
- (double)force;
- (void)setForce:(double)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
@end

