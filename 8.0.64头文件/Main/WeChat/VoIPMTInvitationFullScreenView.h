@interface VoIPMTInvitationFullScreenView : UIView <VoIPInvitationFullScreenView>
{
    BOOL isAccepted; // +0x8
    id <VoIPInvitationFullScreenViewDelegate> delegate; // +0x10
    VoIPInvitationInfo * _info; // +0x18
    VoIPHeadImageBlurView * _backgroundView; // +0x20
    UIImageView * _profileBackgroundView; // +0x28
    MultiTalkHDHeadView * _headImageView; // +0x30
    UILabel * _titleLabel; // +0x38
    VoipAutoUpdateLabel * _descriptionLabel; // +0x40
    UILabel * _memberDescLabel; // +0x48
    UIButton * _hangupButton; // +0x50
    UIButton * _acceptButton; // +0x58
    MMUIActivityIndicatorView * _acceptIndicatorView; // +0x60
    MMUIButton * _minimizeButton; // +0x68
    NSArray * _memberHeadViews; // +0x70
}
- (void)onHangupButtonClick:(id)arg1;
- (void)onAcceptButtonClick:(id)arg1;
- (void)onMinimizeButtonClick:(id)arg1;
- (void)layoutBackgroundView;
- (void)layoutProfileBackgroundView;
- (void)layoutAcceptIndicatorView;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 info:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAccepted;
- (void)setIsAccepted:(BOOL)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)profileBackgroundView;
- (void)setProfileBackgroundView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)memberDescLabel;
- (void)setMemberDescLabel:(id)arg1;
- (id)hangupButton;
- (void)setHangupButton:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (id)acceptIndicatorView;
- (void)setAcceptIndicatorView:(id)arg1;
- (id)minimizeButton;
- (void)setMinimizeButton:(id)arg1;
- (id)memberHeadViews;
- (void)setMemberHeadViews:(id)arg1;
- (void).cxx_destruct;
@end
