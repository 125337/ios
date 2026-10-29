@interface WAAgentDownstreamContext : NSObject
{
    NSString * _sessionId; // +0x8
    NSString * _agentSource; // +0x10
    NSString * _appId; // +0x18
    NSString * _msgId; // +0x20
    NSString * _roundId; // +0x28
    NSString * _traceId; // +0x30
    NSString * _parentSpanId; // +0x38
    NSString * _serviceCardTemplateAppId; // +0x40
}
+ (id)contextWithAgent2ClientEvent:(id)arg1 appId:(id)arg2;
+ (id)contextWithSessionId:(id)arg1 agentSource:(id)arg2 appId:(id)arg3 msgId:(id)arg4 roundId:(id)arg5 traceId:(id)arg6 parentSpanId:(id)arg7;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)agentSource;
- (void)setAgentSource:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)roundId;
- (void)setRoundId:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)parentSpanId;
- (void)setParentSpanId:(id)arg1;
- (id)serviceCardTemplateAppId;
- (void)setServiceCardTemplateAppId:(id)arg1;
- (void).cxx_destruct;
@end
