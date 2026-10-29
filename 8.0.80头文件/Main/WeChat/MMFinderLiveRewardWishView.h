@interface MMFinderLiveRewardWishView : UIView <MMFinderLiveGiftResourceMgrExt, UITextFieldDelegate>
{
    UIView * _contentView; // +0x8
    UIImageView * _thumbnailView; // +0x10
    MMUILabel * _displayNameLabel; // +0x18
    MMUILabel * _priceLabel; // +0x20
    UIImageView * _coinIconView; // +0x28
    MMUITextField * _countTextField; // +0x30
    MMUIButton * _closeButton; // +0x38
    MMUIButton * _addButton; // +0x40
    MMUILabel * _fansBadgeLabel; // +0x48
    unsigned long long _maxTargetCount; // +0x50
    id <MMFinderLiveRewardWishViewDelegate> _operationDelegate; // +0x58
    MMFinderLiveRewardWish * _wishGiftItem; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithWishGiftItem:(id)arg1;
- (void)clearCurrentWishGiftItem;
- (id)getDefaultGiftThumbImage;
- (void)initUI;
- (void)layoutSubviews;
- (void)onClickAddButton:(id)arg1;
- (void)onClickCloseButton;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChanged:(id)arg1;
- (unsigned long long)maxTargetCount;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
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
- (id)countTextField;
- (void)setCountTextField:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (id)fansBadgeLabel;
- (void)setFansBadgeLabel:(id)arg1;
- (void)setMaxTargetCount:(unsigned long long)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)wishGiftItem;
- (void)setWishGiftItem:(id)arg1;
- (void).cxx_destruct;
@end
