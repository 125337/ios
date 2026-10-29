@interface MSEImageHelper : NSObject <WKNavigationDelegate>
{
    BOOL _resizing; // +0x8
    WKWebView * _webView; // +0x10
    NSMutableArray * _resizeInfoQueue; // +0x18
}
+ (id)helper;
+ (void)asyncResizeImage:(id)arg1 toSize:(CGSize)arg2 complete:(id /* block */)arg3;
+ (void)asyncResizeImageUrl:(id)arg1 toSize:(CGSize)arg2 complete:(id /* block */)arg3;
- (id)init;
- (void)checkQueue;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)resizeInfoQueue;
- (void)setResizeInfoQueue:(id)arg1;
- (BOOL)resizing;
- (void)setResizing:(BOOL)arg1;
- (void).cxx_destruct;
@end

