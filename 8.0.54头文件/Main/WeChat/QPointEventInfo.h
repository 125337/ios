@interface QPointEventInfo : QPoiInfo
{
    NSString * _source; // +0x28
    NSString * _eventName; // +0x30
    NSString * _road; // +0x38
    NSString * _detail; // +0x40
    double _startTime; // +0x48
    double _endTime; // +0x50
    double _updateTime; // +0x58
}
- (id)description;
- (id)source;
- (void)setSource:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)road;
- (void)setRoad:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (double)updateTime;
- (void)setUpdateTime:(double)arg1;
- (void).cxx_destruct;
@end

