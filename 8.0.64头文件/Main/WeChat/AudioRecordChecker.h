@interface AudioRecordChecker : MMUserService <IAudioSenderExt, IStreamVoiceInputExt, MMServiceProtocol>
{
    BOOL _observingVoiceRecord; // +0x8
    BOOL _observingStreamVoiceInput; // +0x9
}
+ (BOOL)isNewRecordTips;
- (void)onServiceInit;
- (void)checkRecordStatus;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnBeginRecording:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)OnEndRecording:(unsigned int)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnEndRecord:(unsigned int)arg1;
- (BOOL)observingVoiceRecord;
- (void)setObservingVoiceRecord:(BOOL)arg1;
- (BOOL)observingStreamVoiceInput;
- (void)setObservingStreamVoiceInput:(BOOL)arg1;
@end
