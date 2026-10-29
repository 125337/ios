@interface AffRoamProviderCallback : NSObject
{
    AffRoamProviderDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(AffRoamProviderDispatcherBridgeObjcImpl *)arg1;
- (void)onGetRoamFileEncKeyComplete:(unsigned long long)arg1 error:(int)arg2 createNew:(BOOL)arg3 encKeyList:(id)arg4;
- (void)onGetAdamTunnelCryptoInfoComplete:(unsigned long long)arg1 cryptoResult:(id)arg2;
- (void)onGetIlinkDeviceBindingSessionComplete:(unsigned long long)arg1 error:(int)arg2 response:(id)arg3;
- (void)onGetChatPackageComplete:(unsigned long long)arg1 isLastPkg:(BOOL)arg2 offset:(unsigned long long)arg3 chatPackage:(id)arg4;
- (void)onInsertChatPackageComplete:(unsigned long long)arg1;
- (void)onGetRoamBackupPackagesComplete:(unsigned long long)arg1 response:(id)arg2;
- (void)onSetRoamBackupPackagesComplete:(unsigned long long)arg1 response:(id)arg2;
- (void)onGetNetworkInfosComplete:(unsigned long long)arg1 infos:(id)arg2;
- (void)onGetDeviceNetworkInfosComplete:(unsigned long long)arg1 response:(id)arg2;
- (void)onGetDeviceAvailableStorageSpaceComplete:(unsigned long long)arg1 availableBytes:(unsigned long long)arg2 minThreshold:(unsigned long long)arg3;
- (void)onFilterRestoreMediaComplete:(unsigned long long)arg1 filteredSize:(unsigned long long)arg2 filteredMediaIdList:(id)arg3;
@end

