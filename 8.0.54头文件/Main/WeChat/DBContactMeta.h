@interface DBContactMeta : NSObject <WCTTableCoding>
{
    unsigned int _lastUpdate; // +0x8
    unsigned int _flag; // +0xc
    unsigned int _intCon2; // +0x10
    unsigned int _intCon3; // +0x14
    NSString * _username; // +0x18
    NSString * _strCon1; // +0x20
    NSString * _strCon2; // +0x28
    NSString * _strCon3; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (id)swift_username;
+ (const void *)lastUpdate;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (id)swift_lastUpdate;
+ (const void *)flag;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (id)swift_flag;
+ (const void *)intCon2;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (id)swift_intCon2;
+ (const void *)intCon3;
+ (const void *)__wcdb_synthesize_44:(void *)arg1;
+ (id)swift_intCon3;
+ (const void *)strCon1;
+ (const void *)__wcdb_synthesize_45:(void *)arg1;
+ (id)swift_strCon1;
+ (const void *)strCon2;
+ (const void *)__wcdb_synthesize_46:(void *)arg1;
+ (id)swift_strCon2;
+ (const void *)strCon3;
+ (const void *)__wcdb_synthesize_47:(void *)arg1;
+ (id)swift_strCon3;
+ (void)__wcdb_column_constraint_48:(void *)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)lastUpdate;
- (void)setLastUpdate:(unsigned int)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (unsigned int)intCon2;
- (void)setIntCon2:(unsigned int)arg1;
- (unsigned int)intCon3;
- (void)setIntCon3:(unsigned int)arg1;
- (id)strCon1;
- (void)setStrCon1:(id)arg1;
- (id)strCon2;
- (void)setStrCon2:(id)arg1;
- (id)strCon3;
- (void)setStrCon3:(id)arg1;
- (void).cxx_destruct;
@end

