@interface WCMktInvalidTicketItemCell : MMMultiMenuTableViewCell
{
    id <WCMktInvalidTicketItemCellDelegate> _delegate; // +0x40
    PageTicketElement * _elemData; // +0x48
    UIView * _containerView; // +0x50
    WCPayWebImageView * _logoImgView; // +0x58
    MMUILabel * _titleLabel; // +0x60
    MMUILabel * _descLabel; // +0x68
    UIView * _tagListView; // +0x70
    WCPayWebImageView * _cardBackgroundView; // +0x78
    UIView * _mktMaskView; // +0x80
    CAGradientLayer * _gradientLayer; // +0x88
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateContentWithInvalidTicketElemData:(id)arg1;
- (id)genTagButtonWithTagData:(id)arg1;
- (void)genContainerView;
- (void)genLogoImgView;
- (void)genTitleLabel;
- (void)genDescLabel;
- (void)genCardBackgroundView;
- (void)genMktMaskView;
- (void)genGradientLayer;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)elemData;
- (void)setElemData:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)logoImgView;
- (void)setLogoImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)tagListView;
- (void)setTagListView:(id)arg1;
- (id)cardBackgroundView;
- (void)setCardBackgroundView:(id)arg1;
- (id)mktMaskView;
- (void)setMktMaskView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
