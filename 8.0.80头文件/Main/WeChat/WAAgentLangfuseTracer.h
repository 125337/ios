@interface WAAgentLangfuseTracer : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _traceMap; // +0x8
    NSMutableDictionary * _authorizationTraces; // +0x10
    NSMutableOrderedSet * _shownAuthorizationCardIds; // +0x18
    NSMutableArray * _traceKeyOrder; // +0x20
    NSString * _cachedClientVersion; // +0x28
    NSMutableOrderedSet * _pendingAuthorizationCardIds; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reportToolCallWithParams:(id)arg1 appId:(id)arg2 clientSessionId:(id)arg3 sessionId:(id)arg4 agentSource:(id)arg5 msgId:(id)arg6 roundId:(id)arg7 traceId:(id)arg8 parentSpanId:(id)arg9;
- (void)reportToolCardWithCardContext:(id)arg1 appId:(id)arg2 sessionId:(id)arg3 agentSource:(id)arg4 msgId:(id)arg5 roundId:(id)arg6 traceId:(id)arg7 parentSpanId:(id)arg8;
- (id /* block */)prepareToolResultReportWithParams:(id)arg1 appId:(id)arg2 clientSessionId:(id)arg3 sessionId:(id)arg4 startNs:(unsigned long long)arg5;
- (void)reportClientEvent:(id)arg1 data:(id)arg2 clientSessionIds:(id)arg3 appId:(id)arg4;
- (void)reportClientEvent:(id)arg1 data:(id)arg2 entries:(id)arg3;
- (void)clearAuthorizationTraceForCardId:(id)arg1;
- (void)clearTraceContextForClientSessionId:(id)arg1;
- (void)reportWithInfo:(id)arg1 appId:(id)arg2;
- (id)normalizedHexId:(id)arg1 expectedLength:(unsigned long long)arg2;
- (id)toolCallIdFromParams:(id)arg1;
- (void)cacheToolCallTraceForToolCallId:(id)arg1 clientSessionId:(id)arg2 appId:(id)arg3 traceId:(id)arg4 parentSpanId:(id)arg5 roundId:(id)arg6 sessionId:(id)arg7;
- (id)consumeToolCallTraceForToolCallId:(id)arg1 clientSessionId:(id)arg2;
- (id)traceKeyPrefixForClientSessionId:(id)arg1;
- (id)traceKeyForClientSessionId:(id)arg1 toolCallId:(id)arg2;
- (id)resolveClientVersion;
- (id)traceMap;
- (void)setTraceMap:(id)arg1;
- (id)authorizationTraces;
- (void)setAuthorizationTraces:(id)arg1;
- (id)shownAuthorizationCardIds;
- (void)setShownAuthorizationCardIds:(id)arg1;
- (id)traceKeyOrder;
- (void)setTraceKeyOrder:(id)arg1;
- (id)cachedClientVersion;
- (void)setCachedClientVersion:(id)arg1;
- (id)pendingAuthorizationCardIds;
- (void)setPendingAuthorizationCardIds:(id)arg1;
- (void).cxx_destruct;
@end
