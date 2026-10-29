@interface WCAccountVerifyCodeHandler : NSObject <WCAccountBindPhoneForRegCGIDelegate, DialCodeHalfScreenViewControllerDelegate>
{
    WCAccountBaseControlLogic<WCAccountVerifyCodeHandlerDelegate> * _delegate; // +0x8
    WCAccountControlData * m_data; // +0x10
    WCAccountBindPhoneForRegCGI * _modelLogic; // +0x18
    BOOL _bNeedSetPwd; // +0x20
    unsigned int m_uiCheckVerifyUpCount; // +0x24
    unsigned int _uiTryCount; // +0x28
    NSString * _phoneNumberWithCC; // +0x30
}
- (id)initWithData:(id)arg1 Delegate:(id)arg2;
- (void)startCheckNumberStatusAndLoading;
- (void)startCheckVerifyCode:(id)arg1;
- (BOOL)checkVerifyCode:(id)arg1;
- (BOOL)checkPhoneNumberStatus:(unsigned int)arg1;
- (void)getVoiceVerifyCode:(id)arg1;
- (BOOL)getVoiceVerifyCodeReady:(id)arg1;
- (void)getVerifyCode;
- (BOOL)getVerifyCodeReady;
- (void)cancelAllEvent;
- (void)startVerifyUpAndLoading;
- (id)getRegSessionID;
- (void)onCheckLoginPhoneNumberStatus:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onCheckLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (id)phoneNumberWithCC;
- (void)setPhoneNumberWithCC:(id)arg1;
- (void).cxx_destruct;
@end
