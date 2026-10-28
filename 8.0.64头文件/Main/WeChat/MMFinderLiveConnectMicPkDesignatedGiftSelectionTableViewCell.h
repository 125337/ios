@interface MMFinderLiveConnectMicPkDesignatedGiftSelectionTableViewCell : UITableViewCell
{
    MMFinderLiveRewardGiftItem * _giftItem; // +0x8
    UIView * _thumbnailContainerView; // +0x10
    UIImageView * _thumbnailView; // +0x18
    UILabel * _displayNameLabel; // +0x20
    UIImageView * _wecoinIconView; // +0x28
    UILabel * _pricingLabel; // +0x30
    UIView * _separatorBar; // +0x38
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setGiftItem:(id)arg1;
- (void)layoutSubviews;
- (void)updateGiftItem;
- (id)giftItem;
- (id)thumbnailContainerView;
- (void)setThumbnailContainerView:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)wecoinIconView;
- (void)setWecoinIconView:(id)arg1;
- (id)pricingLabel;
- (void)setPricingLabel:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (void).cxx_destruct;
@end
