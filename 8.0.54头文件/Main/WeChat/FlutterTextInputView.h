@interface FlutterTextInputView : UIView <UITextInput, UIScribbleInteractionDelegate>
{
    int _textInputClient; // +0x8
    const char * _selectionAffinity; // +0x10
    FlutterTextRange * _selectedTextRange; // +0x18
    UIInputViewController * _inputViewController; // +0x20
    CGRect _cachedFirstRect; // +0x28
    long long _scribbleInteractionStatus; // +0x48
    BOOL _hasPlaceholder; // +0x50
    BOOL _isSystemKeyboardEnabled; // +0x51
    BOOL _isFloatingCursorActive; // +0x52
    CGPoint _floatingCursorOffset; // +0x58
    BOOL _enableInteractiveSelection; // +0x68
    UITextInteraction * _textInteraction; // +0x70
    BOOL _enablesReturnKeyAutomatically; // +0x78
    BOOL _secureTextEntry; // +0x79
    BOOL _enableDeltaModel; // +0x7a
    BOOL _preventCursorDismissWhenResignFirstResponder; // +0x7b
    BOOL _accessibilityEnabled; // +0x7c
    id <UITextInputTokenizer> _tokenizer; // +0x80
    NSDictionary * _configuration; // +0x88
    NSMutableString * _text; // +0x90
    UITextRange * _markedTextRange; // +0x98
    NSDictionary * _markedTextStyle; // +0xa0
    id <UITextInputDelegate> _inputDelegate; // +0xa8
    NSMutableArray * _pendingDeltas; // +0xb0
    long long _autocapitalizationType; // +0xb8
    long long _autocorrectionType; // +0xc0
    long long _spellCheckingType; // +0xc8
    long long _keyboardAppearance; // +0xd0
    long long _keyboardType; // +0xd8
    long long _returnKeyType; // +0xe0
    long long _smartQuotesType; // +0xe8
    long long _smartDashesType; // +0xf0
    NSString * _textContentType; // +0xf8
    UIAccessibilityElement * _backingTextInputAccessibilityObject; // +0x100
    id <FlutterViewResponder> _viewResponder; // +0x108
    long long _scribbleFocusStatus; // +0x110
    NSArray * _selectionRects; // +0x118
    FlutterTextInputPlugin * _textInputPlugin; // +0x120
    NSString * _autofillId; // +0x128
    id /* block */ _onKeyboardHeightChange; // +0x130
    id /* block */ _onInputViewAdded; // +0x138
    id /* block */ _onInputViewRemoved; // +0x140
    double _inputAccessoryHeight; // +0x148
    NSString * _temporarilyDeletedComposedCharacter; // +0x150
    UIView * _inputView; // +0x158
    CGRect _markedRect; // +0x160
    CATransform3D _editableTransform; // +0x180
}
- (void)setCustomKeyboardType:(id)arg1 data:(id)arg2;
- (id)initWithOwner:(id)arg1;
- (void)configureWithDictionary:(id)arg1;
- (id)textContentType;
- (id)insertionPointColor;
- (id)selectionBarColor;
- (id)selectionHighlightColor;
- (id)inputViewController;
- (id)textInputDelegate;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setTextInputClient:(int)arg1;
- (id)textInteraction;
- (void)setTextSelectionState:(id)arg1;
- (BOOL)isSelectedRangeValid:(_NSRange)arg1;
- (void)setTextInputState:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (_NSRange)clampSelectionFromBase:(int)arg1 extent:(int)arg2 forText:(id)arg3;
- (_NSRange)clampSelection:(_NSRange)arg1 forText:(id)arg2;
- (BOOL)isVisibleToAutofill;
- (void)setIsVisibleToAutofill:(BOOL)arg1;
- (BOOL)isScribbleAvailable;
- (void)scribbleInteractionWillBeginWriting:(id)arg1;
- (void)scribbleInteractionDidFinishWriting:(id)arg1;
- (BOOL)scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2;
- (BOOL)scribbleInteractionShouldDelayFocus:(id)arg1;
- (BOOL)canBecomeFirstResponder;
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
- (void)beginFloatingCursorAtPoint:(CGPoint)arg1;
- (void)updateFloatingCursorAtPoint:(CGPoint)arg1;
- (void)endFloatingCursor;
- (void)updateEditingState;
- (void)updateEditingStateWithDelta:(TextEditingDelta)arg1;
- (BOOL)hasText;
- (void)insertText:(id)arg1;
- (id)insertTextPlaceholderWithSize:(CGSize)arg1;
- (void)removeTextPlaceholder:(id)arg1;
- (void)deleteBackward;
- (void)postAccessibilityNotification:(unsigned int)arg1 target:(id)arg2;
- (void)accessibilityElementDidBecomeFocused;
- (BOOL)accessibilityElementsHidden;
- (void)resetScribbleInteractionStatusIfEnding;
- (id)inputAccessoryView;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
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
- (id)viewResponder;
- (void)setViewResponder:(id)arg1;
- (long long)scribbleFocusStatus;
- (void)setScribbleFocusStatus:(long long)arg1;
- (id)selectionRects;
- (void)setSelectionRects:(id)arg1;
- (id)textInputPlugin;
- (id)autofillId;
- (void)setAutofillId:(id)arg1;
- (CATransform3D)editableTransform;
- (CGRect)markedRect;
- (BOOL)preventCursorDismissWhenResignFirstResponder;
- (void)setPreventCursorDismissWhenResignFirstResponder:(BOOL)arg1;
- (BOOL)accessibilityEnabled;
- (void)setAccessibilityEnabled:(BOOL)arg1;
- (int)textInputClient;
- (void)setTextInteraction:(id)arg1;
- (id /* block */)onKeyboardHeightChange;
- (void)setOnKeyboardHeightChange:(id /* block */)arg1;
- (id /* block */)onInputViewAdded;
- (void)setOnInputViewAdded:(id /* block */)arg1;
- (id /* block */)onInputViewRemoved;
- (void)setOnInputViewRemoved:(id /* block */)arg1;
- (double)inputAccessoryHeight;
- (void)setInputAccessoryHeight:(double)arg1;
- (id)temporarilyDeletedComposedCharacter;
- (void)setTemporarilyDeletedComposedCharacter:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (void).cxx_destruct;
@end

