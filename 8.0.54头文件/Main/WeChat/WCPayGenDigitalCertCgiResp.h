@interface WCPayGenDigitalCertCgiResp : NSObject
{
    unsigned int _m_wxErrorType; // +0x8
    int _m_crtEncryptType; // +0xc
    unsigned int _m_retCode; // +0x10
    NSString * _m_wxErrorMsg; // +0x18
    NSString * _m_crtCrt; // +0x20
    NSString * _m_crtNo; // +0x28
    NSString * _m_retMsg; // +0x30
    NSDictionary * _m_userInfo; // +0x38
}
+ (id)GenFromDictionary:(id)arg1 WithErrorType:(unsigned int)arg2 ErrorMsg:(id)arg3;
- (id)init;
- (unsigned int)m_wxErrorType;
- (void)setM_wxErrorType:(unsigned int)arg1;
- (id)m_wxErrorMsg;
- (void)setM_wxErrorMsg:(id)arg1;
- (id)m_crtCrt;
- (void)setM_crtCrt:(id)arg1;
- (id)m_crtNo;
- (void)setM_crtNo:(id)arg1;
- (int)m_crtEncryptType;
- (void)setM_crtEncryptType:(int)arg1;
- (unsigned int)m_retCode;
- (void)setM_retCode:(unsigned int)arg1;
- (id)m_retMsg;
- (void)setM_retMsg:(id)arg1;
- (id)m_userInfo;
- (void)setM_userInfo:(id)arg1;
- (void).cxx_destruct;
@end

