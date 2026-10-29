@interface WCMicroMerchantMoreView : MMUIButton
{
    WCMicroMerchantMoreViewModel * _viewModel; // +0x8
    MMUILabel * _textLabel; // +0x10
    UIImageView * _arrowImageView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setViewModel:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)viewModel;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
