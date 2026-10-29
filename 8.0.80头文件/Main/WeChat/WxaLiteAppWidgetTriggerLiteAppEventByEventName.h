@interface WxaLiteAppWidgetTriggerLiteAppEventByEventName : NSObject
{
    NSString * _eventName; // +0x8
    NSDictionary * _conditions; // +0x10
    NSDictionary * _eventInfos; // +0x18
}
+ (id)makeWithEventName:(id)arg1 conditions:(id)arg2 eventInfos:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)conditions;
- (void)setConditions:(id)arg1;
- (id)eventInfos;
- (void)setEventInfos:(id)arg1;
- (void).cxx_destruct;
@end
