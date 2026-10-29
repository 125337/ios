@interface MBLifecycleListenerManager : NSObject
{
    NSMutableDictionary * _listenersMap; // +0x8
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x10
}
- (id)init;
- (void)registerLifecycleListener:(unsigned long long)arg1 listener:(id)arg2;
- (void)onDestroy:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
