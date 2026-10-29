@interface CBTHeadlessVoiceChainTracker : NSObject <IFunctionCallNotifyExt>
{
    NSMutableDictionary * _contextsByRound; // +0x8
    NSMutableDictionary * _roundsBySession; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (id)contextForRoundId:(unsigned long long)arg1;
- (id)contextForSessionID:(id)arg1;
- (unsigned long long)nowMs;
- (void)reportChainEvent:(id)arg1 context:(id)arg2 extraParams:(id)arg3;
- (void)startRoundWithRoundId:(unsigned long long)arg1 enterScene:(int)arg2;
- (void)flushPendingPressIfNeeded:(id)arg1;
- (void)trimContextsIfNeeded;
- (void)bindVoipSessionID:(id)arg1 forRoundId:(unsigned long long)arg2;
- (void)bindTraceId:(id)arg1 context:(id)arg2;
- (void)markCloseMicForRoundId:(unsigned long long)arg1;
- (void)markAsrEndForRoundId:(unsigned long long)arg1;
- (void)mergeDestinationIntoSrcInfo:(id)arg1 destination:(id)arg2 destinationUsername:(id)arg3;
- (void)reportLongPressSuccIfNeeded:(id)arg1;
- (void)flushDecision:(id)arg1 decision:(long long)arg2;
- (void)reportSendQueryInHeadless:(id)arg1 queryId:(long long)arg2;
- (void)reportCancelForRoundId:(unsigned long long)arg1;
- (void)reportFailedForRoundId:(unsigned long long)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)reportOnCommitPresentedForRoundId:(unsigned long long)arg1;
- (void)reportAgentResultForRoundId:(unsigned long long)arg1 decision:(int)arg2 success:(BOOL)arg3 errMsg:(id)arg4 destination:(id)arg5 destinationUsername:(id)arg6 params:(id)arg7;
- (void)reportAgentResultForRoundId:(unsigned long long)arg1 decision:(int)arg2 success:(BOOL)arg3 errMsg:(id)arg4 destination:(id)arg5 destinationUsername:(id)arg6 params:(id)arg7 fcName:(id)arg8;
- (void)recordFCStart:(id)arg1 fullName:(id)arg2;
- (void)recordFCEnd:(id)arg1 fullName:(id)arg2;
- (id)fullFunctionNameWithModule:(id)arg1 functionName:(id)arg2;
- (void)onFunctionCallStart:(id)arg1 moduleName:(id)arg2 functionName:(id)arg3 parameters:(id)arg4;
- (void)onFunctionCallEnd:(id)arg1 moduleName:(id)arg2 functionName:(id)arg3 parameters:(id)arg4 returnValue:(id)arg5;
- (id)contextsByRound;
- (void)setContextsByRound:(id)arg1;
- (id)roundsBySession;
- (void)setRoundsBySession:(id)arg1;
- (void).cxx_destruct;
@end
