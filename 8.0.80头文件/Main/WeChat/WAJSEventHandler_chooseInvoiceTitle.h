@interface WAJSEventHandler_chooseInvoiceTitle : WAJSEventHandler_BaseEvent <IWebviewAskAuthorizationLogicExt, IMyInvoiceLogicMgrExt, MyInvoiceListViewControllerDelegate, MyInvoiceInfoViewControllerDelegate>
- (id)init;
- (void)handleJSEvent:(id)arg1;
- (void)startInvoice;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)OnGetInvoiceRet:(BOOL)arg1 andResult:(id)arg2 fromScene:(unsigned int)arg3;
- (void)chooseFailed;
- (void)onChooseSuccess:(id)arg1;
- (void)onChooseCancel;
- (void)OnJsapiAddInvoiceSuccess:(id)arg1;
- (void)OnJsapiAddInvoiceCancel;
- (void)OnJsapiAddInvoiceFail;
@end
