@interface WAMediaCastingUpnpDevicesPool : NSObject
{
    NSMutableDictionary * _pool; // +0x8
    NSObject<OS_dispatch_queue> * _synchronizationQueue; // +0x10
}
- (id)init;
- (void)addDevicesWithLocation:(id)arg1 usn:(id)arg2 uuid:(id)arg3 data:(id)arg4 address:(id)arg5;
- (void)removeDevicesWithUSN:(id)arg1 uuid:(id)arg2 address:(id)arg3;
- (void)removeAll;
- (id)allDevices;
- (id)pool;
- (void)setPool:(id)arg1;
- (id)synchronizationQueue;
- (void)setSynchronizationQueue:(id)arg1;
- (void).cxx_destruct;
@end

