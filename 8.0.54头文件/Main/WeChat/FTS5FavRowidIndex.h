@interface FTS5FavRowidIndex : NSObject <WCTTableCoding>
{
    unsigned int _localId; // +0x8
    unsigned int _updateSeq; // +0xc
    int _type; // +0x10
    int _subTypes; // +0x14
    unsigned int _updateTime; // +0x18
    long long _indexRowid; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_54:(void *)arg1;
+ (id)swift_localId;
+ (const void *)updateSeq;
+ (const void *)__wcdb_synthesize_55:(void *)arg1;
+ (id)swift_updateSeq;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (id)swift_type;
+ (const void *)subTypes;
+ (const void *)__wcdb_synthesize_57:(void *)arg1;
+ (id)swift_subTypes;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_58:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)indexRowid;
+ (const void *)__wcdb_synthesize_59:(void *)arg1;
+ (id)swift_indexRowid;
+ (void)__wcdb_column_constraint_60:(void *)arg1;
+ (void)__wcdb_index_61:(void *)arg1;
+ (void)__wcdb_index_62:(void *)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (unsigned int)updateSeq;
- (void)setUpdateSeq:(unsigned int)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)subTypes;
- (void)setSubTypes:(int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (long long)indexRowid;
- (void)setIndexRowid:(long long)arg1;
@end

