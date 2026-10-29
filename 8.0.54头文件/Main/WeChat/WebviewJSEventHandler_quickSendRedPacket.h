@interface WebviewJSEventHandler_quickSendRedPacket : WebviewJSEventHandlerBase <SessionSelectControllerDelegate, SharePreConfirmViewDelegate, WCRedEnvelopesSendControlLogicDelegate, MMUIViewControllerDelegate>
{
    SessionSelectController * _sessionSelectVC; // +0x8
    SharePreConfirmView * _m_confirmView; // +0x10
    CContact * _m_selectContact; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _materialId; // +0x28
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (id)getViewController;
- (void)OnWCRedEnvelopesSendControlLogicPaySuccess:(id)arg1;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
- (void)setupSessionSelectViewController;
- (void)internalShowConfirmView:(id)arg1;
- (id)sessionSelectVC;
- (void)setSessionSelectVC:(id)arg1;
- (id)m_confirmView;
- (void)setM_confirmView:(id)arg1;
- (id)m_selectContact;
- (void)setM_selectContact:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)materialId;
- (void)setMaterialId:(id)arg1;
- (void).cxx_destruct;
@end

