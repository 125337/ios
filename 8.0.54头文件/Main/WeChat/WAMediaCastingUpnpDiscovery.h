@interface WAMediaCastingUpnpDiscovery : NSObject
{
    BOOL _isSearching; // +0x8
    int _fd; // +0xc
    id <WAMediaCastingUpnpDiscoveryDelegate> _delegate; // +0x10
    WAMediaCastingUpnpDevicesPool * _devicesPool; // +0x18
    NSObject<OS_dispatch_source> * _dispatchSource; // +0x20
    NSObject<OS_dispatch_queue> * _dispatchQueue; // +0x28
    NSTimer * _sendTimer; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)cancelSearch;
- (void)searchWithTimeout:(double)arg1;
- (void)openBroadcast;
- (void)sendBroadcast;
- (void)timeTick;
- (void)raiseError:(id)arg1;
- (void)close;
- (id)searchRequestData;
- (void)onReceiveData:(id)arg1 address:(id)arg2;
- (void)handleLocation:(id)arg1 usn:(id)arg2 uuid:(id)arg3 address:(id)arg4;
- (void)handleDeviceByeByeWith:(id)arg1 uuid:(id)arg2 address:(id)arg3;
- (void)notifyDeviceChanged;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isSearching;
- (void)setIsSearching:(BOOL)arg1;
- (id)devicesPool;
- (void)setDevicesPool:(id)arg1;
- (id)dispatchSource;
- (void)setDispatchSource:(id)arg1;
- (id)dispatchQueue;
- (void)setDispatchQueue:(id)arg1;
- (int)fd;
- (void)setFd:(int)arg1;
- (id)sendTimer;
- (void)setSendTimer:(id)arg1;
- (void).cxx_destruct;
@end

