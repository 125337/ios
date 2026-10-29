@interface WAWebViewPlugin_Favorite : WAWebViewPluginBase
- (void)notifyToAddFavItem:(id)arg1;
- (void)addFavorItemWithInfo:(id)arg1;
- (void)getImageDataFromUrl:(id)arg1 completion:(id /* block */)arg2;
- (id)snapshotWebView;
@end

