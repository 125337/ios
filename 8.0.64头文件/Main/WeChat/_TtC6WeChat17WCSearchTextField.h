@interface _TtC6WeChat17WCSearchTextField : MMTagTextField
{
     isGradientCanShow; // +0x8
     labelBackgroundColor; // +0x10
     onGetBackgroundColor; // +0x18
     $__lazy_storage_$_labelBackground; // +0x28
     $__lazy_storage_$_label; // +0x30
     $__lazy_storage_$_rightGradientView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (id)labelBackgroundColor;
- (void)setLabelBackgroundColor:(id)arg1;
- (id /* block */)onGetBackgroundColor;
- (void)setOnGetBackgroundColor:(id /* block */)arg1;
- (void)layoutSubviews;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldEditingDidBegin:(id)arg1;
- (void)onTextFieldEditingDidEnd:(id)arg1;
- (void).cxx_destruct;
@end
