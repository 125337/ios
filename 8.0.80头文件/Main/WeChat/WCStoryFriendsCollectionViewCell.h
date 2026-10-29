@interface WCStoryFriendsCollectionViewCell : UICollectionViewCell
{
    WCStoryTimelineCellModel * _friendsCollectionViewCellModel; // +0x8
    MMHeadImageView * _headerImageView; // +0x10
    MMUILabel * _usernameLabel; // +0x18
    UIImageView * _favourImageView; // +0x20
    MMUIButton * _unreadCountButton; // +0x28
    NSMutableArray * _storyHeadImageViewArray; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)headerImageView;
- (id)usernameLabel;
- (id)favourImageView;
- (id)unreadCountButton;
- (void)setFriendsCollectionViewCellModel:(id)arg1;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateUnreadStoryHeadImageView:(id)arg1;
- (id)createUnreadStoryHeadImageView;
- (id)friendsCollectionViewCellModel;
- (void)setHeaderImageView:(id)arg1;
- (void)setUsernameLabel:(id)arg1;
- (void)setFavourImageView:(id)arg1;
- (void)setUnreadCountButton:(id)arg1;
- (id)storyHeadImageViewArray;
- (void)setStoryHeadImageViewArray:(id)arg1;
- (void).cxx_destruct;
@end
