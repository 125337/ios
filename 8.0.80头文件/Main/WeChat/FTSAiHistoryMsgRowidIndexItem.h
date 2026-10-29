@interface FTSAiHistoryMsgRowidIndexItem : NSObject <WCTTableCoding>
{
    NSString * _searchId; // +0x8
    long long _indexRowid; // +0x10
    long long _indexRowidForPinyin; // +0x18
    long long _updateTime; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)searchId;
+ (const void *)__wcdb_synthesize_189:(void *)arg1;
+ (id)swift_searchId;
+ (const void *)indexRowid;
+ (const void *)__wcdb_synthesize_190:(void *)arg1;
+ (id)swift_indexRowid;
+ (const void *)indexRowidForPinyin;
+ (const void *)__wcdb_synthesize_191:(void *)arg1;
+ (id)swift_indexRowidForPinyin;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_192:(void *)arg1;
+ (id)swift_updateTime;
+ (void)__wcdb_column_constraint_193:(void *)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (long long)indexRowid;
- (void)setIndexRowid:(long long)arg1;
- (long long)indexRowidForPinyin;
- (void)setIndexRowidForPinyin:(long long)arg1;
- (long long)updateTime;
- (void)setUpdateTime:(long long)arg1;
- (void).cxx_destruct;
@end
