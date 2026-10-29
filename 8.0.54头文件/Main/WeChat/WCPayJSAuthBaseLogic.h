@interface WCPayJSAuthBaseLogic : WCPayControlLogic
{
    BOOL _hideLoading; // +0x38
    JSEvent * _m_jsEvent; // +0x40
    NSDictionary * _m_param; // +0x48
}
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)authFail;
- (void)authOk;
- (void)report14954:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (id)m_jsEvent;
- (void)setM_jsEvent:(id)arg1;
- (id)m_param;
- (void)setM_param:(id)arg1;
- (BOOL)hideLoading;
- (void)setHideLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end

