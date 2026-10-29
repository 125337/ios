@interface WCFinderMemberShipFollowContactListCell : UITableViewCell <WCFinderMembershipFollowInfoExt>
{
    id <WCFinderMemberShipFollowContactListCellDelegate> _delegate; // +0x8
    UIView * _containerView; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    UILabel * _nickName; // +0x20
    UILabel * _expireTime; // +0x28
    WCFinderContact * _contact; // +0x30
    UIImageView * _arrowImageView; // +0x38
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)updateWithContact:(id)arg1;
- (id)containerView;
- (id)nickName;
- (id)expireTime;
- (id)headImageView;
- (id)arrowImageView;
- (id)formatTimeString:(double)arg1;
- (void)onFinderMemberShipVisitorStatusHasChanged:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setExpireTime:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
