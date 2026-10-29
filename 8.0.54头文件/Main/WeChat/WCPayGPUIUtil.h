@interface WCPayGPUIUtil : NSObject
+ (id)genCellInputContentTipsLabel;
+ (id)genCellInputContentTextFieldWithFrame:(CGRect)arg1 textFieldDelegate:(id)arg2 textFieldDidChangeTarget:(id)arg3 didChangeCallbackSelector:(SEL)arg4;
+ (id)genCellInputContentTextViewWithFrame:(CGRect)arg1 textViewDelegate:(id)arg2;
+ (id)genDecimalPadKeyboardDoneBtnToolBarWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)genCellInputContentRichTextViewWithLinkDeleagte:(id)arg1;
+ (id)genCenterContentLabel;
+ (void)setTextFieldDisplayValueShortestWithValue:(double)arg1 textField:(id)arg2;
+ (unsigned long long)getCorrectIntValueFromDouble:(double)arg1;
+ (BOOL)isSelectInvalidContact:(id)arg1;
@end

