@interface SWMidasGetSubscriptionInfoItem : NSObject
{
    void * productID; // +0x8
    void * originalTransactionID; // +0x18
    void * latestTransactionID; // +0x28
    void * expiresDate; // +0x38
    void * webOrderLineItemID; // +0x48
    void * appAccountToken; // +0x58
    void * revocationDate; // +0x68
    void * acaSkUs; // +0x78
}
- (id)productID;
- (id)originalTransactionID;
- (id)latestTransactionID;
- (id)expiresDate;
- (id)webOrderLineItemID;
- (id)appAccountToken;
- (id)revocationDate;
- (id)acaSkUs;
- (id)toJSON;
- (id)init;
- (void).cxx_destruct;
@end
