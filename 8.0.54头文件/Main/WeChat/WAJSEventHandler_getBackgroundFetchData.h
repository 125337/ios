@interface WAJSEventHandler_getBackgroundFetchData : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)getAndReturnPreFetchData:(id)arg1 cleanCache:(BOOL)arg2;
- (void)getAndReturnLocalPeriodFetchData:(id)arg1 cleanCache:(BOOL)arg2;
@end

