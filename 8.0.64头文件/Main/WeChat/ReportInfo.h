@interface ReportInfo : NSObject <PBCoding>
{
    unsigned int _m_uiSeq; // +0x8
    unsigned long long _m_lastSyncTime; // +0x10
}
+ (void)PBArrayAdd_m_uiSeq;
+ (void)PBArrayAdd_m_lastSyncTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned int)m_uiSeq;
- (void)setM_uiSeq:(unsigned int)arg1;
- (unsigned long long)m_lastSyncTime;
- (void)setM_lastSyncTime:(unsigned long long)arg1;
@end
