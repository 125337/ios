@interface EmoticonSortSetting : NSObject <PBCoding>
{
    NSMutableArray * _m_sortPids; // +0x8
}
+ (void)PBArrayAdd_m_sortPids;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)m_newSortPids;
- (void)setM_newSortPids:(id)arg1;
- (id)init;
- (void)resetSetting;
- (BOOL)loadSetting;
- (void)copyFeildFrom:(id)arg1;
- (void)saveSetting;
- (id)getLocalCacheRootDir;
- (id)getLocalCachePath;
- (id)getSortPackageList:(id)arg1 withTusiji:(BOOL)arg2;
- (id)getSortPackageListWithDownloadedTusiji:(id)arg1;
- (id)getOldSortPackageListWithDownloadedTusiji:(id)arg1;
- (id)m_sortPids;
- (void)setM_sortPids:(id)arg1;
- (void).cxx_destruct;
@end

