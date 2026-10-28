@interface WCPayPayAuthNativeCgiResp : NSObject
{
    unsigned int _m_wxErrorType; // +0x8
    unsigned int _m_retCode; // +0xc
    NSString * _m_wxErrorMsg; // +0x10
    NSString * _m_retMsg; // +0x18
    NSString * _m_reqKey; // +0x20
    NSString * _m_appId; // +0x28
    NSString * _m_appSource; // +0x30
    NSString * _m_productId; // +0x38
    WalletMixSpGenprepayResp * _m_walletMixSpGenprepayResp; // +0x40
}
+ (id)GenFromDictionary:(id)arg1 WithErrorType:(unsigned int)arg2 ErrorMsg:(id)arg3;
- (unsigned int)m_wxErrorType;
- (void)setM_wxErrorType:(unsigned int)arg1;
- (id)m_wxErrorMsg;
- (void)setM_wxErrorMsg:(id)arg1;
- (unsigned int)m_retCode;
- (void)setM_retCode:(unsigned int)arg1;
- (id)m_retMsg;
- (void)setM_retMsg:(id)arg1;
- (id)m_reqKey;
- (void)setM_reqKey:(id)arg1;
- (id)m_appId;
- (void)setM_appId:(id)arg1;
- (id)m_appSource;
- (void)setM_appSource:(id)arg1;
- (id)m_productId;
- (void)setM_productId:(id)arg1;
- (id)m_walletMixSpGenprepayResp;
- (void)setM_walletMixSpGenprepayResp:(id)arg1;
- (void).cxx_destruct;
@end
