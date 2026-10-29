@interface FTSAiHistoryMsgSearchItem : NSObject <WCTTableCoding>
{
    NSString * _query; // +0x8
    NSString * _boxFTS; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)query;
+ (const void *)__wcdb_synthesize_194:(void *)arg1;
+ (id)swift_query;
+ (const void *)boxFTS;
+ (const void *)__wcdb_synthesize_195:(void *)arg1;
+ (id)swift_boxFTS;
+ (void)__wcdb_virtual_table_196:(void *)arg1;
+ (void)__wcdb_virtual_table_197:(void *)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)boxFTS;
- (void)setBoxFTS:(id)arg1;
- (void).cxx_destruct;
@end
