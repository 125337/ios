@interface WrapMemoryRecordData : MMObject
{
    unsigned long long m_caseID; // +0x8
    long long m_curMemory; // +0x10
}
+ (id)recordDataWithMemory:(long long)arg1 onCase:(unsigned long long)arg2;
- (id)initMemory:(long long)arg1 onCase:(unsigned long long)arg2;
- (unsigned long long)m_caseID;
- (void)setM_caseID:(unsigned long long)arg1;
- (long long)m_curMemory;
- (void)setM_curMemory:(long long)arg1;
@end

