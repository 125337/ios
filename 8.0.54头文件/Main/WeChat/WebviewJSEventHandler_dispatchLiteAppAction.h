@interface WebviewJSEventHandler_dispatchLiteAppAction : WebviewJSEventHandlerBase <MMLiteAppStoreExt>
{
    int _callbackId; // +0x8
    JSEvent * _jsEvent; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (void).cxx_destruct;
@end

