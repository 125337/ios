@interface WCFinderLiveRouterHelper : WCFinderRouterHelper
+ (void)openProductWithParam:(id)arg1;
+ (void)addHotSaleInfosOfProductID:(unsigned long long)arg1 pageType:(unsigned long long)arg2 taskID:(id)arg3 toWAAppOpenParameter:(id)arg4 handleWrapper:(id)arg5;
+ (id)weAppReplayWidgetParameterWithGoods:(id)arg1 taskID:(id)arg2;
+ (BOOL)autoOpenFinderLiveFrom:(id)arg1 openParams:(id)arg2 extraParams:(id)arg3;
+ (id)defaultJumpInfoModel;
+ (void)openShopCard:(id)arg1 query:(id)arg2 entranceGMsgID:(id)arg3 from:(id)arg4;
@end

