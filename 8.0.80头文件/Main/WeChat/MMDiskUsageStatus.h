@interface MMDiskUsageStatus : NSObject <PBCoding>
{
    unsigned int _m_lastStartScanTime; // +0x8
    unsigned int _m_lastReportTime; // +0xc
    unsigned int _m_lastScanFinishTime; // +0x10
    unsigned int _m_lastCleanTmpTime; // +0x14
}
+ (void)PBArrayAdd_m_lastStartScanTime;
+ (void)PBArrayAdd_m_lastReportTime;
+ (void)PBArrayAdd_m_lastScanFinishTime;
+ (void)PBArrayAdd_m_lastCleanTmpTime;
+ (void)initialize;
+ (id)loadStausDataFromFile;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)saveStatusDataToFile;
- (id)description;
- (unsigned int)m_lastStartScanTime;
- (void)setM_lastStartScanTime:(unsigned int)arg1;
- (unsigned int)m_lastReportTime;
- (void)setM_lastReportTime:(unsigned int)arg1;
- (unsigned int)m_lastScanFinishTime;
- (void)setM_lastScanFinishTime:(unsigned int)arg1;
- (unsigned int)m_lastCleanTmpTime;
- (void)setM_lastCleanTmpTime:(unsigned int)arg1;
@end
