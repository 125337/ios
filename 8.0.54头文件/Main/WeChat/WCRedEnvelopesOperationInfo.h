@interface WCRedEnvelopesOperationInfo : NSObject
{
    BOOL m_bOpEnable; // +0x8
    NSString * m_nsOpName; // +0x10
    NSString * m_nsOpType; // +0x18
    NSString * m_nsOpContent; // +0x20
    NSString * m_nsOpShowType; // +0x28
    id m_inSender; // +0x30
    unsigned int m_uiOsskey; // +0x38
}
- (BOOL)m_bOpEnable;
- (void)setM_bOpEnable:(BOOL)arg1;
- (id)m_nsOpName;
- (void)setM_nsOpName:(id)arg1;
- (id)m_nsOpType;
- (void)setM_nsOpType:(id)arg1;
- (id)m_nsOpContent;
- (void)setM_nsOpContent:(id)arg1;
- (id)m_nsOpShowType;
- (void)setM_nsOpShowType:(id)arg1;
- (id)m_inSender;
- (void)setM_inSender:(id)arg1;
- (unsigned int)m_uiOsskey;
- (void)setM_uiOsskey:(unsigned int)arg1;
- (void).cxx_destruct;
@end

