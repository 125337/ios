@interface WCPayDigitalCertInstallAction : NSObject
{
    int _m_isHintCrt; // +0x8
    int _m_isGenCert; // +0xc
    int _m_isIgnoreCrt; // +0x10
    int _m_noResetMobile; // +0x14
    NSString * _m_balanceMobile; // +0x18
    WCPayDigitalCertInstallCrtWording * _m_crt_wording; // +0x20
}
+ (id)GenFromDictionary:(id)arg1;
- (BOOL)showDigitalInstallLayout;
- (BOOL)noResetMobile;
- (id)m_balanceMobile;
- (void)setM_balanceMobile:(id)arg1;
- (int)m_isHintCrt;
- (void)setM_isHintCrt:(int)arg1;
- (int)m_isGenCert;
- (void)setM_isGenCert:(int)arg1;
- (int)m_isIgnoreCrt;
- (void)setM_isIgnoreCrt:(int)arg1;
- (int)m_noResetMobile;
- (void)setM_noResetMobile:(int)arg1;
- (id)m_crt_wording;
- (void)setM_crt_wording:(id)arg1;
- (void).cxx_destruct;
@end
