@interface WCPaySendC2CMessageJSApiLogicControl : WCPayControlLogic <SessionSelectControllerDelegate>
{
    JSEvent * m_jsEvent; // +0x38
    NSString * m_setInUrl; // +0x40
    NSString * m_toUser; // +0x48
}
- (id)initWithJSEvent:(id)arg1 SetInUrl:(id)arg2;
- (void)startLogic;
- (void)stopLogic;
- (BOOL)OnDoCheckWCPayJsApi;
- (BOOL)OnDoSendC2CSecureMessage;
- (BOOL)PickUserToSendSecureMessage;
- (BOOL)DoSendC2CSecureMessageTo:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)OnSendC2CSecureMessageResponseStatus:(id)arg1 Error:(id)arg2;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (id)m_toUser;
- (void)setM_toUser:(id)arg1;
- (void).cxx_destruct;
@end
