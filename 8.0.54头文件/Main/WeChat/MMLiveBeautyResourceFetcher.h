@interface MMLiveBeautyResourceFetcher : MMUserService <MMServiceProtocol>
{
    MMLiveBeautyResourceFetcherRootAction * _flowInstance; // +0x8
}
- (void)onServiceInit;
- (void)fetchBeautyResourcesInPackages:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)fetchBeautyResourcesInDescriptor:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)flowInstance;
- (void)setFlowInstance:(id)arg1;
- (void).cxx_destruct;
@end

