@interface GCWebViewCacheItem : NSObject
{
    BOOL _isPreload; // +0x8
    BOOL _reCreateAfterUsed; // +0x9
    NSString * _reuseIdentifier; // +0x10
    NSString * _url; // +0x18
    double _preloadTime; // +0x20
    MMWebViewController * _webviewController; // +0x28
}
- (void)configureWithUrl:(id)arg1;
- (BOOL)isExpired;
- (id)reuseIdentifier;
- (void)setReuseIdentifier:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (double)preloadTime;
- (void)setPreloadTime:(double)arg1;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg1;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (BOOL)reCreateAfterUsed;
- (void)setReCreateAfterUsed:(BOOL)arg1;
- (void).cxx_destruct;
@end
