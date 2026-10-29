@interface WAPreloadGameAppTaskMgr : MMUserService <MMServiceProtocol>
{
    WAPreloadAppTask * _preloadTask; // +0x8
    long long _wkFeatureVersion; // +0x10
}
+ (BOOL)shouldAllowPreloadByMoment:(unsigned int)arg1 jitMode:(BOOL)arg2;
+ (BOOL)haveGameAppRunningInBackground;
- (void)onServiceInit;
- (void)onServiceClearData;
- (long long)wkFeatureVersion;
- (void)resetWKFeatureVersion;
- (BOOL)shouldAllowPreloadJITRuntime;
- (void)createPreloadAppTask:(unsigned int)arg1 jitMode:(BOOL)arg2;
- (id)getPreloadTask;
- (void)detachCurrentPreloadTask;
- (void)releasePreloadTask;
- (void)genNewPreloadTaskIfNoTaskByMoment:(unsigned int)arg1 jitMode:(BOOL)arg2;
- (void)genNewPreloadTaskIfNoTask;
- (void)genNewPreloadTaskOnLaunch:(id)arg1;
- (void)resetDelayReleasePreloadTask;
- (id)preloadTask;
- (void)setPreloadTask:(id)arg1;
- (void)setWkFeatureVersion:(long long)arg1;
- (void).cxx_destruct;
@end

