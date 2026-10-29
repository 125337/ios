@interface WCFinderFlowEventReportInfo : NSObject
{
    unsigned long long _bizId; // +0x8
    NSString * _flowId; // +0x10
    unsigned long long _eventId; // +0x18
    unsigned long long _eventTime; // +0x20
    NSString * _finderUsername; // +0x28
    NSMutableDictionary * _udfKV; // +0x30
}
- (void)setUdfKV:(id)arg1;
- (unsigned long long)bizId;
- (void)setBizId:(unsigned long long)arg1;
- (id)flowId;
- (void)setFlowId:(id)arg1;
- (unsigned long long)eventId;
- (void)setEventId:(unsigned long long)arg1;
- (unsigned long long)eventTime;
- (void)setEventTime:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)udfKV;
- (void).cxx_destruct;
@end

