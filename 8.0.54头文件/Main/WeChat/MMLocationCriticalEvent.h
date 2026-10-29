@interface MMLocationCriticalEvent : NSObject
{
    double _beginTime; // +0x8
    double _endTime; // +0x10
    NSDictionary * _eventInfo; // +0x18
}
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (void).cxx_destruct;
@end

