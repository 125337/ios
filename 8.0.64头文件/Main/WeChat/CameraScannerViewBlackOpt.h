@interface CameraScannerViewBlackOpt : NSObject
{
    BOOL _needReport; // +0x8
    BOOL _isInBackground; // +0x9
    BOOL _enableSessionOpt; // +0xa
    BOOL _enableLightRecover; // +0xb
    BOOL _isStartPhase; // +0xc
    float _sessionDelayTime; // +0x10
    double _cameraStartTime; // +0x18
    double _cameraOutputTime; // +0x20
    long long _hasSessionOpt; // +0x28
    NSString * _canSessionOptErrorCode; // +0x30
}
- (id)init;
- (double)cameraStartTime;
- (void)setCameraStartTime:(double)arg1;
- (double)cameraOutputTime;
- (void)setCameraOutputTime:(double)arg1;
- (BOOL)needReport;
- (void)setNeedReport:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)enableSessionOpt;
- (void)setEnableSessionOpt:(BOOL)arg1;
- (long long)hasSessionOpt;
- (void)setHasSessionOpt:(long long)arg1;
- (id)canSessionOptErrorCode;
- (void)setCanSessionOptErrorCode:(id)arg1;
- (float)sessionDelayTime;
- (void)setSessionDelayTime:(float)arg1;
- (BOOL)enableLightRecover;
- (void)setEnableLightRecover:(BOOL)arg1;
- (BOOL)isStartPhase;
- (void)setIsStartPhase:(BOOL)arg1;
- (void).cxx_destruct;
@end
