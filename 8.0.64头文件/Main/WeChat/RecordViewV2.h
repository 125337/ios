@interface RecordViewV2 : RecordAdapterView <VoiceRecordViewDelegate>
{
    VoiceRecordView * _recordView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 ForbidVoiceTrans:(BOOL)arg2 ChatName:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)deviceDidRotate:(id)arg1;
- (void)setReportObj:(id)arg1;
- (BOOL)bPreventRecordViewExit;
- (BOOL)needPopUpBackgroundViewController;
- (void)setBPreventRecordViewExit:(BOOL)arg1;
- (void)onTouchBeginWithTouches:(id)arg1;
- (void)onTouchMoveWithTouches:(id)arg1;
- (void)onTouchEndWithTouches:(id)arg1;
- (void)onTouchCancelWithTouches:(id)arg1;
- (void)setPeakPower:(float)arg1;
- (void)showPreparingTips;
- (void)showRecordingTips;
- (void)showTooShortTips;
- (void)showRecordStartFailTips:(id)arg1;
- (void)showTooLongTips;
- (void)hiddenRecordView;
- (BOOL)onRecordCountRemainSec:(long long)arg1 IsShow:(BOOL)arg2;
- (BOOL)changeStateWhenRecordEnd;
- (void)cancelTrans;
- (void)cancelVoiceRecording;
- (void)startRecordingWithRecordBtn:(id)arg1;
- (void)startTextMsgAnimate:(id)arg1;
- (void)onExit;
- (void)forceCancelVoiceRecording;
- (void)forceStopVoiceRecording;
- (void)onTouchEndSendVoiceMsg;
- (id)recordView;
- (void)setRecordView:(id)arg1;
- (void).cxx_destruct;
@end
