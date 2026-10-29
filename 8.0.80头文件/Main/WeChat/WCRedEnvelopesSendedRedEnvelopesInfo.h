@interface WCRedEnvelopesSendedRedEnvelopesInfo : NSObject
{
    unsigned long long m_enWCRedEnvelopesType; // +0x8
    unsigned long long m_enWCRedEnvelopesKind; // +0x10
    NSString * m_nsSendTitle; // +0x18
    unsigned int m_uiSendTime; // +0x20
    NSString * m_nsSendTime; // +0x28
    long long m_lTotalAmount; // +0x30
    long long m_lTotalNum; // +0x38
    long long m_lRecNum; // +0x40
    unsigned long long m_enWCRedEnvelopesStatus; // +0x48
    unsigned int m_uiThxCount; // +0x50
    NSString * m_nsSendID; // +0x58
}
- (unsigned long long)m_enWCRedEnvelopesType;
- (void)setM_enWCRedEnvelopesType:(unsigned long long)arg1;
- (unsigned long long)m_enWCRedEnvelopesKind;
- (void)setM_enWCRedEnvelopesKind:(unsigned long long)arg1;
- (long long)m_lRecNum;
- (void)setM_lRecNum:(long long)arg1;
- (unsigned long long)m_enWCRedEnvelopesStatus;
- (void)setM_enWCRedEnvelopesStatus:(unsigned long long)arg1;
- (long long)m_lTotalAmount;
- (void)setM_lTotalAmount:(long long)arg1;
- (long long)m_lTotalNum;
- (void)setM_lTotalNum:(long long)arg1;
- (id)m_nsSendTitle;
- (void)setM_nsSendTitle:(id)arg1;
- (unsigned int)m_uiSendTime;
- (void)setM_uiSendTime:(unsigned int)arg1;
- (unsigned int)m_uiThxCount;
- (void)setM_uiThxCount:(unsigned int)arg1;
- (id)m_nsSendTime;
- (void)setM_nsSendTime:(id)arg1;
- (id)m_nsSendID;
- (void)setM_nsSendID:(id)arg1;
- (void).cxx_destruct;
@end
