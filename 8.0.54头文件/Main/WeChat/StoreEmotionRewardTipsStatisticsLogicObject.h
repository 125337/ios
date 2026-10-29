@interface StoreEmotionRewardTipsStatisticsLogicObject : MMObject
{
    unsigned int m_notCountAfterDaysConfig; // +0x8
    unsigned int m_contiousSendTimesConfig; // +0xc
    unsigned int m_totalSendTimesConfig; // +0x10
    EmotionRewardTipsStatisticsData * m_statisticsData; // +0x18
    NSString * m_statisticsFilePath; // +0x20
}
- (id)init;
- (void)clearAllData;
- (BOOL)checkIsNeedShowRewardTipsWithPid:(id)arg1;
- (void)hasShowedTipsForPid:(id)arg1;
- (void)resetRewardStatisticsForPid:(id)arg1;
- (void)resetRewardStatisticsForPid:(id)arg1 hasShowTips:(BOOL)arg2;
- (void)hasRewardedPid:(id)arg1;
- (void)loadConfig;
- (void)saveStatisticsData;
- (void)loadStatisticsData;
- (void).cxx_destruct;
@end

