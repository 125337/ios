@interface WCFinderPostModelUDRConfig : IUdrCppBizFeatureImpl
- (id)getProjectId;
- (BOOL)addToPeriod;
- (BOOL)isModelResourceWithProject:(id)arg1 name:(id)arg2;
- (void)onCallBackCheckSuccessAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 scene:(int)arg5;
- (void)onCallBackSuccessAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 scene:(int)arg5;
- (void)onCallBackFailAsync:(unsigned long long)arg1 errNo:(int)arg2 errCode:(int)arg3 projectId:(id)arg4 name:(id)arg5 version:(int)arg6 scene:(int)arg7;
- (void)haveSpecifiedResourceAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 errNo:(int)arg5 errCode:(int)arg6;
@end
