@interface VoIP2PInvitationBreadthInviteView : UIView <VoIPInvitationBreadthInviteView>
{
    BOOL isAccepted; // +0x8
    BOOL disableVideoCapture; // +0x9
    VoIPInvitationInfo * info; // +0x10
    id <VoIPInvitationBreadthInviteViewDelegate> delegate; // +0x18
    UIImageView * _backgroundView; // +0x20
    MMUIButton * _expandButton; // +0x28
    UIView * _captureView; // +0x30
    UIVisualEffectView * _captureVisualEffectView; // +0x38
    MultiTalkHDHeadView * _headView; // +0x40
    VoipDescriptionButton * _acceptDescriptionButton; // +0x48
    MMUIActivityIndicatorView * _acceptIndicatorView; // +0x50
    VoipDescriptionButton * _hangupDescriptionButton; // +0x58
    MMUILabel * _usrnameLabel; // +0x60
    VoipAutoUpdateLabel * _descriptionLabel; // +0x68
    VOIPVideoRender * _videoRender; // +0x70
    XImageViewRenderer * _rciLocalRender; // +0x78
}
- (BOOL)isQuickReplyDisable;
- (void)layoutBackgroundView;
- (void)layoutExpandButton;
- (void)layoutCaptureView;
- (void)layoutCaptureVisualEffectView;
- (void)layoutHeadView;
- (void)layoutAcceptDescriptionButton;
- (void)layoutAcceptIndicatorView;
- (void)layoutHangUpDescriptionButton;
- (void)layoutUserNameLabel;
- (void)layoutDescriptionLabel;
- (void)layoutLabels;
- (id)initWithFrame:(CGRect)arg1 info:(id)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (double)userNameCenterY;
- (void)onAcceptDescriptionButtonClick:(id)arg1;
- (void)onHangupDescriptionButtonClick:(id)arg1;
- (void)onMyselfClick:(id)arg1;
- (void)removeKVOForDescriptionLabel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)isAccepted;
- (void)setIsAccepted:(BOOL)arg1;
- (BOOL)disableVideoCapture;
- (void)setDisableVideoCapture:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)captureView;
- (void)setCaptureView:(id)arg1;
- (id)captureVisualEffectView;
- (void)setCaptureVisualEffectView:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)acceptDescriptionButton;
- (void)setAcceptDescriptionButton:(id)arg1;
- (id)acceptIndicatorView;
- (void)setAcceptIndicatorView:(id)arg1;
- (id)hangupDescriptionButton;
- (void)setHangupDescriptionButton:(id)arg1;
- (id)usrnameLabel;
- (void)setUsrnameLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)videoRender;
- (void)setVideoRender:(id)arg1;
- (id)rciLocalRender;
- (void)setRciLocalRender:(id)arg1;
- (void).cxx_destruct;
@end
