@interface RecordingFeedbackView : UIView
{
    BOOL _bPreparing; // +0x8
    BOOL _bTimeOutCounting; // +0x9
    BOOL _bCanShowVoiceTrans; // +0xa
    UIView * _bgBlurView; // +0x10
    UIView * _recordTipContentView; // +0x18
    UIImageView * _microphoneImageView; // +0x20
    UIImageView * _cancelImageView; // +0x28
    UIImageView * _recordSignalView; // +0x30
    MMUIActivityIndicatorView * _indicatorView; // +0x38
    UIImageView * _cancelTipImageView; // +0x40
    UIImageView * _transTipImageView; // +0x48
    UILabel * _operateTipsLabel; // +0x50
    UIButton * _slideUpwardTipsBtn; // +0x58
    UIImageView * _recordWarningView; // +0x60
    UILabel * _warningMessageLabel; // +0x68
    UILabel * _timeoutCountingLabel; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 CanShowVoiceTrans:(BOOL)arg2;
- (id)recordTipContentView;
- (id)bgBlurView;
- (id)microphoneImageView;
- (id)cancelImageView;
- (id)recordSignalView;
- (id)slideUpwardTipsBtn;
- (id)warningMessageLabel;
- (id)recordWarningView;
- (id)timeoutCountingLabel;
- (id)indicatorView;
- (id)cancelTipImageView;
- (id)transTipImageView;
- (id)operateTipsLabel;
- (void)reset;
- (void)setPeakPower:(float)arg1;
- (void)setOperatTipLabelAlpha:(double)arg1;
- (BOOL)bPreparing;
- (void)setBPreparing:(BOOL)arg1;
- (BOOL)bTimeOutCounting;
- (void)setBTimeOutCounting:(BOOL)arg1;
- (BOOL)bCanShowVoiceTrans;
- (void)setBCanShowVoiceTrans:(BOOL)arg1;
- (void)setBgBlurView:(id)arg1;
- (void)setRecordTipContentView:(id)arg1;
- (void)setMicrophoneImageView:(id)arg1;
- (void)setCancelImageView:(id)arg1;
- (void)setRecordSignalView:(id)arg1;
- (void)setIndicatorView:(id)arg1;
- (void)setCancelTipImageView:(id)arg1;
- (void)setTransTipImageView:(id)arg1;
- (void)setOperateTipsLabel:(id)arg1;
- (void)setSlideUpwardTipsBtn:(id)arg1;
- (void)setRecordWarningView:(id)arg1;
- (void)setWarningMessageLabel:(id)arg1;
- (void)setTimeoutCountingLabel:(id)arg1;
- (void).cxx_destruct;
@end

