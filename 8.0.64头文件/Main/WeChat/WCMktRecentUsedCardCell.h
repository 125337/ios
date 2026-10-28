@interface WCMktRecentUsedCardCell : MMMultiMenuTableViewCell <WCPayWebImageViewDelegate>
{
    CardHomePageRecentlyUsedCell * _cellData; // +0x40
    UIView * _containerView; // +0x48
    WCPayWebImageView * _logoImgView; // +0x50
    MMUILabel * _titleLabel; // +0x58
    MMUILabel * _descLabel; // +0x60
    WCPayWebImageView * _cardBackgroundImgView; // +0x68
    CAGradientLayer * _gradientLayer; // +0x70
    UIView * _trafficIconView; // +0x78
    UIView * _highlightView; // +0x80
    UIView * _maskLayerView; // +0x88
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)updateContentWithRecentlyUsedCellData:(id)arg1;
- (id)containerView;
- (id)highlightView;
- (id)cardBackgroundImgView;
- (id)gradientLayer;
- (id)maskLayerView;
- (id)logoImgView;
- (id)titleLabel;
- (id)descLabel;
- (id)trafficIconView;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)cellData;
- (void)setCellData:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setLogoImgView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setCardBackgroundImgView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setTrafficIconView:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setMaskLayerView:(id)arg1;
- (void).cxx_destruct;
@end
