@interface WxaLiteAppWidgetTriggerLiteAppEvent : NSObject
{
    NSString * _eventName; // +0x8
    NSString * _targetAppId; // +0x10
    NSDictionary * _conditions; // +0x18
    NSDictionary * _eventInfos; // +0x20
}
+ (id)makeWithEventName:(id)arg1 targetAppId:(id)arg2 conditions:(id)arg3 eventInfos:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (id)conditions;
- (void)setConditions:(id)arg1;
- (id)eventInfos;
- (void)setEventInfos:(id)arg1;
- (void).cxx_destruct;
@end
