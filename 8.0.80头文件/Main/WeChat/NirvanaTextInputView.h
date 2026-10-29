@interface NirvanaTextInputView : UIView <UITextInput, UITextInputTraits, UIScribbleInteractionDelegate, UIEditMenuInteractionDelegate>
{
    int _textInputClient; // +0x8
    const char * _selectionAffinity; // +0x10
    NirvanaTextRange * _selectedTextRange; // +0x18
    UIInputViewController * _inputViewController; // +0x20
    CGRect _cachedFirstRect; // +0x28
    BOOL _hasPlaceholder; // +0x48
    BOOL _isSystemKeyboardEnabled; // +0x49
    BOOL _enableInteractiveSelection; // +0x4a
    UITextInteraction * _textInteraction; // +0x50
    BOOL _enablesReturnKeyAutomatically; // +0x58
    BOOL _secureTextEntry; // +0x59
    BOOL _enableDeltaModel; // +0x5a
    BOOL _preventCursorDismissWhenResignFirstResponder; // +0x5b
    BOOL _isResigningByPlugin; // +0x5c
    BOOL _isVisibleToAutofill; // +0x5d
    BOOL _accessibilityEnabled; // +0x5e
    id <UITextInputTokenizer> _tokenizer; // +0x60
    NSMutableString * _text; // +0x68
    UITextRange * _markedTextRange; // +0x70
    NSDictionary * _markedTextStyle; // +0x78
    id <UITextInputDelegate> _inputDelegate; // +0x80
    NSMutableArray * _pendingDeltas; // +0x88
    long long _autocapitalizationType; // +0x90
    long long _autocorrectionType; // +0x98
    long long _spellCheckingType; // +0xa0
    long long _keyboardAppearance; // +0xa8
    long long _keyboardType; // +0xb0
    long long _returnKeyType; // +0xb8
    long long _smartQuotesType; // +0xc0
    long long _smartDashesType; // +0xc8
    NSString * _textContentType; // +0xd0
    UIAccessibilityElement * _backingTextInputAccessibilityObject; // +0xd8
    NSArray * _selectionRects; // +0xe0
    UIEditMenuInteraction * _editMenuInteraction; // +0xe8
    NirvanaTextInputPlugin * _textInputPlugin; // +0xf0
    NSString * _autofillId; // +0xf8
    NSString * _temporarilyDeletedComposedCharacter; // +0x100
    NSArray * _editMenuItems; // +0x108
    CGRect _markedRect; // +0x110
    CGRect _editMenuTargetRect; // +0x130
    CATransform3D _editableTransform; // +0x150
}
- (id)initWithOwner:(id)arg1;
- (void)handleSearchWebAction;
- (void)handleLookUpAction;
- (void)handleShareAction;
- (id)searchCommandWithSelector:(SEL)arg1 element:(id)arg2;
- (void)addBasicEditingCommandToItems:(id)arg1 type:(id)arg2 selector:(SEL)arg3 suggestedMenu:(id)arg4;
- (void)addAdditionalBasicCommandToItems:(id)arg1 type:(id)arg2 selector:(SEL)arg3 encodedItem:(id)arg4;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (CGRect)editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (void)showEditMenuWithTargetRect:(CGRect)arg1 items:(id)arg2;
- (void)hideEditMenu;
- (void)configureWithDictionary:(id)arg1;
- (id)textContentType;
- (id)insertionPointColor;
- (id)selectionBarColor;
- (id)selectionHighlightColor;
- (id)inputViewController;
- (id)textInputDelegate;
- (void)setTextInputClient:(int)arg1;
- (id)textInteraction;
- (void)setTextInputState:(id)arg1;
- (_NSRange)clampSelectionFromBase:(int)arg1 extent:(int)arg2 forText:(id)arg3;
- (_NSRange)clampSelection:(_NSRange)arg1 forText:(id)arg2;
- (BOOL)isVisibleToAutofill;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)delete:(id)arg1;
- (void)selectAll:(id)arg1;
- (id)tokenizer;
- (id)selectedTextRange;
- (void)setSelectedTextRangeLocal:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (id)textInRange:(id)arg1;
- (void)replaceRangeLocal:(_NSRange)arg1 withText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (BOOL)shouldChangeTextInRange:(id)arg1 replacementText:(id)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)unmarkText;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (unsigned long long)decrementOffsetPosition:(unsigned long long)arg1;
- (unsigned long long)incrementOffsetPosition:(unsigned long long)arg1;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)beginningOfDocument;
- (id)endOfDocument;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setMarkedRect:(CGRect)arg1;
- (void)setEditableTransform:(id)arg1;
- (CGRect)localRectFromFrameworkTransform:(CGRect)arg1;
- (CGRect)firstRectForRange:(id)arg1;
- (CGRect)caretRectForPosition:(id)arg1;
- (id)closestPositionToPoint:(CGPoint)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2;
- (id)characterRangeAtPoint:(CGPoint)arg1;
- (void)updateEditingState;
- (BOOL)hasText;
- (void)insertText:(id)arg1;
- (void)removeTextPlaceholder:(id)arg1;
- (void)deleteBackward;
- (void)postAccessibilityNotification:(unsigned int)arg1 target:(id)arg2;
- (void)accessibilityElementDidBecomeFocused;
- (BOOL)accessibilityElementsHidden;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (_NSRange)rangeForCharacterAtIndex:(id)arg1 index:(unsigned long long)arg2;
- (_NSRange)rangeForCharactersInRange:(id)arg1 range:(_NSRange)arg2;
- (BOOL)isEmoji:(id)arg1 charRange:(_NSRange)arg2;
- (BOOL)isApproximatelyEqual:(float)arg1 y:(float)arg2 delta:(float)arg3;
- (BOOL)isSelectionRectBoundaryCloserToPoint:(CGPoint)arg1 selectionRect:(CGRect)arg2 selectionRectIsRTL:(BOOL)arg3 useTrailingBoundaryOfSelectionRect:(BOOL)arg4 otherSelectionRect:(CGRect)arg5 otherSelectionRectIsRTL:(BOOL)arg6 verticalPrecision:(double)arg7;
- (id)text;
- (id)markedTextRange;
- (void)setMarkedTextRange:(id)arg1;
- (id)markedTextStyle;
- (void)setMarkedTextStyle:(id)arg1;
- (id)inputDelegate;
- (void)setInputDelegate:(id)arg1;
- (id)pendingDeltas;
- (void)setPendingDeltas:(id)arg1;
- (long long)autocapitalizationType;
- (void)setAutocapitalizationType:(long long)arg1;
- (long long)autocorrectionType;
- (void)setAutocorrectionType:(long long)arg1;
- (long long)spellCheckingType;
- (void)setSpellCheckingType:(long long)arg1;
- (BOOL)enablesReturnKeyAutomatically;
- (void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
- (long long)keyboardAppearance;
- (void)setKeyboardAppearance:(long long)arg1;
- (long long)keyboardType;
- (void)setKeyboardType:(long long)arg1;
- (long long)returnKeyType;
- (void)setReturnKeyType:(long long)arg1;
- (BOOL)isSecureTextEntry;
- (void)setSecureTextEntry:(BOOL)arg1;
- (BOOL)isEnableDeltaModel;
- (void)setEnableDeltaModel:(BOOL)arg1;
- (long long)smartQuotesType;
- (void)setSmartQuotesType:(long long)arg1;
- (long long)smartDashesType;
- (void)setSmartDashesType:(long long)arg1;
- (void)setTextContentType:(id)arg1;
- (id)backingTextInputAccessibilityObject;
- (void)setBackingTextInputAccessibilityObject:(id)arg1;
- (id)selectionRects;
- (void)setSelectionRects:(id)arg1;
- (id)editMenuInteraction;
- (void)setEditMenuInteraction:(id)arg1;
- (id)textInputPlugin;
- (id)autofillId;
- (void)setAutofillId:(id)arg1;
- (CATransform3D)editableTransform;
- (CGRect)markedRect;
- (BOOL)preventCursorDismissWhenResignFirstResponder;
- (void)setPreventCursorDismissWhenResignFirstResponder:(BOOL)arg1;
- (BOOL)isResigningByPlugin;
- (void)setIsResigningByPlugin:(BOOL)arg1;
- (void)setIsVisibleToAutofill:(BOOL)arg1;
- (BOOL)accessibilityEnabled;
- (void)setAccessibilityEnabled:(BOOL)arg1;
- (int)textInputClient;
- (id)temporarilyDeletedComposedCharacter;
- (void)setTemporarilyDeletedComposedCharacter:(id)arg1;
- (CGRect)editMenuTargetRect;
- (void)setEditMenuTargetRect:(CGRect)arg1;
- (id)editMenuItems;
- (void)setEditMenuItems:(id)arg1;
- (void).cxx_destruct;
@end
