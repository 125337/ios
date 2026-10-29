@interface MMLiveBubbleECPriceComponent : UIView <MMLiveBubbleComponent>
{
    MMUILabel * _currentPriceLabel; // +0x8
    MMUILabel * _currentPriceSuffixLabel; // +0x10
    MMUILabel * _currentPriceDescriptionLabel; // +0x18
    MMUILabel * _listPriceLabel; // +0x20
    MMUILabel * _priceSuffixDescriptionLabel; // +0x28
    MMLiveBubbleECPriceComponentInfo * _info; // +0x30
    NSString * _infoRawJSON; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)mainColor;
- (id)listPriceColor;
- (void)initSubviews;
- (void)updateWithJSONString:(id)arg1;
- (void)applyInfo;
- (void)updateSubviewsHidden;
- (double)leftSpacingOf:(id)arg1;
- (void)layoutSubviews;
- (void)layoutHorizontal;
- (void)layoutVertical;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)currentPriceLabel;
- (void)setCurrentPriceLabel:(id)arg1;
- (id)currentPriceSuffixLabel;
- (void)setCurrentPriceSuffixLabel:(id)arg1;
- (id)currentPriceDescriptionLabel;
- (void)setCurrentPriceDescriptionLabel:(id)arg1;
- (id)listPriceLabel;
- (void)setListPriceLabel:(id)arg1;
- (id)priceSuffixDescriptionLabel;
- (void)setPriceSuffixDescriptionLabel:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)infoRawJSON;
- (void)setInfoRawJSON:(id)arg1;
- (void).cxx_destruct;
@end
