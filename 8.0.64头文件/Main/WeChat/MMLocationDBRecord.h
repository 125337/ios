@interface MMLocationDBRecord : NSObject <WCTTableCoding>
{
    int _m_latitude; // +0x8
    int _m_longitude; // +0xc
    int _m_type; // +0x10
    NSString * _m_address; // +0x18
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
+ (const void *)m_address;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_address;
+ (const void *)m_type;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_m_type;
- (int)m_latitude;
- (void)setM_latitude:(int)arg1;
- (int)m_longitude;
- (void)setM_longitude:(int)arg1;
- (id)m_address;
- (void)setM_address:(id)arg1;
- (int)m_type;
- (void)setM_type:(int)arg1;
- (void).cxx_destruct;
@end
