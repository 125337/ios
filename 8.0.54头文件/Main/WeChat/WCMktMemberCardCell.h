@interface WCMktMemberCardCell : MMMultiMenuTableViewCell <WCPayWebImageViewDelegate>
{
    BOOL _bIsFromHistoryPage; // +0x40
    CardElementCouponList * _cellData; // +0x48
    UIView * _containerView; // +0x50
    WCPayWebImageView * _logoImgView; // +0x58
    MMUILabel * _titleLabel; // +0x60
    MMUILabel * _descLabel; // +0x68
    WCPayWebImageView * _cardBackgroundImgView; // +0x70
    CAGradientLayer * _gradientLayer; // +0x78
    UIView * _highlightView; // +0x80
    UIView * _maskLayerView; // +0x88
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)updateContentWithMemberCardCellData:(id)arg1 isFromHistoryPage:(BOOL)arg2;
- (id)containerView;
- (id)highlightView;
- (id)cardBackgroundImgView;
- (id)gradientLayer;
- (id)maskLayerView;
- (id)logoImgView;
- (id)titleLabel;
- (id)descLabel;
- (id)genTagButtonWithTagData:(id)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)cellData;
- (void)setCellData:(id)arg1;
- (BOOL)bIsFromHistoryPage;
- (void)setBIsFromHistoryPage:(BOOL)arg1;
- (void)setContainerView:(id)arg1;
- (void)setLogoImgView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setCardBackgroundImgView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setMaskLayerView:(id)arg1;
- (void).cxx_destruct;
@end

