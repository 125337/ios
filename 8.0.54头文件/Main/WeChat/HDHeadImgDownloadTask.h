@interface HDHeadImgDownloadTask : NSObject
{
    unsigned char m_headCategory; // +0x8
    unsigned int m_headType; // +0xc
    int m_downloadType; // +0x10
    unsigned int m_eventId; // +0x14
    unsigned int m_totalLen; // +0x18
    unsigned int m_startOffset; // +0x1c
    unsigned int m_uiDownloadEventId; // +0x20
    NSString * m_nsName; // +0x28
    NSString * m_nsUrl; // +0x30
    NSString * _m_nsTempFile; // +0x38
}
- (id)m_nsName;
- (void)setM_nsName:(id)arg1;
- (unsigned char)m_headCategory;
- (void)setM_headCategory:(unsigned char)arg1;
- (unsigned int)m_headType;
- (void)setM_headType:(unsigned int)arg1;
- (int)m_downloadType;
- (void)setM_downloadType:(int)arg1;
- (unsigned int)m_eventId;
- (void)setM_eventId:(unsigned int)arg1;
- (unsigned int)m_totalLen;
- (void)setM_totalLen:(unsigned int)arg1;
- (unsigned int)m_startOffset;
- (void)setM_startOffset:(unsigned int)arg1;
- (unsigned int)m_uiDownloadEventId;
- (void)setM_uiDownloadEventId:(unsigned int)arg1;
- (id)m_nsUrl;
- (void)setM_nsUrl:(id)arg1;
- (id)m_nsTempFile;
- (void)setM_nsTempFile:(id)arg1;
- (void).cxx_destruct;
@end

