@interface WAAgentToolCallTimingEntry : NSObject
{
    NSString * _clientSessionId; // +0x8
    unsigned long long _startTimestampMs; // +0x10
    unsigned long long _startContinuousMs; // +0x18
    ToolCallClientProfile * _finishedProfile; // +0x20
}
- (id)clientSessionId;
- (void)setClientSessionId:(id)arg1;
- (unsigned long long)startTimestampMs;
- (void)setStartTimestampMs:(unsigned long long)arg1;
- (unsigned long long)startContinuousMs;
- (void)setStartContinuousMs:(unsigned long long)arg1;
- (id)finishedProfile;
- (void)setFinishedProfile:(id)arg1;
- (void).cxx_destruct;
@end
