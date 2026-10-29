@interface MagicPkgCleaner : MMUserService <MMServiceProtocol>
- (void)regist:(id)arg1;
- (BOOL)bizStillValid:(id)arg1;
- (void)doCleanMagicPkg;
- (void)doCleanBizMagicPkg:(id)arg1 lastPkgInfo:(id)arg2;
- (void)cmdCleanAllMagicPkg;
- (unsigned long long)preCleanGetCacheSize;
- (unsigned long long)cleanCacheMgrMakeToClean;
- (void)onServiceInit;
- (void)dealloc;
@end

