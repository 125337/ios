@interface WCAdInteractionEventInfo : NSObject <NSCoding>
{
    unsigned long long _eventType; // +0x8
    unsigned long long _eventSubType; // +0x10
    NSArray * _actionIds; // +0x18
    double _triggerTime; // +0x20
    NSString * _determinationId; // +0x28
    WCAdInteractionDeviceMotionEventHandlePlugin * _deviceMotionPlugin; // +0x30
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)eventType;
- (void)setEventType:(unsigned long long)arg1;
- (unsigned long long)eventSubType;
- (void)setEventSubType:(unsigned long long)arg1;
- (id)actionIds;
- (void)setActionIds:(id)arg1;
- (double)triggerTime;
- (void)setTriggerTime:(double)arg1;
- (id)determinationId;
- (void)setDeterminationId:(id)arg1;
- (id)deviceMotionPlugin;
- (void)setDeviceMotionPlugin:(id)arg1;
- (void).cxx_destruct;
@end
