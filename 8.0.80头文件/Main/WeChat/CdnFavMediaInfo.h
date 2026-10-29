@interface CdnFavMediaInfo : NSObject
{
    NSString * m_nsClientMsgID; // +0x8
    NSString * m_nsFilePath; // +0x10
    unsigned int m_uiFileType; // +0x18
    BOOL m_bStreamMedia; // +0x1c
    NSString * m_nsFileID; // +0x20
    NSString * m_nsAesKey; // +0x28
    unsigned long long m_uiFileTotalLen; // +0x30
    unsigned int m_uiConcurrentCount; // +0x38
    BOOL _m_isImg; // +0x3c
    BOOL _m_isThumb; // +0x3d
    BOOL _m_bIsNoteFile; // +0x3e
    BOOL _m_bIsMarkdownFormat; // +0x3f
    NSData * _bizReqPayload; // +0x40
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
- (unsigned int)m_uiConcurrentCount;
- (void)setM_uiConcurrentCount:(unsigned int)arg1;
- (unsigned int)m_uiFileType;
- (void)setM_uiFileType:(unsigned int)arg1;
- (BOOL)m_isImg;
- (void)setM_isImg:(BOOL)arg1;
- (BOOL)m_isThumb;
- (void)setM_isThumb:(BOOL)arg1;
- (id)bizReqPayload;
- (void)setBizReqPayload:(id)arg1;
- (BOOL)m_bIsNoteFile;
- (void)setM_bIsNoteFile:(BOOL)arg1;
- (BOOL)m_bIsMarkdownFormat;
- (void)setM_bIsMarkdownFormat:(BOOL)arg1;
- (void).cxx_destruct;
@end
