@interface WAJSEventHandler_setCurrentPaySpeech : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (BOOL)copyFile:(id)arg1 packId:(id)arg2;
- (id)getConfigKey;
- (id)getCurrentSpeechConfig;
- (void)saveCurrentConfig:(id)arg1;
- (void)onFail;
- (void)onOk;
@end

