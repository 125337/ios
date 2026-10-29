@interface MMFinderLiveConnectMicExtendedPkSelectDesignatedGiftItemTableViewCell : UITableViewCell
{
    MMFinderLiveRewardGiftItem * _giftItem; // +0x8
    UILabel * _bulletLabel; // +0x10
    UILabel * _titleLabel; // +0x18
    UIImageView * _thumbnailView; // +0x20
    UIImageView * _chevronView; // +0x28
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setGiftItem:(id)arg1;
- (void)layoutSubviews;
- (void)updateThumbnail;
- (id)giftItem;
- (id)bulletLabel;
- (void)setBulletLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)chevronView;
- (void)setChevronView:(id)arg1;
- (void).cxx_destruct;
@end

