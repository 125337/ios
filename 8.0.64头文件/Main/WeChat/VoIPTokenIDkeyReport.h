@interface VoIPTokenIDkeyReport : NSObject
+ (void)reportId:(int)arg1 Key:(int)arg2;
+ (void)registerPushKit;
+ (void)tokenCallbackNotVoipType;
+ (void)tokenCallbackTokenNotVoipType;
+ (void)tokenCallbackTokenTypeOk;
+ (void)tokenCallbackTokenInvaildate;
+ (void)pushReceiveContentEmpty;
+ (void)pushReceiveCmdTypeError;
+ (void)pushReceiveCmdEmpty;
+ (void)pushReceiveBroadcast;
+ (void)tokenRegisterTokenEmpty;
+ (void)tokenRegisterCertAppStore;
+ (void)tokenRegisterCertWC;
+ (void)tokenRegisterSettingAppStore;
+ (void)tokenRegisterSettingSandbox;
+ (void)tokenRegisterCgiCreateError;
+ (void)tokenRegisterCgiSent;
+ (void)tokenRegisterCgiCallbackEmpty;
+ (void)tokenRegisterCgiConnectTimeout;
+ (void)tokenRegisterCgiResponseEmpty;
+ (void)tokenRegisterCgiResponseError;
+ (void)tokenRegisterCgiResponseOk;
+ (void)tokenRegisterUsingCacheToken;
+ (void)tokenRegisterCacheTokenNil;
+ (void)reportAuthStatus:(id)arg1;
@end
