@interface WCDBSessionLastTimeObject : NSObject <WCTTableCoding>
{
    NSString * m_sessionName; // +0x8
    unsigned int m_sessionLastTime; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_sessionName;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_m_sessionName;
+ (const void *)m_sessionLastTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_m_sessionLastTime;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
- (id)description;
- (id)m_sessionName;
- (void)setM_sessionName:(id)arg1;
- (unsigned int)m_sessionLastTime;
- (void)setM_sessionLastTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
