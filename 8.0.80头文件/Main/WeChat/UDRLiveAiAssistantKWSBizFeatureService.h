@interface UDRLiveAiAssistantKWSBizFeatureService : IUdrCppBizFeatureImpl
+ (BOOL)isKWSManagedResource:(id)arg1;
+ (BOOL)isZipResource:(id)arg1;
+ (id)sharedInstance;
- (id)getProjectId;
- (BOOL)addToPeriod;
- (void)postProcessAsync:(unsigned long long)arg1 resource:(id)arg2;
- (void)onCallBackCheckSuccessAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 scene:(int)arg5;
- (void)onCallBackSuccessAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 scene:(int)arg5;
- (void)onCallBackFailAsync:(unsigned long long)arg1 errNo:(int)arg2 errCode:(int)arg3 projectId:(id)arg4 name:(id)arg5 version:(int)arg6 scene:(int)arg7;
- (void)notifyKWSResourceReady:(BOOL)arg1;
@end
