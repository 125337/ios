@interface WCPayNFCCardDepositView : UIView
{
    BOOL _isFreeFilled; // +0x8
    BOOL _isSelected; // +0x9
    long long _depositAmount; // +0x10
    id <WCPayNFCCardDepositViewDelegate> _delegate; // +0x18
    UIView * _labelView; // +0x20
    UILabel * _amountLabel; // +0x28
    UILabel * _suffixLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onTapDepositView:(id)arg1;
- (void)updateView;
- (void)setDepositAmount:(long long)arg1;
- (void)setSelected:(BOOL)arg1;
- (long long)depositAmount;
- (BOOL)isFreeFilled;
- (void)setIsFreeFilled:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)labelView;
- (void)setLabelView:(id)arg1;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg1;
- (id)suffixLabel;
- (void)setSuffixLabel:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end

