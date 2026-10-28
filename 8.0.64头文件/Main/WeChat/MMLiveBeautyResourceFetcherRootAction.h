@interface MMLiveBeautyResourceFetcherRootAction : MMLiveFlowLinearDelegatingActionBase
{
    unsigned long long _pendingTaskCount; // +0x8
}
+ (id)createInstance;
- (void)fetchBeautyResourcesInPackages:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)fetchBeautyResourcesInDescriptor:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)resourcePackageWithBackendModel:(id)arg1;
- (unsigned long long)pendingTaskCount;
- (void)setPendingTaskCount:(unsigned long long)arg1;
@end
