@interface QGPEvent : QGPBaseModel
{
    NSString * _eventType; // +0x8
    NSString * _layerId; // +0x10
}
+ (id)errorMsgForCode:(long long)arg1;
- (id)init;
- (id)eventType;
- (void)setEventType:(id)arg1;
- (id)layerId;
- (void)setLayerId:(id)arg1;
- (void).cxx_destruct;
@end

