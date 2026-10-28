@interface WAWebViewPlugin_Favorite : WAWebViewPluginBase
{
    NSDictionary * _wmpfCustomParams; // +0x8
}
- (void)notifyToAddFavItem:(id)arg1;
- (id)getWmpfCustomParams;
- (id)genFavoriteData:(id)arg1;
- (void)addFavorItemWithFavoriteData:(id)arg1 completion:(id /* block */)arg2;
- (void)getImageDataFromUrl:(id)arg1 completion:(id /* block */)arg2;
- (id)snapshotWebView;
- (id)wmpfCustomParams;
- (void)setWmpfCustomParams:(id)arg1;
- (void).cxx_destruct;
@end
