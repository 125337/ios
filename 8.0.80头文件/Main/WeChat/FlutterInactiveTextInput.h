@interface FlutterInactiveTextInput : UIView <UITextInput>
{
    UITextPosition * _beginningOfDocument; // +0x8
    UITextPosition * _endOfDocument; // +0x10
    id <UITextInputDelegate> _inputDelegate; // +0x18
    UITextRange * _markedTextRange; // +0x20
    NSDictionary * _markedTextStyle; // +0x28
    UITextRange * _selectedTextRange; // +0x30
    id <UITextInputTokenizer> _tokenizer; // +0x38
    NSString * _text; // +0x40
}
- (BOOL)hasText;
- (id)textInRange:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)unmarkText;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (CGRect)firstRectForRange:(id)arg1;
- (CGRect)caretRectForPosition:(id)arg1;
- (id)closestPositionToPoint:(CGPoint)arg1;
- (id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (id)characterRangeAtPoint:(CGPoint)arg1;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (id)beginningOfDocument;
- (id)endOfDocument;
- (id)inputDelegate;
- (void)setInputDelegate:(id)arg1;
- (id)markedTextRange;
- (id)markedTextStyle;
- (void)setMarkedTextStyle:(id)arg1;
- (id)selectedTextRange;
- (void)setSelectedTextRange:(id)arg1;
- (id)tokenizer;
- (id)text;
- (void)setText:(id)arg1;
- (void).cxx_destruct;
@end
