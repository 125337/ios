@interface CDownloadVideoInfo : NSObject
{
    CMessageWrap * m_wrapMsg; // +0x8
    unsigned long long m_ui64StartTime; // +0x10
    unsigned int m_uiOpType; // +0x18
    int m_nRetCode; // +0x1c
}
- (id)init;
- (id)GetStatInfo;
- (id)m_wrapMsg;
- (void)setM_wrapMsg:(id)arg1;
- (unsigned long long)m_ui64StartTime;
- (void)setM_ui64StartTime:(unsigned long long)arg1;
- (unsigned int)m_uiOpType;
- (void)setM_uiOpType:(unsigned int)arg1;
- (int)m_nRetCode;
- (void)setM_nRetCode:(int)arg1;
- (void).cxx_destruct;
@end

