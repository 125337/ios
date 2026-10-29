@interface LiteAppModuleGyroscope : LiteAppModule
+ (id)liteapp_export_method_sync_27_;
+ (id)liteapp_export_method_sync_28_;
+ (id)liteapp_export_method_async_29_;
+ (id)liteapp_export_method_sync_30_;
- (BOOL)startGyroscope:(id)arg1;
- (BOOL)stopGyroscope;
- (BOOL)onGyroscopeChange;
- (BOOL)offGyroscopeChange;
- (long long)getSensorRefreshInterval:(long long)arg1;
@end
