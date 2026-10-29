@interface WxaLiteAppWidgetPublishEventToTopPageMessage : NSObject
{
    NSNumber * _appUuid; // +0x8
    NSNumber * _nodeId; // +0x10
    NSString * _eventName; // +0x18
    NSDictionary * _data; // +0x20
}
+ (id)makeWithAppUuid:(id)arg1 nodeId:(id)arg2 eventName:(id)arg3 data:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (id)nodeId;
- (void)setNodeId:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
