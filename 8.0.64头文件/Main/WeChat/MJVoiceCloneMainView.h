@interface MJVoiceCloneMainView : UIView <MJRecordingControlViewDelegate>
{
    id <MJVoiceCloneMainViewDelegate> _delegate; // +0x8
    MJRecordingControlView * _recordingControlView; // +0x10
    MMUIButton * _closeButton; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _instructionLabel; // +0x28
    MJMessageBubbleView * _contentBubbleView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (id)closeButton;
- (void)closeButtonDidTouchUpInside:(id)arg1;
- (id)titleLabel;
- (id)instructionLabel;
- (id)contentBubbleView;
- (id)recordingControlView;
- (void)recordingControlViewDidStartRecording:(id)arg1;
- (void)recordingControlViewDidStopRecording:(id)arg1;
- (void)recordingControlViewDidCancelRecording:(id)arg1;
- (id)regText;
- (void)setRegText:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setRecordingControlView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setInstructionLabel:(id)arg1;
- (void)setContentBubbleView:(id)arg1;
- (void).cxx_destruct;
@end
