@interface FavWebCacheMgr : MMUserService <WKNavigationDelegate, WKScriptMessageHandler, INetworkStatusMgrExt, IFavoritesExt, MMServiceProtocol>
{
    WKWebView * m_webView; // +0x8
    NSMutableArray * m_loadingQueue; // +0x10
    MMTimer * m_cacheWatchDog; // +0x18
    BOOL m_bUpdate; // +0x20
    BOOL m_webviewEnable; // +0x21
    BOOL m_htmlLoadComplete; // +0x22
    BOOL m_ajaxInjectComplete; // +0x23
    NSMutableSet * m_processKeys; // +0x28
    NSMutableCharacterSet * m_urlCharacterSet; // +0x30
    NSString * m_userAgent; // +0x38
    BOOL m_bLoading; // +0x40
    unsigned int m_cacheSize; // +0x44
    unsigned int m_cacheFileNum; // +0x48
    unsigned long long m_totalCacheSize; // +0x50
    NSMutableSet * m_currentDowloadFiles; // +0x58
    FavWebCacheDownloadFileInfo * m_downloadFileInfo; // +0x60
    FavoritesItem * m_currentItem; // +0x68
    FavWebCacheContext * m_cacheContext; // +0x70
    FavWebCacheScriptMessageHandler * m_scriptMessageHandler; // +0x78
}
- (id)init;
- (void)initWebView;
- (void)loadOldWebFavItem:(id)arg1;
- (id)genProcessKey;
- (BOOL)checkKey:(id)arg1;
- (BOOL)webCacheEnableWithFavItem:(id)arg1;
- (void)updateWebCacheForItem:(id)arg1 WithContext:(id)arg2 HtmlAndFileUrlResult:(id)arg3;
- (void)deleteWebCacheForItem:(id)arg1;
- (void)cleanCache;
- (void)cacheWebFavItem:(id)arg1;
- (void)cacheWebFavItem:(id)arg1 needClear:(BOOL)arg2;
- (void)setCacheStatusForItem:(id)arg1;
- (void)startCacheWeb;
- (void)cancelCacheWeb;
- (void)checkTotalCacheSize;
- (void)resetCacheWeb;
- (void)webCacheFinish:(BOOL)arg1;
- (void)reportCacheResult:(BOOL)arg1;
- (BOOL)saveWebData:(id)arg1 mimeType:(id)arg2 url:(id)arg3;
- (void)saveData:(id)arg1 atPath:(id)arg2;
- (void)startCacheWebContent;
- (BOOL)processHtmlContentAndFileUrlResult:(id)arg1 baseUrl:(id)arg2;
- (BOOL)processSources:(id)arg1 isMedia:(BOOL)arg2 inContent:(id)arg3 withBaseUrl:(id)arg4;
- (id)getUrlof:(id)arg1 baseUrl:(id)arg2;
- (id)checkCssUrlIn:(id)arg1;
- (BOOL)storeHtmlFile;
- (id)genHeadScript;
- (id)protectString:(id)arg1;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)stringReplace:(const void *)arg1 src:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg2 des:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (void)replaceResourceAddr:(id)arg1 with:(id)arg2 inContent:(id)arg3;
- (void)startDownloadFiles;
- (void)webviewDownload:(id)arg1;
- (void)cancelWebDownload;
- (void)urlSessionDownload:(id)arg1;
- (void)processDownloadData:(id)arg1 mimeType:(id)arg2 url:(id)arg3;
- (void)downloadFinish:(id)arg1;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void).cxx_destruct;
@end

