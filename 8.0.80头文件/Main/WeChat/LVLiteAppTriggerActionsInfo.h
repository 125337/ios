@interface LVLiteAppTriggerActionsInfo : NSObject
{
    NSString * _eventName; // +0x8
    NSString * _appId; // +0x10
    NSString * _triggerActionsJson; // +0x18
}
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)triggerActionsJson;
- (void)setTriggerActionsJson:(id)arg1;
- (void).cxx_destruct;
@end
