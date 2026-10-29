@interface KindaMultiLineEditText : KindaView <UITextViewDelegate, MMKMultiLineEditText>
{
    double _textSize; // +0xa8
    MMDynamicColor * _textColor; // +0xb0
    MMDynamicColor * _hintColor; // +0xb8
    long long _textAlign; // +0xc0
    NSString * _fontName; // +0xc8
    int _maxLength; // +0xd0
    MMTextView * _textView; // +0xd8
    MMVoidCallback * _textEndEditingCallBack; // +0xe0
    MMVoidStringCallback * _textChangedCallback; // +0xe8
    MMVoidBoolCallback * _onFocusChangeCallback; // +0xf0
}
- (id)init;
- (id)getView;
- (void)setText:(id)arg1;
- (id)getText;
- (void)setTextSize:(float)arg1;
- (float)getTextSize;
- (void)setTextColor:(id)arg1;
- (id)getTextColor;
- (void)setTextFont:(id)arg1;
- (id)getTextFont;
- (void)setTextAlign:(long long)arg1;
- (long long)getTextAlign;
- (void)setHint:(id)arg1;
- (id)getHint;
- (void)setHintColor:(id)arg1;
- (id)getHintColor;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)setMaxLength:(int)arg1;
- (int)getMaxLength;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)getEnabled;
- (void)setOnTextEndEditingImpl:(id)arg1;
- (void)setOnFocusChangedImpl:(id)arg1;
- (void)setOnTextChangedImpl:(id)arg1;
- (double)currentMinHeight;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)textEndEditingCallBack;
- (void)setTextEndEditingCallBack:(id)arg1;
- (id)textChangedCallback;
- (void)setTextChangedCallback:(id)arg1;
- (id)onFocusChangeCallback;
- (void)setOnFocusChangeCallback:(id)arg1;
- (void).cxx_destruct;
@end
