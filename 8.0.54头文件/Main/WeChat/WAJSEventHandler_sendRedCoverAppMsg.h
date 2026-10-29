@interface WAJSEventHandler_sendRedCoverAppMsg : WAJSEventHandler_BaseEvent <JSApiSelectSessionViewControllerDelegate, JSApiSelectContactsViewControllerDelegate, WCRedEnvelopesSendRedCoverAppMsgCgiDelegate, SharePreConfirmViewDelegate, SharePreConfirmSheetViewDelegate>
{
    NSString * _receiveUri; // +0x8
    JSApiSelectSessionViewController * _selectSessionViewController; // +0x10
    JSApiSelectContactsViewController * _selectContactViewController; // +0x18
    SharePreConfirmView * _sharePreConfirmView; // +0x20
    SharePreConfirmSheetView * _sharePreConfirmSheetView; // +0x28
    CContact * _selectedContact; // +0x30
}
- (void)handleJSEvent:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerBack;
- (BOOL)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)showSharePreConfirmView:(id)arg1;
- (void)startSendAppMsgRequest:(id)arg1;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiResponseOK:(id)arg1;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnJSApiSelectContactsViewControllerBack;
- (BOOL)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (id)receiveUri;
- (void)setReceiveUri:(id)arg1;
- (id)selectSessionViewController;
- (void)setSelectSessionViewController:(id)arg1;
- (id)selectContactViewController;
- (void)setSelectContactViewController:(id)arg1;
- (id)sharePreConfirmView;
- (void)setSharePreConfirmView:(id)arg1;
- (id)sharePreConfirmSheetView;
- (void)setSharePreConfirmSheetView:(id)arg1;
- (id)selectedContact;
- (void)setSelectedContact:(id)arg1;
- (void).cxx_destruct;
@end

