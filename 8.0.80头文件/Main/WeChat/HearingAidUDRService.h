@interface HearingAidUDRService : IUdrCppBizFeatureImpl
+ (id)projectId;
+ (id)resourceName;
+ (BOOL)handlePostProcess:(id)arg1;
- (id)getProjectId;
- (void)postProcessAsync:(unsigned long long)arg1 resource:(id)arg2;
@end
