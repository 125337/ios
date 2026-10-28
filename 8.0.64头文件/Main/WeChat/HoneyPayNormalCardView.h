@interface HoneyPayNormalCardView : UIView
{
    NSString * _payerUserName; // +0x8
    UIView * _contentView; // +0x10
    UIImageView * _icon; // +0x18
    UIImageView * _backgroundIcon; // +0x20
    UILabel * _cardTypeLabel; // +0x28
}
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)contentView;
- (id)icon;
- (id)backgroundIcon;
- (id)cardTypeLabel;
- (id)payerUserName;
- (void)setPayerUserName:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setBackgroundIcon:(id)arg1;
- (void)setCardTypeLabel:(id)arg1;
- (void).cxx_destruct;
@end
