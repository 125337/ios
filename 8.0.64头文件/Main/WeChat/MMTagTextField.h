@interface MMTagTextField : UITextField
{
    double _tipsLabelFontSize; // +0x8
    double _textEditMarginLeft; // +0x10
    UIInputViewController * _inputAccessoryViewController; // +0x18
    UILabel * _tipsLabel; // +0x20
}
- (void)internalInitTipsLabel;
- (void)setTipsLabelText:(id)arg1;
- (void)setCustomTipsLabelHidden:(BOOL)arg1;
- (void)setTagAttributeText:(id)arg1;
- (void)layoutSubviews;
- (CGRect)textRectForBounds:(CGRect)arg1;
- (CGRect)editingRectForBounds:(CGRect)arg1;
- (void)customizeClearButtonColor;
- (id)findTextFieldActionButton;
- (id)recursiveFindTextFieldActionButton:(id)arg1;
- (void)bringTipsLabelToFrontIfNeed;
- (id)selectedText;
- (double)tipsLabelFontSize;
- (void)setTipsLabelFontSize:(double)arg1;
- (double)textEditMarginLeft;
- (void)setTextEditMarginLeft:(double)arg1;
- (id)inputAccessoryViewController;
- (void)setInputAccessoryViewController:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
