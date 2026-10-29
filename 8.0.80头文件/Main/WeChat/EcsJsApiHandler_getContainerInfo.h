@interface EcsJsApiHandler_getContainerInfo : EcsBaseAsyncJsApiHandler
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handle:(id)arg1 params:(id)arg2 callback:(id)arg3;
- (void)doHandleInMainThreadWithContext:(id)arg1 callback:(id)arg2;
- (id)buildContainerInfoWithContext:(id)arg1;
- (id)dictWithRect:(CGRect)arg1;
@end
