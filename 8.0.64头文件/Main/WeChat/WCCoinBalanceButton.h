@interface WCCoinBalanceButton : UIButton
{
    UILabel * _balanceLabel; // +0x8
    UIImageView * _icon; // +0x10
    UIImageView * _arrow; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)balanceLabel;
- (void)setBalanceLabel:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)arrow;
- (void)setArrow:(id)arg1;
- (void).cxx_destruct;
@end
