@interface WCMpEditorBizMpUDRFeatureService : IUdrCppBizFeatureImpl
+ (void)registerOneshotCallback:(id /* block */)arg1 timeout:(double)arg2;
+ (BOOL)hasInFlightCheck;
+ (void)markInFlightCheckStarted;
+ (void)_drainPendingWithSuccess:(BOOL)arg1 errNo:(int)arg2 errCode:(int)arg3;
- (id)getProjectId;
- (void)onCallBackSuccessAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 scene:(int)arg5;
- (void)onCallBackFailAsync:(unsigned long long)arg1 errNo:(int)arg2 errCode:(int)arg3 projectId:(id)arg4 name:(id)arg5 version:(int)arg6 scene:(int)arg7;
@end
