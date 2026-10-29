@interface SWMidasOriginalPurchaseContent : NSObject <_TtP11SwiftyMidas22SWMidasPurchaseContent_>
{
    void * appleProductID; // +0x8
    long long appleProductType; // +0x18
    BOOL isGameCoinMode; // +0x20
    long long quantity; // +0x28
    void * saveValue; // +0x30
    void * drmInfo; // +0x40
    void * varItem; // +0x50
    BOOL shouldValidatePromotionalOfferInfo; // +0x60
}
- (id)appleProductID;
- (long long)appleProductType;
- (BOOL)isGameCoinMode;
- (long long)quantity;
- (id)saveValue;
- (id)drmInfo;
- (id)varItem;
- (BOOL)shouldValidatePromotionalOfferInfo;
- (BOOL)validate;
- (id)initWithAppleProductID:(id)arg1 appleProductType:(long long)arg2 isGameCoinMode:(BOOL)arg3 quantity:(long long)arg4 saveValue:(id)arg5 drmInfo:(id)arg6 varItem:(id)arg7 shouldValidatePromotionalOfferInfo:(BOOL)arg8;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
