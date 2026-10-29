@interface WebviewJSEventHandler_enableGameView : WebviewJSEventHandlerBase <H5GameViewControllerDelegate, MMWebViewDelegate, MMTipsViewControllerDelegate>
{
    int m_gameOrientation; // +0x8
    NSString * m_url; // +0x10
    NSString * m_gameAppid; // +0x18
    BOOL m_hideBottomBar; // +0x20
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)enterGame;
- (void)onGameViewClosed;
- (void)webViewReturn:(id)arg1;
- (void).cxx_destruct;
@end
