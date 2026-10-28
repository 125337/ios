@interface TingAudioRecorderMgr : MMUserService <IRecordPermissionCheckExt, TingAudioRecorderDelegate, MMServiceProtocol>
{
    BOOL _recording; // +0x8
    BOOL _hasPermission; // +0x9
    int _recordStatus; // +0xc
    double _minTime; // +0x10
    double _maxTime; // +0x18
    id /* block */ _startBlock; // +0x20
    id /* block */ _endBlock; // +0x28
    id /* block */ _interruptEventBlock; // +0x30
    TingAudioRecorder * _recorder; // +0x38
}
- (void)onServiceInit;
- (void)reset;
- (void)startRecord;
- (void)stopRecord;
- (id)recorder;
- (void)p_startRecordPerimissionCheck;
- (void)p_startRecord;
- (void)p_finishRecord:(unsigned int)arg1 filePath:(id)arg2 voiceTime:(double)arg3;
- (void)tingAudioRecorder:(id)arg1 onBeginRecording:(int)arg2;
- (void)tingAudioRecorder:(id)arg1 onFinishRecordWithRetCode:(unsigned int)arg2 filePath:(id)arg3;
- (void)tingAudioRecorderOnInterrupt:(id)arg1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (double)minTime;
- (void)setMinTime:(double)arg1;
- (double)maxTime;
- (void)setMaxTime:(double)arg1;
- (BOOL)recording;
- (void)setRecording:(BOOL)arg1;
- (id /* block */)startBlock;
- (void)setStartBlock:(id /* block */)arg1;
- (id /* block */)endBlock;
- (void)setEndBlock:(id /* block */)arg1;
- (id /* block */)interruptEventBlock;
- (void)setInterruptEventBlock:(id /* block */)arg1;
- (void)setRecorder:(id)arg1;
- (int)recordStatus;
- (void)setRecordStatus:(int)arg1;
- (BOOL)hasPermission;
- (void)setHasPermission:(BOOL)arg1;
- (void).cxx_destruct;
@end
