@interface BizVoiceRecordView : UIView
{
    id /* block */ _doneBtnBlock; // +0x8
    id /* block */ _finishBlock; // +0x10
    UILabel * _hintLabel; // +0x18
    UILabel * _processingLabel; // +0x20
    MMLoadingIndicatorView * _processingIndicator; // +0x28
    UIButton * _doneButton; // +0x30
    UIButton * _speedLabel; // +0x38
    MMUIButton * _backwardPosButton; // +0x40
    MMUIButton * _forwardPosButton; // +0x48
    MMUIButton * _previousButton; // +0x50
    MMUIButton * _nextButton; // +0x58
    MinimizeTaskData * _taskData; // +0x60
    long long _voiceState; // +0x68
    WCRecordFBNormalView * _voiceControlPeakView; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 withTaskData:(id)arg2;
- (void)updateWithTaskData:(id)arg1;
- (void)initView;
- (void)onVoiceDone:(id)arg1;
- (void)onPlayNext:(id)arg1;
- (void)onPlayPrevious:(id)arg1;
- (void)onBackward15s:(id)arg1;
- (void)onForward30s:(id)arg1;
- (void)onSpeedFactorClicked:(id)arg1;
- (void)setVoiceState:(long long)arg1;
- (id)speedFactorToString;
- (void)layoutSubviews;
- (id)voiceControlPeakView;
- (void)setPeakPower:(float)arg1;
- (id /* block */)doneBtnBlock;
- (void)setDoneBtnBlock:(id /* block */)arg1;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)processingLabel;
- (void)setProcessingLabel:(id)arg1;
- (id)processingIndicator;
- (void)setProcessingIndicator:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)speedLabel;
- (void)setSpeedLabel:(id)arg1;
- (id)backwardPosButton;
- (void)setBackwardPosButton:(id)arg1;
- (id)forwardPosButton;
- (void)setForwardPosButton:(id)arg1;
- (id)previousButton;
- (void)setPreviousButton:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (long long)voiceState;
- (void)setVoiceControlPeakView:(id)arg1;
- (void).cxx_destruct;
@end
