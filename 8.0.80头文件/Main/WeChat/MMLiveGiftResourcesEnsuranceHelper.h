@interface MMLiveGiftResourcesEnsuranceHelper : NSObject
{
    MMFinderLiveTaskId * _liveTaskId; // +0x8
    id /* block */ _giftFetchingWorkItem; // +0x10
}
- (id)initWithLiveTaskId:(id)arg1;
- (BOOL)ensureGiftResources:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)ensureGiftResourcesEx:(id)arg1 correlationId:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)invokeResourceDownloadWorkItems:(id)arg1 resourceDescriptors:(id)arg2 correlationId:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)validateAvailabilityOfResources:(id)arg1 correlationId:(id)arg2;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id /* block */)giftFetchingWorkItem;
- (void)setGiftFetchingWorkItem:(id /* block */)arg1;
- (void).cxx_destruct;
@end
