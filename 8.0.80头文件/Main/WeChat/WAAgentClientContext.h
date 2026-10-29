@interface WAAgentClientContext : NSObject
{
    NSString * _sessionId; // +0x8
    NSString * _clientSessionId; // +0x10
    NSString * _clientRoundId; // +0x18
    NSString * _subagentSessionId; // +0x20
    NSString * _subagentId; // +0x28
    NSString * _roundId; // +0x30
    NSString * _appid; // +0x38
}
+ (id)contextWithSessionId:(id)arg1 appid:(id)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)clientSessionId;
- (void)setClientSessionId:(id)arg1;
- (id)clientRoundId;
- (void)setClientRoundId:(id)arg1;
- (id)subagentSessionId;
- (void)setSubagentSessionId:(id)arg1;
- (id)subagentId;
- (void)setSubagentId:(id)arg1;
- (id)roundId;
- (void)setRoundId:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (void).cxx_destruct;
@end
