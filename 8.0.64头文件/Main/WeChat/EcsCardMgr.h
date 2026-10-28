@interface EcsCardMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSObject<EcsCardInfoCacheStrategy> * _cacheStragegy; // +0x8
    NSObject<OS_dispatch_queue> * _requestTaskHandleQueue; // +0x10
    NSMutableDictionary * _runningTaskList; // +0x18
    NSMutableDictionary * _pendingTaskList; // +0x20
}
- (void)onServiceInit;
- (void)setCacheStrategy:(id)arg1;
- (BOOL)enableCache:(unsigned int)arg1;
- (void)openProductCard:(id)arg1 ofViewModel:(id)arg2 withContact:(id)arg3 fromVC:(id)arg4;
- (void)fetchProductCard:(id)arg1 reqType:(unsigned int)arg2 ignoreCache:(BOOL)arg3 successCallback:(id /* block */)arg4 failedCallback:(id /* block */)arg5;
- (void)executeRequestProductTask:(id)arg1;
- (void)fetchProductCardWithMessageWrap:(id)arg1 success:(id /* block */)arg2 failed:(id /* block */)arg3;
- (id)getProductCardFromCache:(id)arg1 reqType:(unsigned int)arg2;
- (id)getValidProductCardFromCache:(id)arg1 reqType:(unsigned int)arg2;
- (id)getEcsJumpInfoFromProductCard:(id)arg1;
- (id)buildShareItemWithFinderShareTask:(id)arg1 productInfo:(id)arg2;
- (id)getLimitDiscountInfoOfProductCard:(id)arg1;
- (id)coverEcShoBoxItems2FinderShowBoxItems:(id)arg1;
- (void)openShopWindowCardWithMessage:(id)arg1 sceneNote:(id)arg2 fromVC:(id)arg3;
- (void)fetchShopCard:(id)arg1 reqType:(unsigned int)arg2 ignoreCache:(BOOL)arg3 successCallback:(id /* block */)arg4 failedCallback:(id /* block */)arg5;
- (void)executeRequestShopCardTask:(id)arg1;
- (id)getShopCardFromCache:(id)arg1 reqType:(unsigned int)arg2;
- (id)getValidShopCardFromCache:(id)arg1 reqType:(unsigned int)arg2;
- (id)buildShopShareItemWithShopCardResp:(id)arg1;
- (unsigned int)getCardReqTypeWithMessage:(id)arg1 isClick:(BOOL)arg2;
- (void)fetchAndPreloadBulkBuyCardJumpInfo:(id)arg1 successCallback:(id /* block */)arg2 failedCallback:(id /* block */)arg3;
- (void)executeRequestBulkBuyCard:(id)arg1;
- (BOOL)ecsHandleOpenBulkBuyCard:(id)arg1 viewController:(id)arg2;
- (BOOL)isBulkBuyCard:(id)arg1;
- (id)getValidBulkBuyCardJumpInfoFromCache:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleFetchProductResponse:(id)arg1;
- (void)handleFinishProductTask:(id)arg1;
- (void)handleFetchShopCardResponse:(id)arg1;
- (void)handleFinishShopTask:(id)arg1;
- (void)handleFetchWaAppCardResponse:(id)arg1;
- (void)handleFinishWaAppCardTask:(id)arg1;
- (id)cacheStragegy;
- (void)setCacheStragegy:(id)arg1;
- (id)requestTaskHandleQueue;
- (void)setRequestTaskHandleQueue:(id)arg1;
- (id)runningTaskList;
- (void)setRunningTaskList:(id)arg1;
- (id)pendingTaskList;
- (void)setPendingTaskList:(id)arg1;
- (void).cxx_destruct;
@end
