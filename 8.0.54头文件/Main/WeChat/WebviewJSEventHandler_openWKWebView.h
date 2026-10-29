@interface WebviewJSEventHandler_openWKWebView : WebviewJSEventHandlerBase <H5GameViewControllerDelegate, MMWebViewDelegate, MMTipsViewControllerDelegate>
{
    BOOL m_bFullScreen; // +0x8
    NSString * m_orientation; // +0x10
    NSString * m_url; // +0x18
    NSString * m_gameAppid; // +0x20
    H5GameViewController * _gameVC; // +0x28
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)enterGame;
- (void)internalEnterGame;
- (void)onGameViewClosed;
- (void)webViewReturn:(id)arg1;
- (id)gameVC;
- (void)setGameVC:(id)arg1;
- (void).cxx_destruct;
@end

