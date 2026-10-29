@interface UrlController : MMObject <MMWebViewDelegate, contactInfoDelegate, IMsgExt, ILinkEventExt, WCActionSheetDelegate>
{
    MMURLHandler * m_urlHandler; // +0x8
    MMPhoneNumberHandler * m_phoneNumberHandler; // +0x10
    id <UrlControllerDelegate> m_delegate; // +0x18
    GetA8KeyLogic * _getA8KeyLogic; // +0x20
}
- (id)init;
- (void)Register;
- (void)UnRegister;
- (void)Reset;
- (void)webViewReturn:(id)arg1;
- (void)contactsReturn:(BOOL)arg1 contact:(id)arg2;
- (void)jumpToBindPhone;
- (void)jumpToProfile:(id)arg1;
- (void)onDone:(id)arg1;
- (void)handleUrl:(id)arg1 withExtraInfo:(id)arg2;
- (id)handlePreviewUrl:(id)arg1 withExtraInfo:(id)arg2;
- (BOOL)handleOpenIMKefuUrl:(id)arg1;
- (void)AddPhoneNumberToExistContact:(id)arg1;
- (void)CreateNewContact:(id)arg1;
- (void)dealloc;
- (id)getA8KeyLogic;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)setGetA8KeyLogic:(id)arg1;
- (void).cxx_destruct;
@end
