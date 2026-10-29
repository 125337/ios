@interface EcsFinderFeedBulkBuyAvatarCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>
{
    EcsImg * _viewDataModel; // +0x8
    MMWebImageView * _avatarView; // +0x10
}
+ (CGSize)viewSizeByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)viewDataModel;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (void).cxx_destruct;
@end
