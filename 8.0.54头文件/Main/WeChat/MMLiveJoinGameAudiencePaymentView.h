@interface MMLiveJoinGameAudiencePaymentView : MMPageSheetBaseView
{
    unsigned int _payment; // +0x8
    id <MMLiveJoinGameAudiencePaymentViewDelegate> _delegate; // +0x10
    UIView * _contentView; // +0x18
    MMUIButton * _backButton; // +0x20
    MMLiveRewardGiftCoinButton * _coinButton; // +0x28
    MMUILabel * _title; // +0x30
    MMUILabel * _payNumLabel; // +0x38
    MMUIButton * _payButton; // +0x40
    MMUILabel * _descLabel; // +0x48
    id <MMLiveRewardGiftSelectionLogicDelegate> _logicDelegate; // +0x50
    long long _balance; // +0x58
}
- (id)initWithPayment:(unsigned int)arg1;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)updateWithPayment:(unsigned int)arg1;
- (void)pageSheetDidAppear;
- (void)fetchWecoinBalance;
- (void)updateWecoinBalance:(long long)arg1;
- (void)onClickBackButton;
- (void)onPayButtonClicked;
- (void)onCoinButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (unsigned int)payment;
- (void)setPayment:(unsigned int)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)coinButton;
- (void)setCoinButton:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)payNumLabel;
- (void)setPayNumLabel:(id)arg1;
- (id)payButton;
- (void)setPayButton:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (long long)balance;
- (void)setBalance:(long long)arg1;
- (void).cxx_destruct;
@end

