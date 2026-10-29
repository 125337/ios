@interface LiteAppJsApiSendPayGeneralBubbleMessage : LiteAppJsApi <SessionSelectControllerDelegate, SharePreConfirmSheetViewDelegate, WCPayThirdC2CPreviewInvitationMsgCgiDelegate, WCPayThirdC2CSendInvitationMsgCgiDelegate>
{
    BOOL _hasSentCallback; // +0x20
    CContact * _selectedContact; // +0x28
    NSString * _businessInfo; // +0x30
    SharePreConfirmSheetView * _confirmSheetView; // +0x38
    NSString * _cachedInputText; // +0x40
    WCPayThirdC2CPreviewInvitationMsgCgi * _previewCgi; // +0x48
    WCPayThirdC2CSendInvitationMsgCgi * _sendCgi; // +0x50
    SessionSelectController * _sessionSelectVC; // +0x58
}
- (void)safeFail:(id)arg1;
- (void)safeSuccess;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (BOOL)validateCgiInfo:(id)arg1 expectedCmdid:(unsigned int)arg2 expectedUrl:(id)arg3;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (BOOL)onShouldFilterContact:(id)arg1;
- (void)startPreviewCgiWithSession:(id)arg1;
- (void)onWCPayThirdC2CPreviewInvitationMsgCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayThirdC2CPreviewInvitationMsgCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)showCgiErrorAlertWithMessage:(id)arg1;
- (void)showSharePreConfirmSheetViewWithMsgxml:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (void)startSendCgi;
- (void)onWCPayThirdC2CSendInvitationMsgCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayThirdC2CSendInvitationMsgCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)sendAttachedTextMessage:(id)arg1;
- (id)selectedContact;
- (void)setSelectedContact:(id)arg1;
- (id)businessInfo;
- (void)setBusinessInfo:(id)arg1;
- (id)confirmSheetView;
- (void)setConfirmSheetView:(id)arg1;
- (id)cachedInputText;
- (void)setCachedInputText:(id)arg1;
- (id)previewCgi;
- (void)setPreviewCgi:(id)arg1;
- (id)sendCgi;
- (void)setSendCgi:(id)arg1;
- (id)sessionSelectVC;
- (void)setSessionSelectVC:(id)arg1;
- (BOOL)hasSentCallback;
- (void)setHasSentCallback:(BOOL)arg1;
- (void).cxx_destruct;
@end
