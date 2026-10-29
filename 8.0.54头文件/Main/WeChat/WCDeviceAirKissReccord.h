@interface WCDeviceAirKissReccord : NSObject <WCTTableCoding>
{
    unsigned int IntRes1; // +0x8
    unsigned int IntRes2; // +0xc
    NSString * m_key; // +0x10
    NSString * m_data; // +0x18
    NSString * StrRes1; // +0x20
    NSString * StrRes2; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_key;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_m_key;
+ (const void *)m_data;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_m_data;
+ (const void *)IntRes1;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_IntRes1;
+ (const void *)IntRes2;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_IntRes2;
+ (const void *)StrRes1;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_StrRes1;
+ (const void *)StrRes2;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_StrRes2;
- (id)m_key;
- (void)setM_key:(id)arg1;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (unsigned int)IntRes1;
- (void)setIntRes1:(unsigned int)arg1;
- (unsigned int)IntRes2;
- (void)setIntRes2:(unsigned int)arg1;
- (id)StrRes1;
- (void)setStrRes1:(id)arg1;
- (id)StrRes2;
- (void)setStrRes2:(id)arg1;
- (void).cxx_destruct;
@end

