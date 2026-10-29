@interface WCFinderWebViewOpener : NSObject
{
    BOOL _needPreload; // +0x8
    BOOL _reReploadWhenExit; // +0x9
    id /* block */ _configPresetUI; // +0x10
    id /* block */ _appendQuerys; // +0x18
    unsigned long long _preloadKey; // +0x20
    NSString * _targetURL; // +0x28
    MMWebViewController * _cacheWebView; // +0x30
}
+ (id)openerWithNeedPreload:(BOOL)arg1 reReploadWhenExit:(BOOL)arg2;
- (void)updateURL:(id)arg1;
- (void)open:(id)arg1;
- (id)_createWebView;
- (id /* block */)configPresetUI;
- (void)setConfigPresetUI:(id /* block */)arg1;
- (id /* block */)appendQuerys;
- (void)setAppendQuerys:(id /* block */)arg1;
- (unsigned long long)preloadKey;
- (void)setPreloadKey:(unsigned long long)arg1;
- (BOOL)needPreload;
- (void)setNeedPreload:(BOOL)arg1;
- (id)targetURL;
- (void)setTargetURL:(id)arg1;
- (BOOL)reReploadWhenExit;
- (void)setReReploadWhenExit:(BOOL)arg1;
- (id)cacheWebView;
- (void)setCacheWebView:(id)arg1;
- (void).cxx_destruct;
@end
