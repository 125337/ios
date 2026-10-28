@interface TingAudioChatServiceContainerCpp : UnitRCObjcBaseProxyClass <TingAudioChatServiceContainer>
+ (id)sharedInstance;
- (id)createAudioChatService:(int)arg1;
- (id)getAudioChatService:(int)arg1;
- (void)destroyAudioChatService:(int)arg1;
- (BOOL)hasSpeakingAudioChatService;
@end
