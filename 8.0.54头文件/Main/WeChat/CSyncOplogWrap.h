@interface CSyncOplogWrap : NSObject
{
    unsigned int m_uiOplogID; // +0x8
    unsigned int m_uiCmdID; // +0xc
    NSMutableData * m_dtBuffer; // +0x10
    unsigned int m_uiRetryCount; // +0x18
    unsigned int m_uiItemID; // +0x1c
}
- (id)init;
- (unsigned int)m_uiOplogID;
- (void)setM_uiOplogID:(unsigned int)arg1;
- (unsigned int)m_uiCmdID;
- (void)setM_uiCmdID:(unsigned int)arg1;
- (id)m_dtBuffer;
- (void)setM_dtBuffer:(id)arg1;
- (unsigned int)m_uiRetryCount;
- (void)setM_uiRetryCount:(unsigned int)arg1;
- (unsigned int)m_uiItemID;
- (void)setM_uiItemID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

