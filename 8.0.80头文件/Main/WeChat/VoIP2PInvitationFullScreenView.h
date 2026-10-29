@interface VoIP2PInvitationFullScreenView : UIView <VoIPInvitationFullScreenView>
{
    BOOL isAccepted; // +0x8
    BOOL _fromIgnore; // +0x9
    id <VoIPInvitationFullScreenViewDelegate> delegate; // +0x10
    VoIPInvitationInfo * _info; // +0x18
    VoIPHeadImageBlurView * _backgroundView; // +0x20
    UIImageView * _m_profileBackgroundView; // +0x28
    MMUIButton * _miniInAppButton; // +0x30
    MMUIButton * _ignoreButton; // +0x38
    VoipAutoUpdateLabel * _statusAudoUpdateLabel; // +0x40
    MultiTalkHDHeadView * _headImageView; // +0x48
    UILabel * _usrnameLabel; // +0x50
    VoipDescriptionButton * _acceptButton; // +0x58
    MMUIActivityIndicatorView * _acceptIndicatorView; // +0x60
    VoipDescriptionButton * _hangupButton; // +0x68
    MMUIButton * _ignoreActionButton; // +0x70
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
- (void)layoutIgnoreActionButton;
- (void)onMiniInAppButtonClickWithSender:(id)arg1;
- (void)onAcceptButtonClickWithSender:(id)arg1;
- (void)onHangupButtonClickWithSender:(id)arg1;
- (void)onIgnoreActionButtonClickWithSender:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 info:(id)arg2;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAccepted;
- (void)setIsAccepted:(BOOL)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)fromIgnore;
- (void)setFromIgnore:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)m_profileBackgroundView;
- (void)setM_profileBackgroundView:(id)arg1;
- (id)miniInAppButton;
- (void)setMiniInAppButton:(id)arg1;
- (id)ignoreButton;
- (void)setIgnoreButton:(id)arg1;
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
- (id)ignoreActionButton;
- (void)setIgnoreActionButton:(id)arg1;
- (void).cxx_destruct;
@end
