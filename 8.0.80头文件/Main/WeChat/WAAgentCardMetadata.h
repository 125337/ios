@interface WAAgentCardMetadata : NSObject
{
    NSString * _appId; // +0x8
    NSString * _msgId; // +0x10
    NSString * _roundId; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _appVersion; // +0x28
    NSString * _traceMsgId; // +0x30
    NSString * _traceId; // +0x38
    unsigned long long _scene; // +0x40
    WAAgentDownstreamContext * _downstreamContext; // +0x48
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)roundId;
- (void)setRoundId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)traceMsgId;
- (void)setTraceMsgId:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)downstreamContext;
- (void)setDownstreamContext:(id)arg1;
- (void).cxx_destruct;
@end
