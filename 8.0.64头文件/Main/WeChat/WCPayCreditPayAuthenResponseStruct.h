@interface WCPayCreditPayAuthenResponseStruct : NSObject
{
    NSString * m_nsSessionKey; // +0x8
    BOOL m_bZXBankUser; // +0x10
    NSString * m_nsPhoneNumMask; // +0x18
    BOOL m_bNeedBindCard; // +0x20
}
- (id)m_nsSessionKey;
- (void)setM_nsSessionKey:(id)arg1;
- (BOOL)m_bZXBankUser;
- (void)setM_bZXBankUser:(BOOL)arg1;
- (id)m_nsPhoneNumMask;
- (void)setM_nsPhoneNumMask:(id)arg1;
- (BOOL)m_bNeedBindCard;
- (void)setM_bNeedBindCard:(BOOL)arg1;
- (void).cxx_destruct;
@end
