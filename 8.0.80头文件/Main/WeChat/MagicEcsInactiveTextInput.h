@interface MagicEcsInactiveTextInput : UIView <UITextInput>
{
    id <UITextInputTokenizer> _tokenizer; // +0x8
    id <UITextInputDelegate> inputDelegate; // +0x10
    UITextRange * markedTextRange; // +0x18
    NSDictionary * markedTextStyle; // +0x20
    NSString * _text; // +0x28
}
- (id)beginningOfDocument;
- (id)endOfDocument;
- (id)tokenizer;
- (id)selectedTextRange;
- (void)setSelectedTextRange:(id)arg1;
- (BOOL)hasText;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
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
- (id)inputDelegate;
- (void)setInputDelegate:(id)arg1;
- (id)markedTextRange;
- (id)markedTextStyle;
- (void)setMarkedTextStyle:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void).cxx_destruct;
@end
