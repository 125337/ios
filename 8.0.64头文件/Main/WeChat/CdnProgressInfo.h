@interface CdnProgressInfo : NSObject
{
    C2CDownloadResult m_result; // +0x8
    BOOL m_nTryShow; // +0x3b8
    int m_nStatus; // +0x3bc
    NSString * m_nsClientMsgID; // +0x3c0
    unsigned long long m_nTotalLength; // +0x3c8
    unsigned long long m_nFinishedLegth; // +0x3d0
}
- (id)initWithClientMsgID:(id)arg1 totalSize:(unsigned long long)arg2 finish:(unsigned long long)arg3;
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (unsigned long long)m_nTotalLength;
- (void)setM_nTotalLength:(unsigned long long)arg1;
- (unsigned long long)m_nFinishedLegth;
- (void)setM_nFinishedLegth:(unsigned long long)arg1;
- (int)m_nStatus;
- (void)setM_nStatus:(int)arg1;
- (BOOL)m_nTryShow;
- (void)setM_nTryShow:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
