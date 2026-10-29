@interface WCStoryFriendVisitHeadCell : UICollectionViewCell
{
    id <WCStoryFriendVisitHeadCellDelegate> _delegate; // +0x8
    WCStoryComment * _comment; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    MMCPLabel * _userNameLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setup;
- (void)updateUI;
- (void)onClickHeadView;
- (void)setComment:(id)arg1;
- (id)userNameLabel;
- (id)headImageView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)comment;
- (void)setHeadImageView:(id)arg1;
- (void)setUserNameLabel:(id)arg1;
- (void).cxx_destruct;
@end
