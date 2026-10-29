@interface WAMiniToolShareUseTipPageSheet : WAPageSheet
{
    id /* block */ _confirmBlock; // +0x8
    NSString * _descText; // +0x10
    NSString * _confirmText; // +0x18
    UILabel * _descLabel; // +0x20
    UIButton * _checkboxButton; // +0x28
    UILabel * _checkboxLabel; // +0x30
    UIButton * _checkboxHitButton; // +0x38
    UIButton * _cancelButton; // +0x40
    UIButton * _confirmButton; // +0x48
}
- (id)initWithDescText:(id)arg1 confirmText:(id)arg2;
- (id)descTextOrDefault;
- (id)confirmTextOrDefault;
- (double)contentHeight;
- (double)textHeight:(id)arg1 font:(id)arg2 maxWidth:(double)arg3 lineSpacing:(double)arg4;
- (void)setupUI;
- (double)checkboxLabelWidth;
- (void)onCheckboxClick;
- (void)onCancelButtonClick;
- (void)onConfirmButtonClick;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (id)confirmText;
- (void)setConfirmText:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)checkboxButton;
- (void)setCheckboxButton:(id)arg1;
- (id)checkboxLabel;
- (void)setCheckboxLabel:(id)arg1;
- (id)checkboxHitButton;
- (void)setCheckboxHitButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
