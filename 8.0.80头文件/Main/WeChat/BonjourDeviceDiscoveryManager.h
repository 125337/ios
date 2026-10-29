@interface BonjourDeviceDiscoveryManager : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    BOOL _isScanning; // +0x8
    BOOL _isPublishing; // +0x9
    NSNetServiceBrowser * _serviceBrowser; // +0x10
    NSNetService * _publishingService; // +0x18
}
+ (id)sharedManager;
- (id)init;
- (void)startPublishingServiceWithName:(id)arg1 port:(unsigned int)arg2 error:(id *)arg3;
- (void)stopPublishing;
- (void)startScanning;
- (void)stopScanning;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (BOOL)isScanning;
- (void)setIsScanning:(BOOL)arg1;
- (BOOL)isPublishing;
- (void)setIsPublishing:(BOOL)arg1;
- (id)serviceBrowser;
- (void)setServiceBrowser:(id)arg1;
- (id)publishingService;
- (void)setPublishingService:(id)arg1;
- (void).cxx_destruct;
@end
