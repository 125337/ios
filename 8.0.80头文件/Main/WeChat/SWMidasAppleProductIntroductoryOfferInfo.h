@interface SWMidasAppleProductIntroductoryOfferInfo : NSObject
{
    void * originalPrice; // +0x8
    void * displayPrice; // +0x18
    long long periodUnit; // +0x28
    long long periodValue; // +0x30
    long long periodCount; // +0x38
    long long paymentMode; // +0x40
    void * isEligibleForOffer; // +0x48
}
- (id)originalPrice;
- (id)displayPrice;
- (long long)periodUnit;
- (long long)periodValue;
- (long long)periodCount;
- (long long)paymentMode;
- (id)isEligibleForOffer;
- (void)setIsEligibleForOffer:(id)arg1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
