@interface WAJSEventHandler_operateRecorder : WAJSEventHandler_BaseEvent <IJSContextPluginDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)handleRecordEvent:(id)arg1;
- (void)onError:(id)arg1;
- (void)onSuccess:(id)arg1;
@end
