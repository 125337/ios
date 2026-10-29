@interface WCRedEnvelopesReceivedRedEnvelopesInfo : NSObject
{
    NSString * m_nsSenderName; // +0x8
    NSString * m_nsSenderHeadImg; // +0x10
    long long m_lReceiveAmount; // +0x18
    unsigned int m_uiReceiveTime; // +0x20
    NSString * m_nsReceiveTime; // +0x28
    unsigned long long m_enWCRedEnvelopesType; // +0x30
    unsigned long long m_enWCRedEnvelopesKind; // +0x38
    NSString * m_nsReceiverID; // +0x40
    NSString * m_nsSendID; // +0x48
    NSString * _m_nsReceiverSuffix; // +0x50
    NSString * _m_nsReceiverDesc; // +0x58
}
- (unsigned long long)m_enWCRedEnvelopesType;
- (void)setM_enWCRedEnvelopesType:(unsigned long long)arg1;
- (long long)m_lReceiveAmount;
- (void)setM_lReceiveAmount:(long long)arg1;
- (id)m_nsSenderHeadImg;
- (void)setM_nsSenderHeadImg:(id)arg1;
- (id)m_nsSenderName;
- (void)setM_nsSenderName:(id)arg1;
- (unsigned int)m_uiReceiveTime;
- (void)setM_uiReceiveTime:(unsigned int)arg1;
- (id)m_nsReceiverID;
- (void)setM_nsReceiverID:(id)arg1;
- (id)m_nsReceiveTime;
- (void)setM_nsReceiveTime:(id)arg1;
- (id)m_nsSendID;
- (void)setM_nsSendID:(id)arg1;
- (unsigned long long)m_enWCRedEnvelopesKind;
- (void)setM_enWCRedEnvelopesKind:(unsigned long long)arg1;
- (id)m_nsReceiverSuffix;
- (void)setM_nsReceiverSuffix:(id)arg1;
- (id)m_nsReceiverDesc;
- (void)setM_nsReceiverDesc:(id)arg1;
- (void).cxx_destruct;
@end

