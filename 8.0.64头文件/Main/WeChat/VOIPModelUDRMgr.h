@interface VOIPModelUDRMgr : IUdrBizFeature
+ (id)VOIPDir;
+ (id)modelDir;
+ (id)modelPathWithName:(id)arg1;
+ (id)resFileMd5:(id)arg1;
+ (id)modelBaseName:(id)arg1;
+ (void)modelSaveWithName:(id)arg1 originPath:(id)arg2;
- (id)getProjectId;
- (void)postProcess:(id)arg1;
- (void)haveSpecifiedResource:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;
@end
