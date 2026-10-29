@interface FlutterTextInputPlugin : NSObject <FlutterKeySecondaryResponder, UIIndirectScribbleInteractionDelegate, FlutterStreamHandler>
{
    NSTimer * _enableFlutterTextInputViewAccessibilityTimer; // +0x8
    id <FlutterTextInputDelegate> _textInputDelegate; // +0x10
    UIViewController * _viewController; // +0x18
    id <FlutterIndirectScribbleDelegate> _indirectScribbleDelegate; // +0x20
    NSMutableDictionary * _scribbleElements; // +0x28
    NSMutableDictionary * _autofillContext; // +0x30
    FlutterTextInputView * _activeView; // +0x38
    FlutterTextInputViewAccessibilityHider * _inputHider; // +0x40
    id <FlutterViewResponder> _viewResponder; // +0x48
    UIView * _keyboardViewContainer; // +0x50
    UIView * _keyboardView; // +0x58
    UIView * _cachedFirstResponder; // +0x60
    double _previousPointerYPosition; // +0x68
    double _pointerYVelocity; // +0x70
    id /* block */ _eventSink; // +0x78
    CGRect _keyboardRect; // +0x80
}
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)removeEnableFlutterTextInputViewAccessibilityTimer;
- (id)textInputView;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)handlePointerUp:(double)arg1;
- (void)dismissKeyboardScreenshot;
- (void)showKeyboardAndRemoveScreenshot;
- (void)handlePointerMove:(double)arg1;
- (void)setKeyboardContainerHeight:(double)arg1;
- (void)hideKeyboardWithoutAnimationAndAvoidCursorDismissUpdate;
- (void)takeKeyboardScreenshotAndDisplay;
- (void)setEditableSizeAndTransform:(id)arg1;
- (void)updateMarkedRect:(id)arg1;
- (void)setSelectionRects:(id)arg1;
- (void)startLiveTextInput;
- (void)showTextInput;
- (void)enableActiveViewAccessibility;
- (void)hideTextInput;
- (void)triggerAutofillSave:(BOOL)arg1;
- (void)setPlatformViewTextInputClient;
- (void)setTextInputClient:(int)arg1 withConfiguration:(id)arg2;
- (id)keyboardHeight:(double)arg1;
- (id)keyboardHeight:(double)arg1 inputAccessoryHeight:(double)arg2;
- (id)createInputViewWith:(id)arg1;
- (id)updateAndShowAutofillViews:(id)arg1 focusedField:(id)arg2 isPasswordRelated:(BOOL)arg3;
- (id)getOrCreateAutofillableView:(id)arg1 isPasswordAutofill:(BOOL)arg2;
- (id)hostView;
- (id)textInputViews;
- (void)cleanUpViewHierarchy:(BOOL)arg1 clearText:(BOOL)arg2 delayRemoval:(BOOL)arg3;
- (void)changeInputViewsAutofillVisibility:(BOOL)arg1;
- (void)resetAllClientIds;
- (void)addToInputParentViewIfNeeded:(id)arg1;
- (void)setTextInputEditingState:(id)arg1;
- (void)setTextSelectionState:(id)arg1;
- (void)clearTextInputClient;
- (void)updateConfig:(id)arg1;
- (BOOL)indirectScribbleInteraction:(id)arg1 isElementFocused:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 focusElementIfNeeded:(id)arg2 referencePoint:(CGPoint)arg3 completion:(id /* block */)arg4;
- (BOOL)indirectScribbleInteraction:(id)arg1 shouldDelayFocusForElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (CGRect)indirectScribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(id /* block */)arg3;
- (void)setUpIndirectScribbleInteraction:(id)arg1;
- (void)resetViewResponder;
- (BOOL)handlePress:(id)arg1;
- (id)textInputDelegate;
- (void)setTextInputDelegate:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)indirectScribbleDelegate;
- (void)setIndirectScribbleDelegate:(id)arg1;
- (id)scribbleElements;
- (void)setScribbleElements:(id)arg1;
- (id)autofillContext;
- (id)activeView;
- (void)setActiveView:(id)arg1;
- (id)inputHider;
- (void)setInputHider:(id)arg1;
- (id)viewResponder;
- (id)keyboardViewContainer;
- (void)setKeyboardViewContainer:(id)arg1;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg1;
- (id)cachedFirstResponder;
- (void)setCachedFirstResponder:(id)arg1;
- (CGRect)keyboardRect;
- (void)setKeyboardRect:(CGRect)arg1;
- (double)previousPointerYPosition;
- (void)setPreviousPointerYPosition:(double)arg1;
- (double)pointerYVelocity;
- (void)setPointerYVelocity:(double)arg1;
- (id /* block */)eventSink;
- (void)setEventSink:(id /* block */)arg1;
- (void).cxx_destruct;
@end

