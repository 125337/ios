@interface MMFinderLiveFansGroupInputView : UIView <UITextFieldDelegate>
{
    BOOL _showFansGroupSign; // +0x8
    BOOL _isSetDefaultContent; // +0x9
    unsigned long long _maxInputWordCount; // +0x10
    UIFont * _inputTextFont; // +0x18
    UIColor * _contentBackgroundColor; // +0x20
    double _contentCornerRadius; // +0x28
    id /* block */ _inputChangedCallback; // +0x30
    double _inputViewRightInset; // +0x38
    UIView * _contentView; // +0x40
    UIImageView * _fansSignIconView; // +0x48
    MMUILabel * _fansRankLabel; // +0x50
    MMUITextField * _textField; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutFansGroupSignView;
- (void)layoutFansRankLabel;
- (void)layoutTextField;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChanged:(id)arg1;
- (void)handleForInputTextChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setShowFansGroupSign:(BOOL)arg1;
- (void)setInputTextFont:(id)arg1;
- (void)setContentBackgroundColor:(id)arg1;
- (void)updateInputPlaceHolder:(id)arg1 font:(id)arg2 color:(id)arg3;
- (void)updateCursorColor:(id)arg1;
- (void)checkInputIsEmpty;
- (void)setDefaultInputContent;
- (void)clearDefaultInputContent;
- (void)setContentCornerRadius:(double)arg1;
- (BOOL)isIsInputFirstResponder;
- (id)inputText;
- (void)setInputText:(id)arg1;
- (void)resignInputFirstResponder;
- (void)becomeInputFirstResponder;
- (unsigned long long)maxInputWordCount;
- (void)setMaxInputWordCount:(unsigned long long)arg1;
- (BOOL)showFansGroupSign;
- (id)inputTextFont;
- (id)contentBackgroundColor;
- (double)contentCornerRadius;
- (id /* block */)inputChangedCallback;
- (void)setInputChangedCallback:(id /* block */)arg1;
- (double)inputViewRightInset;
- (void)setInputViewRightInset:(double)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)fansSignIconView;
- (void)setFansSignIconView:(id)arg1;
- (id)fansRankLabel;
- (void)setFansRankLabel:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (BOOL)isSetDefaultContent;
- (void)setIsSetDefaultContent:(BOOL)arg1;
- (void).cxx_destruct;
@end
