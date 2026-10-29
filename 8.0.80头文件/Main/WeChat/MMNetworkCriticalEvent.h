@interface MMNetworkCriticalEvent : NSObject
{
    int _type; // +0x8
    double _beginTime; // +0x10
    double _endTime; // +0x18
    unsigned long long _totalWwanUsageInWifi; // +0x20
    unsigned long long _totalWwanUsageInWwan; // +0x28
    unsigned long long _eventTag; // +0x30
    unsigned long long _eventSubTag; // +0x38
    NSDictionary * _eventInfo; // +0x40
}
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (unsigned long long)totalWwanUsageInWifi;
- (void)setTotalWwanUsageInWifi:(unsigned long long)arg1;
- (unsigned long long)totalWwanUsageInWwan;
- (void)setTotalWwanUsageInWwan:(unsigned long long)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned long long)eventTag;
- (void)setEventTag:(unsigned long long)arg1;
- (unsigned long long)eventSubTag;
- (void)setEventSubTag:(unsigned long long)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (void).cxx_destruct;
@end
