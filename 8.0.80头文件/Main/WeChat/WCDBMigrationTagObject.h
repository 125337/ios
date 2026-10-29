@interface WCDBMigrationTagObject : NSObject <WCTTableCoding>
{
    NSString * m_sessionName; // +0x8
    NSString * m_fileName; // +0x10
    long long m_startTime; // +0x18
    long long m_endTime; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_sessionName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_sessionName;
+ (const void *)m_fileName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_m_fileName;
+ (const void *)m_startTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_m_startTime;
+ (const void *)m_endTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_m_endTime;
- (id)description;
- (id)m_sessionName;
- (void)setM_sessionName:(id)arg1;
- (id)m_fileName;
- (void)setM_fileName:(id)arg1;
- (long long)m_startTime;
- (void)setM_startTime:(long long)arg1;
- (long long)m_endTime;
- (void)setM_endTime:(long long)arg1;
- (void).cxx_destruct;
@end
