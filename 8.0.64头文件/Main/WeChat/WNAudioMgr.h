@interface WNAudioMgr : MMUserService <MMServiceProtocol, IRecordPermissionCheckExt, FavAudioRecorderDelegate, IFavAudioPlayerExt>
{
    int _recordStatus; // +0x8
    FavAudioRecorder * _recorder; // +0x10
    unsigned int _voiceFmt; // +0x18
    NSString * _lastFilePath; // +0x20
    BOOL _isCancelRecord; // +0x28
    unsigned int _startRecordTime; // +0x2c
    unsigned int _endRecordTime; // +0x30
    MMTimer * _recordTimer; // +0x38
    float _curPeakPower; // +0x40
    id recordingVoiceObj; // +0x48
    NSString * _curPlayingObjectId; // +0x50
    BOOL _recording; // +0x58
    BOOL _playing; // +0x59
}
- (id)init;
- (void)startRecordWithObj:(id)arg1;
- (void)stopRecord;
- (void)cancelRecord;
- (id)curRecordId;
- (void)startPlayWithObjectId:(id)arg1 LocalPath:(id)arg2 Fmt:(unsigned int)arg3 Len:(int)arg4 FromOffsetms:(unsigned int)arg5;
- (id)curPlayId;
- (void)stopPlay;
- (void)setProgress:(unsigned int)arg1;
- (unsigned int)getVoiceFmt:(id)arg1;
- (id)getVoiceFmtOfString:(unsigned int)arg1;
- (void)startTimeCount;
- (void)stopTimeCount;
- (void)onTimeCount;
- (void)startRecord;
- (void)realStartRecord;
- (void)FinishRecord:(id)arg1;
- (unsigned int)GetTmpAudioTime:(id)arg1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnFavLevelMeter:(float)arg1;
- (void)OnFavBeginRecording:(int)arg1;
- (void)finishWithError;
- (void)OnFavEndRecording:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavFinishRecord:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnBeginPlay:(id)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)OnPlayError:(id)arg1;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)OnEarTip;
- (BOOL)recording;
- (BOOL)playing;
- (void).cxx_destruct;
@end
