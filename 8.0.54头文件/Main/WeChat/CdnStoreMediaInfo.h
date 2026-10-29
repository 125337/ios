@interface CdnStoreMediaInfo : NSObject
{
    NSString * m_nsClientMsgID; // +0x8
    NSString * m_nsFilePath; // +0x10
    unsigned long long m_uiFileTotalLen; // +0x18
}
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (id)m_nsFilePath;
- (void)setM_nsFilePath:(id)arg1;
- (unsigned long long)m_uiFileTotalLen;
- (void)setM_uiFileTotalLen:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

