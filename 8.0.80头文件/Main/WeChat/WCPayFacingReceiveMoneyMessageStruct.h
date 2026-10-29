@interface WCPayFacingReceiveMoneyMessageStruct : NSObject
{
    int m_enWCPayFacingReceiveMoneyScene; // +0x8
    NSString * m_nsTransactionID; // +0x10
    NSString * m_nsUserName; // +0x18
    NSString * m_nsDisplayName; // +0x20
    unsigned int m_uiTimeStamp; // +0x28
    long long m_llFee; // +0x30
    NSString * m_nsFeeType; // +0x38
    int m_enWCPayFacingReceiveMoneyStatus; // +0x40
    NSString * m_nsOutTradeNo; // +0x48
    unsigned int _m_expireTime; // +0x50
    int _codeType; // +0x54
    NSString * _m_voiceContent; // +0x58
    NSString * _m_nsType; // +0x60
    long long _m_n64SvrId; // +0x68
    NSString * _mchPayerHeadImgUrl; // +0x70
}
- (long long)m_llFee;
- (void)setM_llFee:(long long)arg1;
- (id)m_nsFeeType;
- (void)setM_nsFeeType:(id)arg1;
- (id)m_nsDisplayName;
- (void)setM_nsDisplayName:(id)arg1;
- (id)m_nsTransactionID;
- (void)setM_nsTransactionID:(id)arg1;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (unsigned int)m_uiTimeStamp;
- (void)setM_uiTimeStamp:(unsigned int)arg1;
- (int)m_enWCPayFacingReceiveMoneyScene;
- (void)setM_enWCPayFacingReceiveMoneyScene:(int)arg1;
- (int)m_enWCPayFacingReceiveMoneyStatus;
- (void)setM_enWCPayFacingReceiveMoneyStatus:(int)arg1;
- (id)m_nsOutTradeNo;
- (void)setM_nsOutTradeNo:(id)arg1;
- (id)m_voiceContent;
- (void)setM_voiceContent:(id)arg1;
- (id)m_nsType;
- (void)setM_nsType:(id)arg1;
- (long long)m_n64SvrId;
- (void)setM_n64SvrId:(long long)arg1;
- (unsigned int)m_expireTime;
- (void)setM_expireTime:(unsigned int)arg1;
- (id)mchPayerHeadImgUrl;
- (void)setMchPayerHeadImgUrl:(id)arg1;
- (int)codeType;
- (void)setCodeType:(int)arg1;
- (void).cxx_destruct;
@end
