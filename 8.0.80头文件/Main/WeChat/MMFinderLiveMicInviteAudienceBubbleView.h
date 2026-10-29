@interface MMFinderLiveMicInviteAudienceBubbleView : UIView <MMFinderLivePromoteDisplayLeaseTokenDelegate>
{
    id <MMFinderLiveMicInviteAudienceBubbleViewDelegate> _actionDelegate; // +0x8
    unsigned long long _micSeatId; // +0x10
    unsigned long long _inviteScene; // +0x18
    NSData * _inviteMicBuffer; // +0x20
    NSString * _inviterNickname; // +0x28
    unsigned long long _inviteSourceType; // +0x30
    NSData * _micInviteShareCardBuffer; // +0x38
    MMFinderLivePromoteDisplayLeaseToken * _displayLeaseToken; // +0x40
    MMLiveTaskId * _taskId; // +0x48
    UIView * _containerView; // +0x50
    UIImageView * _micIconView; // +0x58
    UILabel * _titleLabel; // +0x60
    UILabel * _inviterNicknameLabel; // +0x68
    UIButton * _acceptButton; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (id)initWithTaskId:(id)arg1;
- (id)currentInviteTitleText;
- (id)currentAcceptButtonTitleText;
- (double)currentAcceptButtonWidth;
- (void)resetDisplayState;
- (void)updateInviteScene:(unsigned long long)arg1;
- (void)updateInviteInfoWithSeatId:(unsigned long long)arg1 inviteMicBuffer:(id)arg2;
- (void)resetIconAndTitle;
- (void)updateMicAudienceInviterWithNickname:(id)arg1;
- (void)updateMicInviteShareCardWithNickname:(id)arg1 micInviteShareCardBuffer:(id)arg2 fromAudience:(BOOL)arg3;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onTapAcceptButton;
- (long long)currentInviteChannelForReport;
- (unsigned long long)reportActionTypeForEvent:(unsigned long long)arg1;
- (void)reportBubbleActionWithEvent:(unsigned long long)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setDisplayLeaseToken:(id)arg1;
- (void)onPromoteDisplayLeaseViewAttached:(id)arg1;
- (void)onPromoteDisplayLeaseInvalidated:(id)arg1 forReason:(unsigned long long)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (unsigned long long)micSeatId;
- (void)setMicSeatId:(unsigned long long)arg1;
- (unsigned long long)inviteScene;
- (void)setInviteScene:(unsigned long long)arg1;
- (id)inviteMicBuffer;
- (void)setInviteMicBuffer:(id)arg1;
- (id)inviterNickname;
- (void)setInviterNickname:(id)arg1;
- (unsigned long long)inviteSourceType;
- (void)setInviteSourceType:(unsigned long long)arg1;
- (id)micInviteShareCardBuffer;
- (void)setMicInviteShareCardBuffer:(id)arg1;
- (id)displayLeaseToken;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)micIconView;
- (void)setMicIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)inviterNicknameLabel;
- (void)setInviterNicknameLabel:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (void).cxx_destruct;
@end
