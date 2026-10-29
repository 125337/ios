@interface WCFinderSearchRecord : NSObject <WCTTableCoding>
{
    unsigned int _searchTime; // +0x8
    NSString * _searchContent; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)searchContent;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_searchContent;
+ (const void *)searchTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_searchTime;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (void)__wcdb_index_3:(void *)arg1;
- (id)searchContent;
- (void)setSearchContent:(id)arg1;
- (unsigned int)searchTime;
- (void)setSearchTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
