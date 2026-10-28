@interface MusicHistoryManager : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _database; // +0x8
    NSArray * _approvedAppidList; // +0x10
}
+ (id)databasePath;
+ (id)databaseRepairPath;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (BOOL)canBeAddedToHistory:(id)arg1;
- (void)updateMusicListened:(id)arg1;
- (void)reloadDataBase;
- (id)loadHistoryItemFromDatabaseWithLimit:(long long)arg1 offset:(long long)arg2;
- (double)validTimeStamp;
- (BOOL)insertOrUpdate:(id)arg1;
- (void)clearAllInDataBase;
- (void)clearUselessRecordWithCompletion:(id /* block */)arg1;
- (void)_clearUselessRecord;
- (id)approvedAppidList;
- (id)database;
- (void)setDatabase:(id)arg1;
- (void)setApprovedAppidList:(id)arg1;
- (void).cxx_destruct;
@end
