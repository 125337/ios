@interface WxaLiteAppWidgetPublishGlobalEventToAllMessage : NSObject
{
    NSString * _eventName; // +0x8
    NSDictionary * _data; // +0x10
}
+ (id)makeWithEventName:(id)arg1 data:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
