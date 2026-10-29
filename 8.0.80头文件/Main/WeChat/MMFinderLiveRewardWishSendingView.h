@interface MMFinderLiveRewardWishSendingView : UIView <MMFinderLiveGiftResourceMgrExt>
{
    UIView * _contentView; // +0x8
    UIView * _voiceOverContentView; // +0x10
    UIImageView * _thumbnailView; // +0x18
    MMUILabel * _displayNameLabel; // +0x20
    MMUILabel * _priceLabel; // +0x28
    UIImageView * _coinIconView; // +0x30
    MMUILabel * _countLabel; // +0x38
    MMUILabel * _fansBadgeLabel; // +0x40
    MMUIButton * _sendButton; // +0x48
    MMUILabel * _giftDisableLabel; // +0x50
    MMFinderLiveRewardWish * _wishGiftItem; // +0x58
    id <MMFinderLiveRewardWishSendingViewDelegate> _operationDelegate; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithWishGiftItem:(id)arg1;
- (void)setupSelfAccessibilityWith:(id)arg1;
- (void)clearCurrentWishGiftItem;
- (id)getDefaultGiftThumbImage;
- (void)initUI;
- (void)layoutSubviews;
- (void)onClickSendButton:(id)arg1;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)voiceOverContentView;
- (void)setVoiceOverContentView:(id)arg1;
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
- (id)fansBadgeLabel;
- (void)setFansBadgeLabel:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)giftDisableLabel;
- (void)setGiftDisableLabel:(id)arg1;
- (id)wishGiftItem;
- (void)setWishGiftItem:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (void).cxx_destruct;
@end
