@interface SWMidasPurchaseResp : NSObject
{
     user; // +0x8
     content; // +0x10
     resultMsg; // +0x18
     appleProductID; // +0x28
     billID; // +0x38
     portalSerialID; // +0x48
     purchaseOption; // +0x58
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
