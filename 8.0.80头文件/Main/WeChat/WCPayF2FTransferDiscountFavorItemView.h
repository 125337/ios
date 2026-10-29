@interface WCPayF2FTransferDiscountFavorItemView : UIView
{
    id /* block */ _onClick; // +0x8
    UILabel * _titleLabel; // +0x10
    UIImageView * _arrow; // +0x18
    UIView * _highLightMask; // +0x20
}
- (id)init;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)updateTitle:(id)arg1 color:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id /* block */)onClick;
- (void)setOnClick:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrow;
- (void)setArrow:(id)arg1;
- (id)highLightMask;
- (void)setHighLightMask:(id)arg1;
- (void).cxx_destruct;
@end
