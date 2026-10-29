@interface ContactSelectImpl : NSObject <WCPaySelectSingleContactControlLogicDelegate, SharePreConfirmSheetViewDelegate, WCPaySendPocketMoneyMsgCgiDelegate, WCPayLogicMgrExt>
{
    LiteAppDynamicModuleCallback * _callBack; // +0x8
    UIViewController * _vc; // +0x10
    NSDictionary * _option; // +0x18
    CContact * _selectedContact; // +0x20
    SharePreConfirmSheetView * _confirmSheetView; // +0x28
    WCPaySendPocketMoneyMsgCgi * _sendPocketMoneyMsgCgi; // +0x30
    NSString * _confirmViewInputText; // +0x38
    InviteCoManagerForAccountResponse * _inviteForAccountResponse; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)startContactSelect:(id)arg1 currentVc:(id)arg2 resultCallback:(id)arg3;
- (void)stopSelectSingleContact;
- (void)stopSelectSingleContactAnimated:(BOOL)arg1;
- (BOOL)shouldUseAnimatedDismissByScene;
- (void)selectSingleContactLogic:(id)arg1 didSelectContact:(id)arg2;
- (void)handlePocketMoneyLogic:(id)arg1;
- (void)stopSelectSingleContactWithSearch;
- (void)stopSelectSingleContactWithSearchAnimated:(BOOL)arg1;
- (void)stopSelectSingleContactDefault:(id)arg1 didSelectContact:(id)arg2;
- (void)stopSelectSingleContactWithMsg:(id)arg1 msgContact:(id)arg2 resultType:(long long)arg3;
- (id)getPocketMoneyMsg:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (void)onWCPaySendPocketMoneyMsgCgiResp:(id)arg1;
- (void)onWCPaySendPocketMoneyMsgCgiError:(id)arg1 errorCode:(unsigned int)arg2 resp:(id)arg3;
- (void)onCancel:(id)arg1;
- (void)OnBaseContactViewDidBePoped:(BOOL)arg1;
- (BOOL)filter:(id)arg1 contact:(id)arg2;
- (id)callBack;
- (void)setCallBack:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)option;
- (void)setOption:(id)arg1;
- (id)selectedContact;
- (void)setSelectedContact:(id)arg1;
- (id)confirmSheetView;
- (void)setConfirmSheetView:(id)arg1;
- (id)sendPocketMoneyMsgCgi;
- (void)setSendPocketMoneyMsgCgi:(id)arg1;
- (id)confirmViewInputText;
- (void)setConfirmViewInputText:(id)arg1;
- (id)inviteForAccountResponse;
- (void)setInviteForAccountResponse:(id)arg1;
- (void).cxx_destruct;
@end
