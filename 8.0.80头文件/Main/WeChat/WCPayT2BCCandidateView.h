@interface WCPayT2BCCandidateView : UIView
{
    WCPayTransToBankCardReceiver * _receiver; // +0x8
    UILabel * _titleLabel; // +0x10
    WCPayWebImageView * _bankIconImageView; // +0x18
    UILabel * _bankLabel; // +0x20
    NSString * _inputText; // +0x28
    UIButton * _maskBtn; // +0x30
    id <WCPayT2BCCandidateViewDelegate> _delegate; // +0x38
}
- (id)initWithReceiver:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithInputText:(id)arg1;
- (void)updateView;
- (void)onTapCandidateView:(id)arg1;
- (id)receiver;
- (void)setReceiver:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)bankIconImageView;
- (void)setBankIconImageView:(id)arg1;
- (id)bankLabel;
- (void)setBankLabel:(id)arg1;
- (id)inputText;
- (void)setInputText:(id)arg1;
- (id)maskBtn;
- (void)setMaskBtn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
