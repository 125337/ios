@interface WebViewJSEventHandler_addGoodsToFav : WebviewJSEventHandlerBase
{
    JSEvent * _m_curEvent; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)showAlertView;
- (void)onCancelFav;
- (void)onConfirmFav;
- (id)m_curEvent;
- (void)setM_curEvent:(id)arg1;
- (void).cxx_destruct;
@end
