@interface MMFinderLiveRewardDBMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _db; // +0x8
    WCTTable * _tableLiveRewardGift; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getLiveRewardGiftItemsWithLimit:(unsigned int)arg1;
- (id)getLiveRewardGiftItemByProductId:(id)arg1;
- (BOOL)insertOrUpdateLiveRewardGiftItem:(id)arg1;
- (BOOL)deleteAllLiveRewardGiftItems;
- (void)openDB;
- (void)setupTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)closeDB;
- (id)dbPath;
- (void)willRecoverDatabase;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableLiveRewardGift;
- (void)setTableLiveRewardGift:(id)arg1;
- (void).cxx_destruct;
@end
