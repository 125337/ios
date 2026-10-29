@interface DBContactTagRelation : NSObject <WCTTableCoding>
{
    unsigned int _uiID; // +0x8
    NSString * _userName; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)uiID;
+ (const void *)__wcdb_synthesize_77:(void *)arg1;
+ (id)swift_uiID;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_78:(void *)arg1;
+ (id)swift_userName;
+ (void)__wcdb_index_79:(void *)arg1;
+ (void)__wcdb_index_80:(void *)arg1;
+ (void)__wcdb_table_constraint_81:(void *)arg1;
+ (void)__wcdb_table_constraint_82:(void *)arg1;
- (unsigned int)uiID;
- (void)setUiID:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void).cxx_destruct;
@end
