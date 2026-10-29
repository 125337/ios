@interface WeVisUDRService : IUdrCppBizFeatureImpl
+ (id)UDRProjectId;
+ (id)UDRProjectCheckParameter;
+ (id)allResources;
+ (id)resourceWithName:(id)arg1;
+ (void)requestResourcesWithNames:(id)arg1;
+ (id)pathOfResourceWithName:(id)arg1 version:(long long)arg2;
+ (BOOL)checkResourcesWithNamesAndVersions:(id)arg1;
+ (id)pathOfResource:(id)arg1;
+ (id)postPathOfResource:(id)arg1;
+ (id)debugDescription;
- (id)getProjectId;
- (id)getParameter;
- (void)onCallBackSuccessAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 scene:(int)arg5;
@end
