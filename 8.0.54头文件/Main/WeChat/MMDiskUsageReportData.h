@interface MMDiskUsageReportData : NSObject <PBCoding>
{
    unsigned int _m_totalFileNum; // +0x8
    unsigned int _m_scanStartTime; // +0xc
    unsigned int _m_scanEndTime; // +0x10
    unsigned int _m_scanUsedTime; // +0x14
    unsigned int _m_scanCount; // +0x18
    unsigned int _m_totalDelFileNum; // +0x1c
    unsigned long long _m_totalFileSize; // +0x20
    NSMutableDictionary * _m_dicBizStat; // +0x28
    NSMutableDictionary * _m_dicFileTypeInUseStat; // +0x30
    NSMutableDictionary * _m_dicSpecialFileStat; // +0x38
    unsigned long long _m_totalDelFileSize; // +0x40
}
+ (void)PBArrayAdd_m_totalFileNum;
+ (void)PBArrayAdd_m_totalFileSize;
+ (void)PBArrayAdd_m_dicBizStat;
+ (void)PBArrayAdd_m_scanStartTime;
+ (void)PBArrayAdd_m_scanEndTime;
+ (void)PBArrayAdd_m_scanUsedTime;
+ (void)PBArrayAdd_m_scanCount;
+ (void)PBArrayAdd_m_totalDelFileNum;
+ (void)PBArrayAdd_m_totalDelFileSize;
+ (void)PBArrayAdd_m_dicFileTypeInUseStat;
+ (void)PBArrayAdd_m_dicSpecialFileStat;
+ (void)initialize;
+ (id)loadReportDataFromFile:(id)arg1;
+ (BOOL)saveReportDataWithScanStat:(id)arg1 toFilePath:(id)arg2;
- (id)getPBPropertyTable;
- (id)description;
- (id)genTotalStatString;
- (id)genStatString:(id)arg1 bizTypeString:(id)arg2;
- (id)genFileTypeInUseString:(id)arg1 fileTypeString:(id)arg2;
- (id)genSpecialFileTypeReportString:(id)arg1 specialTypeStirng:(id)arg2;
- (unsigned int)m_totalFileNum;
- (void)setM_totalFileNum:(unsigned int)arg1;
- (unsigned long long)m_totalFileSize;
- (void)setM_totalFileSize:(unsigned long long)arg1;
- (id)m_dicBizStat;
- (void)setM_dicBizStat:(id)arg1;
- (id)m_dicFileTypeInUseStat;
- (void)setM_dicFileTypeInUseStat:(id)arg1;
- (id)m_dicSpecialFileStat;
- (void)setM_dicSpecialFileStat:(id)arg1;
- (unsigned int)m_scanStartTime;
- (void)setM_scanStartTime:(unsigned int)arg1;
- (unsigned int)m_scanEndTime;
- (void)setM_scanEndTime:(unsigned int)arg1;
- (unsigned int)m_scanUsedTime;
- (void)setM_scanUsedTime:(unsigned int)arg1;
- (unsigned int)m_scanCount;
- (void)setM_scanCount:(unsigned int)arg1;
- (unsigned int)m_totalDelFileNum;
- (void)setM_totalDelFileNum:(unsigned int)arg1;
- (unsigned long long)m_totalDelFileSize;
- (void)setM_totalDelFileSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

