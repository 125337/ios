@interface MJAppRequestManager : NSObject <OMJAppRequestBridgeServiceDelegate>
{
    shared_ptr<ilink::NetworkManager> _networkManager; // +0x8
    BOOL _isShutdown; // +0x18
    OMJAppRequestBridgeService * _appRequestBridgeService; // +0x20
    NSMutableSet * _activeHandles; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)resetForAccountChange;
- (void)shutdown;
- (long long)appRequestBridgeService:(id)arg1 beginRequest:(id)arg2 body:(id)arg3 handle:(id)arg4;
- (void)appRequestBridgeService:(id)arg1 cancelRequestWithHandle:(id)arg2 reason:(long long)arg3;
- (long long)buildRequestInfo:(void *)arg1 request:(id)arg2 body:(id)arg3 handle:(id)arg4;
- (void)handleResponseBytes:(const void *)arg1 errorCode:(int)arg2 handle:(id)arg3;
- (BOOL)ensureNetworkManager;
- (void)destroyNetworkManager;
- (id)appRequestBridgeService;
- (void)setAppRequestBridgeService:(id)arg1;
- (id)activeHandles;
- (void)setActiveHandles:(id)arg1;
- (BOOL)isShutdown;
- (void)setIsShutdown:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
