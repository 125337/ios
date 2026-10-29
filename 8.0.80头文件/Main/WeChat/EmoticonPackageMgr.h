@interface EmoticonPackageMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isInstallingTusiji; // +0x8
    EmoticonDataDB * m_oEmoticonPackageDB; // +0x10
    NSRecursiveLock * _m_oLock; // +0x18
    EmoticonSortSetting * _m_sortSetting; // +0x20
    NSMutableDictionary * _m_packageDownloadStatusCacheDic; // +0x28
}
+ (id)packageImageFromLightModeName:(id)arg1 darkModeName:(id)arg2 style:(unsigned long long)arg3;
+ (id)getEmoticonPackageImageByPid:(id)arg1 style:(unsigned long long)arg2;
- (id)init;
- (void)onServiceInit;
- (BOOL)updateCacheDownloadStatusForPid:(id)arg1;
- (BOOL)isDBStatusDownloadedForPid:(id)arg1;
- (BOOL)isCacheStatusDownloadedForPid:(id)arg1;
- (void)setIPMergeTipsShowStatusTo:(BOOL)arg1;
- (BOOL)isIPMergeTipsShowed;
- (void)setIPMergeEnabledTo:(BOOL)arg1;
- (BOOL)isIPMergeEnabled;
- (void)initLocalList;
- (void)hardcodeTusiji;
- (void)HardcodePackage;
- (void)tryInstallTusiji;
- (BOOL)addEmoticonPackage:(id)arg1 name:(id)arg2 payStatus:(unsigned int)arg3 downloadStatus:(unsigned int)arg4 iconUrl:(id)arg5;
- (BOOL)addEmoticonPackageSilently:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 payStatus:(unsigned int)arg4 downloadStatus:(unsigned int)arg5;
- (BOOL)deleteEmoticonPackageWithoutUploadByPid:(id)arg1;
- (BOOL)deleteEmoticonSilentlyByPid:(id)arg1 needRemoveFile:(BOOL)arg2;
- (BOOL)update:(id)arg1 payStatus:(unsigned int)arg2;
- (BOOL)update:(id)arg1 count:(unsigned int)arg2;
- (BOOL)update:(id)arg1 designerUin:(id)arg2;
- (BOOL)update:(id)arg1 designerIPSetKey:(id)arg2;
- (void)notifyPackageListChangedWithPid:(id)arg1;
- (BOOL)updateSilently:(id)arg1 downloadStatus:(unsigned int)arg2;
- (BOOL)updateSilently:(id)arg1 count:(unsigned int)arg2;
- (id)getEmoticonPackageList;
- (id)getCustomPackage;
- (id)getCameraPackage;
- (id)getTusijiPackage;
- (void)saveSort:(id)arg1;
- (id)getSortEmoticonPackageListWithTusiji:(BOOL)arg1 withCustom:(BOOL)arg2;
- (id)getSortEmoticonPackageListWithDownloadedTusiji;
- (id)getDistinctDesignerUin;
- (id)getNeedUpdateDesignerPids;
- (id)getDesignerPids:(id)arg1;
- (id)getDesignerUin:(id)arg1;
- (id)getDesignerIPSetKey:(id)arg1;
- (BOOL)isUserFollowingDesigner:(id)arg1;
- (BOOL)isEmoticonPackagePurchased:(id)arg1;
- (BOOL)isEmoticonPackageDownLoaded:(id)arg1;
- (BOOL)unzipPackageAtPath:(id)arg1 withPid:(id)arg2 count:(unsigned long long *)arg3;
- (BOOL)installDirPath:(id)arg1 pid:(id)arg2 count:(unsigned long long *)arg3;
- (BOOL)installPackageAtPath:(id)arg1 withName:(id)arg2 withPid:(id)arg3 iconUrl:(id)arg4;
- (BOOL)addPackageList:(id)arg1;
- (id)PreProcessServerUpdateList:(id)arg1;
- (id)m_oEmoticonPackageDB;
- (void)setM_oEmoticonPackageDB:(id)arg1;
- (id)m_oLock;
- (void)setM_oLock:(id)arg1;
- (id)m_sortSetting;
- (void)setM_sortSetting:(id)arg1;
- (id)m_packageDownloadStatusCacheDic;
- (void)setM_packageDownloadStatusCacheDic:(id)arg1;
- (BOOL)isInstallingTusiji;
- (void)setIsInstallingTusiji:(BOOL)arg1;
- (void).cxx_destruct;
@end
