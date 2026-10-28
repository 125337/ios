@interface _TtC9WeAppCore17WALocationHandler : NSObject <TencentLBSLocationManagerDelegate>
{
     locationMgr; // +0x8
     watchHandlers; // +0x10
     lock; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void).cxx_destruct;
@end
