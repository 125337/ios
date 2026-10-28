@interface LiteAppModuleGyroscope : NSObject <LiteAppDynamicModuleProtocol>
{
    LiteAppDynamicModuleCallback * _callback; // +0x8
}
+ (id)liteapp_export_method_sync_29;
+ (id)liteapp_export_method_sync_30;
+ (id)liteapp_export_method_async_31;
+ (id)liteapp_export_method_sync_32;
- (BOOL)startGyroscope:(id)arg1;
- (BOOL)stopGyroscope;
- (BOOL)onGyroscopeChange;
- (BOOL)offGyroscopeChange;
- (long long)getSensorRefreshInterval:(long long)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
