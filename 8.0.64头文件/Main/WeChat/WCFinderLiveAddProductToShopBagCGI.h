@interface WCFinderLiveAddProductToShopBagCGI : WCFinderLiveTransferCGI
- (id)initWithLiveTaskID:(id)arg1 product:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
@end
