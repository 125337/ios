@interface MMFinderLiveKTVSeatInviteView : UIView
{
    MMLiveTaskId * _taskId; // +0x8
    UIView * _inviteRoundView; // +0x10
    UIImageView * _inviteIconView; // +0x18
    MMUILabel * _inviteLabel; // +0x20
}
+ (double)preferWidth;
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutInviteRoundBtn;
- (void)layoutInviteIconView;
- (void)layoutInviteLabel;
- (void)updateInviteLabelText;
- (void)updateInviteLabelOrigin;
- (void)refreshUI;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)inviteRoundView;
- (void)setInviteRoundView:(id)arg1;
- (id)inviteIconView;
- (void)setInviteIconView:(id)arg1;
- (id)inviteLabel;
- (void)setInviteLabel:(id)arg1;
- (void).cxx_destruct;
@end

