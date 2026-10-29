@interface JSContext2 (JEnergy)
- (id)bytecodeMap;
- (id)nameForScript:(id)arg1 codeCacheSource:(id)arg2;
- (id)cachePathForName:(id)arg1 codeCacheSource:(id)arg2;
- (id)codecacheDirPathForSource:(id)arg1;
- (BOOL)byteCodeEnabledForScript:(id)arg1 codeCacheSource:(id)arg2;
- (id)mm_setupBytecode:(id)arg1 sourceURL:(id)arg2 inVirtualMachine:(id)arg3;
- (void)validationCodeCacheForJSSourceScript:(id)arg1 sourceURL:(id)arg2 codeCacheSource:(id)arg3;
- (void)createCodeCacheIfNeededForJSScript:(id)arg1;
- (void)didCreateCodeCacheForJSSCript:(id)arg1;
- (id)mm_evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (id)jwd_init;
- (id)jwd_initWithVirtualMachine:(id)arg1;
- (void)jwd_setName:(id)arg1;
@end

