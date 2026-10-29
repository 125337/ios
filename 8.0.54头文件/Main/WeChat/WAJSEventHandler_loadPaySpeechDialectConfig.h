@interface WAJSEventHandler_loadPaySpeechDialectConfig : WAJSEventHandler_BaseEvent
- (void)checkAndSaveDefaultSpeechPos;
- (void)handleJSEvent:(id)arg1;
- (void)saveCurrentConfig:(id)arg1;
- (id)getConfigKey;
- (id)getCurrentSpeechConfig;
- (void)onFail;
@end

