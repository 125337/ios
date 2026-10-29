@interface CdnFavMediaInfo : NSObject
{
    NSString * m_nsClientMsgID; // +0x8
    NSString * m_nsFilePath; // +0x10
    unsigned int m_uiFileType; // +0x18
    BOOL m_bStreamMedia; // +0x1c
    NSString * m_nsFileID; // +0x20
    NSString * m_nsAesKey; // +0x28
    unsigned long long m_uiFileTotalLen; // +0x30
}
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (id)m_nsFilePath;
- (void)setM_nsFilePath:(id)arg1;
- (BOOL)m_bStreamMedia;
- (void)setM_bStreamMedia:(BOOL)arg1;
- (id)m_nsFileID;
- (void)setM_nsFileID:(id)arg1;
- (id)m_nsAesKey;
- (void)setM_nsAesKey:(id)arg1;
- (unsigned long long)m_uiFileTotalLen;
- (void)setM_uiFileTotalLen:(unsigned long long)arg1;
- (unsigned int)m_uiFileType;
- (void)setM_uiFileType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

