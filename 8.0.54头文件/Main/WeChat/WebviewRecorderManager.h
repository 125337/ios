@interface WebviewRecorderManager : MMUserService <MMServiceProtocol, FavAudioRecorderDelegate, IRecordPermissionCheckExt>
{
    FavAudioRecorder * _recorder; // +0x8
    int _recordStatus; // +0x10
    NSString * _lastFilePath; // +0x18
    unsigned long long _startRecordTime; // +0x20
    unsigned long long _endRecordTime; // +0x28
    MMTimer * _recordTimer; // +0x30
    long long _stopReason; // +0x38
    long long _recordTimeoutValue; // +0x40
}
- (id)init;
- (int)getRecordStatus;
- (BOOL)startRecord:(long long)arg1 duration:(unsigned long long)arg2;
- (BOOL)stopRecord;
- (BOOL)endRecord;
- (void)notifyStartRecordOnMainThread:(id)arg1;
- (void)notifyRecordTimeTooShortOnMainThread;
- (void)notifyFinishRecordOnMainThread:(id)arg1;
- (void)onTimeCount;
- (void)stopTime;
- (BOOL)internalStopRecord;
- (void)OnFavBeginRecording:(int)arg1;
- (void)OnFavFinishRecord:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (id)lastFilePath;
- (void)setLastFilePath:(id)arg1;
- (void).cxx_destruct;
@end

