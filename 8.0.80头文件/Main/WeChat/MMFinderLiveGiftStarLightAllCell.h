@interface MMFinderLiveGiftStarLightAllCell : UITableViewCell
{
    MMWebImageView * _giftImageView; // +0x8
    MMUILabel * _nameLabel; // +0x10
    UIImageView * _beanView; // +0x18
    MMUILabel * _priceLabel; // +0x20
    MMUILabel * _remainLabel; // +0x28
    UIView * _separator; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithUnlockInfo:(id)arg1 theme:(id)arg2;
- (void)layoutSubviews;
- (id)giftImageView;
- (void)setGiftImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)beanView;
- (void)setBeanView:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)remainLabel;
- (void)setRemainLabel:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (void).cxx_destruct;
@end
