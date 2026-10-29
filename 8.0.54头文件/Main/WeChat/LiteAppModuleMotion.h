@interface LiteAppModuleMotion : NSObject <LiteAppDynamicModuleProtocol>
{
    LiteAppDynamicModuleCallback * _callback; // +0x8
}
+ (id)liteapp_export_method_async_23;
+ (id)liteapp_export_method_sync_24;
- (void)onDeviceOrientationChange:(id)arg1;
- (void)offDeviceOrientationChange;
- (id)getMotionManager;
- (long long)getSensorUpdateInterval:(long long)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end

