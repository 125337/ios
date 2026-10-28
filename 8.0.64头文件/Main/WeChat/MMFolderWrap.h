@interface MMFolderWrap : NSObject
{
    BOOL _bStatOK; // +0x8
    int _m_onlyFileTypeInUse; // +0xc
    int _m_onlyWeChatFileClass; // +0x10
    unsigned int _m_curStartTime; // +0x14
    unsigned int _m_subFolderNum; // +0x18
    unsigned int _m_fileNum; // +0x1c
    unsigned int _m_delFileNum; // +0x20
    unsigned int _m_puffyFileNum; // +0x24
    unsigned int _m_curDelFileNum; // +0x28
    unsigned int _m_curScannedFileNum; // +0x2c
    unsigned int _m_hitCacheCount; // +0x30
    unsigned int _m_setCacheCount; // +0x34
    unsigned int _m_refreshCacheTimeCount; // +0x38
    unsigned int _m_timeOutCacheCount; // +0x3c
    unsigned int _m_fileModifyCacheCount; // +0x40
    unsigned int _m_changeCacheCount; // +0x44
    NSString * _m_name; // +0x48
    NSMutableArray * _m_arrChildFolder; // +0x50
    NSMutableArray * _m_arrNotScanFileName; // +0x58
    long long _m_onlyBizType; // +0x60
    long long _m_storeTimeType; // +0x68
    MMBizFileMatchNode * _m_bizMatchNode; // +0x70
    unsigned long long _m_fileSize; // +0x78
    unsigned long long _m_delFileSize; // +0x80
    NSMutableDictionary * _m_dicBizStat; // +0x88
    NSMutableDictionary * _m_dicFileTypeInUseStat; // +0x90
    NSMutableDictionary * _m_dicWechatFileClassStat; // +0x98
    unsigned long long _m_logicFileSize; // +0xa0
    unsigned long long _m_puffyFileSize; // +0xa8
    unsigned long long _m_puffyLogicFileSize; // +0xb0
    unsigned long long _hardlinkIgnoreSize; // +0xb8
    unsigned long long _hardlinkIgnoreCnt; // +0xc0
    unsigned long long _hardlinkTotalCnt; // +0xc8
    unsigned long long _cowIgnoreSize; // +0xd0
    unsigned long long _cowIgnoreCnt; // +0xd8
    unsigned long long _cowTotalCnt; // +0xe0
    unsigned long long _m_curDelFileSize; // +0xe8
}
- (void)dealloc;
- (id)init;
- (BOOL)isMarkFolderWrap;
- (void)getChildFolderAndFileWithParentPath:(id)arg1;
- (BOOL)isFolderMayHaveDB;
- (BOOL)isEmptyFolder;
- (id)m_name;
- (void)setM_name:(id)arg1;
- (id)m_arrChildFolder;
- (void)setM_arrChildFolder:(id)arg1;
- (id)m_arrNotScanFileName;
- (void)setM_arrNotScanFileName:(id)arg1;
- (long long)m_onlyBizType;
- (void)setM_onlyBizType:(long long)arg1;
- (int)m_onlyFileTypeInUse;
- (void)setM_onlyFileTypeInUse:(int)arg1;
- (int)m_onlyWeChatFileClass;
- (void)setM_onlyWeChatFileClass:(int)arg1;
- (long long)m_storeTimeType;
- (void)setM_storeTimeType:(long long)arg1;
- (id)m_bizMatchNode;
- (void)setM_bizMatchNode:(id)arg1;
- (unsigned int)m_curStartTime;
- (void)setM_curStartTime:(unsigned int)arg1;
- (unsigned int)m_subFolderNum;
- (void)setM_subFolderNum:(unsigned int)arg1;
- (unsigned int)m_fileNum;
- (void)setM_fileNum:(unsigned int)arg1;
- (unsigned long long)m_fileSize;
- (void)setM_fileSize:(unsigned long long)arg1;
- (unsigned int)m_delFileNum;
- (void)setM_delFileNum:(unsigned int)arg1;
- (unsigned long long)m_delFileSize;
- (void)setM_delFileSize:(unsigned long long)arg1;
- (id)m_dicBizStat;
- (void)setM_dicBizStat:(id)arg1;
- (id)m_dicFileTypeInUseStat;
- (void)setM_dicFileTypeInUseStat:(id)arg1;
- (id)m_dicWechatFileClassStat;
- (void)setM_dicWechatFileClassStat:(id)arg1;
- (unsigned long long)m_logicFileSize;
- (void)setM_logicFileSize:(unsigned long long)arg1;
- (unsigned int)m_puffyFileNum;
- (void)setM_puffyFileNum:(unsigned int)arg1;
- (unsigned long long)m_puffyFileSize;
- (void)setM_puffyFileSize:(unsigned long long)arg1;
- (unsigned long long)m_puffyLogicFileSize;
- (void)setM_puffyLogicFileSize:(unsigned long long)arg1;
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
- (unsigned int)m_curDelFileNum;
- (void)setM_curDelFileNum:(unsigned int)arg1;
- (unsigned long long)m_curDelFileSize;
- (void)setM_curDelFileSize:(unsigned long long)arg1;
- (unsigned int)m_curScannedFileNum;
- (void)setM_curScannedFileNum:(unsigned int)arg1;
- (unsigned int)m_hitCacheCount;
- (void)setM_hitCacheCount:(unsigned int)arg1;
- (unsigned int)m_setCacheCount;
- (void)setM_setCacheCount:(unsigned int)arg1;
- (unsigned int)m_refreshCacheTimeCount;
- (void)setM_refreshCacheTimeCount:(unsigned int)arg1;
- (unsigned int)m_timeOutCacheCount;
- (void)setM_timeOutCacheCount:(unsigned int)arg1;
- (unsigned int)m_fileModifyCacheCount;
- (void)setM_fileModifyCacheCount:(unsigned int)arg1;
- (unsigned int)m_changeCacheCount;
- (void)setM_changeCacheCount:(unsigned int)arg1;
- (BOOL)bStatOK;
- (void)setBStatOK:(BOOL)arg1;
- (void).cxx_destruct;
@end
