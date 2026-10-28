@interface WCActionSheetRecentItemsManager : MMObject
{
    RecentUsageDics * m_statisticsData; // +0x8
    NSString * m_statisticsFilePath; // +0x10
    NSArray * recentSortItems; // +0x18
    NSArray * m_cards; // +0x20
    NSArray * m_devices; // +0x28
}
- (id)initWithScene:(unsigned int)arg1 filePathExtension:(id)arg2;
- (void)saveStatisticsData;
- (void)loadStatisticsData;
- (void)updateDeviceLastUsedTime:(id)arg1;
- (void)updateWeAppLastUsedTime:(id)arg1;
- (id)sortItemsByTimeWithCards:(id)arg1 devices:(id)arg2;
- (void)sortItems;
- (id)getRecentSortItems;
- (id)getItemTitle:(id)arg1;
- (void).cxx_destruct;
@end
