@interface SWMidasGetSubscriptionProductStatusResp : NSObject
{
    void * inSubscribedProductIDs; // +0x8
    void * notPurchasedProductIDs; // +0x10
    void * recentExpiredOrRefundedProductIDs; // +0x18
}
- (id)inSubscribedProductIDs;
- (id)notPurchasedProductIDs;
- (id)recentExpiredOrRefundedProductIDs;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
