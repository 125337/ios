@interface OVCOnDemandPreprocManager : NSObject
{
    SharedPtr<XVIOnDemandPreprocManager> _backingService; // +0x8
}
- (id)initWithBackingService:(SharedPtr<XVIOnDemandPreprocManager>)arg1;
- (id)sendProcessingTask:(id)arg1 withTaskPrepareCompletionHandler:(id /* block */)arg2 taskStateUpdateHandler:(id /* block */)arg3;
- (void)cancelProcessingTask:(id)arg1;
- (SharedPtr<XVIPreprocTask>)prepareTask:(id)arg1 withCompletion:(id /* block */)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
