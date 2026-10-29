@interface FTSFloatingVoiceInputViewModel : NSObject <IStreamVoiceInputExt, WCAudioSessionExt>
{
    BOOL _needSearchWithContact; // +0x8
    BOOL _isOtherPlaying; // +0x9
    BOOL _isPreUpdateSession; // +0xa
    BOOL _hasActivatedAudioSession; // +0xb
    id <FTSFloatingVoiceInputViewModelDelegate> _delegate; // +0x10
    unsigned long long _voiceInputState; // +0x18
    StreamVoiceInputLogic * _voiceInputLogic; // +0x20
    NSString * _lastResultText; // +0x28
    NSMutableDictionary * _delayTasks; // +0x30
    NSString * _voiceId; // +0x38
    double _recordStartTimestamp; // +0x40
}
- (void)notifyStreamVoiceInputError:(long long)arg1 errMsg:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)setupAudioSessionObservers;
- (void)checkOtherPlaying;
- (void)willEnterForeground:(id)arg1;
- (void)audioSessionInterrupted:(id)arg1;
- (void)onWCAudioSessionSetActive:(BOOL)arg1;
- (void)updateAudioSessionInAdvance;
- (void)startRecordWithCompleBlock:(id /* block */)arg1;
- (void)createVoiceInputLogic;
- (void)stopRecord;
- (void)stopRecordForSure;
- (void)cancelRecord;
- (void)doCancel:(unsigned long long)arg1;
- (void)handleTaskWithID:(id)arg1;
- (void)addDelayTaskWithID:(id)arg1 delay:(double)arg2;
- (void)cancelTaskWithID:(id)arg1;
- (void)setVoiceInputState:(unsigned long long)arg1;
- (void)OnPrepareRecord:(unsigned int)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)onVoiceRecognizeCgiError:(unsigned int)arg1 uiMessage:(long long)arg2 ret:(long long)arg3 isResposeEmpty:(BOOL)arg4;
- (void)onVoiceTransEndedByServer:(unsigned int)arg1 endFlag:(unsigned int)arg2;
- (void)onVoiceSilentTooLong:(unsigned int)arg1;
- (void)onVoiceDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)onVoiceRecognizeCgiDidEnd:(unsigned int)arg1 voiceId:(id)arg2 seq:(int)arg3 textLen:(unsigned long long)arg4;
- (void)onFirstAudioPartEnqueued:(unsigned int)arg1 voiceId:(id)arg2 dataSize:(unsigned long long)arg3;
- (void)onFirstAudioPacketSent:(unsigned int)arg1 voiceId:(id)arg2;
- (void)onLastAudioPacketSent:(unsigned int)arg1 voiceId:(id)arg2;
- (void)onFirstResponseReceived:(unsigned int)arg1 voiceId:(id)arg2 hasText:(BOOL)arg3;
- (void)onFirstTextResponseReceived:(unsigned int)arg1 voiceId:(id)arg2 text:(id)arg3;
- (void)onEncoderInitialized:(unsigned int)arg1 encoderType:(id)arg2 elapsed:(double)arg3;
- (void)onFirstAudioFrameEncoded:(unsigned int)arg1 pcmSize:(unsigned long long)arg2 encodedSize:(unsigned long long)arg3;
- (id)getVoiceId;
- (unsigned int)transferType;
- (unsigned int)encodeType;
- (BOOL)shouldUseOpus;
- (BOOL)shouldUseILink;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)voiceInputState;
- (BOOL)needSearchWithContact;
- (void)setNeedSearchWithContact:(BOOL)arg1;
- (id)voiceInputLogic;
- (void)setVoiceInputLogic:(id)arg1;
- (id)lastResultText;
- (void)setLastResultText:(id)arg1;
- (id)delayTasks;
- (void)setDelayTasks:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (BOOL)isOtherPlaying;
- (void)setIsOtherPlaying:(BOOL)arg1;
- (BOOL)isPreUpdateSession;
- (void)setIsPreUpdateSession:(BOOL)arg1;
- (BOOL)hasActivatedAudioSession;
- (void)setHasActivatedAudioSession:(BOOL)arg1;
- (double)recordStartTimestamp;
- (void)setRecordStartTimestamp:(double)arg1;
- (void).cxx_destruct;
@end
