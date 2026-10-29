@interface WAAgentReportContext : NSObject
{
    unsigned long long _scene; // +0x8
    NSString * _sessionId; // +0x10
    NSString * _appId; // +0x18
    NSString * _traceId; // +0x20
    unsigned long long _roomId; // +0x28
}
+ (id)contextWithScene:(unsigned long long)arg1 sessionId:(id)arg2 appId:(id)arg3;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (unsigned long long)roomId;
- (void)setRoomId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
