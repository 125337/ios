@interface SWMidasOriginalPurchaseContent : NSObject <_TtP11SwiftyMidas22SWMidasPurchaseContent_>
{
     appleProductID; // +0x8
     appleProductType; // +0x18
     isGameCoinMode; // +0x20
     quantity; // +0x28
     saveValue; // +0x30
     drmInfo; // +0x40
     varItem; // +0x50
}
- (id)appleProductID;
- (long long)appleProductType;
- (BOOL)isGameCoinMode;
- (long long)quantity;
- (id)saveValue;
- (id)drmInfo;
- (id)varItem;
- (BOOL)validate;
- (id)initWithAppleProductID:(id)arg1 appleProductType:(long long)arg2 isGameCoinMode:(BOOL)arg3 quantity:(long long)arg4 saveValue:(id)arg5 drmInfo:(id)arg6 varItem:(id)arg7;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
