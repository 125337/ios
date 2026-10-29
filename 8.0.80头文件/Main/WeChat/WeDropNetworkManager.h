@interface WeDropNetworkManager : MMUserService <MMServiceProtocol>
{
    unsigned long long _cachedLocalNetworkPermission; // +0x8
    NSObject<OS_nw_browser> * _localNetworkBrowser; // +0x10
    NSObject<OS_dispatch_queue> * _localNetworkBrowserQueue; // +0x18
    NSMutableArray * _callbackList; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)checkAllPermission;
- (BOOL)isWiFiDeviceOn;
- (void)checkLocalNetworkPermission:(id /* block */)arg1;
- (void)tryUpdateNetworkInfo;
- (void)startLocalNetworkCheck;
- (void)stopLocalNetworkCheck;
- (id)getLocalNetworkBrowserQueue;
- (BOOL)checkCurrentWifiDevice;
- (unsigned long long)cachedLocalNetworkPermission;
- (void)setCachedLocalNetworkPermission:(unsigned long long)arg1;
- (id)localNetworkBrowser;
- (void)setLocalNetworkBrowser:(id)arg1;
- (id)localNetworkBrowserQueue;
- (void)setLocalNetworkBrowserQueue:(id)arg1;
- (id)callbackList;
- (void)setCallbackList:(id)arg1;
- (void).cxx_destruct;
@end
