@interface GameCenterJsServiceMgr : MMUserService <MMServiceProtocol>
{
    GameCenterJsService * _jsService; // +0x8
}
- (id)init;
- (void)onServiceClearData;
- (BOOL)canCreate;
- (void)create;
- (void)stop;
- (BOOL)checkAndDestroy;
- (void)destroy;
- (BOOL)checkAndDestroyJsService;
- (id)getJsServiceState;
- (void)dispatchJsServiceState:(id)arg1;
- (void)postMessageFromWebView:(id)arg1 message:(id)arg2;
- (void)processCallbackFromNative:(id)arg1 callbackId:(id)arg2;
- (void)processEventFromNative:(id)arg1 event:(id)arg2;
- (void).cxx_destruct;
@end

