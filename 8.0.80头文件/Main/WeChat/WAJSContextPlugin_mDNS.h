@interface WAJSContextPlugin_mDNS : WAJSContextPluginBase <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    int _serviceBrowserStatus; // +0x8
    NSString * _serviceType; // +0x10
    NSNetServiceBrowser * _serviceBrowser; // +0x18
    NSMutableArray * _serviceFoundList; // +0x20
    id /* block */ _startCompleteBlock; // +0x28
    id /* block */ _stopCompleteBlock; // +0x30
    MMTimer * _timerForStartScan; // +0x38
}
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)startMdnsScan:(id)arg1 CompleteBlock:(id /* block */)arg2;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)stopMdnsScan:(id /* block */)arg1;
- (void)timeoutAfterServiceStartScan;
- (void)tryStopScan;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceWillResolve:(id)arg1;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)notifyServiceLostToJSCore:(id)arg1;
- (void)sendJSEventToAppService:(id)arg1;
- (void)dispatchEvent:(id)arg1 data:(id)arg2;
- (void).cxx_destruct;
@end
