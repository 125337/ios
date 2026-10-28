@interface WebviewJSEventHandler_resendRemittanceMsg : WebviewJSEventHandlerBase <MMTipsViewControllerDelegate, WCPayUnionTransferNotifyCgiDelegate>
{
    BOOL _bIsOpenIM; // +0x8
    JSEvent * _event; // +0x10
    WCPayUnionTransferNotifyCgi * _unionNotifyCgi; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)handleError:(id)arg1;
- (void)onWCPayUnionTransferNotifyCgiResponseOK:(id)arg1;
- (void)onWCPayUnionTransferNotifyCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)event;
- (void)setEvent:(id)arg1;
- (BOOL)bIsOpenIM;
- (void)setBIsOpenIM:(BOOL)arg1;
- (id)unionNotifyCgi;
- (void)setUnionNotifyCgi:(id)arg1;
- (void).cxx_destruct;
@end
