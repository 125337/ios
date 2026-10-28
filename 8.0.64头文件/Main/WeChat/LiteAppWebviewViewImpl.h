@interface LiteAppWebviewViewImpl : MMUIView <MMWebViewDelegate, UIScrollViewDelegate>
{
    BOOL _autoHeight; // +0x8
    BOOL _autoWidth; // +0x9
    BOOL _isTransparent; // +0xa
    BOOL _isWebviewFinishLoad; // +0xb
    BOOL _isAtTop; // +0xc
    BOOL _isAtBottom; // +0xd
    MMWebViewController * _webViewController; // +0x10
    id <UIScrollViewDelegate> _webViewScrollViewDelegate; // +0x18
    FlutterMethodChannel * _channel; // +0x20
    NSString * _url; // +0x28
    UIEdgeInsets _superSafeAreaInsets; // +0x30
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;
- (void)safeAreaInsetsDidChange;
- (UIEdgeInsets)safeAreaInsets;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)dealloc;
- (void)onWebViewDidStartLoad:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)onLoadProgressChanged:(id)arg1 progress:(double)arg2;
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
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (id)webViewScrollViewDelegate;
- (void)setWebViewScrollViewDelegate:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (BOOL)isWebviewFinishLoad;
- (void)setIsWebviewFinishLoad:(BOOL)arg1;
- (BOOL)isAtTop;
- (void)setIsAtTop:(BOOL)arg1;
- (BOOL)isAtBottom;
- (void)setIsAtBottom:(BOOL)arg1;
- (UIEdgeInsets)superSafeAreaInsets;
- (void)setSuperSafeAreaInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
