@interface DBContactTag : NSObject <WCTTableCoding>
{
    unsigned int _uiID; // +0x8
    unsigned int _tagIndex; // +0xc
    NSString * _nsName; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)uiID;
+ (const void *)__wcdb_synthesize_71:(void *)arg1;
+ (id)swift_uiID;
+ (const void *)nsName;
+ (const void *)__wcdb_synthesize_72:(void *)arg1;
+ (id)swift_nsName;
+ (const void *)tagIndex;
+ (const void *)__wcdb_synthesize_73:(void *)arg1;
+ (id)swift_tagIndex;
+ (void)__wcdb_column_constraint_74:(void *)arg1;
+ (void)__wcdb_column_constraint_75:(void *)arg1;
+ (void)__wcdb_index_76:(void *)arg1;
- (unsigned int)uiID;
- (void)setUiID:(unsigned int)arg1;
- (id)nsName;
- (void)setNsName:(id)arg1;
- (unsigned int)tagIndex;
- (void)setTagIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
