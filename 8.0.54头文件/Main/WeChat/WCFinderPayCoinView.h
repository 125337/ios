@interface WCFinderPayCoinView : KindaUIButton
{
    BOOL _isSelected; // +0x8
    UILabel * _headerLabel; // +0x10
    UILabel * _amountLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setHeaderLabel:(id)arg1 productPrice:(unsigned int)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg1;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end

