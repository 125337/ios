@interface FlutterSpellCheckPlugin : NSObject
{
    UITextChecker * _textChecker; // +0x8
}
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (id)findAllSpellCheckSuggestionsForText:(id)arg1 inLanguage:(id)arg2;
- (id)findSpellCheckSuggestionsForText:(id)arg1 inLanguage:(id)arg2 startingOffset:(long long)arg3;
- (id)textChecker;
- (void)setTextChecker:(id)arg1;
- (void).cxx_destruct;
@end
