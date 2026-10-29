@interface WCFinderSignatureEditView : MMGrowTextView
{
    id /* block */ _textShouldChangeChecker; // +0xb8
}
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (id /* block */)textShouldChangeChecker;
- (void)setTextShouldChangeChecker:(id /* block */)arg1;
- (void).cxx_destruct;
@end

