@interface CBTBridgeContext : NSObject
{
    int _originRuntime; // +0x8
    NSString * _requestId; // +0x10
    NSString * _sourceEndpoint; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _traceId; // +0x28
    NSString * _originEndpoint; // +0x30
}
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)sourceEndpoint;
- (void)setSourceEndpoint:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)originEndpoint;
- (void)setOriginEndpoint:(id)arg1;
- (int)originRuntime;
- (void)setOriginRuntime:(int)arg1;
- (void).cxx_destruct;
@end
