@interface WCFinderMembershipPaymentBottomView : UIView
{
    id <WCFinderMembershipPaymentBottomViewDelegate> _delegate; // +0x8
    WCFinderMaskButton * _confirmButton; // +0x10
    UIView * _topLine; // +0x18
    UIImageView * _priceCoinIcon; // +0x20
    UILabel * _priceLabel; // +0x28
    UILabel * _cycleLabel; // +0x30
    NSString * _priceLabelStr; // +0x38
    NSString * _confirmBtnStr; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 priceLabelStr:(id)arg2 confirmBtnStr:(id)arg3;
- (void)setupSubviews;
- (void)updateMemberPrice:(unsigned long long)arg1;
- (void)onClickConfirm;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)priceCoinIcon;
- (void)setPriceCoinIcon:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)cycleLabel;
- (void)setCycleLabel:(id)arg1;
- (id)priceLabelStr;
- (void)setPriceLabelStr:(id)arg1;
- (id)confirmBtnStr;
- (void)setConfirmBtnStr:(id)arg1;
- (void).cxx_destruct;
@end
