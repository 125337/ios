@interface HoneyPayReceiverCardView : UIView
{
    id <HoneyPayReceiverCardViewDelegate> _delegate; // +0x8
    WCPayBindCardInfo * _info; // +0x10
    WCPayControlData * _data; // +0x18
    UIButton * _button; // +0x20
    UIView * _contentView; // +0x28
    WCPayWebImageView * _icon; // +0x30
    UILabel * _cardTypeLabel; // +0x38
    UILabel * _sendByLabel; // +0x40
    UILabel * _balanceLabel; // +0x48
    UILabel * _balanceTipLabel; // +0x50
    UIImageView * _backgroundIcon; // +0x58
}
- (id)initWithInfo:(id)arg1 data:(id)arg2;
- (void)layout;
- (void)click;
- (id)button;
- (id)contentView;
- (id)icon;
- (id)cardTypeLabel;
- (id)sendByLabel;
- (id)balanceLabel;
- (id)balanceTipLabel;
- (id)backgroundIcon;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setCardTypeLabel:(id)arg1;
- (void)setSendByLabel:(id)arg1;
- (void)setBalanceLabel:(id)arg1;
- (void)setBalanceTipLabel:(id)arg1;
- (void)setBackgroundIcon:(id)arg1;
- (void).cxx_destruct;
@end

