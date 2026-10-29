@interface GCWebViewCacheManager : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _cacheDict; // +0x8
}
- (id)init;
- (void)preloadTransparentWebView:(id)arg1 reuseIdentifier:(id)arg2 reCreateAfterUsed:(BOOL)arg3;
- (void)reCreateWithCacheItem:(id)arg1;
- (id)getCacheItemForUrl:(id)arg1 reuseIdentifier:(id)arg2 isPreload:(BOOL)arg3 preinjectData:(id)arg4;
- (void)preloadHalfScreenWebViewWithConfig:(id)arg1;
- (void)handleHalfScreenWebView:(id)arg1 parentVC:(id)arg2 visibleChange:(BOOL)arg3;
- (long long)mmUIUserInterfaceStyleForVc:(id)arg1;
- (id)showHalfScreenWebViewWithConfig:(id)arg1;
- (void)removeCacheWebView:(id)arg1;
- (id)cacheDict;
- (void)setCacheDict:(id)arg1;
- (void).cxx_destruct;
@end

