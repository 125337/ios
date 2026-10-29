@interface WAAgentTraceSpanInfo : NSObject
{
    NSString * _spanName; // +0x8
    NSString * _metadataJson; // +0x10
    NSString * _traceId; // +0x18
    NSString * _parentSpanId; // +0x20
    unsigned long long _startTimeNs; // +0x28
    unsigned long long _endTimeNs; // +0x30
    NSString * _platform; // +0x38
    NSString * _clientVersion; // +0x40
    NSString * _rudpMsgId; // +0x48
    NSString * _method; // +0x50
    NSString * _params; // +0x58
    NSString * _sessionId; // +0x60
    NSString * _msgId; // +0x68
    NSString * _roundId; // +0x70
    NSString * _agentSource; // +0x78
    NSString * _businessData; // +0x80
}
- (id)spanName;
- (void)setSpanName:(id)arg1;
- (id)metadataJson;
- (void)setMetadataJson:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)parentSpanId;
- (void)setParentSpanId:(id)arg1;
- (unsigned long long)startTimeNs;
- (void)setStartTimeNs:(unsigned long long)arg1;
- (unsigned long long)endTimeNs;
- (void)setEndTimeNs:(unsigned long long)arg1;
- (id)platform;
- (void)setPlatform:(id)arg1;
- (id)clientVersion;
- (void)setClientVersion:(id)arg1;
- (id)rudpMsgId;
- (void)setRudpMsgId:(id)arg1;
- (id)method;
- (void)setMethod:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)roundId;
- (void)setRoundId:(id)arg1;
- (id)agentSource;
- (void)setAgentSource:(id)arg1;
- (id)businessData;
- (void)setBusinessData:(id)arg1;
- (void).cxx_destruct;
@end
