@interface HighpassFilter : AccelerometerFilter
{
    double lastX; // +0x20
    double lastY; // +0x28
    double lastZ; // +0x30
    BOOL hasXCrash; // +0x38
    BOOL hasYCrash; // +0x39
    BOOL hasZCrash; // +0x3a
    int xCountDown; // +0x3c
    int yCountDown; // +0x40
    int zCountDown; // +0x44
    double _limit; // +0x48
}
- (id)init;
- (BOOL)addAccelerationByX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (double)limit;
- (void)setLimit:(double)arg1;
@end
