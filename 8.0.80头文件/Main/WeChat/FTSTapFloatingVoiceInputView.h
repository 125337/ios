@interface FTSTapFloatingVoiceInputView : FTSFloatingVoiceInputView
{
    BOOL _isRecording; // +0x8
    BOOL _isInLongPressing; // +0x9
    UIView * _recordingContainerView; // +0x10
    UIView * _textBGView; // +0x18
    UIView * _recordingFeedBackBGView; // +0x20
    MMUIActivityIndicatorView * _tapIndicatorView; // +0x28
    UILabel * _quitTipLabel; // +0x30
}
- (id)initWithViewModel:(id)arg1 config:(id)arg2 ftsContext:(id)arg3;
- (void)updateUI;
- (void)layoutSubviews;
- (void)handleTapPress:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)onWillResignActive:(id)arg1;
- (void)handleQuit:(id)arg1;
- (void)tapStart;
- (void)tapEnd;
- (void)onGestureStart:(BOOL)arg1;
- (void)animateHide;
- (void)onVoiceInputCancelByMaxTime:(id)arg1;
- (void)startRecognizeLoading;
- (void)stopRecognizeLoading;
- (void)switchToCancelStyle;
- (void)switchToNormalStyle;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (id)recordingContainerView;
- (void)setRecordingContainerView:(id)arg1;
- (id)textBGView;
- (void)setTextBGView:(id)arg1;
- (id)recordingFeedBackBGView;
- (void)setRecordingFeedBackBGView:(id)arg1;
- (id)tapIndicatorView;
- (void)setTapIndicatorView:(id)arg1;
- (id)quitTipLabel;
- (void)setQuitTipLabel:(id)arg1;
- (BOOL)isInLongPressing;
- (void)setIsInLongPressing:(BOOL)arg1;
- (void).cxx_destruct;
@end
