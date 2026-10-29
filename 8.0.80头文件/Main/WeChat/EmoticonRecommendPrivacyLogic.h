@interface EmoticonRecommendPrivacyLogic : MMObject
{
    RecommendPrivcyWrap * m_statisticsData; // +0x8
    NSString * m_statisticsFilePath; // +0x10
}
- (id)init;
- (BOOL)canShowFullHeader;
- (BOOL)canShowBriefHeader;
- (void)recordFirstFullHeaderShowTime;
- (void)recordFirstBriefHeaderShowTime;
- (void)recordRejectFullHeaderTime;
- (void)recordIsBriefHeaderOperated;
- (void)resetAllData;
- (void)saveStatisticsData;
- (void)loadStatisticsData;
- (void).cxx_destruct;
@end
