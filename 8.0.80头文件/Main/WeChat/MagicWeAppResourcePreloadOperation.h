@interface MagicWeAppResourcePreloadOperation : NSObject
{
    MagicWeAppResourcePreloadTask * _task; // +0x8
    id /* block */ _completion; // +0x10
    WAAppTrialInfoLoader * _trialInfoLoader; // +0x18
    WACacheVersionChecker * _cacheVersionChecker; // +0x20
}
- (id)initWithTask:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isRDMEnvVersion:(id)arg1;
- (BOOL)isReleaseEnvVersion:(id)arg1;
- (void)finishWithSuccess:(BOOL)arg1 errorMessage:(id)arg2 result:(id)arg3;
- (void)cancel;
- (void)start;
- (void)handleFetchedContact:(id)arg1 forTask:(id)arg2;
- (void)preparePackageConfigForTask:(id)arg1 contact:(id)arg2 debugModeType:(unsigned long long)arg3 permissionAndPackageGroup:(id)arg4;
- (void)handlePreparedResultForTask:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 success:(BOOL)arg4 errMsg:(id)arg5 permissionInfo:(id)arg6 cacheErrorCode:(long long)arg7;
- (void)fetchContactWithAppId:(id)arg1 targetVersion:(unsigned int)arg2 forceRefresh:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)loadTrialInfoWithTask:(id)arg1 contact:(id)arg2 completion:(id /* block */)arg3;
- (void)startPermissionRequestWithTask:(id)arg1 contact:(id)arg2 group:(id)arg3;
- (void)preparePermissionAndPackageWithTask:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 debugModeType:(unsigned long long)arg4 subpackage:(id)arg5 permissionAndPackageGroup:(id)arg6 completion:(id /* block */)arg7;
- (id)task;
- (void)setTask:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)trialInfoLoader;
- (void)setTrialInfoLoader:(id)arg1;
- (id)cacheVersionChecker;
- (void)setCacheVersionChecker:(id)arg1;
- (void).cxx_destruct;
@end
