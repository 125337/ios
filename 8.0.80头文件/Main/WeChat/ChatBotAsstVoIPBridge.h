@interface ChatBotAsstVoIPBridge : NSObject
+ (void)triggerAsstVoIPInviteWithCallId:(id)arg1 callerName:(id)arg2;
+ (void)onLCKCallHandledWithCallId:(id)arg1 accepted:(BOOL)arg2;
+ (void)enableTTSPlayAndRecordCategory:(BOOL)arg1;
+ (void)hangupVoIPCallIfNeeded;
+ (BOOL)isVoIPLCKProcessingCall;
+ (BOOL)isAsstVoIPLCKProcessingCall;
@end
