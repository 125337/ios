@interface WCFinderOpenLiteAppParams : NSObject
{
    BOOL _animated; // +0x8
    BOOL _withFallback; // +0x9
    id <WCFinderLiteAppInfoProvider> _liteAppInfoProvider; // +0x10
    NSString * _defaultURL; // +0x18
    UINavigationController * _navVC; // +0x20
    id /* block */ _completionBlock; // +0x28
    id /* block */ _liteAppCloseBlock; // +0x30
}
+ (id)paramsWithLiteAppInfoProvider:(id)arg1 defaultURL:(id)arg2 navVC:(id)arg3;
+ (id)paramsWithAppId:(id)arg1 page:(id)arg2 query:(id)arg3 defaultURL:(id)arg4 navVC:(id)arg5;
- (id)init;
- (id)liteAppInfoProvider;
- (void)setLiteAppInfoProvider:(id)arg1;
- (id)defaultURL;
- (void)setDefaultURL:(id)arg1;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
- (BOOL)withFallback;
- (void)setWithFallback:(BOOL)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)liteAppCloseBlock;
- (void)setLiteAppCloseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

