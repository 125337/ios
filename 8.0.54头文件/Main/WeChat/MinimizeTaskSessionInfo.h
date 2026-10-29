@interface MinimizeTaskSessionInfo : NSObject
{
    NSString * _sessionId; // +0x8
    unsigned long long _startTimeStamp; // +0x10
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)startTimeStamp;
- (void)setStartTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

