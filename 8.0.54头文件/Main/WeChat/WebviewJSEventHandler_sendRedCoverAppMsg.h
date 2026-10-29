@interface WebviewJSEventHandler_sendRedCoverAppMsg : WebviewJSEventHandlerBase <WCRedEnvelopesSendRedCoverAppMsgCgiDelegate, SharePreConfirmViewDelegate, SharePreConfirmSheetViewDelegate, SessionSelectControllerDelegate>
{
    NSString * _receiveUri; // +0x8
    SessionSelectController * _sessionSelectVC; // +0x10
    SharePreConfirmView * _sharePreConfirmView; // +0x18
    SharePreConfirmSheetView * _sharePreConfirmSheetView; // +0x20
    CContact * _selectedContact; // +0x28
    JSEvent * _m_event; // +0x30
    NSString * _m_sessionid; // +0x38
    NSString * _m_coverid; // +0x40
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)kvReport:(unsigned int)arg1 toUsername:(id)arg2;
- (BOOL)onShouldFilterContact:(id)arg1;
- (BOOL)filterContact:(id)arg1;
- (id)getViewController;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)showSharePreConfirmView:(id)arg1;
- (void)startSendAppMsgRequest:(id)arg1;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiResponseOK:(id)arg1;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (id)receiveUri;
- (void)setReceiveUri:(id)arg1;
- (id)sessionSelectVC;
- (void)setSessionSelectVC:(id)arg1;
- (id)sharePreConfirmView;
- (void)setSharePreConfirmView:(id)arg1;
- (id)sharePreConfirmSheetView;
- (void)setSharePreConfirmSheetView:(id)arg1;
- (id)selectedContact;
- (void)setSelectedContact:(id)arg1;
- (id)m_event;
- (void)setM_event:(id)arg1;
- (id)m_sessionid;
- (void)setM_sessionid:(id)arg1;
- (id)m_coverid;
- (void)setM_coverid:(id)arg1;
- (void).cxx_destruct;
@end

