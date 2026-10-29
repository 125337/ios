@interface WebviewJSEventHandler_chooseInvoiceTitle : WebviewJSEventHandlerBase <IMyInvoiceLogicMgrExt, MyInvoiceListViewControllerDelegate, MyInvoiceInfoViewControllerDelegate, IWebviewAskAuthorizationLogicExt>
{
    JSEvent * _jsEvent; // +0x8
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)startInvoice;
- (void)chooseFailed;
- (void)OnGetInvoiceRet:(BOOL)arg1 andResult:(id)arg2 fromScene:(unsigned int)arg3;
- (void)onChooseSuccess:(id)arg1;
- (void)onChooseCancel;
- (void)OnJsapiAddInvoiceSuccess:(id)arg1;
- (void)OnJsapiAddInvoiceCancel;
- (void)OnJsapiAddInvoiceFail;
- (void).cxx_destruct;
@end
