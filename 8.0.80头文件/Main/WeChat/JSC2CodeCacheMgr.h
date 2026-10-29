@interface JSC2CodeCacheMgr : MMUserService <MMServiceProtocol>
{
    BOOL _shouldSampleLargeReport; // +0x8
    NSObject<OS_dispatch_queue> * _generatorQueue; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)validationCodeCacheForScriptWrap:(id)arg1 completion:(id /* block */)arg2;
- (void)validationCodeCacheForJSScript:(id)arg1 sourceURL:(id)arg2 codeCacheSource:(id)arg3 cachePath:(id)arg4 completion:(id /* block */)arg5;
- (void)createCodeCacheIfNeededForScript:(id)arg1 completion:(id /* block */)arg2;
- (void)batchCreateCodeCacheIfNeededForScripts:(id)arg1 withoutDelay:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)createOrValidateCodeCacheWithUsingCodeCache:(BOOL)arg1 script:(id)arg2;
- (void)reportCodeCacheGenerateWithScript:(id)arg1 isSuccess:(BOOL)arg2 costTime:(unsigned int)arg3 cacheSize:(unsigned long long)arg4;
- (void)reportCodeCacheApplySuccessIfNeededWithCodeCacheSource:(id)arg1 codeCacheVersion:(unsigned int)arg2 setupCostTimeInUS:(unsigned int)arg3 evaluateCostTimeInUS:(unsigned int)arg4 strSourceURL:(id)arg5;
- (void)reportErrorOnCodeCacheValidationWithErrCode:(long long)arg1;
- (void)modifyCodeCacheAccessTime:(id)arg1 time:(id)arg2;
- (BOOL)shouldSampleLargeReport;
- (void)setShouldSampleLargeReport:(BOOL)arg1;
- (id)generatorQueue;
- (void)setGeneratorQueue:(id)arg1;
- (void).cxx_destruct;
@end
