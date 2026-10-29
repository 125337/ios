@interface SWMidasGetSubscriptionProductStatusResp : NSObject
{
     inSubscribedProductIDs; // +0x8
     notPurchasedProductIDs; // +0x10
     recentExpiredOrRefundedProductIDs; // +0x18
}
- (id)inSubscribedProductIDs;
- (id)notPurchasedProductIDs;
- (id)recentExpiredOrRefundedProductIDs;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end

