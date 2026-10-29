@interface WCRedEnvelopesReceiverInfo : NSObject
{
    NSString * m_nsReceiveId; // +0x8
    BOOL m_bIsMySelf; // +0x10
    NSString * m_nsReceiverUserName; // +0x18
    NSString * m_nsReceiverName; // +0x20
    NSString * m_nsReceiverHeadImg; // +0x28
    long long m_lReceiveAmount; // +0x30
    unsigned int m_uiReceiveTime; // +0x38
    NSString * m_nsWishing; // +0x40
    NSString * m_nsReceiverGameTips; // +0x48
    NSString * _m_nsReceiveAmountDesc; // +0x50
    NSString * _m_nsSendNameSuffix; // +0x58
}
- (BOOL)m_bIsMySelf;
- (void)setM_bIsMySelf:(BOOL)arg1;
- (id)m_nsWishing;
- (void)setM_nsWishing:(id)arg1;
- (long long)m_lReceiveAmount;
- (void)setM_lReceiveAmount:(long long)arg1;
- (id)m_nsReceiverHeadImg;
- (void)setM_nsReceiverHeadImg:(id)arg1;
- (id)m_nsReceiverName;
- (void)setM_nsReceiverName:(id)arg1;
- (unsigned int)m_uiReceiveTime;
- (void)setM_uiReceiveTime:(unsigned int)arg1;
- (id)m_nsReceiverGameTips;
- (void)setM_nsReceiverGameTips:(id)arg1;
- (id)m_nsReceiveId;
- (void)setM_nsReceiveId:(id)arg1;
- (id)m_nsReceiverUserName;
- (void)setM_nsReceiverUserName:(id)arg1;
- (id)m_nsReceiveAmountDesc;
- (void)setM_nsReceiveAmountDesc:(id)arg1;
- (id)m_nsSendNameSuffix;
- (void)setM_nsSendNameSuffix:(id)arg1;
- (void).cxx_destruct;
@end
