@interface FlutterTokenizer : UITextInputStringTokenizer
{
    FlutterTextInputView * _textInputView; // +0x8
}
- (id)initWithTextInput:(id)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (id)lineEnclosingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)textInputView;
- (void)setTextInputView:(id)arg1;
- (void).cxx_destruct;
@end
