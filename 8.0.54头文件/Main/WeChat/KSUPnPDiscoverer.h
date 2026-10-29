@interface KSUPnPDiscoverer : NSObject <KSUPnPDeviceStatusObserver>
{
    BOOL _isDiscoveringDevices; // +0x8
    NSString * _UUID; // +0x10
    id <KSUPnPDiscovererDelegate> _delegate; // +0x18
    NSMutableDictionary * _deviceList; // +0x20
    unsigned long long _lastDiscoverySequence; // +0x28
    NSObject<OS_dispatch_queue> * _queue; // +0x30
}
- (id)initWithUUID:(id)arg1;
- (void)_init;
- (void)dealloc;
- (id)createSSDPRequest;
- (void)startDiscoveringDevicesWithConfiguration:(id)arg1;
- (void)stopDiscoveringDevices;
- (void)handleDiscoveredDevice:(id)arg1;
- (id)sendBroadcastMessageWithRequest:(id)arg1;
- (void)deviceStatusDidChange:(id)arg1;
- (id)UUID;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDiscoveringDevices;
- (void)setIsDiscoveringDevices:(BOOL)arg1;
- (id)deviceList;
- (unsigned long long)lastDiscoverySequence;
- (void)setLastDiscoverySequence:(unsigned long long)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end

