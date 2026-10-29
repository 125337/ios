@interface CommonVoiceRecordView : UIView <VoiceRecordMessageHandler, VoiceRecordHostUIDelegate, CommonVoiceRecordAudioServiceDelegate, RecordViewDelegate, VoiceRecordViewDelegate>
{
    id <CommonVoiceRecordViewDelegate> _delegate; // +0x8
    VoiceRecordView * _recordView; // +0x10
    CommonVoiceRecordAudioService * _audioService; // +0x18
    MMTimer * _countdownTimer; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)layoutSubviews;
- (void)startRecordingWithRecordBtn:(id)arg1;
- (void)onTouchMoveWithTouches:(id)arg1;
- (void)onTouchEndWithTouches:(id)arg1;
- (void)onTouchCancelWithTouches:(id)arg1;
- (void)commonVoiceRecordAudioServiceDidStartRecording:(id)arg1;
- (void)commonVoiceRecordAudioServiceDidFailToStart:(id)arg1;
- (void)commonVoiceRecordAudioService:(id)arg1 didUpdatePeakPower:(float)arg2;
- (void)startCountdownTimer;
- (void)stopCountdownTimer;
- (void)onCountdownTick;
- (void)updateCountdownUIWithRemain:(long long)arg1;
- (void)handleCountdownTimeout;
- (void)voiceRecordSendOriginalVoice:(id)arg1;
- (void)voiceRecordSendText:(id)arg1;
- (void)voiceRecordMarkVoiceSendFailedWithLocalId:(unsigned int)arg1;
- (BOOL)voiceRecordCommitVoiceMessageWithLocalId:(unsigned int)arg1;
- (BOOL)voiceRecordStopRecordingForTranslate:(BOOL)arg1;
- (void)voiceRecordShouldLiftHostContentToBottom:(double)arg1;
- (void)voiceRecordShouldRestoreHostContentAnimated:(BOOL)arg1;
- (id)voiceRecordCurrentViewController;
- (void)voiceRecordDidShow;
- (void)voiceRecordDidHide;
- (void)voiceRecordAnimateSendContentView:(id)arg1 forLocalId:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)stopRecording;
- (void)cancelRecording;
- (void)toRecordStautsIdle;
- (void)onExit;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recordView;
- (void)setRecordView:(id)arg1;
- (id)audioService;
- (void)setAudioService:(id)arg1;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg1;
- (void).cxx_destruct;
@end
