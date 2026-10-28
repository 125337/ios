@interface FavoritesMgr : MMUserService <PBMessageObserverDelegate, FavoritesUploadMgrDelegate, FavoritesDownloadMgrDelegate, FavoritesBatchGetMgrDelegate, FavoritesSyncMgrDelegate, FavoritesBatchDelMgrDelegate, FavSecurityDelegate, FavoritesTagMgrDelegate, IFTSFavMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _dispatchQueueDic; // +0x8
    NSMutableDictionary * _dispatchQueueRerefenceDic; // +0x10
    FavoritesItemDB * _favItemDB; // +0x18
    MyFavoritesDB * _favDB; // +0x20
    FavoritesUploadMgr * _favUploadMgr; // +0x28
    FavoritesDownloadMgr * _favDownloadMgr; // +0x30
    FavoritesTagMgr * _favTagMgr; // +0x38
    FavoritesSyncMgr * _favSyncMgr; // +0x40
    FavoritesUploadMgr * _favAsyncUploadMgr; // +0x48
    FavoritesBatchDelMgr * _batchDelMgr; // +0x50
    FavoritesBatchGetMgr * _batchGetMgr; // +0x58
    FavoritesRepairSvrDataLogic * _repairSvrDataLogic; // +0x60
    FavSecurityLogic * _securityLogic; // +0x68
    FavoritesSetting * _setting; // +0x70
    BOOL _isSyncingTag; // +0x78
    BOOL m_enableNewOrderList; // +0x79
    BOOL m_wenoteCrossPlatformEnable; // +0x7a
    BOOL m_wenoteCrossPlatformEditModeEnable; // +0x7b
    BOOL m_wenotePasteFileEnable; // +0x7c
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x80
    BOOL m_enableNoteLazyDownload; // +0x88
    BOOL m_forceAddToContainerView; // +0x89
    FavoritesReportLogic * _reportLogic; // +0x90
    FavForwardLogicController * _forwardLogic; // +0x98
    NSMutableArray * _delayDeleteTasks; // +0xa0
}
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (id)init;
- (void)onServiceInit;
- (BOOL)enableNewOrderList;
- (BOOL)enableFlutterNote;
- (BOOL)enableFlutterNoteEditMode;
- (BOOL)forceAddToContainerView;
- (BOOL)enableFavAddAISearchFromNative;
- (BOOL)enableWeNoteEditorPasteFile;
- (void)onServiceClearData;
- (BOOL)enableNoteLazyDownload;
- (void)initDB:(id)arg1;
- (void)loadFavoritesSetting;
- (void)loadNeedCacheWebItems;
- (void)saveSetting;
- (void)dealloc;
- (void)SyncFromUI;
- (void)SyncByNotify:(unsigned int)arg1;
- (id)forwardLogic;
- (void)getFirstPageFavoritesList:(int)arg1;
- (void)tryFixUploadStatus;
- (BOOL)checkCanReUploadItem:(id)arg1;
- (void)checkInvalidNote:(id)arg1 batchgetList:(id)arg2;
- (void)getNextPageFavoritesList:(int)arg1 byCurMinUpdateTime:(unsigned int)arg2;
- (void)getFirstPageFavoritesByType:(int)arg1 andSortType:(int)arg2;
- (void)getNextPageFavoritesByType:(int)arg1 andSortType:(int)arg2 andMinDataSize:(unsigned long long)arg3 andUsedTimes:(unsigned int)arg4 andCurMinUpdateTime:(unsigned int)arg5;
- (unsigned long long)getFaildItemCapcitySize;
- (BOOL)tryCalculateFavItemSize;
- (BOOL)addFavoritesItem:(id)arg1;
- (BOOL)addFavoritesItem:(id)arg1 delayUpload:(BOOL)arg2;
- (BOOL)updateFavoritesItem:(id)arg1;
- (BOOL)updateFavoritesItem:(id)arg1 delayUpload:(BOOL)arg2;
- (BOOL)delFavoritesItemByFavId:(id)arg1;
- (BOOL)delFavoritesItem:(id)arg1;
- (BOOL)delFavoritesItems:(id)arg1;
- (void)removeItemFile:(id)arg1;
- (void)removeItemFile:(id)arg1 withDataList:(id)arg2;
- (BOOL)batchDelFavoritesItem:(id)arg1;
- (void)stopUploadItem:(id)arg1;
- (void)updateItemUpdateTime:(id)arg1;
- (void)updateItemUsedTimes:(unsigned int)arg1;
- (void)decreItemUsedTimes:(unsigned int)arg1;
- (id)getAllCapacityType;
- (id)genFavSessionId;
- (void)checkBatchDelQueue;
- (void)updateFavSetting;
- (void)startUploadFavoritesItem:(id)arg1 IsPriority:(BOOL)arg2;
- (void)startDownloadFavoritesItem:(id)arg1 IsPriority:(BOOL)arg2;
- (BOOL)hasBeforeAsyncUploadingItem;
- (id)getUploadFailedItemList;
- (id)getUploadingItemList;
- (id)getDownloadingItemList;
- (void)batchGetFavItem:(id)arg1;
- (void)batchGetFavItemBySourceIdFilterList:(id)arg1;
- (BOOL)batchDelFavItemBySourceIdFilterList:(id)arg1;
- (void)checkNoteSecurity:(id)arg1;
- (void)cancelCheckNoteSecurity:(unsigned int)arg1;
- (unsigned long long)getUsedCapacity;
- (unsigned long long)getTotalCapacity;
- (BOOL)isNoteShareMomentEnable;
- (BOOL)isSaveNoteAsImageEnable;
- (unsigned int)getFavIndexByUpdateTime:(unsigned int)arg1;
- (int)getWeNoteMaxObjectCount;
- (BOOL)getFavCapacityEntryFlag;
- (id)tryRecoverSourcePathAndDeepCopyIfFavItemIsUploading:(id)arg1;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleGetFavInfoResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)BroadcastAddFavoritesItemResult:(id)arg1 ErrCode:(int)arg2;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (void)onUploadFavoritesItemFinished:(id)arg1 ErrCode:(int)arg2 MgrType:(unsigned long long)arg3;
- (void)onDownloadFavoritesItemFinished:(id)arg1 ErrCode:(int)arg2;
- (void)onBatchDelItemBySourceIdSuccessfully;
- (void)onBatchDelItemBySourceIdFailedWith:(id)arg1;
- (void)onBatchGetNewItem:(id)arg1 UpdateItemList:(id)arg2 ErrCode:(int)arg3;
- (void)onBatchGetBySourceIdSuccessfullyWithReqFilterArr:(id)arg1 existFilterArr:(id)arg2 unExistFilterArr:(id)arg3 existItemArr:(id)arg4;
- (void)onBatchGetBySourceIdFailedWith:(id)arg1;
- (void)batchDownloadItemList:(id)arg1;
- (BOOL)checkSvrUploading:(id)arg1;
- (BOOL)checkNeedAsyncUploadAfterBatchDownload:(id)arg1;
- (id)GetNextBatchGetList;
- (void)OnSyncResult:(int)arg1 selector:(int)arg2;
- (void)OnNeedUpdateFavInfo;
- (id)getSemaphore;
- (id)getDispatchQueueWithSrcDataPath:(id)arg1;
- (void)releaseDispatchQueueWithSrcDataPath:(id)arg1;
- (void)onSecurityCheckOK:(int)arg1;
- (void)onSecurityCheckFail:(int)arg1;
- (BOOL)processTagsFromServer:(id)arg1;
- (void)tryFixTagIndex;
- (id)getAllTags;
- (id)getTagsMatch:(id)arg1;
- (void)updateTag:(id)arg1 to:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)updateItemInFavItemDB:(id)arg1;
- (void)updateItems:(id)arg1 tags:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)updateItems:(id)arg1 tags:(id)arg2 mode:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (id)getTagsFromIdList:(id)arg1;
- (id)genSearchTaskKey;
- (id)getSearchKeyword:(id)arg1;
- (BOOL)hasSearchDoneForTaskKey:(id)arg1 searchContent:(id)arg2;
- (void)loadMoreSearchContent:(id)arg1;
- (unsigned int)getTotalSearchCountForTaskKey:(id)arg1 searchContent:(id)arg2;
- (void)cancelSearch:(id)arg1;
- (void)asyncSearch:(id)arg1 byType:(long long)arg2 tags:(id)arg3 taskKey:(id)arg4;
- (id)syncSearch:(id)arg1 byType:(long long)arg2 tags:(id)arg3;
- (void)onFTSFavResultChanged:(id)arg1;
- (id)getFavoritesItemFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getFavoritesItemFromUpdateSeq:(unsigned int)arg1 Limit:(int)arg2;
- (id)getUnsyncFavoritesItemFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getFavoritesItemByfavId:(unsigned int)arg1;
- (id)getFavoritesItemBySourceId:(id)arg1;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemByLocalIdArr:(id)arg1;
- (unsigned int)getLastFavItemLocalId;
- (unsigned int)getUnBatchGetFavItemCount;
- (BOOL)clearFavSearchContent;
- (BOOL)hasFavoritePOI:(id)arg1;
- (void)addFavMusicItemsIfNeeded:(id)arg1;
- (void)addFavMusicItemIfNeeded:(id)arg1;
- (void)delFavMusicItems:(id)arg1;
- (void)delFavMusicByMusicId:(id)arg1;
- (BOOL)isFavMusicExist:(id)arg1;
- (BOOL)isHasUploadingItem;
- (unsigned long long)uploadMgrCleanCache;
- (unsigned long long)preGetUploadMgrCleanCache;
- (void)tryReUploadCapacityExeedFavItem;
- (BOOL)isDelayDeleteEnable;
- (void)delayDeleteFavoritesItem:(id)arg1;
- (void)cancelDelayDelete:(unsigned int)arg1;
- (void)commitDelayDelete;
- (void)reportViewClick:(int)arg1 itemOrDataWrap:(id)arg2;
- (id)setting;
- (void)setSetting:(id)arg1;
- (id)reportLogic;
- (void)setReportLogic:(id)arg1;
- (void)setForwardLogic:(id)arg1;
- (id)delayDeleteTasks;
- (void)setDelayDeleteTasks:(id)arg1;
- (void).cxx_destruct;
@end
