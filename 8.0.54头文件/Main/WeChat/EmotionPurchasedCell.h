@interface EmotionPurchasedCell : MMTableViewCell <MMEmoticonStoreDownloadLogicDelegate>
{
    EmoticonStoreItem * _item; // +0x8
    MMEmoticonStoreDownloadLogic * _downloadLogic; // +0x10
    MMWebImageView * _webImageView; // +0x18
    UILabel * _nameLabel; // +0x20
    UILabel * _priceLabel; // +0x28
    UILabel * _timeLabel; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setEmotionStoreItem:(id)arg1;
- (void)configureCellWithItem:(id)arg1 andLabelMaxWidth:(double)arg2;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)makeImageViewWithItem:(id)arg1;
- (void)makePackNameLabelWithItem:(id)arg1;
- (void)makePriceLabelWith:(id)arg1;
- (void)makeTimeLabel:(id)arg1;
- (void)initDownloadLogic;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)onDownloadFinished;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (double)downloadViewMaxWidth;
- (id)item;
- (void)setItem:(id)arg1;
- (id)downloadLogic;
- (void)setDownloadLogic:(id)arg1;
- (id)webImageView;
- (void)setWebImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end

