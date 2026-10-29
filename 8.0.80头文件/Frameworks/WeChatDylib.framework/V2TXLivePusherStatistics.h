@interface V2TXLivePusherStatistics : NSObject
{
    unsigned long long _appCpu; // +0x8
    unsigned long long _systemCpu; // +0x10
    unsigned long long _width; // +0x18
    unsigned long long _height; // +0x20
    unsigned long long _fps; // +0x28
    unsigned long long _videoBitrate; // +0x30
    unsigned long long _audioBitrate; // +0x38
    unsigned long long _rtt; // +0x40
    unsigned long long _netSpeed; // +0x48
}
- (id)description;
- (unsigned long long)appCpu;
- (void)setAppCpu:(unsigned long long)arg1;
- (unsigned long long)systemCpu;
- (void)setSystemCpu:(unsigned long long)arg1;
- (unsigned long long)width;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)height;
- (void)setHeight:(unsigned long long)arg1;
- (unsigned long long)fps;
- (void)setFps:(unsigned long long)arg1;
- (unsigned long long)videoBitrate;
- (void)setVideoBitrate:(unsigned long long)arg1;
- (unsigned long long)audioBitrate;
- (void)setAudioBitrate:(unsigned long long)arg1;
- (unsigned long long)rtt;
- (void)setRtt:(unsigned long long)arg1;
- (unsigned long long)netSpeed;
- (void)setNetSpeed:(unsigned long long)arg1;
@end
