@interface WCFinderPostUploadSpeedSnapshot : NSObject
{
    BOOL _isWifi; // +0x8
    int _windowSeconds; // +0xc
    int _rawKBytesPerSecond; // +0x10
    unsigned int _networkType; // +0x14
    unsigned long long _status; // +0x18
    long long _sampleTimeMs; // +0x20
    double _sampleUptimeSeconds; // +0x28
}
- (BOOL)isUsable;
- (double)bytesPerSecond;
- (id)description;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (int)windowSeconds;
- (void)setWindowSeconds:(int)arg1;
- (int)rawKBytesPerSecond;
- (void)setRawKBytesPerSecond:(int)arg1;
- (long long)sampleTimeMs;
- (void)setSampleTimeMs:(long long)arg1;
- (double)sampleUptimeSeconds;
- (void)setSampleUptimeSeconds:(double)arg1;
- (unsigned int)networkType;
- (void)setNetworkType:(unsigned int)arg1;
- (BOOL)isWifi;
- (void)setIsWifi:(BOOL)arg1;
@end
