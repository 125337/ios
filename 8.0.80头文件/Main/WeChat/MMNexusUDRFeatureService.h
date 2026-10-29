@interface MMNexusUDRFeatureService : IUdrCppBizFeatureImpl
+ (id)sharedInstance;
+ (void)registerOneshotCallback:(id /* block */)arg1 resourceName:(id)arg2 timeout:(double)arg3;
+ (BOOL)hasInFlightCheckFor:(id)arg1;
+ (void)markInFlightCheckStarted:(id)arg1;
+ (void)_drainForName:(id)arg1 success:(BOOL)arg2 errNo:(int)arg3 errCode:(int)arg4;
+ (void)_markSuccessForName:(id)arg1;
+ (void)_markInstalledForName:(id)arg1;
+ (void)_drainIfInstalledForName:(id)arg1;
+ (void)_drainIfInstalledForName:(id)arg1 retriesLeft:(long long)arg2;
- (id)getProjectId;
- (void)postProcessAsync:(unsigned long long)arg1 resource:(id)arg2;
- (void)onCallBackSuccessAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 scene:(int)arg5;
- (void)onCallBackFailAsync:(unsigned long long)arg1 errNo:(int)arg2 errCode:(int)arg3 projectId:(id)arg4 name:(id)arg5 version:(int)arg6 scene:(int)arg7;
@end
