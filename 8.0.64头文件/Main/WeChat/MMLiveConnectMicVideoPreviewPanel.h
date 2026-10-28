@interface MMLiveConnectMicVideoPreviewPanel : UIView <UIGestureRecognizerDelegate>
{
    id <MMLiveConnectMicVideoPreviewPanelDelegate> _delegate; // +0x8
    UIView * _panelView; // +0x10
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x18
    WCLiveVideoView * _videoView; // +0x20
    UIView * _videoContainerView; // +0x28
    UILabel * _titleLabel; // +0x30
    CAGradientLayer * _videoTextBackgroundLayer; // +0x38
    UILabel * _videoTextLabel; // +0x40
    MMUIButton * _cancelButton; // +0x48
    MMUIButton * _confirmButton; // +0x50
}
- (void)layoutSubviews;
- (void)updatePanelViews;
- (void)showPanelWithVideoView:(id)arg1;
- (void)onTapNotPanelArea;
- (void)onClickCancelButton;
- (void)onClickConfirmButton;
- (void)closeActionWithConfirmed:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (id)videoContainerView;
- (void)setVideoContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)videoTextBackgroundLayer;
- (void)setVideoTextBackgroundLayer:(id)arg1;
- (id)videoTextLabel;
- (void)setVideoTextLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
