@interface WeDropConfirmFooterView : WeDropBaseFooterView
{
    id <WeDropConfirmFooterDelegate> _delegate; // +0x8
    NSString * _confirmTitle; // +0x10
    UIButton * _confirmBtn; // +0x18
}
- (void)initSubviews;
- (void)onConfirm;
- (void)setConfirmTitle:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)confirmTitle;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (void).cxx_destruct;
@end
