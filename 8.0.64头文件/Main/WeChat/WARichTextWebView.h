@interface WARichTextWebView : WANativeView <YYWebViewDelegate>
{
    BOOL _isSnapshoting; // +0x8
    YYBaseWebView * _webView; // +0x10
    NSString * _curApiName; // +0x18
    NSNumber * _curApiCallbackId; // +0x20
    double _snapshotEndTime; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)onInsertWithParam:(id)arg1;
- (id)onUpdateWithParam:(id)arg1;
- (id)onRemoveWithParam:(id)arg1;
- (void)dealloc;
- (void)loadHTMLString:(id)arg1;
- (void)trySnapshot;
- (void)doSnapshot;
- (id)getPreInjectScriptStr;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)endWithState:(long long)arg1 msg:(id)arg2 dic:(id)arg3;
- (void)api_sendRichTextInfo:(id)arg1;
- (void)api_log:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)curApiName;
- (void)setCurApiName:(id)arg1;
- (id)curApiCallbackId;
- (void)setCurApiCallbackId:(id)arg1;
- (BOOL)isSnapshoting;
- (void)setIsSnapshoting:(BOOL)arg1;
- (double)snapshotEndTime;
- (void)setSnapshotEndTime:(double)arg1;
- (void).cxx_destruct;
@end
