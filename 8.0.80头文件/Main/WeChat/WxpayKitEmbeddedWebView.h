@interface WxpayKitEmbeddedWebView : UIView <WxpayWebViewSurface, MMWebViewDelegate, UIScrollViewDelegate>
{
    BOOL _loaded; // +0x8
    BOOL _wasTop; // +0x9
    BOOL _wasBottom; // +0xa
    MMWebViewController * _controller; // +0x10
    id <UIScrollViewDelegate> _originalScrollDelegate; // +0x18
    id /* block */ _events; // +0x20
}
- (id)view;
- (id)scrollView;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)event:(id)arg1 detail:(id)arg2;
- (void)onWebViewDidStartLoad:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)onLoadProgressChanged:(id)arg1 progress:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)invokeMethod:(id)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (void)setVisible:(BOOL)arg1;
- (void)releaseSurface;
- (id)controller;
- (void)setController:(id)arg1;
- (id)originalScrollDelegate;
- (void)setOriginalScrollDelegate:(id)arg1;
- (id /* block */)events;
- (void)setEvents:(id /* block */)arg1;
- (BOOL)loaded;
- (void)setLoaded:(BOOL)arg1;
- (BOOL)wasTop;
- (void)setWasTop:(BOOL)arg1;
- (BOOL)wasBottom;
- (void)setWasBottom:(BOOL)arg1;
- (void).cxx_destruct;
@end
