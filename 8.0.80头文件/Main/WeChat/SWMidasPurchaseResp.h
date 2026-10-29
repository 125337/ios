@interface SWMidasPurchaseResp : NSObject
{
    SWMidasUser * user; // +0x8
    id <_TtP11SwiftyMidas22SWMidasPurchaseContent_> content; // +0x10
    void * resultMsg; // +0x18
    void * appleProductID; // +0x28
    void * billID; // +0x38
    void * portalSerialID; // +0x48
    SWMidasPurchaseOption * purchaseOption; // +0x58
}
- (id)user;
- (id)content;
- (id)resultMsg;
- (id)appleProductID;
- (id)billID;
- (id)portalSerialID;
- (id)purchaseOption;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
