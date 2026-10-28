@interface WCPayJSApiIDCardRealnameVerifyControlLogic : WCPayControlLogic
{
    JSEvent * m_jsEvent; // +0x38
    long long m_enWCPayCheckAuthorityScene; // +0x40
}
- (id)initWithJSEvent:(id)arg1;
- (void)dealloc;
- (void)startLogic;
- (void)stopLogic;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)OnRealnameVerifyCancel:(id)arg1;
- (void)OnRealnameVerifySuccess:(id)arg1;
- (void).cxx_destruct;
@end
