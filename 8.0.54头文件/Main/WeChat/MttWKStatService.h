@interface MttWKStatService : QBWupService
+ (id)service;
- (void)getMemoryInfoWithPhoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)preloadWKMachineInfoWithCompletion:(id /* block */)arg1;
- (void)getWKMachineInfoWithReq:(id)arg1 completion:(id /* block */)arg2;
- (void)preloadMachineListWithWithReq:(id)arg1 completion:(id /* block */)arg2;
@end

