@interface MJNarrationRecordingControlView : UIView <MJRecordingControlDelegate>
{
    BOOL _isHoldRecording; // +0x8
    id <MJNarrationRecordingControlViewDelegate> _delegate; // +0x10
    unsigned long long _narrationType; // +0x18
    MJRecordingControl * _backingControl; // +0x20
    MMUIButton * _typeSwitchButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithNarrationType:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1 narrationType:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setupBackingControl;
- (void)setupTypeSwitchButton;
- (void)layoutViews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)impactFeedback;
- (void)updateLevelMeterWithPeakPower:(float)arg1;
- (void)forceStopRecordingManually;
- (void)recordingControlDidStartRecording:(id)arg1;
- (void)recordingControlDidStopRecording:(id)arg1;
- (void)recordingControlDidCancelRecording:(id)arg1;
- (void)beginHoldRecordingImpl;
- (void)endHoldRecordingImpl;
- (void)cancelHoldRecordingImpl;
- (id)_getReportNameWithNarrationType:(unsigned long long)arg1;
- (void)switchToNarrationType:(unsigned long long)arg1;
- (void)typeSwitchButtonDidTouchUpInside:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isHoldRecording;
- (void)setIsHoldRecording:(BOOL)arg1;
- (unsigned long long)narrationType;
- (void)setNarrationType:(unsigned long long)arg1;
- (id)backingControl;
- (void)setBackingControl:(id)arg1;
- (id)typeSwitchButton;
- (void)setTypeSwitchButton:(id)arg1;
- (void).cxx_destruct;
@end

