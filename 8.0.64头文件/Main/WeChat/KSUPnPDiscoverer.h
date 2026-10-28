@interface KSUPnPDiscoverer : NSObject <KSUPnPDeviceStatusObserver>
{
    NSObject<OS_dispatch_queue> * _socketQueue; // +0x8
    int _unicastSocket; // +0x10
    NSObject<OS_dispatch_source> * _unicastSendingTimer; // +0x18
    NSObject<OS_dispatch_source> * _unicastReceivingSource; // +0x20
    int _multicastSocket; // +0x28
    NSObject<OS_dispatch_source> * _multicastReceivingSource; // +0x30
    BOOL _isDiscoveringDevices; // +0x38
    NSString * _UUID; // +0x40
    id <KSUPnPDiscovererDelegate> _delegate; // +0x48
    NSMutableDictionary * _deviceList; // +0x50
    unsigned long long _lastDiscoverySequence; // +0x58
}
- (id)initWithUUID:(id)arg1;
- (void)_init;
- (void)dealloc;
- (id)createSSDPRequest;
- (void)startDiscoveringDevicesWithConfiguration:(id)arg1;
- (void)stopDiscoveringDevices;
- (void)handleDiscoveredDevice:(id)arg1 type:(id)arg2;
- (BOOL)isUnicastSocketReady;
- (BOOL)setupUnicastSocketWithRequest:(id)arg1 error:(id *)arg2;
- (void)closeUnicastSocket;
- (void)startSendingUnicastMessagesPeriodicallyWithConfiguration:(id)arg1;
- (void)stopSendingUnicastMessagesPeriodically;
- (void)startReceivingUnicastMessages;
- (void)stopReceivingUnicastMessages;
- (BOOL)isMulticastSocketReady;
- (BOOL)setupMulticastSocketWithError:(id *)arg1;
- (void)closeMulticastSocket;
- (void)startReceivingMulticastMessages;
- (void)stopReceivingMulticastMessages;
- (void)sendMessageWithSocket:(int)arg1 type:(id)arg2 request:(id)arg3;
- (void)receiveMessageWithSocket:(int)arg1 type:(id)arg2;
- (void)deviceStatusDidChange:(id)arg1;
- (id)UUID;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDiscoveringDevices;
- (void)setIsDiscoveringDevices:(BOOL)arg1;
- (id)deviceList;
- (unsigned long long)lastDiscoverySequence;
- (void)setLastDiscoverySequence:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
