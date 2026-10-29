@interface MMFinderLiveRewardWishView : UIView <MMFinderLiveGiftResourceMgrExt>
{
    UIView * _contentView; // +0x8
    UIImageView * _thumbnailView; // +0x10
    MMUILabel * _displayNameLabel; // +0x18
    MMUILabel * _priceLabel; // +0x20
    UIImageView * _coinIconView; // +0x28
    MMUILabel * _countLabel; // +0x30
    MMUIButton * _closeButton; // +0x38
    MMUIButton * _addButton; // +0x40
    MMUILabel * _fansBadgeLabel; // +0x48
    id <MMFinderLiveRewardWishViewDelegate> _operationDelegate; // +0x50
    MMFinderLiveRewardWish * _wishGiftItem; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithWishGiftItem:(id)arg1;
- (void)clearCurrentWishGiftItem;
- (id)getDefaultGiftThumbImage;
- (void)initUI;
- (void)layoutSubviews;
- (void)onClickAddButton:(id)arg1;
- (void)onContentViewTapped;
- (void)onClickCloseButton;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (id)fansBadgeLabel;
- (void)setFansBadgeLabel:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)wishGiftItem;
- (void)setWishGiftItem:(id)arg1;
- (void).cxx_destruct;
@end

