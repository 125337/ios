@interface FavWebViewController : MMWebViewController <WKScriptMessageHandler>
{
    FavoritesItem * m_favItem; // +0x68
    FavDataItemWrap * m_favDataItemWrap; // +0x70
    unsigned int m_dataFavId; // +0x78
    BOOL m_hasAddHandler; // +0x7c
    BOOL m_hasCached; // +0x7d
    BOOL m_hasLoaded; // +0x7e
    FavWebCacheContext * m_cacheContext; // +0x80
    NSDictionary * m_htmlAndFileUrlResult; // +0x88
    FavWebCacheScriptMessageHandler * m_scriptMessageHandler; // +0x90
}
- (id)initWithFavoritesItem:(id)arg1;
- (id)initWithFavDataWrap:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)onWebViewDelete;
- (void)onWebViewEditTag;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)cacheWebContent;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void).cxx_destruct;
@end

