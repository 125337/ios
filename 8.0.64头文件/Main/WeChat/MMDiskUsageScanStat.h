@interface MMDiskUsageScanStat : NSObject <PBCoding>
{
    BOOL _m_isStart; // +0x8
    unsigned int m_curStartTime; // +0xc
    unsigned int m_curEndTime; // +0x10
    unsigned int m_curUsedTime; // +0x14
    unsigned int m_curScannedFolderNum; // +0x18
    unsigned int m_curAddFolderNum; // +0x1c
    unsigned int m_curScannedFileNum; // +0x20
    unsigned int m_curDelFolderNum; // +0x24
    unsigned int m_curDelFileNum; // +0x28
    unsigned int m_hitCacheCount; // +0x2c
    unsigned int m_setCacheCount; // +0x30
    unsigned int m_timeOutCacheCount; // +0x34
    unsigned int m_fileModifyCacheCount; // +0x38
    unsigned int m_refreshCacheTimeCount; // +0x3c
    unsigned int m_changeCacheCount; // +0x40
    unsigned int _m_totalStartTime; // +0x44
    unsigned int _m_totalEndTime; // +0x48
    unsigned int _m_totalUsedTime; // +0x4c
    unsigned int _m_totalScanCount; // +0x50
    unsigned int _m_totalFolderNum; // +0x54
    unsigned int _m_totalDelFolderNum; // +0x58
    unsigned int _m_totalFileNum; // +0x5c
    unsigned int _m_totalDelFileNum; // +0x60
    unsigned int _m_totalPuffyFileNum; // +0x64
    unsigned int _m_midImgWxamFileCount; // +0x68
    unsigned int _m_midImgTotalFileCount; // +0x6c
    unsigned long long m_curDelFileSize; // +0x70
    unsigned long long _m_totalFileSize; // +0x78
    unsigned long long _m_totalDelFileSize; // +0x80
    NSMutableDictionary * _m_dicTotalBizStat; // +0x88
    NSMutableDictionary * _m_dicTotalFileTypeInUseStat; // +0x90
    NSMutableDictionary * _m_dicTotalWechatFileClassStat; // +0x98
    unsigned long long _m_totalLogicFileSize; // +0xa0
    unsigned long long _m_totalPuffyFileSize; // +0xa8
    unsigned long long _m_totalPuffyLogicFileSize; // +0xb0
    unsigned long long _hardlinkIgnoreSize; // +0xb8
    unsigned long long _hardlinkIgnoreCnt; // +0xc0
    unsigned long long _hardlinkTotalCnt; // +0xc8
    unsigned long long _cowIgnoreSize; // +0xd0
    unsigned long long _cowIgnoreCnt; // +0xd8
    unsigned long long _cowTotalCnt; // +0xe0
    NSRecursiveLock * _markLock; // +0xe8
}
+ (void)PBArrayAdd_m_totalStartTime;
+ (void)PBArrayAdd_m_totalEndTime;
+ (void)PBArrayAdd_m_totalUsedTime;
+ (void)PBArrayAdd_m_totalScanCount;
+ (void)PBArrayAdd_m_totalFolderNum;
+ (void)PBArrayAdd_m_totalFileNum;
+ (void)PBArrayAdd_m_totalFileSize;
+ (void)PBArrayAdd_m_dicTotalBizStat;
+ (void)PBArrayAdd_m_totalDelFolderNum;
+ (void)PBArrayAdd_m_totalDelFileNum;
+ (void)PBArrayAdd_m_totalDelFileSize;
+ (void)PBArrayAdd_m_dicTotalFileTypeInUseStat;
+ (void)PBArrayAdd_m_dicTotalWechatFileClassStat;
+ (void)PBArrayAdd_m_totalLogicFileSize;
+ (void)PBArrayAdd_m_totalPuffyFileNum;
+ (void)PBArrayAdd_m_totalPuffyFileSize;
+ (void)PBArrayAdd_m_totalPuffyLogicFileSize;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)markStartTime;
- (void)markStopTime:(BOOL)arg1;
- (id)currentScanSummary;
- (id)totalScanSummy;
- (id)description;
- (id)getFileClassDetailInfo;
- (unsigned int)m_curStartTime;
- (void)setM_curStartTime:(unsigned int)arg1;
- (unsigned int)m_curEndTime;
- (void)setM_curEndTime:(unsigned int)arg1;
- (unsigned int)m_curUsedTime;
- (void)setM_curUsedTime:(unsigned int)arg1;
- (unsigned int)m_curScannedFolderNum;
- (void)setM_curScannedFolderNum:(unsigned int)arg1;
- (unsigned int)m_curAddFolderNum;
- (void)setM_curAddFolderNum:(unsigned int)arg1;
- (unsigned int)m_curScannedFileNum;
- (void)setM_curScannedFileNum:(unsigned int)arg1;
- (unsigned int)m_curDelFolderNum;
- (void)setM_curDelFolderNum:(unsigned int)arg1;
- (unsigned int)m_curDelFileNum;
- (void)setM_curDelFileNum:(unsigned int)arg1;
- (unsigned long long)m_curDelFileSize;
- (void)setM_curDelFileSize:(unsigned long long)arg1;
- (unsigned int)m_hitCacheCount;
- (void)setM_hitCacheCount:(unsigned int)arg1;
- (unsigned int)m_setCacheCount;
- (void)setM_setCacheCount:(unsigned int)arg1;
- (unsigned int)m_timeOutCacheCount;
- (void)setM_timeOutCacheCount:(unsigned int)arg1;
- (unsigned int)m_fileModifyCacheCount;
- (void)setM_fileModifyCacheCount:(unsigned int)arg1;
- (unsigned int)m_refreshCacheTimeCount;
- (void)setM_refreshCacheTimeCount:(unsigned int)arg1;
- (unsigned int)m_changeCacheCount;
- (void)setM_changeCacheCount:(unsigned int)arg1;
- (unsigned int)m_totalStartTime;
- (void)setM_totalStartTime:(unsigned int)arg1;
- (unsigned int)m_totalEndTime;
- (void)setM_totalEndTime:(unsigned int)arg1;
- (unsigned int)m_totalUsedTime;
- (void)setM_totalUsedTime:(unsigned int)arg1;
- (unsigned int)m_totalScanCount;
- (void)setM_totalScanCount:(unsigned int)arg1;
- (unsigned int)m_totalFolderNum;
- (void)setM_totalFolderNum:(unsigned int)arg1;
- (unsigned int)m_totalDelFolderNum;
- (void)setM_totalDelFolderNum:(unsigned int)arg1;
- (unsigned int)m_totalFileNum;
- (void)setM_totalFileNum:(unsigned int)arg1;
- (unsigned long long)m_totalFileSize;
- (void)setM_totalFileSize:(unsigned long long)arg1;
- (unsigned int)m_totalDelFileNum;
- (void)setM_totalDelFileNum:(unsigned int)arg1;
- (unsigned long long)m_totalDelFileSize;
- (void)setM_totalDelFileSize:(unsigned long long)arg1;
- (id)m_dicTotalBizStat;
- (void)setM_dicTotalBizStat:(id)arg1;
- (id)m_dicTotalFileTypeInUseStat;
- (void)setM_dicTotalFileTypeInUseStat:(id)arg1;
- (id)m_dicTotalWechatFileClassStat;
- (void)setM_dicTotalWechatFileClassStat:(id)arg1;
- (unsigned long long)m_totalLogicFileSize;
- (void)setM_totalLogicFileSize:(unsigned long long)arg1;
- (unsigned int)m_totalPuffyFileNum;
- (void)setM_totalPuffyFileNum:(unsigned int)arg1;
- (unsigned long long)m_totalPuffyFileSize;
- (void)setM_totalPuffyFileSize:(unsigned long long)arg1;
- (unsigned long long)m_totalPuffyLogicFileSize;
- (void)setM_totalPuffyLogicFileSize:(unsigned long long)arg1;
- (unsigned long long)hardlinkIgnoreSize;
- (void)setHardlinkIgnoreSize:(unsigned long long)arg1;
- (unsigned long long)hardlinkIgnoreCnt;
- (void)setHardlinkIgnoreCnt:(unsigned long long)arg1;
- (unsigned long long)hardlinkTotalCnt;
- (void)setHardlinkTotalCnt:(unsigned long long)arg1;
- (unsigned long long)cowIgnoreSize;
- (void)setCowIgnoreSize:(unsigned long long)arg1;
- (unsigned long long)cowIgnoreCnt;
- (void)setCowIgnoreCnt:(unsigned long long)arg1;
- (unsigned long long)cowTotalCnt;
- (void)setCowTotalCnt:(unsigned long long)arg1;
- (unsigned int)m_midImgWxamFileCount;
- (void)setM_midImgWxamFileCount:(unsigned int)arg1;
- (unsigned int)m_midImgTotalFileCount;
- (void)setM_midImgTotalFileCount:(unsigned int)arg1;
- (BOOL)m_isStart;
- (void)setM_isStart:(BOOL)arg1;
- (id)markLock;
- (void)setMarkLock:(id)arg1;
- (void).cxx_destruct;
@end
