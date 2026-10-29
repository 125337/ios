@interface WCRedEnvAudioResMgr : MMUserService <IRecordPermissionCheckExt, FavAudioRecorderDelegate, IFavAudioPlayerExt, WCRedEnvAudioTransLogicDelegate, MMServiceProtocol>
{
    BOOL _isStopHandled; // +0x8
    BOOL _enableTransText; // +0x9
    BOOL _isDisasterVoiceTrans; // +0xa
    unsigned int _transInputId; // +0xc
    NSHashTable * _delegateHashTable; // +0x10
    FavAudioRecorder * _recorder; // +0x18
    long long _recordStatus; // +0x20
    NSString * _lastFilePath; // +0x28
    long long _startRecordTime; // +0x30
    long long _endRecordTime; // +0x38
    MMTimer * _recordTimer; // +0x40
    long long _stopRecordReason; // +0x48
    long long _recordTimeoutValue; // +0x50
    long long _audioStartPlayTime; // +0x58
    WCRedEnvAudioTransLogic * _transTextLogic; // +0x60
}
- (void)onServiceInit;
- (void)setResMgrDelegate:(id)arg1;
- (BOOL)startSilkRecordWithDuration:(unsigned long long)arg1;
- (BOOL)stopRecord;
- (BOOL)endRecord;
- (long long)getRecordStatus;
- (BOOL)internalStopRecord;
- (void)notifyStartRecordOnMainThread:(id)arg1;
- (void)notifyRecordTimeTooShortOnMainThread;
- (void)notifyFinishRecordOnMainThread:(id)arg1;
- (void)notifyFinishRecordFailOnMainThread;
- (void)onTimeCount;
- (void)forceStopRecordAndCallback;
- (void)stopTime;
- (BOOL)startPlaySilkAudioWithSenderDataPath:(id)arg1 audioID:(id)arg2;
- (BOOL)startPlaySilkAudioWithPayMsgID:(id)arg1;
- (BOOL)stopPlaySilkAudioWithPayMsgID:(id)arg1;
- (void)OnBeginPlay:(id)arg1;
- (void)OnPlayError:(id)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)OnFavBeginRecording:(int)arg1;
- (void)OnFavEndRecording:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavFinishRecord:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavLevelMeter:(float)arg1;
- (void)OnFavOutputPcmBuffer:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (BOOL)startUploadAudioData:(id)arg1;
- (void)handleCdnUploadFail:(id)arg1;
- (void)handleCdnUploadSucc:(id)arg1 taskInfo:(id)arg2;
- (BOOL)startDownloadAudioData:(id)arg1 fileUrl:(id)arg2 aesKey:(id)arg3;
- (void)configEnableTransText:(BOOL)arg1;
- (void)startTranslateTextWithVoiceRecording:(int)arg1;
- (void)stopTranslateTextWithState:(BOOL)arg1;
- (void)cleanTranscacheLogic;
- (void)cleanTransTextData;
- (void)onGetResultText:(id)arg1 InputId:(unsigned int)arg2;
- (void)onGetTransingKeywordList:(id)arg1 InputId:(unsigned int)arg2;
- (void)onGetFinalKeywordList:(id)arg1 InputId:(unsigned int)arg2;
- (void)onEndVoiceTrans:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)onVoiceTransTimeout:(unsigned int)arg1;
- (void)onVoiceTransDisaster:(unsigned int)arg1;
- (id)delegateHashTable;
- (void)setDelegateHashTable:(id)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (long long)recordStatus;
- (void)setRecordStatus:(long long)arg1;
- (id)lastFilePath;
- (void)setLastFilePath:(id)arg1;
- (long long)startRecordTime;
- (void)setStartRecordTime:(long long)arg1;
- (long long)endRecordTime;
- (void)setEndRecordTime:(long long)arg1;
- (id)recordTimer;
- (void)setRecordTimer:(id)arg1;
- (long long)stopRecordReason;
- (void)setStopRecordReason:(long long)arg1;
- (long long)recordTimeoutValue;
- (void)setRecordTimeoutValue:(long long)arg1;
- (long long)audioStartPlayTime;
- (void)setAudioStartPlayTime:(long long)arg1;
- (BOOL)isStopHandled;
- (void)setIsStopHandled:(BOOL)arg1;
- (BOOL)enableTransText;
- (void)setEnableTransText:(BOOL)arg1;
- (id)transTextLogic;
- (void)setTransTextLogic:(id)arg1;
- (unsigned int)transInputId;
- (void)setTransInputId:(unsigned int)arg1;
- (BOOL)isDisasterVoiceTrans;
- (void)setIsDisasterVoiceTrans:(BOOL)arg1;
- (void).cxx_destruct;
@end

