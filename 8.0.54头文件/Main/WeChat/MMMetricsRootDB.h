@interface MMMetricsRootDB : NSObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_tableAppRunningInfo; // +0x10
}
- (id)initWithDBPath:(id)arg1;
- (void)closeDB;
- (void)setupTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)vacuumCleaner;
- (id)getAllAppRunningInfos;
- (BOOL)insertOrUpdateAppRunningInfo:(id)arg1;
- (BOOL)deleteAppRunningInfo:(id)arg1;
- (void).cxx_destruct;
@end

