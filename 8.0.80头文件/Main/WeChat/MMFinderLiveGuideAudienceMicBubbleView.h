@interface MMFinderLiveGuideAudienceMicBubbleView : UIView <MMFinderLivePromoteDisplayLeaseTokenDelegate>
{
    id <MMFinderLiveGuideAudienceMicBubbleViewDelegate> _actionDelegate; // +0x8
    MMFinderLivePromoteDisplayLeaseToken * _displayLeaseToken; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    UIView * _containerView; // +0x20
    UIImageView * _micIconView; // +0x28
    UILabel * _titleLabel; // +0x30
    UIButton * _acceptButton; // +0x38
    NSString * _customTitle; // +0x40
    NSString * _customButtonTitle; // +0x48
}
- (id)initWithTaskId:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onTapAcceptButton;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setDisplayLeaseToken:(id)arg1;
- (void)onPromoteDisplayLeaseViewAttached:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
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
- (id)customTitle;
- (void)setCustomTitle:(id)arg1;
- (id)customButtonTitle;
- (void)setCustomButtonTitle:(id)arg1;
- (void).cxx_destruct;
@end
