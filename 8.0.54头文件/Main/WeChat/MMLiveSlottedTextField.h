@interface MMLiveSlottedTextField : UIView <UITextInput>
{
    id <MMLiveSlottedTextFieldDelegate> _delegate; // +0x8
    id <UITextInputDelegate> _inputDelegate; // +0x10
    NSDictionary * _markedTextStyle; // +0x18
    NSString * _instanceId; // +0x20
    NSMutableString * _content; // +0x28
    MMLiveSlottedTextFieldRange * _selectedRange; // +0x30
    MMLiveSlottedTextFieldRange * _markedRange; // +0x38
    id <UITextInputTokenizer> _textTokenizer; // +0x40
    NSCharacterSet * _whitespaceSet; // +0x48
    EmoticonParser * _wechatEmoticonParser; // +0x50
    NSMutableDictionary * _wechatEmoticons; // +0x58
    double _recommendedAspectRatio; // +0x60
    UIView * _containerView; // +0x68
    NSArray * _slots; // +0x70
}
- (id)initWithSlotCount:(unsigned long long)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)slotBackgroundColor;
- (void)setSlotBackgroundColor:(id)arg1;
- (id)slotBorderColor;
- (void)setSlotBorderColor:(id)arg1;
- (id)selectedSlotBorderColor;
- (void)setSelectedSlotBorderColor:(id)arg1;
- (id)invalidSelectedSlotBorderColor;
- (void)setInvalidSelectedSlotBorderColor:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (BOOL)inMultistageInputSession;
- (BOOL)canBecomeFirstResponder;
- (BOOL)hasText;
- (long long)autocorrectionType;
- (long long)spellCheckingType;
- (long long)returnKeyType;
- (id)selectedTextRange;
- (void)setSelectedTextRange:(id)arg1;
- (id)markedTextRange;
- (id)beginningOfDocument;
- (id)endOfDocument;
- (id)tokenizer;
- (void)insertWeChatEmoticon:(id)arg1;
- (BOOL)validateSlots;
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
- (id)selectionRectsForRange:(id)arg1;
- (id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2;
- (id)characterRangeAtPoint:(CGPoint)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)onTappedWithGesture:(id)arg1;
- (void)initializeComponentsWithSlotCount:(unsigned long long)arg1;
- (void)updateSlotsContent;
- (void)updateSlotsSelection;
- (void)placeWeChatEmoticon:(id)arg1 inSlot:(long long)arg2;
- (id)imageForWeChatEmoticonInSlot:(long long)arg1;
- (id)scanTextForWeChatEmoticons:(id)arg1 result:(id *)arg2;
- (id)nonWhitespaceSet;
- (void)logState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)inputDelegate;
- (void)setInputDelegate:(id)arg1;
- (id)markedTextStyle;
- (void)setMarkedTextStyle:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)selectedRange;
- (void)setSelectedRange:(id)arg1;
- (id)markedRange;
- (void)setMarkedRange:(id)arg1;
- (id)textTokenizer;
- (void)setTextTokenizer:(id)arg1;
- (id)whitespaceSet;
- (void)setWhitespaceSet:(id)arg1;
- (id)wechatEmoticonParser;
- (void)setWechatEmoticonParser:(id)arg1;
- (id)wechatEmoticons;
- (void)setWechatEmoticons:(id)arg1;
- (double)recommendedAspectRatio;
- (void)setRecommendedAspectRatio:(double)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)slots;
- (void)setSlots:(id)arg1;
- (void).cxx_destruct;
@end

