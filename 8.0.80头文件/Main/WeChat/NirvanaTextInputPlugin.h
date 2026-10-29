@interface NirvanaTextInputPlugin : NSObject
{
    NSTimer * _enableFlutterTextInputViewAccessibilityTimer; // +0x8
    UIViewController * _viewController; // +0x10
    NSMutableDictionary * _autofillContext; // +0x18
    NirvanaTextInputView * _activeView; // +0x20
    NirvanaTextInputViewAccessibilityHider * _inputHider; // +0x28
    UIView * _keyboardViewContainer; // +0x30
    UIView * _keyboardView; // +0x38
    UIView * _cachedFirstResponder; // +0x40
    double _previousPointerYPosition; // +0x48
    double _pointerYVelocity; // +0x50
    CGRect _keyboardRect; // +0x58
}
- (id)init;
- (id)textInputDelegate;
- (id)currentScreen;
- (id)findFirstResponderInView:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)removeEnableFlutterTextInputViewAccessibilityTimer;
- (id)textInputView;
- (void)handleMethodCall:(id)arg1;
- (void)handlePointerUp:(double)arg1;
- (void)dismissKeyboardScreenshot;
- (void)showKeyboardAndRemoveScreenshot;
- (void)handlePointerMove:(double)arg1;
- (void)setKeyboardContainerHeight:(double)arg1;
- (void)hideKeyboardWithoutAnimationAndAvoidCursorDismissUpdate;
- (void)takeKeyboardScreenshotAndDisplay;
- (BOOL)showEditMenu:(id)arg1;
- (void)hideEditMenu;
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
- (id)createInputViewWith:(id)arg1;
- (id)hostView;
- (id)textInputViews;
- (void)cleanUpViewHierarchy:(BOOL)arg1 clearText:(BOOL)arg2 delayRemoval:(BOOL)arg3;
- (void)changeInputViewsAutofillVisibility:(BOOL)arg1;
- (void)resetAllClientIds;
- (void)addToInputParentViewIfNeeded:(id)arg1;
- (void)setTextInputEditingState:(id)arg1;
- (void)clearTextInputClient;
- (void)updateConfig:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)autofillContext;
- (id)activeView;
- (void)setActiveView:(id)arg1;
- (id)inputHider;
- (void)setInputHider:(id)arg1;
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
- (void).cxx_destruct;
@end
