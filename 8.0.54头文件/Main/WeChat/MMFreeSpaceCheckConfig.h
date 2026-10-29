@interface MMFreeSpaceCheckConfig : NSObject <PBCoding>
{
    unsigned int _m_lastLowAlertTime; // +0x8
    unsigned int _m_lastLowerAlertTime; // +0xc
    unsigned int _m_lastLowestAlertTime; // +0x10
    unsigned int _m_lowAlertTimeInterval; // +0x14
    unsigned int _m_lastCheckOtherUserUsedSpaceTime; // +0x18
}
+ (void)PBArrayAdd_m_lastLowAlertTime;
+ (void)PBArrayAdd_m_lastLowerAlertTime;
+ (void)PBArrayAdd_m_lastLowestAlertTime;
+ (void)PBArrayAdd_m_lowAlertTimeInterval;
+ (void)PBArrayAdd_m_lastCheckOtherUserUsedSpaceTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned int)m_lastLowAlertTime;
- (void)setM_lastLowAlertTime:(unsigned int)arg1;
- (unsigned int)m_lastLowerAlertTime;
- (void)setM_lastLowerAlertTime:(unsigned int)arg1;
- (unsigned int)m_lastLowestAlertTime;
- (void)setM_lastLowestAlertTime:(unsigned int)arg1;
- (unsigned int)m_lowAlertTimeInterval;
- (void)setM_lowAlertTimeInterval:(unsigned int)arg1;
- (unsigned int)m_lastCheckOtherUserUsedSpaceTime;
- (void)setM_lastCheckOtherUserUsedSpaceTime:(unsigned int)arg1;
@end

