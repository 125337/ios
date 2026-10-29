@interface MMSessionSetting : NSObject <NSCoding>
{
    long long m_sessionImportTime; // +0x8
    unsigned int m_sessionVersion; // +0x10
    unsigned int m_sessionFailCount; // +0x14
    unsigned int m_sessionCount; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)m_sessionImportTime;
- (void)setM_sessionImportTime:(long long)arg1;
- (unsigned int)m_sessionFailCount;
- (void)setM_sessionFailCount:(unsigned int)arg1;
- (unsigned int)m_sessionVersion;
- (void)setM_sessionVersion:(unsigned int)arg1;
- (unsigned int)m_sessionCount;
- (void)setM_sessionCount:(unsigned int)arg1;
@end

