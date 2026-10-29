@interface WCAVAssetDataLoaderProxy : WCAssetDataLoaderProxy <AVAssetResourceLoaderDelegate>
- (void)onReceiveNewLoadingRequest:(id)arg1;
- (BOOL)respondDataWithLoadingRequest:(id)arg1;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
@end
