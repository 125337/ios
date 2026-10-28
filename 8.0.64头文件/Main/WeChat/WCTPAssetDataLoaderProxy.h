@interface WCTPAssetDataLoaderProxy : WCAssetDataLoaderProxy <TPAssetResourceLoaderDelegate>
- (id)getLoadingRequestWithRequestID:(int)arg1;
- (void)onReceiveNewLoadingRequest:(id)arg1;
- (BOOL)respondDataWithLoadingRequest:(id)arg1;
- (BOOL)tpResourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)tpResourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
@end
