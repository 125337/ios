@interface MailAttachment : NSObject
{
    NSData * m_dtData; // +0x8
    NSString * m_nsDataID; // +0x10
    NSString * m_nsName; // +0x18
    unsigned long long m_uiSize; // +0x20
}
- (id)init;
- (id)m_dtData;
- (void)setM_dtData:(id)arg1;
- (id)m_nsDataID;
- (void)setM_nsDataID:(id)arg1;
- (id)m_nsName;
- (void)setM_nsName:(id)arg1;
- (unsigned long long)m_uiSize;
- (void)setM_uiSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

