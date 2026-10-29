@interface MMLiveRewardGiftCollectionViewCell : UICollectionViewCell <MMFinderLiveGiftResourceMgrExt, MMLiveRewardGiftNewCustomizationMagicRewardResExt>
{
    BOOL _disableGiftCountLabel; // +0x8
    BOOL _isPrepared; // +0x9
    id <MMLiveRewardGiftCollectionViewCellDelegate> _delegate; // +0x10
    id /* block */ _longPressedCallback; // +0x18
    MMFinderLiveRewardGiftItem * _giftItem; // +0x20
    UIImageView * _thumbnailView; // +0x28
    UIImage * _thumbnailImg; // +0x30
    MMUILabel * _displayNameLabel; // +0x38
    UIView * _reddotView; // +0x40
    MMUILabel * _priceLabel; // +0x48
    UIImageView * _coinIconView; // +0x50
    MMUILabel * _giftCountLabel; // +0x58
    MMUIView * _expireDaysContainerView; // +0x60
    MMUILabel * _expireDaysLabel; // +0x68
    MMUIView * _tagView; // +0x70
    MMUIView * _tagBgView; // +0x78
    UIImageView * _tagIconView; // +0x80
    MMUILabel * _tagLabel; // +0x88
    UILongPressGestureRecognizer * _sendButtonLongPressGesture; // +0x90
    unsigned long long _mode; // +0x98
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithGiftItem:(id)arg1 mode:(unsigned long long)arg2;
- (void)preLoadNewCustomizationMagicResIfNeed;
- (id)getDefaultGiftThumbImage;
- (void)updateReddotView;
- (void)initUI;
- (void)layoutSubviews;
- (void)updateMagicRewardResourceExtRegister;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (void)onMagicRewardResourceStateChanged:(unsigned long long)arg1 resource:(id)arg2;
- (BOOL)needShowActivityTag;
- (id)getGiftDisplayName:(id)arg1;
- (id)getGiftTagIcon:(id)arg1;
- (id)getGiftTag:(id)arg1;
- (id)getGiftTagBg0Color:(id)arg1;
- (id)getGiftTagBg1Color:(id)arg1;
- (id)getGiftTagFontColor:(id)arg1;
- (BOOL)isInFansGroup;
- (BOOL)isFansGroupGift:(id)arg1;
- (BOOL)isJoinFansGroupGift:(id)arg1;
- (BOOL)isSuperfanGift:(id)arg1;
- (BOOL)isJoinFansGroupEntranceGift:(id)arg1;
- (BOOL)isGiftNewCustomizeStyle;
- (unsigned int)getSelfIntimacyLevel;
- (unsigned int)getSelfGlobalLevel;
- (void)checkIsPrepared;
- (BOOL)checkNewCustomizationModelPrepared:(id)arg1;
- (void)updateIsPrepared:(BOOL)arg1;
- (void)updateUIForPrepareStateChange;
- (void)updateThumbnailImage;
- (id)sendButtonLongPressGesture;
- (void)onLongpressSendButton:(id)arg1;
- (void)setDisableGiftCountLabel:(BOOL)arg1;
- (id)finderLiveTask;
- (BOOL)isAccessibilityElement;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)longPressedCallback;
- (void)setLongPressedCallback:(id /* block */)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (BOOL)disableGiftCountLabel;
- (BOOL)isPrepared;
- (void)setIsPrepared:(BOOL)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)thumbnailImg;
- (void)setThumbnailImg:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)reddotView;
- (void)setReddotView:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (id)giftCountLabel;
- (void)setGiftCountLabel:(id)arg1;
- (id)expireDaysContainerView;
- (void)setExpireDaysContainerView:(id)arg1;
- (id)expireDaysLabel;
- (void)setExpireDaysLabel:(id)arg1;
- (id)tagView;
- (void)setTagView:(id)arg1;
- (id)tagBgView;
- (void)setTagBgView:(id)arg1;
- (id)tagIconView;
- (void)setTagIconView:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (void)setSendButtonLongPressGesture:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
