@interface CDownloadVideoWrap : NSObject
{
    NSString * m_nsFromUsrName; // +0x8
    NSString * m_nsToUsrName; // +0x10
    unsigned int m_uiLocalID; // +0x18
    long long m_n64SvrID; // +0x20
    unsigned int m_uiVideoTotalLen; // +0x28
    unsigned int m_uiVideoStartPos; // +0x2c
    NSData * m_dtVideo; // +0x30
    unsigned int m_uiNetwork; // +0x38
}
- (id)init;
- (id)description;
- (id)m_nsFromUsrName;
- (void)setM_nsFromUsrName:(id)arg1;
- (id)m_nsToUsrName;
- (void)setM_nsToUsrName:(id)arg1;
- (unsigned int)m_uiLocalID;
- (void)setM_uiLocalID:(unsigned int)arg1;
- (long long)m_n64SvrID;
- (void)setM_n64SvrID:(long long)arg1;
- (unsigned int)m_uiVideoTotalLen;
- (void)setM_uiVideoTotalLen:(unsigned int)arg1;
- (unsigned int)m_uiVideoStartPos;
- (void)setM_uiVideoStartPos:(unsigned int)arg1;
- (id)m_dtVideo;
- (void)setM_dtVideo:(id)arg1;
- (unsigned int)m_uiNetwork;
- (void)setM_uiNetwork:(unsigned int)arg1;
- (void).cxx_destruct;
@end
