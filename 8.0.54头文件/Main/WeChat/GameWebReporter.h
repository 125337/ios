@interface GameWebReporter : MMObject
{
    GameWebViewTimeRecord * _webViewTimeRecord; // +0x8
    MMWebViewController * _webViewController; // +0x10
    NSString * _url; // +0x18
    NSString * _pageKey; // +0x20
    NSString * _wepkgVersion; // +0x28
    NSString * _jsCommonLibVersion; // +0x30
    unsigned long long _renderFinsihTimestampMills; // +0x38
    BOOL _isManualLoad; // +0x40
    BOOL _isPageCache; // +0x41
    BOOL _hasReportFinish; // +0x42
    BOOL _hasAppeared; // +0x43
    BOOL _hasReportClosed; // +0x44
    BOOL _isPreloadWhemInvisibile; // +0x45
    BOOL _hasShow; // +0x46
    BOOL _isRealtime16142; // +0x47
    unsigned long long _gameWkInnterceptMethod; // +0x48
    NSMutableDictionary * _webItems16142; // +0x50
    NSDictionary * _webTimingDic; // +0x58
    unsigned long long _pageCloseTime; // +0x60
}
+ (id)createWithWebView:(id)arg1 andUrl:(id)arg2;
- (id)webView;
- (id)initWithWebView:(id)arg1 andUrl:(id)arg2;
- (void)setWepkgVersion:(id)arg1;
- (void)setJsCommonLibVersion:(id)arg1;
- (void)setManualLoad:(BOOL)arg1;
- (void)setPageCache:(BOOL)arg1;
- (void)notifyWebViewCreate;
- (void)notifyWebViewDidCreated;
- (void)notifyWebViewDidAppear;
- (void)notifyWebViewWillLoad;
- (void)notifyWebViewDidStartLoad;
- (void)notifyWebViewDidFinishLoad;
- (void)notifyWebViewLoadError:(long long)arg1;
- (void)notifyRenderFinished:(unsigned long long)arg1;
- (void)notifyWebViewClosed;
- (void)notifyWebViewA8KeyStarted;
- (void)notifyWebViewA8KeyFinished;
- (void)notifyWebViewPreverifyStarted;
- (void)notifyWebViewPreverifyFinished;
- (void)notifyWebViewDealloc;
- (void)report16142;
- (void)commitGameWebData:(id)arg1 Type:(id)arg2 Realtime:(BOOL)arg3;
- (unsigned long long)pageStartTime;
- (void)saveReport16142:(id)arg1 realTime:(BOOL)arg2;
- (void)report16145:(id)arg1 realTime:(BOOL)arg2;
- (void)reportWithItems:(id)arg1 toProtoNumber:(int)arg2 realTime:(BOOL)arg3;
- (void)appendParams:(id)arg1 toReportItems:(id)arg2;
- (int)searchInsertPositionInItem:(id)arg1 ForOrder:(int)arg2 current:(int)arg3;
- (void)assembleLocalItems:(id)arg1 lessFields:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (id)extractWebDurationWithStartKey:(id)arg1 endKey:(id)arg2;
- (id)networkTypeString;
- (void)setUserClickTime:(unsigned long long)arg1;
- (BOOL)isPreloadWhemInvisibile;
- (void)setIsPreloadWhemInvisibile:(BOOL)arg1;
- (BOOL)hasShow;
- (void)setHasShow:(BOOL)arg1;
- (unsigned long long)gameWkInnterceptMethod;
- (void)setGameWkInnterceptMethod:(unsigned long long)arg1;
- (id)webItems16142;
- (void)setWebItems16142:(id)arg1;
- (id)webTimingDic;
- (void)setWebTimingDic:(id)arg1;
- (unsigned long long)pageCloseTime;
- (void)setPageCloseTime:(unsigned long long)arg1;
- (BOOL)isRealtime16142;
- (void)setIsRealtime16142:(BOOL)arg1;
- (void).cxx_destruct;
@end

