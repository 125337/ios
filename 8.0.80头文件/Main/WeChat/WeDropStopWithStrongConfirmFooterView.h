@interface WeDropStopWithStrongConfirmFooterView : WeDropStopFooterView
{
    NSString * _confirmTitle; // +0x8
    UIButton * _confirmBtn; // +0x10
}
- (void)initSubviews;
- (void)setConfirmTitle:(id)arg1;
- (void)onConfirm;
- (id)confirmTitle;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (void).cxx_destruct;
@end
