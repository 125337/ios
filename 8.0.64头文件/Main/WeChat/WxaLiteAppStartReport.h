@interface WxaLiteAppStartReport : NSObject
{
    BOOL _isEnable; // +0x8
    BOOL _isInitialized; // +0x9
    BOOL _isSyncStart; // +0xa
    BOOL _checkResult; // +0xb
    BOOL _isPreloadEngine; // +0xc
    BOOL _isPreloadBaseLib; // +0xd
    BOOL _isPreloadPage; // +0xe
    BOOL _codeCacheSwitch; // +0xf
    BOOL _hitSnapshotSwitch; // +0x10
    int _showPageResult; // +0x14
    int _codeCacheResult; // +0x18
    int _snapshotRuntimeType; // +0x1c
    NSString * _appId; // +0x20
    NSString * _query; // +0x28
    NSString * _page; // +0x30
    long long _startTime; // +0x38
    long long _checkStartTime; // +0x40
    long long _checkCost; // +0x48
    long long _loadEngineStartTime; // +0x50
    long long _loadEngineCost; // +0x58
    long long _preloadBaseLibStartTime; // +0x60
    long long _preloadBaseLibCost; // +0x68
    long long _preloadPageStartTime; // +0x70
    long long _preloadPageCost; // +0x78
    long long _showPageStartTime; // +0x80
    long long _showPageCost; // +0x88
    long long _appCost; // +0x90
    long long _renderPageCost; // +0x98
    long long _evalBaseLibCost; // +0xa0
    long long _evalPageCost; // +0xa8
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
- (BOOL)isPreloadEngine;
- (void)setIsPreloadEngine:(BOOL)arg1;
- (long long)loadEngineStartTime;
- (void)setLoadEngineStartTime:(long long)arg1;
- (long long)loadEngineCost;
- (void)setLoadEngineCost:(long long)arg1;
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
- (BOOL)codeCacheSwitch;
- (void)setCodeCacheSwitch:(BOOL)arg1;
- (int)codeCacheResult;
- (void)setCodeCacheResult:(int)arg1;
- (long long)evalBaseLibCost;
- (void)setEvalBaseLibCost:(long long)arg1;
- (long long)evalPageCost;
- (void)setEvalPageCost:(long long)arg1;
- (BOOL)hitSnapshotSwitch;
- (void)setHitSnapshotSwitch:(BOOL)arg1;
- (int)snapshotRuntimeType;
- (void)setSnapshotRuntimeType:(int)arg1;
- (void).cxx_destruct;
@end
