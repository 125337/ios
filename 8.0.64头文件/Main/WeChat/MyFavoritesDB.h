@interface MyFavoritesDB : NSObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_tableFavItem; // +0x10
    WCTTable * m_tableCdnUpload; // +0x18
    WCTTable * m_tableFileRetainCount; // +0x20
    WCTTable * m_tableTagItem; // +0x28
    WCTTable * m_tableMusic; // +0x30
}
- (BOOL)insertFavMusicByMusicId:(id)arg1 localFavId:(unsigned int)arg2;
- (BOOL)deleteFavMusicByLocalId:(unsigned int)arg1;
- (unsigned int)getFavMusicLocalIdByMusicId:(id)arg1;
- (id)getAllTagItems;
- (BOOL)insertTagItems:(id)arg1;
- (BOOL)updateTagItems:(id)arg1;
- (BOOL)deleteTagItems:(id)arg1;
- (BOOL)isItemExist:(id)arg1 andLocalItemId:(unsigned int)arg2 dataFmt:(id)arg3;
- (id)getRetainItemByMd5:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)isMd5RetainCountZero:(id)arg1;
- (BOOL)insertNewRowInFileRetainCountTable:(id)arg1 ItemLocalId:(unsigned int)arg2 dataFmt:(id)arg3;
- (BOOL)updateRetainItemBy:(id)arg1 localId:(unsigned int)arg2 dataFmt:(id)arg3;
- (BOOL)deleteItemFromFavoritesFileRetainCountTableByMd5:(id)arg1 andLocalItemId:(unsigned int)arg2;
- (id)getRetainMd5ByLocalId:(unsigned int)arg1;
- (BOOL)insertNewRowInCdnInfoTable:(id)arg1;
- (id)getUploadCdnInfoByItemId:(unsigned int)arg1 LocalItemDataId:(id)arg2 andType:(int)arg3;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getNextAsyncUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (BOOL)updateCdnInfo:(id)arg1 byItemId:(unsigned int)arg2 ItemLocalDataId:(id)arg3 andType:(int)arg4;
- (BOOL)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (BOOL)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1 ItemLocalDataId:(id)arg2 andType:(int)arg3;
- (BOOL)insertNewRowInFavoritesItemTable:(id)arg1;
- (id)getFavoritesItemById:(unsigned int)arg1;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemByLocalIdArr:(id)arg1;
- (id)getFavoritesItemBySourceId:(id)arg1;
- (id)getFavoritesItemsByCondition:(const void *)arg1 limit:(int)arg2 offset:(int)arg3;
- (id)getLastFavoritesItem;
- (id)checkBeforeAddItemByFavId:(unsigned int)arg1 andLocalId:(unsigned int)arg2;
- (id)getUploadingItemList;
- (id)getAsyncUploadingItemList;
- (id)getDownloadingItemList;
- (id)getUploadFailedItemList;
- (id)getAsyncUploadFailedItemList;
- (id)getBeforeAsyncUploadingItemList;
- (id)getDownloadFailedItemList;
- (id)getAllFavoritesItemList;
- (id)getDeleteItemList;
- (id)getFavoritesItemListFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getFavoritesItemFromUpdateSeq:(unsigned int)arg1 Limit:(int)arg2;
- (id)getUnsyncFavoritesItemFrom:(unsigned int)arg1 Limit:(int)arg2;
- (BOOL)clearFavSearchContent;
- (id)getAllCapacityType;
- (id)getFirstPageFavoritesItemListByType:(int)arg1;
- (id)getNextPageFavoritesItemListByType:(int)arg1 andCurMinUpdateTime:(unsigned int)arg2;
- (id)getNeedBatchGetFavoritesItemListByType:(int)arg1 andMinUpdateTime:(unsigned int)arg2;
- (unsigned int)getNeedBatchGetFavoritesItemCount;
- (id)getFirstPageFavoritesByType:(int)arg1 andSortType:(int)arg2;
- (id)getNextPageFavoritesByType:(int)arg1 andSortType:(int)arg2 andMinDataSize:(unsigned long long)arg3 andUsedTimes:(unsigned int)arg4 andCurMinUpdateTime:(unsigned int)arg5;
- (id)getNeedCacheWebItems;
- (unsigned int)getFavIndexByUpdateTime:(unsigned int)arg1;
- (void)fillFavItemUpdateProperties:(void *)arg1;
- (void)fillFavItemUpdatePropertiesForFavObject:(void *)arg1;
- (BOOL)updateItemInFavItemDB:(id)arg1 ByLocalItemId:(unsigned int)arg2;
- (BOOL)updateItemInFavItemDBForFavObject:(id)arg1 ByFavId:(unsigned int)arg2;
- (BOOL)updateUpdateSeq:(unsigned int)arg1 ByFavId:(unsigned int)arg2;
- (BOOL)updateItemUpdateTime:(unsigned int)arg1 ByLocalId:(unsigned int)arg2;
- (BOOL)updateItemLocalStatus:(int)arg1 ByLocalId:(unsigned int)arg2;
- (BOOL)updateItemUsedTimes:(unsigned int)arg1 ByLocalId:(unsigned int)arg2;
- (BOOL)deleteFavoritesItemById:(unsigned int)arg1;
- (BOOL)deleteFavoritesItemByLocalItemId:(unsigned int)arg1;
- (void)dealloc;
- (void)reloadDataBase;
- (BOOL)initDB;
- (void)tryConfigCompression;
- (BOOL)runTransaction:(id /* block */)arg1;
- (void)closeDB;
- (void)clearTables;
- (void)closeDBBeforeInit;
- (BOOL)createTables;
- (void)tryFixTagItemTable;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (id)m_db;
- (void)setM_db:(id)arg1;
- (id)m_tableFavItem;
- (void)setM_tableFavItem:(id)arg1;
- (id)m_tableCdnUpload;
- (void)setM_tableCdnUpload:(id)arg1;
- (id)m_tableFileRetainCount;
- (void)setM_tableFileRetainCount:(id)arg1;
- (id)m_tableTagItem;
- (void)setM_tableTagItem:(id)arg1;
- (id)m_tableMusic;
- (void)setM_tableMusic:(id)arg1;
- (void).cxx_destruct;
@end
