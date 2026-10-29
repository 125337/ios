@interface BrandDatabaseMgr : MMUserService <MMServiceProtocol>
{
    id <BrandDatabaseNotifyDelegate> _delegate; // +0x8
    WCTDatabase * _db; // +0x10
    WCTTable * _tableMPPageCacheItem; // +0x18
    WCTTable * _tableMPPageReportItem; // +0x20
    WCTTable * _tableBrandDigestInfo; // +0x28
    WCTTable * _tablePhotoAccountDigestInfo; // +0x30
    WCTDatabase * _offlineCacheDB; // +0x38
    WCTTable * _tableMPPageOfflineCacheItem; // +0x40
}
- (void)offlineCache_openDB;
- (void)offlineCache_closeDB;
- (id)offlineCache_DBPath;
- (id)offlineCache_setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)offlineCache_createTables;
- (id)offlineCache_mpPageCacheItemWithIdentity:(id)arg1;
- (id)getExpiredCacheItems;
- (BOOL)offlineCache_addMPPageCacheItemList:(id)arg1;
- (void)offlineCache_clearDataBase;
- (void)registerRecoverNotification;
- (void)removeRecoverNotification;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (BOOL)deleteOfflineCacheItemWithIdentity:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)mpPageCacheItemWithIdentity:(id)arg1;
- (unsigned long long)getMPPageCacheItemCount;
- (BOOL)addMPPageCacheItemList:(id)arg1;
- (BOOL)deleteMPPageCacheItemWithUpdateTimeEarlierThanTime:(unsigned int)arg1;
- (void)deleteAllMPPageCacheItems;
- (BOOL)addMPPageReportItemWithItem:(id)arg1;
- (id)getMPPageReportItemListWithLimit:(unsigned int)arg1;
- (unsigned int)getMPPageReportItemCountBeforeTime:(long long)arg1;
- (BOOL)deleteMPPageReportItemInWithItemStartId:(unsigned int)arg1 andEndId:(unsigned int)arg2;
- (BOOL)deleteMPPageReportItemBeforeTime:(long long)arg1;
- (BOOL)replaceOrInsertDigestInfo:(id)arg1;
- (id)getLatestDigestInfo;
- (long long)getSavedDataId;
- (long long)genDataIdData:(id)arg1;
- (BOOL)checkDigestInfoShouldUpdate:(id)arg1;
- (id)getDigestInfoWithUsername:(id)arg1;
- (void)deleteDigestInfoByUsername:(id)arg1;
- (void)deleteUnSubscribeContactDigestInfoIfNeed;
- (BOOL)shouldDeleteUnSubscribeContactDigestInfo;
- (void)setHasDeleteUnSubscribeContactDigestInfo;
- (BOOL)updateDigestInfoForPhotoAccount:(id)arg1;
- (id)getLatestPhotoAccountDigestInfo;
- (id)getPhotoAccountDigestInfoWithUsername:(id)arg1;
- (void)deletePhotoAccountDigestInfoByUsername:(id)arg1;
- (BOOL)checkPhotoAccountDigestInfoShouldUpdate:(id)arg1;
- (void)openDB;
- (void)closeDB;
- (id)dbPath;
- (void)createTables;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableMPPageCacheItem;
- (void)setTableMPPageCacheItem:(id)arg1;
- (id)tableMPPageReportItem;
- (void)setTableMPPageReportItem:(id)arg1;
- (id)tableBrandDigestInfo;
- (void)setTableBrandDigestInfo:(id)arg1;
- (id)tablePhotoAccountDigestInfo;
- (void)setTablePhotoAccountDigestInfo:(id)arg1;
- (id)offlineCacheDB;
- (void)setOfflineCacheDB:(id)arg1;
- (id)tableMPPageOfflineCacheItem;
- (void)setTableMPPageOfflineCacheItem:(id)arg1;
- (void).cxx_destruct;
@end
