@interface VoIP2PInvitationFullScreenView : UIView <VoIPInvitationFullScreenView>
{
    BOOL isAccepted; // +0x8
    id <VoIPInvitationFullScreenViewDelegate> delegate; // +0x10
    VoIPInvitationInfo * _info; // +0x18
    VoIPHeadImageBlurView * _backgroundView; // +0x20
    UIImageView * _m_profileBackgroundView; // +0x28
    MMUIButton * _miniInAppButton; // +0x30
    VoipAutoUpdateLabel * _statusAudoUpdateLabel; // +0x38
    MultiTalkHDHeadView * _headImageView; // +0x40
    UILabel * _usrnameLabel; // +0x48
    VoipDescriptionButton * _acceptButton; // +0x50
    MMUIActivityIndicatorView * _acceptIndicatorView; // +0x58
    VoipDescriptionButton * _hangupButton; // +0x60
}
- (void)layoutBackgroundView;
- (void)layoutProfileBackgroundView;
- (void)layoutMiniInAppButton;
- (void)layoutStatusLabel;
- (void)layoutHeadImageView;
- (void)layoutUsernameLabel;
- (void)layoutAcceptButton;
- (void)layoutAcceptIndicatorView;
- (void)layoutHangupButton;
- (void)onMiniInAppButtonClickWithSender:(id)arg1;
- (void)onAcceptButtonClickWithSender:(id)arg1;
- (void)onHangupButtonClickWithSender:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 info:(id)arg2;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAccepted;
- (void)setIsAccepted:(BOOL)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)m_profileBackgroundView;
- (void)setM_profileBackgroundView:(id)arg1;
- (id)miniInAppButton;
- (void)setMiniInAppButton:(id)arg1;
- (id)statusAudoUpdateLabel;
- (void)setStatusAudoUpdateLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)usrnameLabel;
- (void)setUsrnameLabel:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (id)acceptIndicatorView;
- (void)setAcceptIndicatorView:(id)arg1;
- (id)hangupButton;
- (void)setHangupButton:(id)arg1;
- (void).cxx_destruct;
@end
