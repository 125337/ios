@interface WCDBMigrationMsgIDObject : NSObject <WCTTableCoding>
{
    NSString * m_fileName; // +0x8
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_fileName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_fileName;
+ (void)__wcdb_column_constraint_1:(void *)arg1;
- (id)description;
- (id)m_fileName;
- (void)setM_fileName:(id)arg1;
- (void).cxx_destruct;
@end
