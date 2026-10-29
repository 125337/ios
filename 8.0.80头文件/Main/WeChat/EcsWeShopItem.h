@interface EcsWeShopItem : NSObject <_TtP6WeChat11FTSRowModel_, WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _shopStatus; // +0xc
    unsigned int _shopTagType; // +0x10
    long long lastInsertedRowID; // +0x18
    long long _localId; // +0x20
    NSString * _shopAppId; // +0x28
    NSString * _shopName; // +0x30
    NSString * _shopLogoUrl; // +0x38
    NSString * _shopRIconLightUrl; // +0x40
    NSString * _shopRIconDarkUrl; // +0x48
    unsigned long long _shopTagModifyTime; // +0x50
    NSData * _jumpInfoData; // +0x58
    long long _updateSeq; // +0x60
}
+ (id)shopAppIdFromTophitsKey:(id)arg1;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localId;
+ (const void *)shopAppId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_shopAppId;
+ (const void *)shopName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_shopName;
+ (const void *)shopLogoUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_shopLogoUrl;
+ (const void *)shopRIconLightUrl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_shopRIconLightUrl;
+ (const void *)shopRIconDarkUrl;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_shopRIconDarkUrl;
+ (const void *)shopStatus;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_shopStatus;
+ (const void *)shopTagType;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_shopTagType;
+ (const void *)shopTagModifyTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_shopTagModifyTime;
+ (const void *)jumpInfoData;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_jumpInfoData;
+ (const void *)updateSeq;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_updateSeq;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_index_14:(void *)arg1;
- (id)userName;
- (id)diffIdentifier;
- (id)tophitsKey;
- (BOOL)canDisplay;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (long long)localId;
- (void)setLocalId:(long long)arg1;
- (id)shopAppId;
- (void)setShopAppId:(id)arg1;
- (id)shopName;
- (void)setShopName:(id)arg1;
- (id)shopLogoUrl;
- (void)setShopLogoUrl:(id)arg1;
- (id)shopRIconLightUrl;
- (void)setShopRIconLightUrl:(id)arg1;
- (id)shopRIconDarkUrl;
- (void)setShopRIconDarkUrl:(id)arg1;
- (unsigned int)shopStatus;
- (void)setShopStatus:(unsigned int)arg1;
- (unsigned int)shopTagType;
- (void)setShopTagType:(unsigned int)arg1;
- (unsigned long long)shopTagModifyTime;
- (void)setShopTagModifyTime:(unsigned long long)arg1;
- (id)jumpInfoData;
- (void)setJumpInfoData:(id)arg1;
- (long long)updateSeq;
- (void)setUpdateSeq:(long long)arg1;
- (void).cxx_destruct;
@end
