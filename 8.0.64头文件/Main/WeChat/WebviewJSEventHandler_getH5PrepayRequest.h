@interface WebviewJSEventHandler_getH5PrepayRequest : WebviewJSEventHandlerBase <PBMessageObserverDelegate, WXCustomWebViewControllerDelegate, MMUseCaseCallback>
{
    NSString * _jsInjectCode; // +0x8
    JSEvent * m_jsEvent; // +0x10
    BOOL m_isNativeCashier; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)sendResult:(BOOL)arg1 jsEvent:(id)arg2;
- (void)getJumpUrl:(id)arg1 complete:(id /* block */)arg2;
- (void)doInjectJS;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)call:(id)arg1;
- (void).cxx_destruct;
@end
