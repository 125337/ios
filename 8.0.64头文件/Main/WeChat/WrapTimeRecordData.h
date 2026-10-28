@interface WrapTimeRecordData : MMObject
{
    unsigned long long m_caseID; // +0x8
    timeval m_msCurTime; // +0x10
}
+ (id)recordDataWithTime:(timeval)arg1 onCase:(unsigned long long)arg2;
- (id)initWithTime:(timeval)arg1 onCase:(unsigned long long)arg2;
- (unsigned long long)m_caseID;
- (void)setM_caseID:(unsigned long long)arg1;
- (timeval)m_msCurTime;
- (void)setM_msCurTime:(timeval)arg1;
@end
