@interface WAAgentTraceEntry : NSObject
{
    NSString * _traceId; // +0x8
    NSString * _parentSpanId; // +0x10
    NSString * _roundId; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _appId; // +0x28
    NSString * _clientSessionId; // +0x30
}
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)parentSpanId;
- (void)setParentSpanId:(id)arg1;
- (id)roundId;
- (void)setRoundId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)clientSessionId;
- (void)setClientSessionId:(id)arg1;
- (void).cxx_destruct;
@end
