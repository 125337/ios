@interface WAReportWeAppLaunchLocation : WAReportBaseItem
{
    unsigned int _cacheTime; // +0x8
    NSString * _longitude; // +0x10
    NSString * _latitude; // +0x18
    NSString * _accuracy; // +0x20
    NSString * _speed; // +0x28
    NSString * _altitude; // +0x30
    NSString * _verticalAccuracy; // +0x38
    NSString * _horizontalAccuracy; // +0x40
}
- (int)reportID;
- (id)reportString;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)accuracy;
- (void)setAccuracy:(id)arg1;
- (id)speed;
- (void)setSpeed:(id)arg1;
- (id)altitude;
- (void)setAltitude:(id)arg1;
- (id)verticalAccuracy;
- (void)setVerticalAccuracy:(id)arg1;
- (id)horizontalAccuracy;
- (void)setHorizontalAccuracy:(id)arg1;
- (unsigned int)cacheTime;
- (void)setCacheTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

