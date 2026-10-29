@interface MMLivePushParams : NSObject
{
    BOOL _isAudience; // +0x8
    BOOL _forceUseTRTCAudioDevice; // +0x9
    TRTCParams * _trtcParams; // +0x10
}
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id)trtcParams;
- (void)setTrtcParams:(id)arg1;
- (BOOL)forceUseTRTCAudioDevice;
- (void)setForceUseTRTCAudioDevice:(BOOL)arg1;
- (void).cxx_destruct;
@end

