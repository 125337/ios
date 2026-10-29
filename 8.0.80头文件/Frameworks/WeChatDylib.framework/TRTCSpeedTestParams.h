@interface TRTCSpeedTestParams : NSObject
{
    unsigned int _sdkAppId; // +0x8
    NSString * _userId; // +0x10
    NSString * _userSig; // +0x18
    long long _expectedUpBandwidth; // +0x20
    long long _expectedDownBandwidth; // +0x28
    unsigned long long _scene; // +0x30
}
- (SpeedTestParams)convertToCppParams;
- (int)convertSpeedTestScene:(unsigned long long)arg1;
- (id)description;
- (unsigned int)sdkAppId;
- (void)setSdkAppId:(unsigned int)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (id)userSig;
- (void)setUserSig:(id)arg1;
- (long long)expectedUpBandwidth;
- (void)setExpectedUpBandwidth:(long long)arg1;
- (long long)expectedDownBandwidth;
- (void)setExpectedDownBandwidth:(long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
