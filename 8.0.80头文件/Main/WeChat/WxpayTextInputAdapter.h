@interface WxpayTextInputAdapter : UIView <UITextInput>
{
    NSMutableString * _shadowText; // +0x8
    _NSRange _selection; // +0x10
    unsigned long long _secureLength; // +0x20
    UIView * _wxpayInputView; // +0x28
    UIView * _zeroHeightAccessoryView; // +0x30
    unsigned long long _connectionGeneration; // +0x38
    BOOL _secureSession; // +0x40
    BOOL _leavingForSceneExit; // +0x41
    _NSRange _markedRange; // +0x48
    NSDictionary * _markedTextStyle; // +0x58
    id <UITextInputDelegate> _inputDelegate; // +0x60
    id <UITextInputTokenizer> _tokenizer; // +0x68
    WxpayEditableSelectionGeometry _selectionGeometry; // +0x70
    BOOL _configuredSecureTextEntry; // +0x178
    long long _configuredKeyboardType; // +0x180
    long long _configuredReturnKeyType; // +0x188
    long long _configuredAutocorrectionType; // +0x190
    long long _configuredKeyboardAppearance; // +0x198
    id /* block */ _commandHandler; // +0x1a0
    id /* block */ _selectionHandler; // +0x1a8
}
- (id)initWithFrame:(CGRect)arg1;
- (unsigned long long)connectionGeneration;
- (BOOL)isSecureSession;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isLeavingForSceneExit;
- (id)inputView;
- (id)inputAccessoryView;
- (long long)keyboardType;
- (long long)returnKeyType;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (long long)spellCheckingType;
- (long long)smartQuotesType;
- (long long)smartDashesType;
- (long long)smartInsertDeleteType;
- (long long)keyboardAppearance;
- (BOOL)enablesReturnKeyAutomatically;
- (BOOL)isSecureTextEntry;
- (BOOL)hasText;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (void)openGeneration:(unsigned long long)arg1 text:(id)arg2 selectionRange:(_NSRange)arg3 secureLength:(unsigned long long)arg4 secure:(BOOL)arg5 customInputView:(id)arg6;
- (id)accessibilityValue;
- (void)updateText:(id)arg1 selectionRange:(_NSRange)arg2 markedRange:(_NSRange)arg3 secureLength:(unsigned long long)arg4 generation:(unsigned long long)arg5;
- (void)showForGeneration:(unsigned long long)arg1;
- (void)hideForGeneration:(unsigned long long)arg1;
- (BOOL)leaveForSceneExit;
- (void)closeGeneration:(unsigned long long)arg1;
- (void)updateSelectionGeometry:(WxpayEditableSelectionGeometry)arg1 generation:(unsigned long long)arg2;
- (void)clearSelectionGeometryForGeneration:(unsigned long long)arg1;
- (id)selectedText;
- (BOOL)supportsLiveText;
- (void)selectAllFromEditMenu;
- (void)deleteSelectionFromEditMenu;
- (void)pasteTextFromEditMenu:(id)arg1;
- (id)inputDelegate;
- (void)setInputDelegate:(id)arg1;
- (id)tokenizer;
- (id)markedTextStyle;
- (void)setMarkedTextStyle:(id)arg1;
- (id)beginningOfDocument;
- (id)endOfDocument;
- (id)selectedTextRange;
- (void)setSelectedTextRange:(id)arg1;
- (id)markedTextRange;
- (id)textInRange:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)unmarkText;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (CGRect)firstRectForRange:(id)arg1;
- (CGRect)caretRectForPosition:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)closestPositionToPoint:(CGPoint)arg1;
- (id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2;
- (id)characterRangeAtPoint:(CGPoint)arg1;
- (long long)configuredKeyboardType;
- (void)setConfiguredKeyboardType:(long long)arg1;
- (long long)configuredReturnKeyType;
- (void)setConfiguredReturnKeyType:(long long)arg1;
- (long long)configuredAutocorrectionType;
- (void)setConfiguredAutocorrectionType:(long long)arg1;
- (long long)configuredKeyboardAppearance;
- (void)setConfiguredKeyboardAppearance:(long long)arg1;
- (BOOL)configuredSecureTextEntry;
- (void)setConfiguredSecureTextEntry:(BOOL)arg1;
- (id /* block */)commandHandler;
- (void)setCommandHandler:(id /* block */)arg1;
- (id /* block */)selectionHandler;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
