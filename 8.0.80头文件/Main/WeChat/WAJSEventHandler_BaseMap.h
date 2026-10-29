@interface WAJSEventHandler_BaseMap : WAJSEventHandler_BaseEvent
- (id)embedMapPlugin;
- (id)embedMapGetChildView:(unsigned int)arg1;
- (id)embedMapGetFileData:(id)arg1;
- (void)embedMapGetFileData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)embedMapSendEventToJSBridgeAndService:(id)arg1 param:(id)arg2;
- (id)embedMapReferenceView;
- (id)embedMapParentViewController;
- (id)embedMapInvokerAppid;
- (id)embedMapIsolationPlugin;
- (unsigned int)internalMapIdFromFront:(unsigned int)arg1;
- (BOOL)checkMapOwnership:(unsigned int)arg1;
- (id)mapViewWithId:(unsigned int)arg1;
@end
