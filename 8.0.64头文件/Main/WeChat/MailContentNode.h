@interface MailContentNode : MMObject
{
    long long m_n64MsgId; // +0x8
    int m_uiType; // +0x10
    NSString * m_nsNickName; // +0x18
    NSString * m_nsSrcTime; // +0x20
    NSString * m_nsTitle; // +0x28
    NSString * m_nsDescription; // +0x30
    NSString * m_nsThumbPath; // +0x38
    unsigned int m_dataSize; // +0x40
}
- (long long)m_n64MsgId;
- (void)setM_n64MsgId:(long long)arg1;
- (int)m_uiType;
- (void)setM_uiType:(int)arg1;
- (id)m_nsNickName;
- (void)setM_nsNickName:(id)arg1;
- (id)m_nsSrcTime;
- (void)setM_nsSrcTime:(id)arg1;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (id)m_nsDescription;
- (void)setM_nsDescription:(id)arg1;
- (id)m_nsThumbPath;
- (void)setM_nsThumbPath:(id)arg1;
- (unsigned int)m_dataSize;
- (void)setM_dataSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end
