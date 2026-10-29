@interface MMFinderLiveRewardWishProgressView : UIView <MMFinderLiveGiftResourceMgrExt>
{
    UIView * _contentView; // +0x8
    UIImageView * _thumbnailView; // +0x10
    MMUILabel * _displayNameLabel; // +0x18
    MMUILabel * _countLabel; // +0x20
    MMUILabel * _fansBadgeLabel; // +0x28
    MMUILabel * _giftDisableLabel; // +0x30
    MMFinderLiveRewardWish * _wishGiftItem; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithWishGiftItem:(id)arg1;
- (void)clearCurrentWishGiftItem;
- (id)getDefaultGiftThumbImage;
- (void)initUI;
- (void)layoutSubviews;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)fansBadgeLabel;
- (void)setFansBadgeLabel:(id)arg1;
- (id)giftDisableLabel;
- (void)setGiftDisableLabel:(id)arg1;
- (id)wishGiftItem;
- (void)setWishGiftItem:(id)arg1;
- (void).cxx_destruct;
@end

