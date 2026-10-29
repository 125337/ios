@interface WCPayLQTRedeemSuccViewController : WCPayPaidSuccessStatusViewController
{
    UIView * _redeemBackgroundView; // +0x90
    UIImageView * _redeemImageView; // +0x98
    UILabel * _titleLabel; // +0xa0
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

