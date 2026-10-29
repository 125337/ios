@interface MMFinderLiveAudienceDropGiftDetailCardView : MMFinderLiveDetailCardView
{
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _descLabel; // +0x20
    MMUILabel * _subDescLabel; // +0x28
    MMWebImageView * _giftImageView; // +0x30
    UIImageView * _liveIconsImageView; // +0x38
    MMUILabel * _liveIconSumLabel; // +0x40
    UIView * _liveIconContainerView; // +0x48
    UIFont * _titleFont; // +0x50
    UIFont * _descFont; // +0x58
    UIFont * _coinSumFont; // +0x60
    UIFont * _subDescFont; // +0x68
    UIColor * _titleColor; // +0x70
    UIColor * _descColor; // +0x78
    UIColor * _coinSumColor; // +0x80
    UIColor * _subDescColor; // +0x88
}
- (void)setup;
- (void)layoutSubviews;
- (void)refreshLayout;
- (void)updateViewModel:(id)arg1;
- (id)titleLabel;
- (id)titleFont;
- (id)descLabel;
- (id)giftImageView;
- (id)subDescLabel;
- (id)liveIconSumLabel;
- (id)liveIconContainerView;
- (id)liveIconsImageView;
- (id)descFont;
- (id)coinSumFont;
- (id)titleColor;
- (id)descColor;
- (id)coinSumColor;
- (id)subDescColor;
- (id)subDescFont;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setSubDescLabel:(id)arg1;
- (void)setGiftImageView:(id)arg1;
- (void)setLiveIconsImageView:(id)arg1;
- (void)setLiveIconSumLabel:(id)arg1;
- (void)setLiveIconContainerView:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setDescFont:(id)arg1;
- (void)setCoinSumFont:(id)arg1;
- (void)setSubDescFont:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setDescColor:(id)arg1;
- (void)setCoinSumColor:(id)arg1;
- (void)setSubDescColor:(id)arg1;
- (void).cxx_destruct;
@end

