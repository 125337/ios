@interface JailBreakHelper : NSObject <PBCoding, MMPackageDownloadMgrExt>
{
    unsigned int _m_hasCheckPuginTimes; // +0x8
    unsigned int _m_lastCheckTime; // +0xc
    NSMutableArray * _m_checkPaths; // +0x10
}
+ (void)PBArrayAdd_m_hasCheckPuginTimes;
+ (void)PBArrayAdd_m_checkPaths;
+ (void)PBArrayAdd_m_lastCheckTime;
+ (void)initialize;
+ (BOOL)JailBroken;
+ (id)getJailbreakRootDir;
+ (id)getJailbreakPath;
+ (id)getIAPCheckPath;
+ (id)loadSetting;
- (id)getPBPropertyTable;
- (id)init;
- (id)getKeyStr;
- (BOOL)IsJailBreak;
- (BOOL)HasInstallJailbreakPlugin:(id)arg1;
- (BOOL)isOverADay;
- (BOOL)save;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (unsigned int)m_hasCheckPuginTimes;
- (void)setM_hasCheckPuginTimes:(unsigned int)arg1;
- (id)m_checkPaths;
- (void)setM_checkPaths:(id)arg1;
- (unsigned int)m_lastCheckTime;
- (void)setM_lastCheckTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
