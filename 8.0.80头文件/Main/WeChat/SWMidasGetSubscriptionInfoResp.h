@interface SWMidasGetSubscriptionInfoResp : NSObject
{
    SWMidasGetSubscriptionInfoRespItem * allItems; // +0x8
    SWMidasGetSubscriptionInfoRespItem * filteredItems; // +0x10
    void * skuFilterInfo; // +0x18
}
- (id)allItems;
- (id)filteredItems;
- (id)skuFilterInfo;
- (id)toJSON;
- (id)toGZipHexJSON;
- (id)init;
- (void).cxx_destruct;
@end
