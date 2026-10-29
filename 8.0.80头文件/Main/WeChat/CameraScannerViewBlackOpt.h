@interface CameraScannerViewBlackOpt : NSObject
{
    BOOL _needReport; // +0x8
    BOOL _isInBackground; // +0x9
    BOOL _enableSessionOpt; // +0xa
    BOOL _enableLightRecover; // +0xb
    BOOL _isStartPhase; // +0xc
    BOOL _bsRecoverByPredict; // +0xd
    float _sessionDelayTime; // +0x10
    unsigned int _bsPredictReportStatus; // +0x14
    float _bsPredictReportMaxProb; // +0x18
    double _cameraStartTime; // +0x20
    long long _hasSessionOpt; // +0x28
    NSString * _canSessionOptErrorCode; // +0x30
    long long _shortDuration; // +0x38
    long long _longDuration; // +0x40
    long long _inferTimeMs; // +0x48
}
- (id)init;
- (double)cameraStartTime;
- (void)setCameraStartTime:(double)arg1;
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
- (long long)shortDuration;
- (void)setShortDuration:(long long)arg1;
- (long long)longDuration;
- (void)setLongDuration:(long long)arg1;
- (unsigned int)bsPredictReportStatus;
- (void)setBsPredictReportStatus:(unsigned int)arg1;
- (float)bsPredictReportMaxProb;
- (void)setBsPredictReportMaxProb:(float)arg1;
- (BOOL)bsRecoverByPredict;
- (void)setBsRecoverByPredict:(BOOL)arg1;
- (long long)inferTimeMs;
- (void)setInferTimeMs:(long long)arg1;
- (void).cxx_destruct;
@end
