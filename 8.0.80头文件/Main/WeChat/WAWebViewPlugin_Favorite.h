@interface WAWebViewPlugin_Favorite : WAWebViewPluginBase
{
    BOOL _starRequestTimedOut; // +0x8
    NSDictionary * _wmpfCustomParams; // +0x10
    id /* block */ _pendingStarAction; // +0x18
    unsigned long long _starRequestSeq; // +0x20
}
- (void)notifyToAddFavItem:(id)arg1;
- (id)genFavoriteData:(id)arg1;
- (BOOL)isNetworkUrl:(id)arg1;
- (void)addFavorItemWithFavoriteData:(id)arg1 completion:(id /* block */)arg2;
- (id)currentPageStarBizKey;
- (void)requestStarFavoriteDataThen:(id /* block */)arg1;
- (BOOL)hasPendingStarRequest;
- (void)handleStarRequestWithFavoriteData:(id)arg1;
- (void)startStarFlowWithFavoriteData:(id)arg1 thumbUrl:(id)arg2;
- (void)startStarFlow;
- (id)saveStarThumbDataToTempFile:(id)arg1;
- (void)getImageDataFromUrl:(id)arg1 completion:(id /* block */)arg2;
- (id)snapshotWebView;
- (id)snapshotWebViewNoCrop;
- (id)wmpfCustomParams;
- (void)setWmpfCustomParams:(id)arg1;
- (id /* block */)pendingStarAction;
- (void)setPendingStarAction:(id /* block */)arg1;
- (unsigned long long)starRequestSeq;
- (void)setStarRequestSeq:(unsigned long long)arg1;
- (BOOL)starRequestTimedOut;
- (void)setStarRequestTimedOut:(BOOL)arg1;
- (void).cxx_destruct;
@end
