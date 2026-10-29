@interface FTSWeShopRowidIndexItem : NSObject <WCTTableCoding>
{
    long long _localId; // +0x8
    long long _indexRowid; // +0x10
    long long _indexRowidForPinyin; // +0x18
    long long _updateTime; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_178:(void *)arg1;
+ (id)swift_localId;
+ (const void *)indexRowid;
+ (const void *)__wcdb_synthesize_179:(void *)arg1;
+ (id)swift_indexRowid;
+ (const void *)indexRowidForPinyin;
+ (const void *)__wcdb_synthesize_180:(void *)arg1;
+ (id)swift_indexRowidForPinyin;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_181:(void *)arg1;
+ (id)swift_updateTime;
+ (void)__wcdb_column_constraint_182:(void *)arg1;
- (long long)localId;
- (void)setLocalId:(long long)arg1;
- (long long)indexRowid;
- (void)setIndexRowid:(long long)arg1;
- (long long)indexRowidForPinyin;
- (void)setIndexRowidForPinyin:(long long)arg1;
- (long long)updateTime;
- (void)setUpdateTime:(long long)arg1;
@end
