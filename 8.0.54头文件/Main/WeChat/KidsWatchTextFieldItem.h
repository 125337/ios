@interface KidsWatchTextFieldItem : NSObject <UITextFieldDelegate>
{
    BOOL _useRawLength; // +0x8
    unsigned int _maxInputLength; // +0xc
    KidsWatchTextFieldItem * _nextItem; // +0x10
    UITextField * _textField; // +0x18
    id /* block */ _textHandler; // +0x20
    id /* block */ _textChangeHandler; // +0x28
}
- (id)init;
- (void)initTextField;
- (void)setNextItem:(id)arg1;
- (void)onTextFieldTextDidChanged:(id)arg1;
- (void)onTextFieldDidEndOnExit:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (unsigned int)maxInputLength;
- (void)setMaxInputLength:(unsigned int)arg1;
- (BOOL)useRawLength;
- (void)setUseRawLength:(BOOL)arg1;
- (id)nextItem;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id /* block */)textHandler;
- (void)setTextHandler:(id /* block */)arg1;
- (id /* block */)textChangeHandler;
- (void)setTextChangeHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

