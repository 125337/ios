@interface WCPayCreditPayVerifyPasswdResponseStruct : NSObject
{
    NSString * m_nsSessionKey; // +0x8
    NSString * m_nsNameMask; // +0x10
    NSString * m_nsIDNumberMask; // +0x18
    BOOL m_bNeedFillAllInfo; // +0x20
}
- (id)m_nsSessionKey;
- (void)setM_nsSessionKey:(id)arg1;
- (id)m_nsNameMask;
- (void)setM_nsNameMask:(id)arg1;
- (id)m_nsIDNumberMask;
- (void)setM_nsIDNumberMask:(id)arg1;
- (BOOL)m_bNeedFillAllInfo;
- (void)setM_bNeedFillAllInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end

