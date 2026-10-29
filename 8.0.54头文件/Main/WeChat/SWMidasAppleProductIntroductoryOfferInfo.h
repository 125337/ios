@interface SWMidasAppleProductIntroductoryOfferInfo : NSObject
{
     originalPrice; // +0x8
     displayPrice; // +0x18
     periodUnit; // +0x28
     periodValue; // +0x30
     periodCount; // +0x38
     paymentMode; // +0x40
     isEligibleForOffer; // +0x48
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

