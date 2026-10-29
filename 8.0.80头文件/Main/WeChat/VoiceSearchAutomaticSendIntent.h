@interface VoiceSearchAutomaticSendIntent : NSObject
{
    NSString * _token; // +0x8
    NSString * _roundID; // +0x10
    unsigned long long _screenStatus; // +0x18
    NSString * _voipSessionID; // +0x20
    NSString * _traceID; // +0x28
    NSString * _username; // +0x30
    unsigned long long _createdAtMilliseconds; // +0x38
}
- (id)token;
- (void)setToken:(id)arg1;
- (id)roundID;
- (void)setRoundID:(id)arg1;
- (unsigned long long)screenStatus;
- (void)setScreenStatus:(unsigned long long)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (id)traceID;
- (void)setTraceID:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)createdAtMilliseconds;
- (void)setCreatedAtMilliseconds:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
