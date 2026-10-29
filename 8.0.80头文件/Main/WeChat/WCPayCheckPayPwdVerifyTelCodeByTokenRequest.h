@interface WCPayCheckPayPwdVerifyTelCodeByTokenRequest : NSObject
{
    NSString * m_nsPayPwd; // +0x8
    NSString * m_nsToken; // +0x10
    NSString * m_nsVerifyCode; // +0x18
    NSString * m_nsRelationKey; // +0x20
}
- (id)m_nsRelationKey;
- (void)setM_nsRelationKey:(id)arg1;
- (id)m_nsPayPwd;
- (void)setM_nsPayPwd:(id)arg1;
- (id)m_nsToken;
- (void)setM_nsToken:(id)arg1;
- (id)m_nsVerifyCode;
- (void)setM_nsVerifyCode:(id)arg1;
- (void).cxx_destruct;
@end
