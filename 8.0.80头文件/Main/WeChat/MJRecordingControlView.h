@interface MJRecordingControlView : UIView <MJRecordingControlDelegate>
{
    BOOL _isHoldRecording; // +0x8
    id <MJRecordingControlViewDelegate> _delegate; // +0x10
    unsigned long long _backingControlOptions; // +0x18
    MJRecordingControl * _backingControl; // +0x20
}
- (id)initWithOptions:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)impactFeedback;
- (void)updateLevelMeterWithPeakPower:(float)arg1;
- (void)recordingControlDidStartRecording:(id)arg1;
- (void)recordingControlDidStopRecording:(id)arg1;
- (void)recordingControlDidCancelRecording:(id)arg1;
- (void)beginHoldRecordingImpl;
- (void)endHoldRecordingImpl;
- (void)cancelHoldRecordingImpl;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isHoldRecording;
- (void)setIsHoldRecording:(BOOL)arg1;
- (unsigned long long)backingControlOptions;
- (void)setBackingControlOptions:(unsigned long long)arg1;
- (id)backingControl;
- (void)setBackingControl:(id)arg1;
- (void).cxx_destruct;
@end
