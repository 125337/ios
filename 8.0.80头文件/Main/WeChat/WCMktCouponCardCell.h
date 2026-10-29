@interface WCMktCouponCardCell : MMMultiMenuTableViewCell
{
    BOOL _bIsFromHistoryPage; // +0x40
    CardElementCouponList * _cellData; // +0x48
    UIView * _containerView; // +0x50
    UIView * _cardBackgroundView; // +0x58
    UIView * _leftCircleView; // +0x60
    UIView * _rightCircleView; // +0x68
    WCPayWebImageView * _logoImgView; // +0x70
    MMUILabel * _titleLabel; // +0x78
    MMUILabel * _descLabel; // +0x80
    UIView * _highlightView; // +0x88
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)updateContentWithCardCellData:(id)arg1 isFromHistoryPage:(BOOL)arg2;
- (id)genTagButtonWithTagData:(id)arg1;
- (id)cellData;
- (void)setCellData:(id)arg1;
- (BOOL)bIsFromHistoryPage;
- (void)setBIsFromHistoryPage:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)cardBackgroundView;
- (void)setCardBackgroundView:(id)arg1;
- (id)leftCircleView;
- (void)setLeftCircleView:(id)arg1;
- (id)rightCircleView;
- (void)setRightCircleView:(id)arg1;
- (id)logoImgView;
- (void)setLogoImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (void).cxx_destruct;
@end
