@interface WCPayHandleWCPayURLResult : NSObject
{
    NSString * nsOrderID; // +0x8
    NSString * nsProductsID; // +0x10
    NSString * nsUUID; // +0x18
    NSString * nsAppID; // +0x20
    NSString * nsAppSource; // +0x28
}
- (id)nsProductsID;
- (void)setNsProductsID:(id)arg1;
- (id)nsOrderID;
- (void)setNsOrderID:(id)arg1;
- (id)nsAppID;
- (void)setNsAppID:(id)arg1;
- (id)nsAppSource;
- (void)setNsAppSource:(id)arg1;
- (id)nsUUID;
- (void)setNsUUID:(id)arg1;
- (void).cxx_destruct;
@end
