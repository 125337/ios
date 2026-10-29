@interface WCRedesignTextItem : WCRedesignBaseItem <UITextFieldDelegate>
{
    BOOL _isWarningStatus; // +0x40
    BOOL _canButtonBreakLine; // +0x41
    WCUITextField * _textField; // +0x48
    unsigned long long _maxLength; // +0x50
    MMUIButton * _clearButton; // +0x58
    MMUILabel * _prefixLabel; // +0x60
    UIButton * _button; // +0x68
    id /* block */ _completion; // +0x70
}
+ (CGRect)mainRectForBounds:(CGRect)arg1 textField:(id)arg2;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)initTextField;
- (void)setM_tip:(id)arg1;
- (void)setEnable:(BOOL)arg1;
- (void)setIsWarningStatus:(BOOL)arg1;
- (id)getValue;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (void)onLayoutContentViewSubviews;
- (BOOL)shouldBreakLineForMaxContentWidth:(double)arg1 itemWidth:(double)arg2;
- (double)buttonWidthForCalLineBreak;
- (void)setPrefix:(id)arg1 color:(id)arg2;
- (id)prefix;
- (void)setSuffixButton:(id)arg1 canBreakLine:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updatePlaceholder;
- (void)onTapClearButton;
- (void)onTapButton;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)textFieldEditingChanged:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (id)textField;
- (void)setTextField:(id)arg1;
- (unsigned long long)maxLength;
- (void)setMaxLength:(unsigned long long)arg1;
- (BOOL)isWarningStatus;
- (id)clearButton;
- (void)setClearButton:(id)arg1;
- (id)prefixLabel;
- (void)setPrefixLabel:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)canButtonBreakLine;
- (void)setCanButtonBreakLine:(BOOL)arg1;
- (void).cxx_destruct;
@end

