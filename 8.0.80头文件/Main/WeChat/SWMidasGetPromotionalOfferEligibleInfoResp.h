@interface SWMidasGetPromotionalOfferEligibleInfoResp : NSObject
{
    BOOL isEligibleForPromotionalOffer; // +0x8
    void * purchasedAutoSubscriptionProductIDs; // +0x10
}
- (BOOL)isEligibleForPromotionalOffer;
- (id)purchasedAutoSubscriptionProductIDs;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
