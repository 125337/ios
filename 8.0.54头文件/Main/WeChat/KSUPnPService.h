@interface KSUPnPService : NSObject <KSUPnPDiscovererDelegate>
{
    id <KSUPnPServiceObserver> _observer; // +0x8
    NSString * _UUID; // +0x10
    KSUPnPDiscoverer * _discoverer; // +0x18
}
+ (id)defaultService;
- (id)init;
- (id)UUID;
- (BOOL)isDiscoveringDevices;
- (id)deviceList;
- (void)startDiscoveringDevicesWithConfiguration:(id)arg1;
- (void)stopDiscoveringDevices;
- (void)UPnPDiscoverer:(id)arg1 didDiscoverDevice:(id)arg2;
- (void)UPnPDiscoverer:(id)arg1 didUpdateDevice:(id)arg2;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)discoverer;
- (void)setDiscoverer:(id)arg1;
- (void).cxx_destruct;
@end

