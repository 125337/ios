@interface MMFinderLiveRewardGiftPacketCollectionViewCell : UICollectionViewCell <MMFinderLiveGiftResourceMgrExt>
{
    id <MMFinderLiveRewardGiftPacketCollectionViewCellDelegate> _delegate; // +0x8
    UIImageView * _thumbnailView; // +0x10
    MMUILabel * _displayNameLabel; // +0x18
    MMUILabel * _priceLabel; // +0x20
    UIImageView * _coinIconView; // +0x28
    MMUILabel * _giftCountLabel; // +0x30
    MMUILabel * _badgeLabel; // +0x38
    MMFinderLiveGiftPacketViewModel * _viewModel; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithViewModel:(id)arg1;
- (id)getDefaultGiftThumbImage;
- (void)initUI;
- (void)layoutSubviews;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (id)getGiftDisplayName:(id)arg1;
- (id)getGiftIconImage:(id)arg1;
- (id)getGiftDiscription:(id)arg1;
- (id)getGiftDescriptionFont:(id)arg1;
- (id)finderLiveTask;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (id)giftCountLabel;
- (void)setGiftCountLabel:(id)arg1;
- (id)badgeLabel;
- (void)setBadgeLabel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

