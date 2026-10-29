@interface WCDBCover : NSObject <WCTTableCoding>
{
    int _codingType; // +0x8
    NSString * _username; // +0x10
    NSString * _tid; // +0x18
    NSData * _buffer; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_61:(void *)arg1;
+ (id)swift_username;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_62:(void *)arg1;
+ (id)swift_tid;
+ (const void *)buffer;
+ (const void *)__wcdb_synthesize_63:(void *)arg1;
+ (id)swift_buffer;
+ (const void *)codingType;
+ (const void *)__wcdb_synthesize_64:(void *)arg1;
+ (id)swift_codingType;
+ (void)__wcdb_column_constraint_65:(void *)arg1;
+ (void)__wcdb_column_constraint_66:(void *)arg1;
+ (void)__wcdb_column_constraint_67:(void *)arg1;
+ (void)__wcdb_column_constraint_68:(void *)arg1;
+ (void)__wcdb_column_constraint_69:(void *)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (int)codingType;
- (void)setCodingType:(int)arg1;
- (void).cxx_destruct;
@end

