@interface WCPayGenDigitalCertCgi : NSObject <PBMessageObserverDelegate>
{
    unsigned int _m_payScene; // +0x8
    int _m_type; // +0xc
    int _m_idType; // +0x10
    unsigned int _cert_encrypt_type; // +0x14
    NSString * _m_trueName; // +0x18
    NSString * _m_idNo; // +0x20
    NSString * _m_crtSms; // +0x28
    NSString * _m_reqKey; // +0x30
    NSString * _cre_tail; // +0x38
    NSString * _m_token; // +0x40
    NSDictionary * _m_userInfo; // +0x48
    id <WCPayGenDigitalCertCgiDelegate> _m_delegate; // +0x50
    NSString * _m_crtCsr; // +0x58
    NSString * _m_snSalt; // +0x60
    NSString * _m_deviceName; // +0x68
    NSString * _m_deviceOS; // +0x70
    NSString * _m_crtDeviceId; // +0x78
    WCPayIdKeyRegularReporter * _m_cgiReporter; // +0x80
    WCPayIdKeyRegularReporter * _m_controlReporter; // +0x88
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)callErrorDelegate;
- (void)genInternalInfo;
- (void)startRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)m_payScene;
- (void)setM_payScene:(unsigned int)arg1;
- (int)m_type;
- (void)setM_type:(int)arg1;
- (id)m_trueName;
- (void)setM_trueName:(id)arg1;
- (id)m_idNo;
- (void)setM_idNo:(id)arg1;
- (int)m_idType;
- (void)setM_idType:(int)arg1;
- (id)m_crtSms;
- (void)setM_crtSms:(id)arg1;
- (id)m_reqKey;
- (void)setM_reqKey:(id)arg1;
- (id)cre_tail;
- (void)setCre_tail:(id)arg1;
- (id)m_token;
- (void)setM_token:(id)arg1;
- (unsigned int)cert_encrypt_type;
- (void)setCert_encrypt_type:(unsigned int)arg1;
- (id)m_userInfo;
- (void)setM_userInfo:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_crtCsr;
- (void)setM_crtCsr:(id)arg1;
- (id)m_snSalt;
- (void)setM_snSalt:(id)arg1;
- (id)m_deviceName;
- (void)setM_deviceName:(id)arg1;
- (id)m_deviceOS;
- (void)setM_deviceOS:(id)arg1;
- (id)m_crtDeviceId;
- (void)setM_crtDeviceId:(id)arg1;
- (id)m_cgiReporter;
- (void)setM_cgiReporter:(id)arg1;
- (id)m_controlReporter;
- (void)setM_controlReporter:(id)arg1;
- (void).cxx_destruct;
@end
