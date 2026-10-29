@interface ChatBotHeadlessReportParams : NSObject
{
    NSString * _sessionId; // +0x8
    long long _queryId; // +0x10
    NSString * _traceId; // +0x18
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (long long)queryId;
- (void)setQueryId:(long long)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (void).cxx_destruct;
@end
