@interface MarsNetworkPathMonitor : NSObject
{
    NSObject<OS_nw_path_monitor> * _pathMonitor; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    A _status; // +0x18
}
+ (id)sharedInstance;
+ (int)statusFromPath:(id)arg1;
- (id)init;
- (void)dealloc;
- (int)currentStatus;
@end
