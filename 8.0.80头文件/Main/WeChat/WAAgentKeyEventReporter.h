@interface WAAgentKeyEventReporter : NSObject
+ (id)makeItemWithContext:(id)arg1 event:(id)arg2;
+ (void)reportEvent:(id)arg1 context:(id)arg2 costTimeMs:(unsigned long long)arg3 errCode:(int)arg4 errMsg:(id)arg5 reason:(id)arg6 extraData:(id)arg7;
+ (void)reportVoIPConnectStart:(id)arg1;
+ (void)reportVoIPConnected:(id)arg1 costTimeMs:(unsigned long long)arg2 errCode:(int)arg3 errMsg:(id)arg4;
+ (void)reportVoIPDisconnected:(id)arg1 reason:(id)arg2 errCode:(int)arg3 errMsg:(id)arg4;
+ (void)reportVoIPReconnect:(id)arg1 reason:(id)arg2;
+ (void)reportBizStart:(id)arg1;
+ (void)reportBizStartFinish:(id)arg1 costTimeMs:(unsigned long long)arg2 errCode:(int)arg3 errMsg:(id)arg4;
+ (void)reportBizDestroy:(id)arg1 reason:(id)arg2;
+ (void)reportDownstreamToolsCall:(id)arg1 method:(id)arg2 params:(id)arg3;
+ (void)reportDownstreamToolsCard:(id)arg1 method:(id)arg2 params:(id)arg3;
+ (void)reportDownstreamOther:(id)arg1 method:(id)arg2 params:(id)arg3;
+ (void)reportUpstreamUserSendText:(id)arg1 text:(id)arg2;
+ (void)reportUpstreamVoiceToText:(id)arg1 text:(id)arg2;
+ (void)reportUpstreamFollowupSendText:(id)arg1 text:(id)arg2 method:(id)arg3 params:(id)arg4;
+ (void)reportUpstreamUiError:(id)arg1 params:(id)arg2;
+ (void)reportUpstreamMethod:(id)arg1 method:(id)arg2 params:(id)arg3;
@end
