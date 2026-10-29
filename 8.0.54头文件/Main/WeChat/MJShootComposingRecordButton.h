@interface MJShootComposingRecordButton : MMUIView
{
    BOOL _isRecording; // +0x8
    id <MJShootComposingRecordButtonDelegate> _delegate; // +0x10
    UIView * _recordViewContainer; // +0x18
    UIView * _recordMiddleView; // +0x20
    UIView * _recordBorderView; // +0x28
    CAShapeLayer * _recordProgressLayer; // +0x30
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)handleSingleTapGestureRecognizer:(id)arg1;
- (void)handleDoubleTapGestureRecognizer:(id)arg1;
- (void)startPhotographing;
- (void)startRecording;
- (void)didFinishRecording;
- (void)resetButtonStateOnRecordFinished;
- (void)updateRecordingProgress:(float)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recordViewContainer;
- (void)setRecordViewContainer:(id)arg1;
- (id)recordMiddleView;
- (void)setRecordMiddleView:(id)arg1;
- (id)recordBorderView;
- (void)setRecordBorderView:(id)arg1;
- (id)recordProgressLayer;
- (void)setRecordProgressLayer:(id)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (void).cxx_destruct;
@end

