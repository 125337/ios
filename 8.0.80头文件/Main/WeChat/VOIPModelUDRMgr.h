@interface VOIPModelUDRMgr : IUdrCppBizFeatureImpl
+ (id)VOIPDir;
+ (id)modelDir;
+ (id)modelPathWithName:(id)arg1;
+ (id)resFileMd5:(id)arg1;
+ (id)modelBaseName:(id)arg1;
+ (id)modelNameToPathMap;
+ (id)destPathForResourceName:(id)arg1;
+ (BOOL)md5Equal:(id)arg1 rhs:(id)arg2;
+ (BOOL)transferMatchesExpectedMd5:(id)arg1 expectedMd5:(id)arg2;
+ (void)removeUDROriginalAtPath:(id)arg1;
+ (void)modelSaveWithName:(id)arg1 originPath:(id)arg2 expectedMd5:(id)arg3;
- (id)getProjectId;
- (void)postProcessAsync:(unsigned long long)arg1 resource:(id)arg2;
@end
