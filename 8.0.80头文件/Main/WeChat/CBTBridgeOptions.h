@interface CBTBridgeOptions : NSObject
{
    unsigned int _timeoutMs; // +0x8
    NSString * _sessionId; // +0x10
    NSString * _traceId; // +0x18
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (unsigned int)timeoutMs;
- (void)setTimeoutMs:(unsigned int)arg1;
- (void).cxx_destruct;
@end
