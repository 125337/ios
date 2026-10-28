@interface VoIPMTInvitationBreadthInviteView : UIView <VoIPInvitationBreadthInviteView>
{
    BOOL isAccepted; // +0x8
    BOOL disableVideoCapture; // +0x9
    BOOL isQuickReplyDisable; // +0xa
    VoIPInvitationInfo * info; // +0x10
    id <VoIPInvitationBreadthInviteViewDelegate> delegate; // +0x18
    UIImageView * _blurView; // +0x20
    UIImageView * _customMaskView; // +0x28
    MultiTalkHDHeadView * _headImageView; // +0x30
    VoipDescriptionButton * _acceptButton; // +0x38
    VoipDescriptionButton * _hangupButton; // +0x40
    MMUILabel * _userNameLabel; // +0x48
    VoipAutoUpdateLabel * _autoUpdateLabel; // +0x50
    MMUILabel * _membersDescLabel; // +0x58
    NSArray * _memberHeadViews; // +0x60
    MMUIButton * _expandButton; // +0x68
}
+ (double)displayMembersMaxWidthWithWidth:(double)arg1;
+ (unsigned long long)oneLineMaxMembersCountWithWidth:(double)arg1;
+ (double)preferredExtendHeightWithInfo:(id)arg1 width:(double)arg2;
- (double)userNameCenterY;
- (id)videoRender;
- (id)rciLocalRender;
- (void)removeKVOForDescriptionLabel;
- (void)onMyselfClick:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 info:(id)arg2;
- (BOOL)isQuickReplyDisable;
- (void)dealloc;
- (void)layoutSubviews;
- (void)onAcceptButtonClick:(id)arg1;
- (void)onHangupButtonClick:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)isAccepted;
- (void)setIsAccepted:(BOOL)arg1;
- (BOOL)disableVideoCapture;
- (void)setDisableVideoCapture:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)customMaskView;
- (void)setCustomMaskView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (id)hangupButton;
- (void)setHangupButton:(id)arg1;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg1;
- (id)autoUpdateLabel;
- (void)setAutoUpdateLabel:(id)arg1;
- (id)membersDescLabel;
- (void)setMembersDescLabel:(id)arg1;
- (id)memberHeadViews;
- (void)setMemberHeadViews:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (void).cxx_destruct;
@end
