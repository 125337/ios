@interface LiteAppModuleWx : NSObject <LiteAppDynamicModuleProtocol>
{
    LiteAppDynamicModuleCallback * _callback; // +0x8
}
+ (id)liteapp_export_method_sync_22;
+ (id)liteapp_export_method_sync_23;
- (id)getAccountInfo;
- (BOOL)isCNPayWalletRegion;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
