@interface WxaLiteAppStartReport : NSObject
{
    BOOL _isEnable; // +0x8
    BOOL _isInitialized; // +0x9
    BOOL _isSyncStart; // +0xa
    BOOL _checkResult; // +0xb
    BOOL _isPreloadPrecess; // +0xc
    BOOL _isPreloadEngine; // +0xd
    BOOL _isPreloadBaseLib; // +0xe
    BOOL _isPreloadPage; // +0xf
    int _showPageResult; // +0x10
    NSString * _appId; // +0x18
    NSString * _query; // +0x20
    NSString * _page; // +0x28
    long long _startTime; // +0x30
    long long _checkStartTime; // +0x38
    long long _checkCost; // +0x40
    long long _preloadPrecessStartTime; // +0x48
    long long _preloadPrecessCost; // +0x50
    long long _preloadEngineStartTime; // +0x58
    long long _preloadEngineCost; // +0x60
    long long _preloadBaseLibStartTime; // +0x68
    long long _preloadBaseLibCost; // +0x70
    long long _preloadPageStartTime; // +0x78
    long long _preloadPageCost; // +0x80
    long long _showPageStartTime; // +0x88
    long long _showPageCost; // +0x90
    long long _appCost; // +0x98
    long long _renderPageCost; // +0xa0
}
- (id)init;
- (id)toJsonString;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (BOOL)isEnable;
- (void)setIsEnable:(BOOL)arg1;
- (BOOL)isInitialized;
- (void)setIsInitialized:(BOOL)arg1;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (BOOL)isSyncStart;
- (void)setIsSyncStart:(BOOL)arg1;
- (long long)checkStartTime;
- (void)setCheckStartTime:(long long)arg1;
- (long long)checkCost;
- (void)setCheckCost:(long long)arg1;
- (BOOL)checkResult;
- (void)setCheckResult:(BOOL)arg1;
- (BOOL)isPreloadPrecess;
- (void)setIsPreloadPrecess:(BOOL)arg1;
- (long long)preloadPrecessStartTime;
- (void)setPreloadPrecessStartTime:(long long)arg1;
- (long long)preloadPrecessCost;
- (void)setPreloadPrecessCost:(long long)arg1;
- (BOOL)isPreloadEngine;
- (void)setIsPreloadEngine:(BOOL)arg1;
- (long long)preloadEngineStartTime;
- (void)setPreloadEngineStartTime:(long long)arg1;
- (long long)preloadEngineCost;
- (void)setPreloadEngineCost:(long long)arg1;
- (BOOL)isPreloadBaseLib;
- (void)setIsPreloadBaseLib:(BOOL)arg1;
- (long long)preloadBaseLibStartTime;
- (void)setPreloadBaseLibStartTime:(long long)arg1;
- (long long)preloadBaseLibCost;
- (void)setPreloadBaseLibCost:(long long)arg1;
- (BOOL)isPreloadPage;
- (void)setIsPreloadPage:(BOOL)arg1;
- (long long)preloadPageStartTime;
- (void)setPreloadPageStartTime:(long long)arg1;
- (long long)preloadPageCost;
- (void)setPreloadPageCost:(long long)arg1;
- (long long)showPageStartTime;
- (void)setShowPageStartTime:(long long)arg1;
- (long long)showPageCost;
- (void)setShowPageCost:(long long)arg1;
- (int)showPageResult;
- (void)setShowPageResult:(int)arg1;
- (long long)appCost;
- (void)setAppCost:(long long)arg1;
- (long long)renderPageCost;
- (void)setRenderPageCost:(long long)arg1;
- (void).cxx_destruct;
@end

