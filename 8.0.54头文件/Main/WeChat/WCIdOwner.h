@interface WCIdOwner : NSObject <WCTTableCoding>
{
    NSString * _Id; // +0x8
    NSString * _username; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)Id;
+ (const void *)__wcdb_synthesize_74:(void *)arg1;
+ (id)swift_Id;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_75:(void *)arg1;
+ (id)swift_username;
+ (void)__wcdb_column_constraint_76:(void *)arg1;
+ (void)__wcdb_column_constraint_77:(void *)arg1;
+ (void)__wcdb_column_constraint_78:(void *)arg1;
- (id)Id;
- (void)setId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end

