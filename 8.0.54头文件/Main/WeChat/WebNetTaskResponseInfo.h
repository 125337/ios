@interface WebNetTaskResponseInfo : NSObject
{
    NSString * m_nsClientMsgID; // +0x8
    unsigned int m_uiFileLength; // +0x10
    int m_nRetCode; // +0x14
    int m_nHttpStatusCode; // +0x18
    BOOL m_isResumed; // +0x1c
}
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (unsigned int)m_uiFileLength;
- (void)setM_uiFileLength:(unsigned int)arg1;
- (int)m_nRetCode;
- (void)setM_nRetCode:(int)arg1;
- (int)m_nHttpStatusCode;
- (void)setM_nHttpStatusCode:(int)arg1;
- (BOOL)m_isResumed;
- (void)setM_isResumed:(BOOL)arg1;
- (void).cxx_destruct;
@end

