@interface WCAdFireworkCheerInviteFriendCell : MMTableViewCell <WCAdFireworkCheerInviteFriendViewDelegate>
{
    id <WCAdFireworkCheerInviteFriendCellDelegate> _delegate; // +0x8
    WCDataItem * _dataItem; // +0x10
    WCAdFireworkCheerInviteFriendView * _adFireworkCheerInviteFriendView; // +0x18
}
+ (id)defaultIdentifier;
+ (double)defaultHeight;
- (void)updateCellView:(id)arg1;
- (void)initFireworkCheerInviteFriendView;
- (void)onAdInviteButtonClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)adFireworkCheerInviteFriendView;
- (void)setAdFireworkCheerInviteFriendView:(id)arg1;
- (void).cxx_destruct;
@end

