@interface WCFinderLiveShopWindowShareModel : MMObject <WCTTableCoding>
{
    NSString * _finderUsername; // +0x8
    NSString * _commodityInStockCount; // +0x10
    NSString * _shareItemXML; // +0x18
    unsigned long long _date; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)finderUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_finderUsername;
+ (const void *)commodityInStockCount;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_commodityInStockCount;
+ (const void *)shareItemXML;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_shareItemXML;
+ (const void *)date;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_date;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)commodityInStockCount;
- (void)setCommodityInStockCount:(id)arg1;
- (id)shareItemXML;
- (void)setShareItemXML:(id)arg1;
- (unsigned long long)date;
- (void)setDate:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
