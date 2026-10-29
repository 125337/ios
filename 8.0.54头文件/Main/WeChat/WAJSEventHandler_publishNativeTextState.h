@interface WAJSEventHandler_publishNativeTextState : WAJSEventHandler_BaseEvent <TextStatePublishViewControllerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onTextStatePublishedWithTextState:(id)arg1 thumbImageData:(id)arg2;
- (void)onTextStatePublishCancelled;
@end

