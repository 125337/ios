@interface GameWebViewLifeManager : MMUserService <MMServiceProtocol>
{
    GameWebViewRecord * _webviewRecord; // +0x8
}
- (id)init;
- (id)pageId:(id)arg1;
- (void)onServiceClearData;
- (void)recordWebView:(id)arg1;
- (void)removeWebViewRecord:(id)arg1;
- (void)onWebViewCreate:(id)arg1 dispatchEvent:(BOOL)arg2;
- (void)onWebViewForeground:(id)arg1 dispatchEvent:(BOOL)arg2;
- (void)onWebViewBackground:(id)arg1 dispatchEvent:(BOOL)arg2;
- (void)onWebViewDestroy:(id)arg1 dispatchEvent:(BOOL)arg2;
- (void)dispatchPageState:(id)arg1 pageId:(id)arg2 url:(id)arg3;
- (void)dispatchPageState:(id)arg1 pageId:(id)arg2 url:(id)arg3 dispatchEvent:(BOOL)arg4;
- (void)postMessageToWebView:(id)arg1 msg:(id)arg2;
- (void)notifyJsCoreStateChange:(id)arg1;
- (id)getTopWebViewController;
- (id)webviewRecord;
- (void)setWebviewRecord:(id)arg1;
- (void).cxx_destruct;
@end

