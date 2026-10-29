@interface MMLivePushParams : NSObject
{
    BOOL _isAudience; // +0x8
    BOOL _forceUseTRTCAudioDevice; // +0x9
    BOOL _enableCameraCapture; // +0xa
    BOOL _isKeepmixEnabled; // +0xb
    TRTCParams * _trtcParams; // +0x10
    unsigned long long _keepmixIdleTime; // +0x18
}
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id)trtcParams;
- (void)setTrtcParams:(id)arg1;
- (BOOL)forceUseTRTCAudioDevice;
- (void)setForceUseTRTCAudioDevice:(BOOL)arg1;
- (BOOL)enableCameraCapture;
- (void)setEnableCameraCapture:(BOOL)arg1;
- (BOOL)isKeepmixEnabled;
- (void)setIsKeepmixEnabled:(BOOL)arg1;
- (unsigned long long)keepmixIdleTime;
- (void)setKeepmixIdleTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
