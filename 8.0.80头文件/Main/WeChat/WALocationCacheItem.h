@interface WALocationCacheItem : NSObject
{
    BOOL _isMarsLocation; // +0x8
    double _latitude; // +0x10
    double _longitude; // +0x18
    double _timestamp; // +0x20
    double _horizontalAccuracy; // +0x28
    double _verticalAccuracy; // +0x30
}
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (BOOL)isMarsLocation;
- (void)setIsMarsLocation:(BOOL)arg1;
- (double)horizontalAccuracy;
- (void)setHorizontalAccuracy:(double)arg1;
- (double)verticalAccuracy;
- (void)setVerticalAccuracy:(double)arg1;
@end
