@interface EcsActionHandler_getContainerInfo : EcsActionHandler_Base
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handleAction:(id)arg1;
- (void)doHandleActionInMainThread;
- (id)buildContainerInfo;
- (id)dictWithRect:(CGRect)arg1;
@end
