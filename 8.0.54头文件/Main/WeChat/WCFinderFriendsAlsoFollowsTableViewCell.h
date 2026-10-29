@interface WCFinderFriendsAlsoFollowsTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    int _commentScene; // +0x8
    id <WCFinderFriendsAlsoFollowsTableViewCellDelegate> _delegate; // +0x10
    UICollectionView * _collectionView; // +0x18
    UIView * _containerView; // +0x20
    WCFinderHeadImageView * _headImgView; // +0x28
    FavAttributeCPLabel * _nameLabel; // +0x30
    WCFinderAuthInfoIconView * _authView; // +0x38
    UILabel * _friendFollowCountLabel; // +0x40
    WCFinderMaskButton * _followButton; // +0x48
    WCFinderAccoutItem * _acctItem; // +0x50
    UILabel * _emptyTipsLabel; // +0x58
}
+ (double)collectionHWithSelfW:(double)arg1;
+ (double)cellWWithCollW:(double)arg1;
+ (double)cellHWithCollW:(double)arg1;
+ (id)cellID;
+ (double)cellHWithW:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithDataInfo:(id)arg1 commentScene:(int)arg2;
- (void)updateFollowBtnWithContactFollowState:(unsigned long long)arg1 privateState:(BOOL)arg2;
- (void)layoutSubviews;
- (double)getCurrentNameMaxWidth;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)cellAtIndex:(long long)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onClickFollowButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headImgView;
- (void)setHeadImgView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)authView;
- (void)setAuthView:(id)arg1;
- (id)friendFollowCountLabel;
- (void)setFriendFollowCountLabel:(id)arg1;
- (id)followButton;
- (void)setFollowButton:(id)arg1;
- (id)acctItem;
- (void)setAcctItem:(id)arg1;
- (id)emptyTipsLabel;
- (void)setEmptyTipsLabel:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end

