@interface WCPayLQTRedeemSuccViewController : WCPayPaidSuccessStatusViewController
{
    UIView * _redeemBackgroundView; // +0x98
    UIImageView * _redeemImageView; // +0xa0
    UILabel * _titleLabel; // +0xa8
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)redeemBackgroundView;
- (void)setRedeemBackgroundView:(id)arg1;
- (id)redeemImageView;
- (void)setRedeemImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
