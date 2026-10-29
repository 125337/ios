@interface WCMktTicketItemCell : MMMultiMenuTableViewCell
{
    id <WCMktTicketItemCellDelegate> _delegate; // +0x40
    PageTicketElement * _elemData; // +0x48
    PageTicketJumpElement * _jumpElemData; // +0x50
    UIView * _containerView; // +0x58
    WCPayWebImageView * _logoImgView; // +0x60
    MMUILabel * _titleLabel; // +0x68
    MMUILabel * _descLabel; // +0x70
    UIImageView * _arrowImgView; // +0x78
    UIView * _tagListView; // +0x80
    WCPayWebImageView * _cardBackgroundView; // +0x88
    UIView * _maskView; // +0x90
    CAGradientLayer * _gradientLayer; // +0x98
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateContentWithTicketElemData:(id)arg1;
- (id)genTagButtonWithTagData:(id)arg1;
- (void)updateContentWithJumpElemData:(id)arg1;
- (void)genContainerView;
- (void)genLogoImgView;
- (void)genTitleLabel;
- (void)genDescLabel;
- (void)genCardBackgroundView;
- (void)genMaskView;
- (void)genGradientLayer;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)elemData;
- (void)setElemData:(id)arg1;
- (id)jumpElemData;
- (void)setJumpElemData:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)logoImgView;
- (void)setLogoImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)arrowImgView;
- (void)setArrowImgView:(id)arg1;
- (id)tagListView;
- (void)setTagListView:(id)arg1;
- (id)cardBackgroundView;
- (void)setCardBackgroundView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

