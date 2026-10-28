@interface LiteAppRecorderManager : NSObject <IRecordPermissionCheckExt, LiteAppRecorderDelegate, WCAudioModuleDelegate>
{
    BOOL _isRecording; // +0x8
    BOOL _isCheckingPermission; // +0x9
    BOOL _isInterrupting; // +0xa
    unsigned int _appUuid; // +0xc
    LiteAppBaseRecorder * _recorder; // +0x10
    NSMutableDictionary * _settings; // +0x18
    NSString * _identifier; // +0x20
    NSString * _appId; // +0x28
    NSString * _recorderSavePath; // +0x30
    NSString * _errMsg; // +0x38
    unsigned long long _audioThreshold; // +0x40
}
+ (void)_showRecordDenied;
- (id)initWithAppIdAndAppUuId:(id)arg1 appUuid:(unsigned int)arg2;
- (void)dealloc;
- (id)recordCachePath;
- (id)generateFileRecordFilePath:(unsigned long long)arg1;
- (id)startRecord:(id)arg1 sampleRate:(unsigned long long)arg2 encodeBitRate:(unsigned long long)arg3 channels:(unsigned long long)arg4 duration:(unsigned long long)arg5 frameByteSize:(unsigned long long)arg6 audioSource:(id)arg7 audioThreshold:(unsigned long long)arg8;
- (void)realStartRecord;
- (id)pauseRecorder;
- (id)resumeRecorder;
- (id)stopRecorder;
- (void)setInactive;
- (BOOL)shouldForceUseBuiltinMic;
- (unsigned long long)currentTimeInMilliseconds;
- (id)returnJson:(id)arg1 error:(id)arg2 isNoisy:(BOOL)arg3;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)onRecorderDidRecordData:(id)arg1 isLastFrame:(BOOL)arg2;
- (void)onRecorderStateChange:(unsigned long long)arg1 recorder:(id)arg2 error:(id)arg3;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (id)mixListForAudioModule:(id)arg1;
- (void)onCallBackRecordState:(id)arg1 params:(id)arg2;
- (void)onCallBackStopEvent:(id)arg1;
- (void)onCallBackFileError;
- (void)interruptRecord;
- (void)onEndInterruption;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (id)settings;
- (void)setSettings:(id)arg1;
- (BOOL)isCheckingPermission;
- (void)setIsCheckingPermission:(BOOL)arg1;
- (BOOL)isInterrupting;
- (void)setIsInterrupting:(BOOL)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (id)recorderSavePath;
- (void)setRecorderSavePath:(id)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (unsigned long long)audioThreshold;
- (void)setAudioThreshold:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
