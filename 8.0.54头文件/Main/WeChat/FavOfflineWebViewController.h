@interface FavOfflineWebViewController : FavBaseDetailViewController <MMScrollActionSheetDelegate, FavForwardLogicDelegate, FavTagViewDelegate, WCActionSheetDelegate, WKURLSchemeHandler, WKNavigationDelegate, WKScriptMessageHandler, UIScrollViewDelegate>
{
    MMScrollActionSheet * m_scrollActionSheet; // +0x78
    NSDictionary * m_mimeTypeDic; // +0x80
    WKWebView * m_webView; // +0x88
    NSURL * m_targetUrl; // +0x90
    UILongPressGestureRecognizer * m_longPressGestureRecognizer; // +0x98
    BOOL m_bIsDraggingScroll; // +0xa0
    WCActionSheet * m_actionSheet; // +0xa8
    NSData * m_savingData; // +0xb0
    FavWebCacheScriptMessageHandler * m_scriptMessageHandler; // +0xb8
}
- (id)initWithFavItem:(id)arg1;
- (void)viewDidLoad;
- (BOOL)useCustomNavibar;
- (id)navigationBarBackgroundColor;
- (void)enableLongPress;
- (void)onLongPressOnWebview:(id)arg1;
- (void)initNavigationBar;
- (void)initWebView;
- (void)dealloc;
- (void)loadContent;
- (void)onAction:(id)arg1;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)addOfflineInfo;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)getImageInfo:(id)arg1;
- (CGRect)getImageFrame:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)getWCUploadTask;
- (id)getFavForawrdViewController;
- (void)onFavTagEditBegin:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)saveImgWithImageData:(id)arg1;
- (void)addImgFavWithImageData:(id)arg1;
- (void)sendMsgWithImageData:(id)arg1;
- (void).cxx_destruct;
@end

