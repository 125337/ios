@interface WCPayJSApiAuthenticationControlLogic : WCPayControlLogic
{
    JSEvent * m_jsEvent; // +0x38
    long long m_enWCPayCheckAuthorityScene; // +0x40
    int m_enWCPayCheckOpenWCPayViewAuthorityScene; // +0x48
}
- (id)initWithJSEvent:(id)arg1 Scene:(long long)arg2;
- (id)initWithJSEvent:(id)arg1 Scene:(long long)arg2 WithOpenViewScene:(int)arg3;
- (void)startLogic;
- (void)stopLogic;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void).cxx_destruct;
@end

