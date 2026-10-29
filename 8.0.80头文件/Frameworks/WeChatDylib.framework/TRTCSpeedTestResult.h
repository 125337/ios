@interface TRTCSpeedTestResult : NSObject
{
    BOOL _success; // +0x8
    float _upLostRate; // +0xc
    float _downLostRate; // +0x10
    unsigned int _rtt; // +0x14
    NSString * _errMsg; // +0x18
    NSString * _ip; // +0x20
    long long _quality; // +0x28
    long long _availableUpBandwidth; // +0x30
    long long _availableDownBandwidth; // +0x38
    long long _upJitter; // +0x40
    long long _downJitter; // +0x48
}
- (id)initWithCppParams:(const void *)arg1;
- (id)description;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)ip;
- (void)setIp:(id)arg1;
- (long long)quality;
- (void)setQuality:(long long)arg1;
- (float)upLostRate;
- (void)setUpLostRate:(float)arg1;
- (float)downLostRate;
- (void)setDownLostRate:(float)arg1;
- (unsigned int)rtt;
- (void)setRtt:(unsigned int)arg1;
- (long long)availableUpBandwidth;
- (void)setAvailableUpBandwidth:(long long)arg1;
- (long long)availableDownBandwidth;
- (void)setAvailableDownBandwidth:(long long)arg1;
- (long long)upJitter;
- (void)setUpJitter:(long long)arg1;
- (long long)downJitter;
- (void)setDownJitter:(long long)arg1;
- (void).cxx_destruct;
@end
