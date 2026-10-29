@interface UDRMagicEcsShopFeatureService : IUdrCppBizFeatureImpl
- (id)getProjectId;
- (void)postProcessAsync:(unsigned long long)arg1 resource:(id)arg2;
- (void)haveSpecifiedResourceAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 errNo:(int)arg5 errCode:(int)arg6;
@end
