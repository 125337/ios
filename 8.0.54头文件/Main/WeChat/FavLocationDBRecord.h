@interface FavLocationDBRecord : NSObject <WCTTableCoding>
{
    int _m_latitude; // +0x8
    int _m_longitude; // +0xc
    unsigned int _m_updatetime; // +0x10
    NSString * _m_language; // +0x18
    NSString * _m_address; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_latitude;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_latitude;
+ (const void *)m_longitude;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_longitude;
+ (const void *)m_language;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_language;
+ (const void *)m_address;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_m_address;
+ (const void *)m_updatetime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_m_updatetime;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
- (int)m_latitude;
- (void)setM_latitude:(int)arg1;
- (int)m_longitude;
- (void)setM_longitude:(int)arg1;
- (id)m_language;
- (void)setM_language:(id)arg1;
- (id)m_address;
- (void)setM_address:(id)arg1;
- (unsigned int)m_updatetime;
- (void)setM_updatetime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

