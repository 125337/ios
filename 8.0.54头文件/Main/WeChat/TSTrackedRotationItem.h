@interface TSTrackedRotationItem : TSTrackedItem
{
    double _x; // +0x8
    double _y; // +0x10
    double _z; // +0x18
    double _timestamp; // +0x20
}
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 timestamp:(double)arg4;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
- (double)z;
- (void)setZ:(double)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
@end

