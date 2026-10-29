@interface WALocationWrap : MMObject <PBCoding>
{
    int _floor; // +0x8
    double _latitude; // +0x10
    double _longitude; // +0x18
    double _altitude; // +0x20
    double _horizontalAccuracy; // +0x28
    double _verticalAccuracy; // +0x30
    double _course; // +0x38
    double _speed; // +0x40
    double _timestamp; // +0x48
}
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_altitude;
+ (void)PBArrayAdd_horizontalAccuracy;
+ (void)PBArrayAdd_verticalAccuracy;
+ (void)PBArrayAdd_course;
+ (void)PBArrayAdd_speed;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_floor;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)transferToCLLocation;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)altitude;
- (void)setAltitude:(double)arg1;
- (double)horizontalAccuracy;
- (void)setHorizontalAccuracy:(double)arg1;
- (double)verticalAccuracy;
- (void)setVerticalAccuracy:(double)arg1;
- (double)course;
- (void)setCourse:(double)arg1;
- (double)speed;
- (void)setSpeed:(double)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (int)floor;
- (void)setFloor:(int)arg1;
@end

