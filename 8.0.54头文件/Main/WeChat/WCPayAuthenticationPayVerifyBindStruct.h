@interface WCPayAuthenticationPayVerifyBindStruct : NSObject
{
    unsigned int m_flag; // +0x8
    unsigned int m_uiPayScene; // +0xc
    unsigned int m_uiPayChannel; // +0x10
    NSString * m_payPassword; // +0x18
    NSString * m_payKey; // +0x20
    NSString * m_payToken; // +0x28
    NSString * m_verifySMS; // +0x30
    unsigned int _ignore_bind; // +0x38
}
- (unsigned int)m_flag;
- (void)setM_flag:(unsigned int)arg1;
- (unsigned int)m_uiPayChannel;
- (void)setM_uiPayChannel:(unsigned int)arg1;
- (id)m_payKey;
- (void)setM_payKey:(id)arg1;
- (id)m_payPassword;
- (void)setM_payPassword:(id)arg1;
- (unsigned int)m_uiPayScene;
- (void)setM_uiPayScene:(unsigned int)arg1;
- (id)m_payToken;
- (void)setM_payToken:(id)arg1;
- (id)m_verifySMS;
- (void)setM_verifySMS:(id)arg1;
- (unsigned int)ignore_bind;
- (void)setIgnore_bind:(unsigned int)arg1;
- (void).cxx_destruct;
@end

