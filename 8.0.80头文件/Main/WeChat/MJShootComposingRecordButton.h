@interface MJShootComposingRecordButton : MMUIView
{
    BOOL _isRecording; // +0x8
    id <MJShootComposingRecordButtonDelegate> _delegate; // +0x10
    unsigned long long _buttonStyle; // +0x18
    UIView * _recordViewContainer; // +0x20
    UIView * _recordMiddleView; // +0x28
    UIView * _recordBorderView; // +0x30
    MMUILabel * _countdownTipsLabel; // +0x38
    CAShapeLayer * _recordProgressLayer; // +0x40
    MJShootRecordButtonConfig * _config; // +0x48
}
- (id)initWithButtonStyle:(unsigned long long)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)handleSingleTapGestureRecognizer:(id)arg1;
- (void)handleDoubleTapGestureRecognizer:(id)arg1;
- (void)handleLongPressGestureRecognizer:(id)arg1;
- (void)startPhotographing;
- (void)startRecording;
- (void)didFinishRecording;
- (void)updateCountdownTipsWithMode:(unsigned long long)arg1;
- (void)resetButtonStateOnRecordFinished;
- (void)updateRecordingProgress:(float)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)buttonStyle;
- (id)recordViewContainer;
- (void)setRecordViewContainer:(id)arg1;
- (id)recordMiddleView;
- (void)setRecordMiddleView:(id)arg1;
- (id)recordBorderView;
- (void)setRecordBorderView:(id)arg1;
- (id)countdownTipsLabel;
- (void)setCountdownTipsLabel:(id)arg1;
- (id)recordProgressLayer;
- (void)setRecordProgressLayer:(id)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
