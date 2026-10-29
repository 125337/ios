@interface QBWKWebView : WKWebView
{
    QBWKWebViewProxy * _webViewProxy; // +0x8
    BOOL _isInitialized; // +0x10
    BOOL _isRemovedFrameInfo; // +0x11
    BOOL _needInjectJsInNetwork; // +0x12
    BOOL _isSelfProxyEnabled; // +0x13
    NSString * _currentUserAgent; // +0x18
    BOOL _hadAppendQBWebViewFlagToUA; // +0x20
    BOOL _isULinksEnable; // +0x21
}
+ (void)initialize;
+ (BOOL)enableWKProzy:(id *)arg1;
+ (void)clearProzyMemory;
+ (long long)WKProzyErrorCode;
+ (BOOL)isProzyAvailable;
- (void)doInit;
- (void)qbSetCookie:(id)arg1;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 configuration:(id)arg2;
- (void)setCustomUserAgent:(id)arg1;
- (id)customUserAgent;
- (void)setNavigationDelegate:(id)arg1;
- (id)navigationDelegate;
- (void)setUIDelegate:(id)arg1;
- (id)UIDelegate;
- (void)addUserScirpt:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3;
- (id)loadRequest:(id)arg1;
- (id)standardizationURLString:(id)arg1;
- (id)selectedString;
- (id)goBack;
- (id)goForward;
- (id)reload;
- (void)dealloc;
- (void)delayRelease;
- (void)destroy;
- (void)removeFrameInfo;
- (void).cxx_destruct;
- (BOOL)isULinksEnable;
- (void)setIsULinksEnable:(BOOL)arg1;
@end

