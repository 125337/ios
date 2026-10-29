@interface SWMidasGetSubscriptionInfoRespItem : NSObject
{
    void * iapItems; // +0x8
    void * acaItems; // +0x10
}
- (id)iapItems;
- (id)acaItems;
- (id)toJSON;
- (id)toGZipHexJSON;
- (id)init;
- (void).cxx_destruct;
@end
