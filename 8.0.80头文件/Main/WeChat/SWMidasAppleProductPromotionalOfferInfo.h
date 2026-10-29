@interface SWMidasAppleProductPromotionalOfferInfo : NSObject
{
    void * originalPrice; // +0x8
    void * displayPrice; // +0x18
    long long periodUnit; // +0x28
    long long periodValue; // +0x30
    long long periodCount; // +0x38
    long long paymentMode; // +0x40
    void * promotionalID; // +0x48
}
- (id)originalPrice;
- (id)displayPrice;
- (long long)periodUnit;
- (long long)periodValue;
- (long long)periodCount;
- (long long)paymentMode;
- (id)promotionalID;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
