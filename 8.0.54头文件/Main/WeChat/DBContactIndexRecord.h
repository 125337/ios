@interface DBContactIndexRecord : NSObject <WCTTableCoding>
{
    int _type; // +0x8
    NSString * _maxIndexedUserName; // +0x10
    NSString * _unIndexedUsernames; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_54:(void *)arg1;
+ (id)swift_type;
+ (const void *)maxIndexedUserName;
+ (const void *)__wcdb_synthesize_55:(void *)arg1;
+ (id)swift_maxIndexedUserName;
+ (const void *)unIndexedUsernames;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (id)swift_unIndexedUsernames;
+ (void)__wcdb_column_constraint_57:(void *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)maxIndexedUserName;
- (void)setMaxIndexedUserName:(id)arg1;
- (id)unIndexedUsernames;
- (void)setUnIndexedUsernames:(id)arg1;
- (void).cxx_destruct;
@end

