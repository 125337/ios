@interface WAAgentAuditMockLocation : NSObject
{
    BOOL _hasSpeed; // +0x8
    BOOL _hasAccuracy; // +0x9
    BOOL _hasAltitude; // +0xa
    BOOL _hasVerticalAccuracy; // +0xb
    BOOL _hasHorizontalAccuracy; // +0xc
    double _latitude; // +0x10
    double _longitude; // +0x18
    double _speed; // +0x20
    double _accuracy; // +0x28
    double _altitude; // +0x30
    double _verticalAccuracy; // +0x38
    double _horizontalAccuracy; // +0x40
}
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (BOOL)hasSpeed;
- (void)setHasSpeed:(BOOL)arg1;
- (double)speed;
- (void)setSpeed:(double)arg1;
- (BOOL)hasAccuracy;
- (void)setHasAccuracy:(BOOL)arg1;
- (double)accuracy;
- (void)setAccuracy:(double)arg1;
- (BOOL)hasAltitude;
- (void)setHasAltitude:(BOOL)arg1;
- (double)altitude;
- (void)setAltitude:(double)arg1;
- (BOOL)hasVerticalAccuracy;
- (void)setHasVerticalAccuracy:(BOOL)arg1;
- (double)verticalAccuracy;
- (void)setVerticalAccuracy:(double)arg1;
- (BOOL)hasHorizontalAccuracy;
- (void)setHasHorizontalAccuracy:(BOOL)arg1;
- (double)horizontalAccuracy;
- (void)setHorizontalAccuracy:(double)arg1;
@end
