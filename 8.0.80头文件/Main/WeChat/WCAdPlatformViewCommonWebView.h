@interface WCAdPlatformViewCommonWebView : WCAdPlatformViewBase <MMWebViewDelegate, UIScrollViewDelegate>
{
    BOOL _showProgress; // +0x8
    BOOL _bgTransparent; // +0x9
    BOOL _notAppendParams; // +0xa
    BOOL _scrolledFlag; // +0xb
    ContainerView * _containerView; // +0x10
    MMWebViewController * _webViewController; // +0x18
    FlutterMethodChannel * _channel; // +0x20
    NSString * _url; // +0x28
    NSString * _canvasKey; // +0x30
    NSString * _componentId; // +0x38
    id <UIScrollViewDelegate> _webViewScrollViewDelegate; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;
- (id)view;
- (void)dealloc;
- (void)onWebViewDidStartLoad:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)handleJsEvent:(id)arg1 params:(id)arg2 needCallback:(BOOL)arg3 result:(id /* block */)arg4;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)canvasKey;
- (void)setCanvasKey:(id)arg1;
- (id)componentId;
- (void)setComponentId:(id)arg1;
- (BOOL)showProgress;
- (void)setShowProgress:(BOOL)arg1;
- (BOOL)bgTransparent;
- (void)setBgTransparent:(BOOL)arg1;
- (BOOL)notAppendParams;
- (void)setNotAppendParams:(BOOL)arg1;
- (BOOL)scrolledFlag;
- (void)setScrolledFlag:(BOOL)arg1;
- (id)webViewScrollViewDelegate;
- (void)setWebViewScrollViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end
