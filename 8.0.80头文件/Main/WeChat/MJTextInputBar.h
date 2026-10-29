@interface MJTextInputBar : UIView
{
    MMGrowTextView * _growTextView; // +0x8
    UIButton * _confirmButton; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (id)growTextView;
- (id)confirmButton;
- (void)setGrowTextView:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
