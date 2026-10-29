@interface WxpayKitReportGateRow : NSObject
{
    NSString * _eventType; // +0x8
    NSString * _phase; // +0x10
    NSString * _subject; // +0x18
    NSString * _code; // +0x20
    long long _durMs; // +0x28
    NSString * _sessionId; // +0x30
}
- (id)init;
- (id)eventType;
- (void)setEventType:(id)arg1;
- (id)phase;
- (void)setPhase:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (long long)durMs;
- (void)setDurMs:(long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
