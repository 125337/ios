@interface WCPayBindInfoSMS : NSObject
{
    unsigned int m_flag; // +0x8
    NSString * m_payPassword; // +0x10
    NSString * m_SMSMsg; // +0x18
    NSString * m_retKey; // +0x20
    BOOL m_canPassPwd; // +0x28
    NSString * m_usertoken; // +0x30
    NSString * _bank_type; // +0x38
    NSString * _autoDeductBankType; // +0x40
    NSString * _autoDeductBankSerial; // +0x48
    NSString * _sessionId; // +0x50
}
- (unsigned int)m_flag;
- (void)setM_flag:(unsigned int)arg1;
- (id)m_payPassword;
- (void)setM_payPassword:(id)arg1;
- (id)m_retKey;
- (void)setM_retKey:(id)arg1;
- (id)m_SMSMsg;
- (void)setM_SMSMsg:(id)arg1;
- (BOOL)m_canPassPwd;
- (void)setM_canPassPwd:(BOOL)arg1;
- (id)m_usertoken;
- (void)setM_usertoken:(id)arg1;
- (id)bank_type;
- (void)setBank_type:(id)arg1;
- (id)autoDeductBankType;
- (void)setAutoDeductBankType:(id)arg1;
- (id)autoDeductBankSerial;
- (void)setAutoDeductBankSerial:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end

