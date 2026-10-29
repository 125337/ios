@interface WAJSEventHandler_publishWeChatState : WAJSEventHandler_BaseEvent <TextStatePublishViewControllerDelegate>
+ (id)generateSourceIdFromAppId:(id)arg1;
+ (id)generateSourceNameFromNickName:(id)arg1 debugMode:(unsigned int)arg2;
- (void)handleJSEvent:(id)arg1;
- (void)doPublish:(id)arg1;
- (void)onTextStatePublished;
- (void)onTextStatePublishCancelled;
@end

