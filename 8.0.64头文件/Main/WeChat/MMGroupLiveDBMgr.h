@interface MMGroupLiveDBMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _db; // +0x8
    WCTTable * _tableLiveInfo; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getLiveInfoItemsWithRoomId:(id)arg1 status:(unsigned int)arg2 maxTimeId:(unsigned long long)arg3 limit:(unsigned int)arg4;
- (id)getLiveInfoItemsWithAnchor:(id)arg1 status:(unsigned int)arg2 maxTimeId:(unsigned long long)arg3 limit:(unsigned int)arg4;
- (id)getLiveInfoItemByLiveId:(unsigned long long)arg1;
- (id)getLiveInfoItemsByLiveIdList:(id)arg1;
- (BOOL)insertLiveInfoDBItem:(id)arg1;
- (BOOL)insertOrUpdateLiveInfoDBItem:(id)arg1;
- (BOOL)deleteLiveInfoItemByLiveId:(unsigned long long)arg1;
- (BOOL)deleteLiveInfoItemsByRoomId:(id)arg1;
- (BOOL)updateLiveInfoItemByLiveId:(unsigned long long)arg1 status:(unsigned int)arg2;
- (BOOL)updateLiveInfoItemByLiveId:(unsigned long long)arg1 barStatus:(unsigned int)arg2;
- (BOOL)updateLiveInfoItemByRoomId:(id)arg1 barStatus:(unsigned int)arg2;
- (BOOL)updateLiveInfoItemByLiveId:(unsigned long long)arg1 enableLiveReplay:(BOOL)arg2;
- (void)openDB;
- (void)setupTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)closeDB;
- (id)dbPath;
- (void)willRecoverDatabase;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableLiveInfo;
- (void)setTableLiveInfo:(id)arg1;
- (void).cxx_destruct;
@end
