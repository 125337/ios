@interface AffMigPlatformProviderCallback : NSObject
{
    AffMigPlatformProviderDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(AffMigPlatformProviderDispatcherBridgeObjcImpl *)arg1;
- (void)onGetChatPackageComplete:(unsigned long long)arg1 isLastPkg:(BOOL)arg2 offset:(unsigned long long)arg3 chatPackage:(id)arg4;
- (void)onInsertChatPackageComplete:(unsigned long long)arg1;
- (void)onFilterRestoreMediaComplete:(unsigned long long)arg1 filteredSize:(unsigned long long)arg2 filteredMediaIdList:(id)arg3;
- (void)onRequestSetupEnvWithUsernameComplete:(unsigned long long)arg1 result:(int)arg2;
@end
