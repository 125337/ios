@interface MyWCDataItem : NSObject <WCTTableCoding>
{
    int _m_codingType; // +0x8
    NSString * _m_maID; // +0x10
    NSData * _m_maBuffer; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_maID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_maID;
+ (const void *)m_maBuffer;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_maBuffer;
+ (const void *)m_codingType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_codingType;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
- (id)m_maID;
- (void)setM_maID:(id)arg1;
- (id)m_maBuffer;
- (void)setM_maBuffer:(id)arg1;
- (int)m_codingType;
- (void)setM_codingType:(int)arg1;
- (void).cxx_destruct;
@end
