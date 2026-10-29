@interface WCTMaster : NSObject
{
    int _rootpage; // +0x8
    NSString * _type; // +0x10
    NSString * _name; // +0x18
    NSString * _tblName; // +0x20
    NSString * _sql; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_type;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_name;
+ (const void *)tblName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_tblName;
+ (const void *)rootpage;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_rootpage;
+ (const void *)sql;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_sql;
+ (id)tableName;
- (id)type;
- (void)setType:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)tblName;
- (void)setTblName:(id)arg1;
- (int)rootpage;
- (void)setRootpage:(int)arg1;
- (id)sql;
- (void)setSql:(id)arg1;
- (void).cxx_destruct;
@end

