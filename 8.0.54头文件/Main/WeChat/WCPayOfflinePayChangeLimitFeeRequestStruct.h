@interface WCPayOfflinePayChangeLimitFeeRequestStruct : NSObject
{
    NSString * m_nsPassword; // +0x8
    NSString * m_nsOptionControl; // +0x10
    long long m_uiChangeFee; // +0x18
    NSString * m_nsVerifyCode; // +0x20
    NSString * m_nsBindSerial; // +0x28
    NSString * m_nsBankType; // +0x30
    NSString * m_nsBindCardTail; // +0x38
    BOOL m_bRepeatSend; // +0x40
}
- (id)init;
- (id)m_nsPassword;
- (void)setM_nsPassword:(id)arg1;
- (id)m_nsOptionControl;
- (void)setM_nsOptionControl:(id)arg1;
- (long long)m_uiChangeFee;
- (void)setM_uiChangeFee:(long long)arg1;
- (id)m_nsVerifyCode;
- (void)setM_nsVerifyCode:(id)arg1;
- (id)m_nsBankType;
- (void)setM_nsBankType:(id)arg1;
- (id)m_nsBindCardTail;
- (void)setM_nsBindCardTail:(id)arg1;
- (id)m_nsBindSerial;
- (void)setM_nsBindSerial:(id)arg1;
- (BOOL)m_bRepeatSend;
- (void)setM_bRepeatSend:(BOOL)arg1;
- (void).cxx_destruct;
@end

