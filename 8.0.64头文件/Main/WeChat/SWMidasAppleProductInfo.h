@interface SWMidasAppleProductInfo : NSObject
{
     id; // +0x8
     displayPrice; // +0x18
     displayName; // +0x28
     productDescription; // +0x38
     isFamilyShareable; // +0x48
     currencyCode; // +0x58
     originalPrice; // +0x68
     isFromStoreKit2; // +0x78
     subscriptionGroupID; // +0x80
     introductoryOfferInfo; // +0x90
     promotionalOfferInfos; // +0x98
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
