@interface WCPayInputView : UIView <UITextFieldDelegate>
{
    BOOL _enableResize; // +0x8
    BOOL _passwordStyle; // +0x9
    id <WCPayInputViewDelegate> _delegate; // +0x10
    long long _inputCount; // +0x18
    UIColor * _fontColor; // +0x20
    long long _fontSize; // +0x28
    long long _rectangleMargin; // +0x30
    unsigned long long _borders; // +0x38
    double _borderWidth; // +0x40
    UIColor * _borderColor; // +0x48
    UITextField * _textField; // +0x50
    NSMutableArray * _labels; // +0x58
    NSMutableArray * _dots; // +0x60
    long long _pwdViewStyle; // +0x68
    long long _currentCount; // +0x70
    double _startPadding; // +0x78
    CGSize _rectangleSize; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateRectangleSize;
- (void)layoutSubviews;
- (void)layout;
- (void)showDotWithCount:(long long)arg1;
- (void)addPasswordBorder:(id)arg1;
- (void)updatePwdViewStyle:(long long)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)setInputCount:(long long)arg1;
- (id)textField;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)inputCount;
- (id)fontColor;
- (void)setFontColor:(id)arg1;
- (long long)fontSize;
- (void)setFontSize:(long long)arg1;
- (CGSize)rectangleSize;
- (void)setRectangleSize:(CGSize)arg1;
- (long long)rectangleMargin;
- (void)setRectangleMargin:(long long)arg1;
- (unsigned long long)borders;
- (void)setBorders:(unsigned long long)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (void)setTextField:(id)arg1;
- (BOOL)enableResize;
- (void)setEnableResize:(BOOL)arg1;
- (BOOL)passwordStyle;
- (void)setPasswordStyle:(BOOL)arg1;
- (id)labels;
- (void)setLabels:(id)arg1;
- (id)dots;
- (void)setDots:(id)arg1;
- (long long)pwdViewStyle;
- (void)setPwdViewStyle:(long long)arg1;
- (long long)currentCount;
- (void)setCurrentCount:(long long)arg1;
- (double)startPadding;
- (void)setStartPadding:(double)arg1;
- (void).cxx_destruct;
@end
