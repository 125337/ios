@interface WCPayKV_StartPayTimeCostReport : NSObject
{
    unsigned long long _m_appLaunchTime; // +0x8
    unsigned long long _m_logicStartTime; // +0x10
    unsigned long long _m_logicNetworkEndTime; // +0x18
    unsigned long long _m_logicShowViewTime; // +0x20
    unsigned long long _m_isFirstLaunch; // +0x28
    unsigned long long _m_hasLogNoOrderViewTime; // +0x30
}
+ (id)shareInstance;
- (void)recordLaunchTime;
- (void)recordFirstLaunch;
- (void)recordLogicStartTime;
- (void)recordLogicNetworkEndTime;
- (void)recordLogicShowViewTime;
- (void)recordLogicShowViewNoOrderViewTime;
- (void)reportWithScene:(unsigned int)arg1;
- (void)clearWhenLogicStop;
- (unsigned long long)m_appLaunchTime;
- (void)setM_appLaunchTime:(unsigned long long)arg1;
- (unsigned long long)m_logicStartTime;
- (void)setM_logicStartTime:(unsigned long long)arg1;
- (unsigned long long)m_logicNetworkEndTime;
- (void)setM_logicNetworkEndTime:(unsigned long long)arg1;
- (unsigned long long)m_logicShowViewTime;
- (void)setM_logicShowViewTime:(unsigned long long)arg1;
- (unsigned long long)m_isFirstLaunch;
- (void)setM_isFirstLaunch:(unsigned long long)arg1;
- (unsigned long long)m_hasLogNoOrderViewTime;
- (void)setM_hasLogNoOrderViewTime:(unsigned long long)arg1;
@end
