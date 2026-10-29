@interface WAJSEventHandler_dispatchLiteAppAction : WAJSEventHandler_BaseEvent
{
    int _callbackId; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
@end
