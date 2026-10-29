@interface FTSWeShopExtItem : NSObject <WCTTableCoding>
{
    unsigned int _bizId; // +0x8
    long long _lastSyncUpdateSeq; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)bizId;
+ (const void *)__wcdb_synthesize_175:(void *)arg1;
+ (id)swift_bizId;
+ (const void *)lastSyncUpdateSeq;
+ (const void *)__wcdb_synthesize_176:(void *)arg1;
+ (id)swift_lastSyncUpdateSeq;
+ (void)__wcdb_column_constraint_177:(void *)arg1;
- (unsigned int)bizId;
- (void)setBizId:(unsigned int)arg1;
- (long long)lastSyncUpdateSeq;
- (void)setLastSyncUpdateSeq:(long long)arg1;
@end
