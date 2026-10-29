@interface WAJSContextPlugin_Recorder : WAJSContextPluginBase <IRecordPermissionCheckExt, WARecorderDelegate, WCAudioModuleDelegate>
{
    BOOL _isCheckingPermission; // +0x8
    BOOL _isInterrupting; // +0x9
    id <IJSContextPluginDelegate> _resultDelegate; // +0x10
    NSString * _invokeAppId; // +0x18
    WABaseRecorder * _recorder; // +0x20
    NSMutableDictionary * _settings; // +0x28
    NSString * _identifier; // +0x30
}
+ (void)_showRecordDenied;
- (void)dealloc;
- (void)unregisterExt;
- (id)cacheRootPath;
- (id)recordCachePath;
- (id)generateFileRecordFilePath:(unsigned long long)arg1;
- (void)startRecord:(id)arg1 sampleRate:(unsigned long long)arg2 encodeBitRate:(unsigned long long)arg3 channels:(unsigned long long)arg4 duaration:(double)arg5 frameByteSize:(unsigned long long)arg6 audioSource:(id)arg7 audioSessionMode:(id)arg8;
- (void)realStartRecord;
- (void)pauseRecorder;
- (void)resumeRecorder;
- (void)stopRecorder;
- (void)internalStopRecorder;
- (void)setInactive;
- (BOOL)shouldForceUseBuiltinMic;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (id)getRecorderIdentifier;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)onRecorderDidRecordData:(id)arg1 isLastFrame:(BOOL)arg2;
- (void)onRecorderStateChange:(unsigned long long)arg1 recorder:(id)arg2 error:(id)arg3;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (id)mixListForAudioModule:(id)arg1;
- (void)dispatchEvent:(id)arg1 params:(id)arg2;
- (void)onCallBackRecordState:(id)arg1 params:(id)arg2;
- (void)onCallBackStopEvent:(id)arg1;
- (void)onCallBackFileError;
- (void)interruptRecord;
- (void)onEndInterruption;
- (id)currentAppId;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (id)invokeAppId;
- (void)setInvokeAppId:(id)arg1;
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
- (void).cxx_destruct;
@end
