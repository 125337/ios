@interface MMCPUPeriodicEvent : NSObject
{
    double _beginTime; // +0x8
    double _endTime; // +0x10
    double _averageUsage; // +0x18
    NSDictionary * _eventInfo; // +0x20
}
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (double)averageUsage;
- (void)setAverageUsage:(double)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (void).cxx_destruct;
@end
