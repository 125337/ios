@interface DBContactChatRoomToolWeApp : NSObject <WCTTableCoding>
{
    NSString * _userName; // +0x8
    NSString * _appUserName; // +0x10
    NSString * _appPagePath; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_userName;
+ (const void *)appUserName;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_appUserName;
+ (const void *)appPagePath;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_appPagePath;
+ (void)__wcdb_column_constraint_33:(void *)arg1;
+ (void)__wcdb_column_constraint_34:(void *)arg1;
+ (void)__wcdb_table_constraint_35:(void *)arg1;
+ (void)__wcdb_table_constraint_36:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)appUserName;
- (void)setAppUserName:(id)arg1;
- (id)appPagePath;
- (void)setAppPagePath:(id)arg1;
- (void).cxx_destruct;
@end

