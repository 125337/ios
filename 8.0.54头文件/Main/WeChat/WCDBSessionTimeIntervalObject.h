@interface WCDBSessionTimeIntervalObject : NSObject <WCTTableCoding>
{
    NSString * m_sessionName; // +0x8
    unsigned int m_msgBeginTime; // +0x10
    unsigned int m_msgEndTime; // +0x14
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_sessionName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_m_sessionName;
+ (const void *)m_msgBeginTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_m_msgBeginTime;
+ (const void *)m_msgEndTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_m_msgEndTime;
- (id)description;
- (id)m_sessionName;
- (void)setM_sessionName:(id)arg1;
- (unsigned int)m_msgBeginTime;
- (void)setM_msgBeginTime:(unsigned int)arg1;
- (unsigned int)m_msgEndTime;
- (void)setM_msgEndTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

