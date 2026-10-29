@interface SWMidasAppleProductInfo : NSObject
{
    void * id; // +0x8
    void * displayPrice; // +0x18
    void * displayName; // +0x28
    void * productDescription; // +0x38
    void * isFamilyShareable; // +0x48
    void * currencyCode; // +0x58
    void * originalPrice; // +0x68
    BOOL isFromStoreKit2; // +0x78
    void * subscriptionGroupID; // +0x80
    SWMidasAppleProductIntroductoryOfferInfo * introductoryOfferInfo; // +0x90
    void * promotionalOfferInfos; // +0x98
}
- (id)identifier;
- (id)displayPrice;
- (id)displayName;
- (id)productDescription;
- (id)isFamilyShareable;
- (void)setIsFamilyShareable:(id)arg1;
- (id)currencyCode;
- (id)originalPrice;
- (BOOL)isFromStoreKit2;
- (id)subscriptionGroupID;
- (id)introductoryOfferInfo;
- (void)setIntroductoryOfferInfo:(id)arg1;
- (id)promotionalOfferInfos;
- (void)setPromotionalOfferInfos:(id)arg1;
- (id)toJSON;
- (long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
