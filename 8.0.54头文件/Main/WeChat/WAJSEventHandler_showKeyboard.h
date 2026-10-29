@interface WAJSEventHandler_showKeyboard : WAJSEventHandler_BaseEvent <InputKeyboardDelegate, WAGameKeyboardDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onInputError:(id)arg1;
- (void)onInputSuccess:(unsigned int)arg1 confirmType:(id)arg2;
- (void)onKeyboardDidShow:(double)arg1;
@end

