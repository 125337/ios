@interface UDRCameraScanFeatureService : IUdrCppBizFeatureImpl
+ (id)projectId:(long long)arg1;
+ (BOOL)fileExist:(long long)arg1 name:(id)arg2;
+ (id)filePath:(long long)arg1 name:(id)arg2;
- (id)getProjectId;
- (id)getParameter;
- (void)postProcessAsync:(unsigned long long)arg1 resource:(id)arg2;
- (void)onCallBackSuccessAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 scene:(int)arg5;
@end
