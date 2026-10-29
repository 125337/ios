@interface WARichTextWebView : WANativeView <YYWebViewDelegate>
{
    YYBaseWebView * _webView; // +0x8
    NSString * _curApiName; // +0x10
    NSNumber * _curApiCallbackId; // +0x18
}
- (id)onInsertWithParam:(id)arg1;
- (id)onUpdateWithParam:(id)arg1;
- (id)onRemoveWithParam:(id)arg1;
- (void)loadHTMLString:(id)arg1;
- (id)getPreInjectScriptStr;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)endWithState:(long long)arg1 msg:(id)arg2 dic:(id)arg3;
- (void)api_sendRichTextInfo:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)curApiName;
- (void)setCurApiName:(id)arg1;
- (id)curApiCallbackId;
- (void)setCurApiCallbackId:(id)arg1;
- (void).cxx_destruct;
@end

