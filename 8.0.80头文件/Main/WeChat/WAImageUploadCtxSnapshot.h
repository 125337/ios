@interface WAImageUploadCtxSnapshot : NSObject
{
    NSString * _appid; // +0x8
    NSString * _sessionId; // +0x10
    NSString * _roundId; // +0x18
    NSString * _clientSessionId; // +0x20
    NSString * _clientRoundId; // +0x28
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)roundId;
- (void)setRoundId:(id)arg1;
- (id)clientSessionId;
- (void)setClientSessionId:(id)arg1;
- (id)clientRoundId;
- (void)setClientRoundId:(id)arg1;
- (void).cxx_destruct;
@end
