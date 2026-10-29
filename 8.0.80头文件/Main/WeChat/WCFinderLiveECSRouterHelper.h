@interface WCFinderLiveECSRouterHelper : NSObject
+ (void)openCouponListWithTaskID:(id)arg1;
+ (id)firstWantBuyEcsJumpInfoWithFinderJumpInfo:(id)arg1 ecsJumpInfo:(id)arg2;
+ (void)openFirstWantBuyPageWithResponse:(id)arg1 source:(int)arg2 fromSourceViewController:(id)arg3;
+ (void)openProductWithParam:(id)arg1;
+ (void)openProductWithParam:(id)arg1 fromSourceViewController:(id)arg2;
+ (void)addHotSaleInfosOfProductID:(unsigned long long)arg1 pageType:(unsigned long long)arg2 taskID:(id)arg3 toWAAppOpenParameter:(id)arg4 handleWrapper:(id)arg5;
+ (id)weAppReplayWidgetParameterWithGoods:(id)arg1 taskID:(id)arg2;
+ (void)attachLiveCommonHandlersToWrapper:(id)arg1 appId:(id)arg2;
+ (BOOL)openProductUseECInterfaceWithParam:(id)arg1 fromSourceViewController:(id)arg2;
+ (void)jumpFromVC:(id)arg1 withFinderJumpInfo:(id)arg2;
+ (void)jumpFromVC:(id)arg1 withInfo:(id)arg2 params:(id)arg3;
+ (void)openShopCard:(id)arg1 query:(id)arg2 entranceGMsgID:(id)arg3 scene:(unsigned long long)arg4 sceneNode:(id)arg5 wrapViewWithSafeArea:(BOOL)arg6 from:(id)arg7;
@end
