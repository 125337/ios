@interface EcsCardMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSObject<EcsCardInfoCacheStrategy> * _cacheStragegy; // +0x8
    NSObject<OS_dispatch_queue> * _requestTaskHandleQueue; // +0x10
    NSMutableDictionary * _runningTaskList; // +0x18
    NSMutableDictionary * _pendingTaskList; // +0x20
}
- (void)onServiceInit;
- (void)setCacheStrategy:(id)arg1;
- (void)openProductCard:(id)arg1 ofViewModel:(id)arg2 withContact:(id)arg3 fromVC:(id)arg4 withScene:(int)arg5;
- (void)fetchProductCard:(id)arg1 reqType:(unsigned int)arg2 ignoreCache:(BOOL)arg3 successCallback:(id /* block */)arg4 failedCallback:(id /* block */)arg5;
- (void)executeRequestProductTask:(id)arg1;
- (void)fetchProductCardWithMessageWrap:(id)arg1 success:(id /* block */)arg2 failed:(id /* block */)arg3;
- (id)getProductCardFromCache:(id)arg1 reqType:(unsigned int)arg2;
- (id)getValidProductCardFromCache:(id)arg1 reqType:(unsigned int)arg2;
- (id)buildShareItemWithFinderShareTask:(id)arg1 productInfo:(id)arg2;
- (id)getLimitDiscountInfoOfProductCard:(id)arg1;
- (void)openShopWindowCardWithMessage:(id)arg1 scneNoteCardType:(id)arg2 withContact:(id)arg3 fromVC:(id)arg4 withScene:(int)arg5;
- (void)fetchShopCard:(id)arg1 reqType:(unsigned int)arg2 ignoreCache:(BOOL)arg3 successCallback:(id /* block */)arg4 failedCallback:(id /* block */)arg5;
- (void)executeRequestShopCardTask:(id)arg1;
- (id)getShopCardFromCache:(id)arg1 reqType:(unsigned int)arg2;
- (id)getValidShopCardFromCache:(id)arg1 reqType:(unsigned int)arg2;
- (id)buildShopShareItemWithShopCardResp:(id)arg1;
- (unsigned int)getCardReqTypeWithMessage:(id)arg1 isClick:(BOOL)arg2;
- (void)fetchAndPreloadBulkBuyCardJumpInfo:(id)arg1 successCallback:(id /* block */)arg2 failedCallback:(id /* block */)arg3;
- (void)executeRequestBulkBuyCard:(id)arg1;
- (BOOL)ecsHandleOpenBulkBuyCard:(id)arg1 withContact:(id)arg2 viewController:(id)arg3;
- (id)getValidBulkBuyCardJumpInfoFromCache:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleFetchProductResponse:(id)arg1;
- (void)handleFinishProductTask:(id)arg1;
- (void)handleFetchShopCardResponse:(id)arg1;
- (void)handleFinishShopTask:(id)arg1;
- (void)handleFetchWaAppCardResponse:(id)arg1;
- (void)handleFinishWaAppCardTask:(id)arg1;
- (void)handleFetchCardEcsJumpInfoResponse:(id)arg1;
- (void)handleFinishCardJumpInfoTask:(id)arg1 response:(id)arg2 success:(BOOL)arg3;
- (void)fetchAndPreloadEcsCardIfNeed:(id)arg1 successCallback:(id /* block */)arg2 failedCallback:(id /* block */)arg3;
- (void)requestCardEcsJumpInfo:(id)arg1 successCallback:(id /* block */)arg2 failedCallback:(id /* block */)arg3;
- (void)requestCardEcsJumpInfo:(id)arg1 reqType:(unsigned int)arg2 successCallback:(id /* block */)arg3 failedCallback:(id /* block */)arg4;
- (void)executeRequestCardJumpInfo:(id)arg1;
- (id)parseEcsJumpInfoFromBase64:(id)arg1;
- (id)parseXmlEmbeddedJumpInfo:(id)arg1;
- (BOOL)checkAndHandleOpenEcsCard:(id)arg1 withContact:(id)arg2 viewController:(id)arg3;
- (BOOL)performCardJump:(id)arg1 withMessage:(id)arg2 withContact:(id)arg3 viewController:(id)arg4 shouldPreload:(BOOL)arg5 clickTimestamp:(unsigned long long)arg6;
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
