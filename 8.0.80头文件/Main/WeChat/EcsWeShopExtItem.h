@interface EcsWeShopExtItem : NSObject <WCTTableCoding>
{
    unsigned int _bizId; // +0x8
    NSString * _shopHistoryNextKey; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)bizId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_bizId;
+ (const void *)shopHistoryNextKey;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_shopHistoryNextKey;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
- (unsigned int)bizId;
- (void)setBizId:(unsigned int)arg1;
- (id)shopHistoryNextKey;
- (void)setShopHistoryNextKey:(id)arg1;
- (void).cxx_destruct;
@end
