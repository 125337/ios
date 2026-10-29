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
    unsigned long long m_curDelFileSize; // +0x68
    unsigned long long _m_totalFileSize; // +0x70
    unsigned long long _m_totalDelFileSize; // +0x78
    NSMutableDictionary * _m_dicTotalBizStat; // +0x80
    NSMutableDictionary * _m_dicTotalFileTypeInUseStat; // +0x88
    NSMutableDictionary * _m_dicTotalWechatFileClassStat; // +0x90
    NSMutableDictionary * _m_dictOtherDataFileStat; // +0x98
    NSMutableDictionary * _m_dictCacheDataFileStat; // +0xa0
    unsigned long long _m_totalLogicFileSize; // +0xa8
    unsigned long long _m_totalPuffyFileSize; // +0xb0
    unsigned long long _m_totalPuffyLogicFileSize; // +0xb8
    unsigned long long _hardlinkIgnoreSize; // +0xc0
    unsigned long long _hardlinkIgnoreCnt; // +0xc8
    unsigned long long _hardlinkTotalCnt; // +0xd0
    unsigned long long _cowIgnoreSize; // +0xd8
    unsigned long long _cowIgnoreCnt; // +0xe0
    unsigned long long _cowTotalCnt; // +0xe8
    unsigned long long _m_midImgWxamCount; // +0xf0
    unsigned long long _m_midImgWxamSize; // +0xf8
    unsigned long long _m_midImgTotalCount; // +0x100
    unsigned long long _m_midImgTotalSize; // +0x108
    unsigned long long _m_rawImgSize; // +0x110
    unsigned long long _m_rawVideoSize; // +0x118
    unsigned long long _m_compressVideoH264Count; // +0x120
    unsigned long long _m_compressVideoH264Size; // +0x128
    unsigned long long _m_compressVideoH265Count; // +0x130
    unsigned long long _m_compressVideoH265Size; // +0x138
    unsigned long long _m_wildFileCount; // +0x140
    unsigned long long _m_wildFileSize; // +0x148
    unsigned long long _m_unknownC2CBizTypeFileCount; // +0x150
    unsigned long long _m_unknownC2CBizTypeFileSize; // +0x158
    unsigned long long _m_cleanedRawImgSize; // +0x160
    unsigned long long _m_cleanedRawVideoSize; // +0x168
    NSRecursiveLock * _markLock; // +0x170
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
- (id)m_dictOtherDataFileStat;
- (void)setM_dictOtherDataFileStat:(id)arg1;
- (id)m_dictCacheDataFileStat;
- (void)setM_dictCacheDataFileStat:(id)arg1;
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
- (unsigned long long)m_midImgWxamCount;
- (void)setM_midImgWxamCount:(unsigned long long)arg1;
- (unsigned long long)m_midImgWxamSize;
- (void)setM_midImgWxamSize:(unsigned long long)arg1;
- (unsigned long long)m_midImgTotalCount;
- (void)setM_midImgTotalCount:(unsigned long long)arg1;
- (unsigned long long)m_midImgTotalSize;
- (void)setM_midImgTotalSize:(unsigned long long)arg1;
- (unsigned long long)m_rawImgSize;
- (void)setM_rawImgSize:(unsigned long long)arg1;
- (unsigned long long)m_rawVideoSize;
- (void)setM_rawVideoSize:(unsigned long long)arg1;
- (unsigned long long)m_compressVideoH264Count;
- (void)setM_compressVideoH264Count:(unsigned long long)arg1;
- (unsigned long long)m_compressVideoH264Size;
- (void)setM_compressVideoH264Size:(unsigned long long)arg1;
- (unsigned long long)m_compressVideoH265Count;
- (void)setM_compressVideoH265Count:(unsigned long long)arg1;
- (unsigned long long)m_compressVideoH265Size;
- (void)setM_compressVideoH265Size:(unsigned long long)arg1;
- (unsigned long long)m_wildFileCount;
- (void)setM_wildFileCount:(unsigned long long)arg1;
- (unsigned long long)m_wildFileSize;
- (void)setM_wildFileSize:(unsigned long long)arg1;
- (unsigned long long)m_unknownC2CBizTypeFileCount;
- (void)setM_unknownC2CBizTypeFileCount:(unsigned long long)arg1;
- (unsigned long long)m_unknownC2CBizTypeFileSize;
- (void)setM_unknownC2CBizTypeFileSize:(unsigned long long)arg1;
- (unsigned long long)m_cleanedRawImgSize;
- (void)setM_cleanedRawImgSize:(unsigned long long)arg1;
- (unsigned long long)m_cleanedRawVideoSize;
- (void)setM_cleanedRawVideoSize:(unsigned long long)arg1;
- (BOOL)m_isStart;
- (void)setM_isStart:(BOOL)arg1;
- (id)markLock;
- (void)setMarkLock:(id)arg1;
- (void).cxx_destruct;
@end
