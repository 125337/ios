@interface WCPayIdKeyRegularReporter : NSObject
{
    unsigned int _m_idBase; // +0x8
    unsigned int _m_KeyBase; // +0xc
    NSString * _m_logKey; // +0x10
    unsigned long long _m_timeInternal; // +0x18
    unsigned long long _m_startTime; // +0x20
}
- (id)init;
- (void)reportCount;
- (void)reportSuccessCount;
- (void)reportFailedCount;
- (void)reportConsumeZone;
- (void)uploadIdKeyWithKey:(unsigned int)arg1;
- (id)m_logKey;
- (void)setM_logKey:(id)arg1;
- (unsigned int)m_idBase;
- (void)setM_idBase:(unsigned int)arg1;
- (unsigned int)m_KeyBase;
- (void)setM_KeyBase:(unsigned int)arg1;
- (unsigned long long)m_timeInternal;
- (void)setM_timeInternal:(unsigned long long)arg1;
- (unsigned long long)m_startTime;
- (void)setM_startTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

