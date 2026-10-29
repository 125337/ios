@interface WxaLiteAppWidgetPublishGlobalEventToTopPageMessage : NSObject
{
    NSNumber * _appUuid; // +0x8
    NSString * _eventName; // +0x10
    NSDictionary * _data; // +0x18
}
+ (id)makeWithAppUuid:(id)arg1 eventName:(id)arg2 data:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
