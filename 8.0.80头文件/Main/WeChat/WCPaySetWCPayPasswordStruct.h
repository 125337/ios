@interface WCPaySetWCPayPasswordStruct : NSObject
{
    NSString * m_nsWCPayPassword; // +0x8
    NSString * m_nsRequestKey; // +0x10
    unsigned int m_uiPayScene; // +0x18
    unsigned int m_uiPayChannel; // +0x1c
    NSString * m_nsToken; // +0x20
    NSString * m_nsVerifyCode; // +0x28
    NSString * m_nsUUID; // +0x30
    NSString * m_nsAppID; // +0x38
    NSString * m_nsAppName; // +0x40
    NSString * m_nsAppSource; // +0x48
    unsigned int m_cardBankTag; // +0x50
    BOOL m_bIsAutoDeduct; // +0x54
    NSString * _autoDeductBankType; // +0x58
    NSString * _autoDeductBankSerial; // +0x60
    WCPayAuthenRequestRetryInfo * _m_retryInfo; // +0x68
}
- (id)m_nsAppID;
- (void)setM_nsAppID:(id)arg1;
- (id)m_nsAppName;
- (void)setM_nsAppName:(id)arg1;
- (id)m_nsAppSource;
- (void)setM_nsAppSource:(id)arg1;
- (id)m_nsRequestKey;
- (void)setM_nsRequestKey:(id)arg1;
- (id)m_nsToken;
- (void)setM_nsToken:(id)arg1;
- (id)m_nsUUID;
- (void)setM_nsUUID:(id)arg1;
- (id)m_nsVerifyCode;
- (void)setM_nsVerifyCode:(id)arg1;
- (id)m_nsWCPayPassword;
- (void)setM_nsWCPayPassword:(id)arg1;
- (unsigned int)m_uiPayChannel;
- (void)setM_uiPayChannel:(unsigned int)arg1;
- (unsigned int)m_uiPayScene;
- (void)setM_uiPayScene:(unsigned int)arg1;
- (unsigned int)m_cardBankTag;
- (void)setM_cardBankTag:(unsigned int)arg1;
- (BOOL)m_bIsAutoDeduct;
- (void)setM_bIsAutoDeduct:(BOOL)arg1;
- (id)autoDeductBankType;
- (void)setAutoDeductBankType:(id)arg1;
- (id)autoDeductBankSerial;
- (void)setAutoDeductBankSerial:(id)arg1;
- (id)m_retryInfo;
- (void)setM_retryInfo:(id)arg1;
- (void).cxx_destruct;
@end
