@interface RecordAdapterView : UIView
{
    BOOL _isTouchEnd; // +0x8
    BOOL _bForbidVoiceTrans; // +0x9
    BOOL _bPreventRecordViewExit; // +0xa
    BOOL _isInContinueRecordingMode; // +0xb
    NSString * _chatUserName; // +0x10
    id <RecordViewDelegate> _delegate; // +0x18
    MMTransparentButton * _recordButton; // +0x20
    MMNewVoiceInputReportObj * _reportObj; // +0x28
    id <VoiceRecordMessageHandler> _messageHandler; // +0x30
    id <VoiceRecordHostUIDelegate> _hostUIDelegate; // +0x38
    id <VoiceRecordAudioService> _audioService; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (BOOL)canShowTransEntry;
- (BOOL)needPopUpBackgroundViewController;
- (BOOL)isRecordBkgShow;
- (void)onTouchBeginWithTouches:(id)arg1;
- (void)onTouchMoveWithTouches:(id)arg1;
- (void)onTouchEndWithTouches:(id)arg1;
- (void)onTouchCancelWithTouches:(id)arg1;
- (void)setPeakPower:(float)arg1;
- (void)showPreparingTips;
- (void)showRecordCancelTips;
- (void)showRecordingTips;
- (void)showTooShortTips;
- (void)showTooLongTips;
- (void)showRecordStartFailTips:(id)arg1;
- (void)hiddenRecordView;
- (void)cancelVoiceRecording;
- (void)forceCancelVoiceRecording;
- (void)forceStopVoiceRecording;
- (BOOL)changeStateWhenRecordEnd;
- (BOOL)onRecordCountRemainSec:(long long)arg1 allowContinueRecording:(BOOL)arg2;
- (unsigned long long)getRecordState;
- (BOOL)isPointInRecordButton:(CGPoint)arg1;
- (void)startRecordingWithRecordBtn:(id)arg1;
- (void)prepareForContinueRecording;
- (void)onTouchEndSendVoiceMsg;
- (id)chatUserName;
- (void)setChatUserName:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recordButton;
- (void)setRecordButton:(id)arg1;
- (BOOL)isTouchEnd;
- (void)setIsTouchEnd:(BOOL)arg1;
- (BOOL)bForbidVoiceTrans;
- (void)setBForbidVoiceTrans:(BOOL)arg1;
- (BOOL)bPreventRecordViewExit;
- (void)setBPreventRecordViewExit:(BOOL)arg1;
- (BOOL)isInContinueRecordingMode;
- (void)setIsInContinueRecordingMode:(BOOL)arg1;
- (id)reportObj;
- (void)setReportObj:(id)arg1;
- (id)messageHandler;
- (void)setMessageHandler:(id)arg1;
- (id)hostUIDelegate;
- (void)setHostUIDelegate:(id)arg1;
- (id)audioService;
- (void)setAudioService:(id)arg1;
- (void).cxx_destruct;
@end
