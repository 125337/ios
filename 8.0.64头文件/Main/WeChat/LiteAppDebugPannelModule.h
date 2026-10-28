@interface LiteAppDebugPannelModule : NSObject <LiteAppDynamicModuleProtocol>
{
    LiteAppDynamicModuleCallback * _callback; // +0x8
}
+ (id)liteapp_export_method_sync_31;
+ (id)liteapp_export_method_sync_32;
+ (id)liteapp_export_method_sync_33;
- (id)getLiteAppList;
- (id)getLiteAppConfigList;
- (BOOL)removeLiteApp:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
