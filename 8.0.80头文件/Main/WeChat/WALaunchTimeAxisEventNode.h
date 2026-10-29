@interface WALaunchTimeAxisEventNode : NSObject
{
    unsigned int _option; // +0x8
    NSString * _appid; // +0x10
    NSString * _parentPhase; // +0x18
    NSString * _event; // +0x20
    unsigned long long _category; // +0x28
    unsigned long long _eventType; // +0x30
    unsigned long long _timestamp; // +0x38
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)parentPhase;
- (void)setParentPhase:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (unsigned long long)category;
- (void)setCategory:(unsigned long long)arg1;
- (unsigned long long)eventType;
- (void)setEventType:(unsigned long long)arg1;
- (unsigned int)option;
- (void)setOption:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
