@interface FaceRecogReporter : MMObject
{
    unsigned long long frReportSessionId; // +0x8
    BOOL _needUploadVideo; // +0x10
    BOOL _isFaceRecogForPay; // +0x11
    unsigned int _bizType; // +0x14
    unsigned int _tryCount; // +0x18
    float _brightnessValue; // +0x1c
    unsigned int _checkAliveType; // +0x20
    FaceRecogReporterFaceTimeMeter * _timeMeter; // +0x28
    FaceRecogReporterFaceErrCounter * _errCounter; // +0x30
    NSString * _appId; // +0x38
    NSString * _funName; // +0x40
    unsigned long long _startTime; // +0x48
    long long _livenessType; // +0x50
    long long _resetCount; // +0x58
    long long _cdnErrorCode; // +0x60
    long long _prepareErrorCode; // +0x68
    long long _configErrorCode; // +0x70
    long long _verifyErrorCode; // +0x78
    long long _retryCount; // +0x80
    NSString * _bioId; // +0x88
    long long _finalState; // +0x90
    long long _interruptShow; // +0x98
    long long _interruptAction; // +0xa0
    long long _interruptShowOtherverifyTitle; // +0xa8
    long long _voiceOverState; // +0xb0
    long long _faceRecogTime; // +0xb8
    NSMutableArray * _stateList; // +0xc0
    NSMutableArray * _sdkStateList; // +0xc8
}
+ (void)reportFaceDetectVideoUploadResult:(id)arg1 errorType:(unsigned int)arg2 errorCode:(unsigned int)arg3;
+ (int)getReportScene:(unsigned int)arg1;
+ (int)convertClientCodeToReportCode:(long long)arg1;
- (id)init;
- (void)reportStartFaceDetect:(BOOL)arg1;
- (void)reportFaceDetectResult:(unsigned int)arg1 errorType:(unsigned int)arg2 errorCode:(unsigned int)arg3;
- (void)reportInterfaceCalledResult:(unsigned int)arg1;
- (void)recordState:(long long)arg1;
- (void)recordSDKStateChange:(id)arg1;
- (void)reportFlashWithReportCode:(int)arg1;
- (void)reportFlashWithReportCode:(int)arg1 errMsg:(id)arg2;
- (void)reportFlashLogStr:(id)arg1;
- (long long)categoryForResultCode:(int)arg1;
- (void)reportInterrupt;
- (id)timeMeter;
- (void)setTimeMeter:(id)arg1;
- (id)errCounter;
- (void)setErrCounter:(id)arg1;
- (unsigned int)bizType;
- (void)setBizType:(unsigned int)arg1;
- (unsigned int)tryCount;
- (void)setTryCount:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)funName;
- (void)setFunName:(id)arg1;
- (BOOL)needUploadVideo;
- (void)setNeedUploadVideo:(BOOL)arg1;
- (float)brightnessValue;
- (void)setBrightnessValue:(float)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned int)checkAliveType;
- (void)setCheckAliveType:(unsigned int)arg1;
- (BOOL)isFaceRecogForPay;
- (void)setIsFaceRecogForPay:(BOOL)arg1;
- (long long)livenessType;
- (void)setLivenessType:(long long)arg1;
- (long long)resetCount;
- (void)setResetCount:(long long)arg1;
- (long long)cdnErrorCode;
- (void)setCdnErrorCode:(long long)arg1;
- (long long)prepareErrorCode;
- (void)setPrepareErrorCode:(long long)arg1;
- (long long)configErrorCode;
- (void)setConfigErrorCode:(long long)arg1;
- (long long)verifyErrorCode;
- (void)setVerifyErrorCode:(long long)arg1;
- (long long)retryCount;
- (void)setRetryCount:(long long)arg1;
- (id)bioId;
- (void)setBioId:(id)arg1;
- (long long)finalState;
- (void)setFinalState:(long long)arg1;
- (long long)interruptShow;
- (void)setInterruptShow:(long long)arg1;
- (long long)interruptAction;
- (void)setInterruptAction:(long long)arg1;
- (long long)interruptShowOtherverifyTitle;
- (void)setInterruptShowOtherverifyTitle:(long long)arg1;
- (long long)voiceOverState;
- (void)setVoiceOverState:(long long)arg1;
- (long long)faceRecogTime;
- (void)setFaceRecogTime:(long long)arg1;
- (id)stateList;
- (void)setStateList:(id)arg1;
- (id)sdkStateList;
- (void)setSdkStateList:(id)arg1;
- (void).cxx_destruct;
@end
