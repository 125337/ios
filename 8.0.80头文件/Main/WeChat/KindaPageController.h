@interface KindaPageController : NSObject <KindaViewControllerControlDelegate, KindaTinyAppUIPageDelegate, MMWebViewDelegate, KindaLiteAppUIPageDelegate, MMIUIPageController>
{
    KindaTinyAppUIPage * _tinyAppPage; // +0x8
    KindaLiteAppUIPage * _liteAppPage; // +0x10
}
- (id)init;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)webViewDidReturn:(id)arg1;
- (void)pushWebView:(id)arg1 extraData:(id)arg2 animated:(BOOL)arg3;
- (void)presentWebView:(id)arg1 extraData:(id)arg2 animated:(BOOL)arg3;
- (void)openTinyApp:(id)arg1 extraData:(id)arg2;
- (void)pushVC:(id)arg1 animated:(BOOL)arg2;
- (void)presentVC:(id)arg1 animated:(BOOL)arg2;
- (void)startPageUI:(id)arg1 animated:(BOOL)arg2 extraData:(id)arg3;
- (void)popAndStartPageUI:(id)arg1 animated:(BOOL)arg2 extraData:(id)arg3;
- (void)popAndPushWebView:(id)arg1 animated:(BOOL)arg2 extraData:(id)arg3;
- (void)popAndPushVC:(id)arg1 animated:(BOOL)arg2;
- (void)startModalPageUI:(id)arg1 animated:(BOOL)arg2 extraData:(id)arg3;
- (void)openLiteApp:(id)arg1 extraData:(id)arg2;
- (void)onCloseUI:(id)arg1;
- (void)tinyAppDidClose:(id)arg1;
- (void)liteAppDidClose:(id)arg1;
- (id)tinyAppPage;
- (void)setTinyAppPage:(id)arg1;
- (id)liteAppPage;
- (void)setLiteAppPage:(id)arg1;
- (void).cxx_destruct;
@end
