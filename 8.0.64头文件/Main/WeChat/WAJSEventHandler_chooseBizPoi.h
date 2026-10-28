@interface WAJSEventHandler_chooseBizPoi : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)launchBizPoiSelectPage:(LaunchBizPoiSelectorInfo)arg1 selectCallback:(id /* block */)arg2;
- (id)buildCallbackData:(id)arg1;
@end
