@interface MMFolderWrap : NSObject
{
    BOOL _bStatOK; // +0x8
    int _m_onlyFileTypeInUse; // +0xc
    int _m_onlyWeChatFileClass; // +0x10
    unsigned int _m_subFolderNum; // +0x14
    unsigned int _m_fileNum; // +0x18
    unsigned int _m_delFileNum; // +0x1c
    unsigned int _m_puffyFileNum; // +0x20
    long long _m_scanStatus; // +0x28
    NSString * _m_name; // +0x30
    NSMutableArray * _m_arrChildFolder; // +0x38
    NSMutableArray * _m_arrNotScanFileName; // +0x40
    long long _m_onlyBizType; // +0x48
    long long _m_storeTimeType; // +0x50
    MMBizFileMatchNode * _m_bizMatchNode; // +0x58
    unsigned long long _m_fileSize; // +0x60
    unsigned long long _m_delFileSize; // +0x68
    NSMutableDictionary * _m_dicBizStat; // +0x70
    NSMutableDictionary * _m_dicSpecialBizStat; // +0x78
    NSMutableDictionary * _m_dicFileTypeInUseStat; // +0x80
    NSMutableDictionary * _m_dicWechatFileClassStat; // +0x88
    unsigned long long _m_logicFileSize; // +0x90
    unsigned long long _m_puffyFileSize; // +0x98
    unsigned long long _m_puffyLogicFileSize; // +0xa0
}
- (void)dealloc;
- (id)init;
- (BOOL)isMarkFolderWrap;
- (BOOL)isScanFinish;
- (void)markScanFinish;
- (void)getChildFolderAndFileWithParentPath:(id)arg1;
- (BOOL)isFolderMayHaveDB;
- (long long)m_scanStatus;
- (void)setM_scanStatus:(long long)arg1;
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
- (id)m_dicSpecialBizStat;
- (void)setM_dicSpecialBizStat:(id)arg1;
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
- (BOOL)bStatOK;
- (void)setBStatOK:(BOOL)arg1;
- (void).cxx_destruct;
@end

