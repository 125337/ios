@interface MMLocationCacheItem : MMObject <PBCoding>
{
    BOOL _isMarsLocation; // +0x8
    double _horizontalAccuracy; // +0x10
    double _verticalAccuracy; // +0x18
    double _altitude; // +0x20
    double _latitude; // +0x28
    double _longitude; // +0x30
    double _timestamp; // +0x38
    NSString * _encryptLatitude; // +0x40
    NSString * _encryptLongitude; // +0x48
}
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_isMarsLocation;
+ (void)PBArrayAdd_horizontalAccuracy;
+ (void)PBArrayAdd_verticalAccuracy;
+ (void)PBArrayAdd_altitude;
+ (void)initialize;
- (id)getPBPropertyTable;
- (double)horizontalAccuracy;
- (void)setHorizontalAccuracy:(double)arg1;
- (double)verticalAccuracy;
- (void)setVerticalAccuracy:(double)arg1;
- (double)altitude;
- (void)setAltitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (BOOL)isMarsLocation;
- (void)setIsMarsLocation:(BOOL)arg1;
- (id)encryptLatitude;
- (void)setEncryptLatitude:(id)arg1;
- (id)encryptLongitude;
- (void)setEncryptLongitude:(id)arg1;
- (void).cxx_destruct;
@end
