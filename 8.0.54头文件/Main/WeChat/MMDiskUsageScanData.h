@interface MMDiskUsageScanData : NSObject <PBCoding>
{
    MMDiskUsageScanStat * _m_stat; // +0x8
    MMFolderWrap * _m_rootFolder; // +0x10
}
+ (void)PBArrayAdd_m_stat;
+ (void)PBArrayAdd_m_rootFolder;
+ (void)initialize;
+ (id)scanRootDir;
+ (id)getNewDiskUsageScanData;
- (id)getPBPropertyTable;
- (id)m_stat;
- (void)setM_stat:(id)arg1;
- (id)m_rootFolder;
- (void)setM_rootFolder:(id)arg1;
- (void).cxx_destruct;
@end

