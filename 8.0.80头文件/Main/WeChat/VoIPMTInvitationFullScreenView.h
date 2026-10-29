@interface VoIPMTInvitationFullScreenView : UIView <VoIPInvitationFullScreenView>
{
    BOOL isAccepted; // +0x8
    BOOL _fromIgnore; // +0x9
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
    MMUIButton * _miniInAppButton; // +0x68
    MMUIButton * _ignoreButton; // +0x70
    MMUIButton * _ignoreActionButton; // +0x78
    NSArray * _memberHeadViews; // +0x80
    VoIPInvitationPendingDotAnimator * _pendingDotAnimator; // +0x88
    NSArray * _memberHeadUserNames; // +0x90
}
- (void)setFromIgnore:(BOOL)arg1;
- (void)onHangupButtonClick:(id)arg1;
- (void)onAcceptButtonClick:(id)arg1;
- (void)onMiniInAppButtonClick:(id)arg1;
- (void)onIgnoreActionButtonClick:(id)arg1;
- (void)layoutBackgroundView;
- (void)layoutProfileBackgroundView;
- (void)layoutAcceptIndicatorView;
- (void)layoutSubviews;
- (void)refreshPendingOverlaysForOtherItemWidth:(double)arg1;
- (void)layoutMiniInAppButton;
- (void)layoutIgnoreActionButton;
- (id)initWithFrame:(CGRect)arg1 info:(id)arg2;
- (void)updateInfo:(id)arg1;
- (id)pendingDotAnimator;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAccepted;
- (void)setIsAccepted:(BOOL)arg1;
- (BOOL)fromIgnore;
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
- (id)miniInAppButton;
- (void)setMiniInAppButton:(id)arg1;
- (id)ignoreButton;
- (void)setIgnoreButton:(id)arg1;
- (id)ignoreActionButton;
- (void)setIgnoreActionButton:(id)arg1;
- (id)memberHeadViews;
- (void)setMemberHeadViews:(id)arg1;
- (void)setPendingDotAnimator:(id)arg1;
- (id)memberHeadUserNames;
- (void)setMemberHeadUserNames:(id)arg1;
- (void).cxx_destruct;
@end
