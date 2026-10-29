@interface VpnListener : NSObject
{
    BOOL _is_vpn_used; // +0x8
    NSObject<OS_nw_path_monitor> * _pathMonitor; // +0x10
    NSObject<OS_dispatch_queue> * _queue; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (void)UpdateVpnStatus;
- (BOOL)GetVpnStatus;
- (BOOL)IsVpnConnected;
- (void)dealloc;
@end
