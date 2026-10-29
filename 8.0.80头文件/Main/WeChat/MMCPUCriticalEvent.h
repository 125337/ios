@interface MMCPUCriticalEvent : NSObject
{
    double _beginTime; // +0x8
    double _endTime; // +0x10
    double _averageUsage; // +0x18
    unsigned long long _eventTag; // +0x20
    unsigned long long _eventSubTag; // +0x28
    NSDictionary * _eventInfo; // +0x30
}
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (double)averageUsage;
- (void)setAverageUsage:(double)arg1;
- (unsigned long long)eventTag;
- (void)setEventTag:(unsigned long long)arg1;
- (unsigned long long)eventSubTag;
- (void)setEventSubTag:(unsigned long long)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (void).cxx_destruct;
@end
