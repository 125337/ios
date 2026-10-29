@interface MMEasterEggGameActivityInfo : MMEasterEggBaseActivityInfo <MMWebViewDelegate, MMUIViewControllerExt>
{
    BOOL _needPreload; // +0x8
    BOOL _isWebviewCached; // +0x9
    NSString * _URLString; // +0x10
    NSString * _liteAppUrl; // +0x18
    MMWebViewController * _webviewController; // +0x20
    id <MMEasterEggActivity> _curActivity; // +0x28
    double _delaySeconds; // +0x30
    OpenLiteAppInfo * _openLiteAppInfo; // +0x38
}
+ (id)activityNodeName;
- (Class)activityClass;
- (id)accessibilityLabel;
- (id)initWithActivityNode:(XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (void)tryParseURLStringFromActivityNode:(XmlReaderNode_t *)arg1;
- (BOOL)isValid;
- (void)easterEggDidStart:(id)arg1;
- (id)openLiteAppInfo;
- (BOOL)canOpenLiteApp;
- (void)openLiteAppOnViewController:(id)arg1;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)initializeWebView:(id)arg1 preload:(BOOL)arg2;
- (void)showWebControllerOnViewController:(id)arg1 activity:(id)arg2;
- (void)evaluateJavaScriptFromString:(id)arg1;
- (void)webViewDidReturn:(id)arg1;
- (void)releaseWebView;
- (void)onEasterEggEnd;
- (void)afterDelay;
- (id)description;
- (id)URLString;
- (void)setURLString:(id)arg1;
- (id)liteAppUrl;
- (void)setLiteAppUrl:(id)arg1;
- (BOOL)needPreload;
- (void)setNeedPreload:(BOOL)arg1;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (id)curActivity;
- (void)setCurActivity:(id)arg1;
- (double)delaySeconds;
- (void)setDelaySeconds:(double)arg1;
- (BOOL)isWebviewCached;
- (void)setIsWebviewCached:(BOOL)arg1;
- (void)setOpenLiteAppInfo:(id)arg1;
- (void).cxx_destruct;
@end

