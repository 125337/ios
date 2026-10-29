@interface CBTBridgeTarget : NSObject
{
    NSString * _endpointId; // +0x8
    NSString * _sessionId; // +0x10
}
+ (id)end:(unsigned int)arg1;
+ (id)session:(id)arg1;
- (id)describe;
- (id)endpointId;
- (void)setEndpointId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
