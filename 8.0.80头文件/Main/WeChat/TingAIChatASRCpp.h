@interface TingAIChatASRCpp : TingAudioRecorderListenerCpp <TingAIChatASR>
+ (id)create;
- (void)start:(id)arg1 recorder:(id)arg2;
- (void)cancel;
- (void)end;
- (void)addASRListener:(id)arg1;
- (void)removeASRListener:(id)arg1;
@end
