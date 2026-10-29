@interface WCPayCheckPayPwdByTokenRequest : NSObject
{
    NSString * m_nsPayPwd; // +0x8
    NSString * m_nsToken; // +0x10
    BOOL m_bResend; // +0x18
    NSString * _m_bizInfo; // +0x20
    NSString * _m_useTouch; // +0x28
    NSData * _m_fingerData; // +0x30
    NSString * _m_biopayv2authReq; // +0x38
}
- (id)m_nsToken;
- (void)setM_nsToken:(id)arg1;
- (id)m_nsPayPwd;
- (void)setM_nsPayPwd:(id)arg1;
- (BOOL)m_bResend;
- (void)setM_bResend:(BOOL)arg1;
- (id)m_bizInfo;
- (void)setM_bizInfo:(id)arg1;
- (id)m_useTouch;
- (void)setM_useTouch:(id)arg1;
- (id)m_fingerData;
- (void)setM_fingerData:(id)arg1;
- (id)m_biopayv2authReq;
- (void)setM_biopayv2authReq:(id)arg1;
- (void).cxx_destruct;
@end
