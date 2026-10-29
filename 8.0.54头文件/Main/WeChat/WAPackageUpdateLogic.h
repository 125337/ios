@interface WAPackageUpdateLogic : NSObject <WAPackageDownloadUrlFetcherExtension, IWALocalCacheMgrExt>
{
    NSMutableArray * _arrRequestingAppInfoData; // +0x8
}
- (id)init;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (BOOL)isAppInfoDataInRequesting:(id)arg1;
- (id)getRequestingInfoDataForAppInfoData:(id)arg1;
- (void)removeRequestingAppInfoData:(id)arg1;
- (void)tryUpdatePackageWithAppInfoData:(id)arg1;
- (void)onPackageDownloadUrlFetchSuccessWithDownloadUrl:(id)arg1 zstdUrl:(id)arg2 patchUrl:(id)arg3 forInfoData:(id)arg4;
- (void)onPackageDownloadUrlFetchFailWithErrCode:(long long)arg1 forInfoData:(id)arg2;
- (BOOL)startDownloadPkgWithAppInfoData:(id)arg1 CDNURL:(id)arg2 CDNURLWithZstd:(id)arg3 patchURL:(id)arg4;
- (void)onUpdateAppPkgComplete:(BOOL)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (id)arrRequestingAppInfoData;
- (void)setArrRequestingAppInfoData:(id)arg1;
- (void).cxx_destruct;
@end

