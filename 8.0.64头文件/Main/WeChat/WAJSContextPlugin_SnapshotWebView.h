@interface WAJSContextPlugin_SnapshotWebView : WAJSContextPluginBase <YYWebViewDelegate>
{
    id <WASnapshotWebViewDelegate> _snapshotDelegate; // +0x8
    YYBaseWebView * _snapshotWebview; // +0x10
    NSString * _curApiName; // +0x18
    NSNumber * _curApiCallbackId; // +0x20
    double _snapshotEndTime; // +0x28
}
- (void)dealloc;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)onWebViewLoadHtmlComplete:(id)arg1;
- (void)onWebViewExecScriptComplete:(id)arg1;
- (void)onWebViewSnapshotComplete:(id)arg1 size:(CGSize)arg2 error:(id)arg3;
- (void)openWebview;
- (void)webViewLoadHTML:(id)arg1;
- (void)webviewExecScript:(id)arg1;
- (void)webviewSnapshot:(id)arg1;
- (void)closeWebview;
- (id)convertImageToARGBBitmap:(id)arg1 width:(double)arg2 height:(double)arg3;
- (id)getPreInjectScriptStr;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)endWithState:(long long)arg1 msg:(id)arg2 dic:(id)arg3;
- (void)api_sendSnapshotWebViewInfo:(id)arg1;
- (void)api_log:(id)arg1;
- (id)snapshotDelegate;
- (void)setSnapshotDelegate:(id)arg1;
- (id)snapshotWebview;
- (void)setSnapshotWebview:(id)arg1;
- (id)curApiName;
- (void)setCurApiName:(id)arg1;
- (id)curApiCallbackId;
- (void)setCurApiCallbackId:(id)arg1;
- (double)snapshotEndTime;
- (void)setSnapshotEndTime:(double)arg1;
- (void).cxx_destruct;
@end
