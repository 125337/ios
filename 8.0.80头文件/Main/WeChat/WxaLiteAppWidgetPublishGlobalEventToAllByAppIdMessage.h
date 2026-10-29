@interface WxaLiteAppWidgetPublishGlobalEventToAllByAppIdMessage : NSObject
{
    NSString * _appId; // +0x8
    NSString * _eventName; // +0x10
    NSDictionary * _data; // +0x18
}
+ (id)makeWithAppId:(id)arg1 eventName:(id)arg2 data:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
