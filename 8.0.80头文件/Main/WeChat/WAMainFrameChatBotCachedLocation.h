@interface WAMainFrameChatBotCachedLocation : NSObject
{
    NSString * _cityName; // +0x8
    double _latitude; // +0x10
    double _longitude; // +0x18
    double _horizontalAccuracy; // +0x20
    double _verticalAccuracy; // +0x28
    long long _cacheTimeMs; // +0x30
}
- (id)cityName;
- (void)setCityName:(id)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)horizontalAccuracy;
- (void)setHorizontalAccuracy:(double)arg1;
- (double)verticalAccuracy;
- (void)setVerticalAccuracy:(double)arg1;
- (long long)cacheTimeMs;
- (void)setCacheTimeMs:(long long)arg1;
- (void).cxx_destruct;
@end
