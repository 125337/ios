@interface MMFinderLivePaidConnectMicAudienceBidPanel : MMPageSheetBaseView
{
    id /* block */ _onConfirmBidCallback; // +0x8
    unsigned long long _minPrice; // +0x10
    unsigned long long _stepPrice; // +0x18
    unsigned long long _curPrice; // +0x20
    MMFinderLiveWecoinLabelView * _wecoinView; // +0x28
    MMUIButton * _plusButton; // +0x30
    MMUIButton * _minusButton; // +0x38
    UIButton * _bidButton; // +0x40
}
- (id)initWithMinPrice:(unsigned long long)arg1 incrementStepPrice:(unsigned long long)arg2;
- (void)initViews;
- (id)genOperationButtonWithIcon:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setupPageSheetConfig;
- (void)onMinus;
- (void)onPlus;
- (void)onTapBid;
- (void)setCurPrice:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id /* block */)onConfirmBidCallback;
- (void)setOnConfirmBidCallback:(id /* block */)arg1;
- (unsigned long long)minPrice;
- (void)setMinPrice:(unsigned long long)arg1;
- (unsigned long long)stepPrice;
- (void)setStepPrice:(unsigned long long)arg1;
- (unsigned long long)curPrice;
- (id)wecoinView;
- (void)setWecoinView:(id)arg1;
- (id)plusButton;
- (void)setPlusButton:(id)arg1;
- (id)minusButton;
- (void)setMinusButton:(id)arg1;
- (id)bidButton;
- (void)setBidButton:(id)arg1;
- (void).cxx_destruct;
@end
