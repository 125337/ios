@interface MMUITextField : UITextField
{
    unsigned long long _maxTextLength; // +0x8
    id <MMUITextFieldDelegate> _mmDelegate; // +0x10
    double _clearButtonRightMargin; // +0x18
    CGSize _clearButtonSize; // +0x20
    UIEdgeInsets _contenInsets; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (CGRect)textRectForBounds:(CGRect)arg1;
- (CGRect)placeholderRectForBounds:(CGRect)arg1;
- (CGRect)editingRectForBounds:(CGRect)arg1;
- (CGRect)textsRectForBounds:(CGRect)arg1;
- (CGRect)clearButtonRectForBounds:(CGRect)arg1;
- (UIEdgeInsets)__contentInsets;
- (UIEdgeInsets)contenInsets;
- (void)setContenInsets:(UIEdgeInsets)arg1;
- (unsigned long long)maxTextLength;
- (void)setMaxTextLength:(unsigned long long)arg1;
- (id)mmDelegate;
- (void)setMmDelegate:(id)arg1;
- (double)clearButtonRightMargin;
- (void)setClearButtonRightMargin:(double)arg1;
- (CGSize)clearButtonSize;
- (void)setClearButtonSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

