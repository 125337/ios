@interface WCPayRealnameSelectGuardianViewController : WCPayContactSelectListBaseViewController <WCPayContactSelectListBaseViewControllerDelegate, SharePreConfirmSheetViewDelegate, WCPayRealnameVerifyGuardianCgiCgiDelegate, WCPayRealnameVerifyParentCgiDeleagte>
{
    BOOL _fromLiteApp; // +0x98
    WCPayRealnameAuthenResp * _authenResp; // +0xa0
    id <WCPayRealnameSelectGuardianViewControllerDelegate> _delegate; // +0xa8
    ContactsDataLogic * _contactsDataLogic; // +0xb0
    CContact * _selectedContact; // +0xb8
    SharePreConfirmSheetView * _confirmSheetView; // +0xc0
    WCPayRealnameVerifyGuardianCgi * _verifyGuardianCgi; // +0xc8
    WCPayNetImageResource * _imageLoader; // +0xd0
    WCPayRealnameVerifyParentCgi * _liteappVerifyParentCgi; // +0xd8
}
- (id)init;
- (void)viewDidLoad;
- (void)onClickCancel;
- (id)getReloadContactDataList;
- (id)getChatroomContact;
- (void)onSelectedOrCancelContact:(id)arg1 isSelected:(BOOL)arg2;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)sendVerifyParentRequest:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)onWCPayRealnameVerifyGuardianCgiResp:(id)arg1;
- (void)onWCPayRealnameVerifyGuardianCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayRealnameVerifyParentCgiResp:(id)arg1;
- (void)sendAppMessage:(id)arg1 onComplete:(id /* block */)arg2;
- (void)sendLiteAppMessage:(id)arg1 onComplete:(id /* block */)arg2;
- (void)sendTextMessage:(id)arg1;
- (void)handleError:(id)arg1;
- (id)authenResp;
- (void)setAuthenResp:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)fromLiteApp;
- (void)setFromLiteApp:(BOOL)arg1;
- (id)contactsDataLogic;
- (void)setContactsDataLogic:(id)arg1;
- (id)selectedContact;
- (void)setSelectedContact:(id)arg1;
- (id)confirmSheetView;
- (void)setConfirmSheetView:(id)arg1;
- (id)verifyGuardianCgi;
- (void)setVerifyGuardianCgi:(id)arg1;
- (id)imageLoader;
- (void)setImageLoader:(id)arg1;
- (id)liteappVerifyParentCgi;
- (void)setLiteappVerifyParentCgi:(id)arg1;
- (void).cxx_destruct;
@end
