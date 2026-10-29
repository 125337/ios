@interface MMPackageDownloadMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, IMsgExt>
{
    NSMutableSet * m_downliadingPackageLists; // +0x8
    NSMutableSet * m_freshDownliadingPackageLists; // +0x10
    NSMutableSet * m_downloadingPackages; // +0x18
    NSMutableSet * m_cancelDownloadPackages; // +0x20
    NSDateFormatter * m_dateFormatter; // +0x28
}
- (id)getPackageListPath:(id)arg1;
- (id)getPackageBasePath:(id)arg1 tid:(id)arg2;
- (id)getPackageCachePath:(id)arg1 tid:(id)arg2;
- (id)getPackageIconPath:(id)arg1 tid:(id)arg2;
- (id)LoadPackageListArchive:(id)arg1;
- (void)SavePackageListArchive:(id)arg1 packageListArchive:(id)arg2;
- (id)getPackageList:(unsigned int)arg1;
- (void)downloadPackageList:(unsigned int)arg1 fresh:(BOOL)arg2 onlyForTid:(id)arg3;
- (void)downloadPackageList:(unsigned int)arg1;
- (void)downloadPackageList:(unsigned int)arg1 onlyForTid:(id)arg2;
- (void)onPackageListSynced:(id)arg1;
- (BOOL)downloadPackage:(unsigned int)arg1 tid:(id)arg2 localVersion:(id)arg3;
- (void)onPackageSynced:(id)arg1;
- (void)cancelPackage:(unsigned int)arg1 tid:(id)arg2;
- (void)deletePackage:(unsigned int)arg1 tid:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end

