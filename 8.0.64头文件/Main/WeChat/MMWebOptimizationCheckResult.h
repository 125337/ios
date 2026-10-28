@interface MMWebOptimizationCheckResult : MMObject
{
    BOOL _hasAllowanceAsyncA8Key; // +0x8
    BOOL _hasCacheDnsResult; // +0x9
    NSString * _a8KeyRespUrl; // +0x10
    MMWebviewPrefetchResult * _prefetchResult; // +0x18
}
- (BOOL)hasAllowanceAsyncA8Key;
- (void)setHasAllowanceAsyncA8Key:(BOOL)arg1;
- (id)a8KeyRespUrl;
- (void)setA8KeyRespUrl:(id)arg1;
- (BOOL)hasCacheDnsResult;
- (void)setHasCacheDnsResult:(BOOL)arg1;
- (id)prefetchResult;
- (void)setPrefetchResult:(id)arg1;
- (void).cxx_destruct;
@end
