@interface WCPayQueryWalletResponse : NSObject
{
    unsigned int _m_errCode; // +0x8
    NSString * _m_errMsg; // +0x10
    NSString * _m_walletUrl; // +0x18
}
- (unsigned int)m_errCode;
- (void)setM_errCode:(unsigned int)arg1;
- (id)m_errMsg;
- (void)setM_errMsg:(id)arg1;
- (id)m_walletUrl;
- (void)setM_walletUrl:(id)arg1;
- (void).cxx_destruct;
@end

