@interface FTSAiHistoryMsgStatusItem : NSObject <WCTTableCoding>
{
    BOOL _indexed; // +0x8
    NSString * _searchId; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)searchId;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_searchId;
+ (const void *)indexed;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_indexed;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (BOOL)indexed;
- (void)setIndexed:(BOOL)arg1;
- (void).cxx_destruct;
@end
