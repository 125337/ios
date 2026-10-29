@interface MMLiveOnlineStateCollectionCell : UICollectionViewCell
{
    id <MMLiveOnlineStateCollectionCellDelegate> _cellDelegate; // +0x8
    MMHeadImageView * _headImageView; // +0x10
    MMCPLabel * _displayNameLabel; // +0x18
    MMLiveUserStateItem * _onlineUserItem; // +0x20
    UIImageView * _banCommentIconImageView; // +0x28
    UIView * _selectedView; // +0x30
}
+ (id)identifier;
+ (CGSize)getCellSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithOnlineUserItem:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)onHeadImageClicked:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)onlineUserItem;
- (void)setOnlineUserItem:(id)arg1;
- (id)banCommentIconImageView;
- (void)setBanCommentIconImageView:(id)arg1;
- (id)selectedView;
- (void)setSelectedView:(id)arg1;
- (void).cxx_destruct;
@end

