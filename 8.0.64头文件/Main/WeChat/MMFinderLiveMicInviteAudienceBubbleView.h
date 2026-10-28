@interface MMFinderLiveMicInviteAudienceBubbleView : UIView <MMFinderLivePromoteDisplayLeaseTokenDelegate>
{
    id <MMFinderLiveMicInviteAudienceBubbleViewDelegate> _actionDelegate; // +0x8
    unsigned long long _micSeatId; // +0x10
    NSData * _inviteMicBuffer; // +0x18
    MMFinderLivePromoteDisplayLeaseToken * _displayLeaseToken; // +0x20
    MMLiveTaskId * _taskId; // +0x28
    UIView * _containerView; // +0x30
    UIImageView * _micIconView; // +0x38
    UILabel * _titleLabel; // +0x40
    UIButton * _acceptButton; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (id)initWithTaskId:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onTapAcceptButton;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setDisplayLeaseToken:(id)arg1;
- (void)onPromoteDisplayLeaseViewAttached:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (unsigned long long)micSeatId;
- (void)setMicSeatId:(unsigned long long)arg1;
- (id)inviteMicBuffer;
- (void)setInviteMicBuffer:(id)arg1;
- (id)displayLeaseToken;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)micIconView;
- (void)setMicIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (void).cxx_destruct;
@end
