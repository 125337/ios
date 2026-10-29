@interface WAGetWxaUsageRecordRequestInfo : NSObject
{
    unsigned int _requestTime; // +0x8
    unsigned int _explicitRequestType; // +0xc
    NSString * _sessionId; // +0x10
    NSString * _SSIDHash; // +0x18
    NSString * _BSSIDHash; // +0x20
    TencentLBSLocation * _location; // +0x28
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)SSIDHash;
- (void)setSSIDHash:(id)arg1;
- (id)BSSIDHash;
- (void)setBSSIDHash:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (unsigned int)requestTime;
- (void)setRequestTime:(unsigned int)arg1;
- (unsigned int)explicitRequestType;
- (void)setExplicitRequestType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
