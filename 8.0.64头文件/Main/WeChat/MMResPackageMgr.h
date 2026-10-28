@interface MMResPackageMgr : MMUserService <MMServiceProtocol, MMPackageDownloadMgrExt>
{
    NSMutableDictionary * m_resMap; // +0x8
}
- (id)init;
- (BOOL)createDirIfNotExist:(id)arg1;
- (BOOL)isResPackageReady:(id)arg1;
- (void)downloadResPackage:(id)arg1;
- (void)cancelResPackageDownload:(id)arg1;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageCancelFinish:(id)arg1;
- (id)pathForResNamed:(id)arg1 withPID:(id)arg2;
- (void).cxx_destruct;
@end
