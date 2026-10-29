@interface MJShootEffectMaterialViewModel : NSObject <MJMaterialLoadingStatusViewModel>
{
    MJShootComposingViewModel * _shootComposingVM; // +0x8
}
- (id)downloadStatus;
- (void)mj_loadMaterialWithID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (float)mj_loadingProgressWithID:(id)arg1;
- (unsigned long long)mj_loadingStatusWithID:(id)arg1;
- (void)resetMaterialsLoadingStatus;
- (void)loadingStatusForID:(id)arg1 threadSafetyHandler:(id /* block */)arg2;
- (id)shootComposingVM;
- (void)setShootComposingVM:(id)arg1;
- (void).cxx_destruct;
@end

