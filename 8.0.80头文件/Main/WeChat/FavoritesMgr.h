@interface FavoritesMgr : MMUserService <PBMessageObserverDelegate, FavoritesUploadMgrDelegate, FavoritesDownloadMgrDelegate, FavoritesBatchGetMgrDelegate, FavoritesSyncMgrDelegate, FavoritesBatchDelMgrDelegate, FavoritesPinTopMgrDelegate, FavSecurityDelegate, FavoritesTagMgrDelegate, IFTSFavMgrExt, BaseMsgViewControllerExt, MMServiceProtocol>
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
    FavoritesPinTopMgr * _pinTopMgr; // +0x60
    FavoritesRepairSvrDataLogic * _repairSvrDataLogic; // +0x68
    FavoritesReuploadMgr * _favReuploadMgr; // +0x70
    FavSecurityLogic * _securityLogic; // +0x78
    FavoritesSetting * _setting; // +0x80
    BOOL _isSyncingTag; // +0x88
    BOOL m_enableNewOrderList; // +0x89
    BOOL m_enableNewMultiSelect; // +0x8a
    BOOL m_wenoteCrossPlatformEnable; // +0x8b
    BOOL m_wenoteCrossPlatformEditModeEnable; // +0x8c
    BOOL m_wenotePasteFileEnable; // +0x8d
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0x90
    BOOL m_enableNoteLazyDownload; // +0x98
    BOOL m_forceAddToContainerView; // +0x99
    MemoryMappedKV * _settingsMMKV; // +0xa0
    BOOL _cachedPinTopEnabled; // +0xa8
    BOOL _hasCachedPinTopEnabled; // +0xa9
    unsigned int _pinTopLocalId; // +0xac
    id /* block */ _pinTopWatcher; // +0xb0
    NSDictionary * _favFilterTypeCountCache; // +0xb8
    BOOL _favFilterTypeCountPreheating; // +0xc0
    double _favFilterTypeCountPreheatTime; // +0xc8
    BOOL _separateFavoritesAndNote; // +0xd0
    BOOL _enableFlutterFavList; // +0xd1
    BOOL _useNewNoteShareImage; // +0xd2
    BOOL _useNewNoteSourceTitle; // +0xd3
    BOOL _useNewNoteShareImageFlutter; // +0xd4
    FavoritesReportLogic * _reportLogic; // +0xd8
    FavForwardLogicController * _forwardLogic; // +0xe0
    NSMutableArray * _delayDeleteTasks; // +0xe8
    WeNoteNewCreateEntryLogic * _weNoteNewCreateEntryLogic; // +0xf0
    FavoritesTmpChannelSyncMgr * _favTmpChannelSyncMgr; // +0xf8
}
+ (id)favFilterTypeCountPreheatTypes;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (id)init;
- (void)onServiceInit;
- (BOOL)enableNewOrderList;
- (BOOL)enableNewMultiSelect;
- (id)getAllFavoritesItemsInListScopeByType:(int)arg1 byTabMode:(long long)arg2 currentUserName:(id)arg3;
- (BOOL)enableFlutterNote;
- (BOOL)enableFlutterNoteEditMode;
- (BOOL)forceAddToContainerView;
- (BOOL)enableFavAddAISearchFromNative;
- (BOOL)enableWeNoteEditorPasteFile;
- (BOOL)isFavChatMultiSelectEnabled;
- (BOOL)isPinTopEnabled;
- (BOOL)isPinTopEnabledInDebug;
- (void)setLocalPinTopEnabled:(BOOL)arg1;
- (BOOL)enableMarkdownNote;
- (BOOL)enableMarkdownNotePublish;
- (BOOL)hasLocalPinTopEnabledSetting;
- (BOOL)isPinTopMockSuccessEnabled;
- (void)setLocalPinTopMockSuccessEnabled:(BOOL)arg1;
- (BOOL)isPinOnTopSyncEnabled;
- (BOOL)shouldSeparateFavoritesAndNote;
- (BOOL)shouldUseFlutterFavList;
- (BOOL)shouldOpenFavAiSearch;
- (BOOL)shouldOpenFavAiSearchDebugWindow;
- (void)onPinTopItemAdded:(unsigned int)arg1;
- (void)pinTopItemAddWatcher:(id /* block */)arg1 localId:(unsigned int)arg2;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (void)getPinTopFavInChat;
- (void)HandleGetPinTopFavInChatResp:(id)arg1 Event:(unsigned int)arg2;
- (void)registerFavoritesRecoveryHandler;
- (id)favoritesRecoveryProtectedDataPaths;
- (BOOL)performFavoritesRecoveryCleanupWithProgressHandler:(id /* block */)arg1;
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
- (void)getFirstPageFavoritesList:(int)arg1 byTabMode:(long long)arg2 andPinTopFirst:(BOOL)arg3;
- (void)tryFixUploadStatus;
- (BOOL)checkCanReUploadItem:(id)arg1;
- (void)checkInvalidNote:(id)arg1 batchgetList:(id)arg2;
- (void)getNextPageFavoritesList:(int)arg1 byTabMode:(long long)arg2 byCurMinUpdateTime:(unsigned int)arg3 andPinTopFirst:(BOOL)arg4 byCurMinPinTopTime:(unsigned int)arg5;
- (id)getAllNoteFavIdsByTabMode:(long long)arg1;
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
- (void)pinTopFavoritesItem:(id)arg1;
- (void)cancelPinTopFavoritesItem:(id)arg1;
- (void)removeItemFile:(id)arg1;
- (void)removeItemFile:(id)arg1 withDataList:(id)arg2;
- (BOOL)batchDelFavoritesItem:(id)arg1;
- (void)stopUploadItem:(id)arg1;
- (BOOL)isDownloadingMessage:(id)arg1;
- (void)updateItemUpdateTime:(id)arg1;
- (void)updateItemUsedTimes:(unsigned int)arg1;
- (void)decreItemUsedTimes:(unsigned int)arg1;
- (id)getAllCapacityType;
- (id)genFavSessionId;
- (void)checkBatchDelQueue;
- (void)updateFavSetting;
- (void)removeItemInFailQueue:(id)arg1;
- (void)startUploadFavoritesItem:(id)arg1 IsPriority:(BOOL)arg2;
- (void)startDownloadFavoritesItem:(id)arg1 IsPriority:(BOOL)arg2;
- (BOOL)hasBeforeAsyncUploadingItem;
- (id)getUploadFailedItemList;
- (id)getUploadingItemList;
- (id)getDownloadingItemList;
- (void)batchGetFavItem:(id)arg1;
- (void)asyncDoAddNewItemList:(id)arg1 source:(id)arg2;
- (void)batchGetFavItemBySourceIdFilterList:(id)arg1;
- (BOOL)batchDelFavItemBySourceIdFilterList:(id)arg1;
- (void)delFavItemBySourceId:(id)arg1 scene:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)checkNoteSecurity:(id)arg1;
- (void)cancelCheckNoteSecurity:(unsigned int)arg1;
- (unsigned long long)getUsedCapacity;
- (unsigned long long)getTotalCapacity;
- (BOOL)isNoteShareMomentEnable;
- (BOOL)isH265Enabled;
- (BOOL)isFavTurnToNoteInLongClickEnabled;
- (BOOL)isFavFlatPOIEnabled;
- (BOOL)isNewFastLoadImageEnabled;
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
- (void)onPinTopFavItemSuccess:(unsigned int)arg1 pinTopTimestamp:(unsigned int)arg2 isFromMock:(BOOL)arg3;
- (void)onPinTopFavItemFail:(unsigned int)arg1 errorCode:(int)arg2 oldPinTopTimestamp:(unsigned int)arg3;
- (void)onCancelPinTopFavItemSuccess:(unsigned int)arg1 isFromMock:(BOOL)arg2;
- (void)onCancelPinTopFavItemFail:(unsigned int)arg1 errorCode:(int)arg2 oldPinTopTimestamp:(unsigned int)arg3;
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
- (BOOL)processExtInfoFromServer:(id)arg1;
- (void)tryFixTagIndex;
- (id)getAllTags;
- (id)getTagsMatch:(id)arg1;
- (void)updateTag:(id)arg1 to:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)getAllStarredLocalIdToStarTypeMap;
- (BOOL)hasAnyStarredFavorites;
- (void)dumpAllFavoritesItemsForStarTypeDebug;
- (void)updateItemInFavItemDB:(id)arg1 source:(id)arg2;
- (void)updateItems:(id)arg1 tags:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)updateItems:(id)arg1 tags:(id)arg2 mode:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (id)getTagsFromIdList:(id)arg1;
- (id)genSearchTaskKey;
- (id)getSearchKeyword:(id)arg1;
- (BOOL)hasSearchDoneForTaskKey:(id)arg1 searchContent:(id)arg2;
- (void)loadMoreSearchContent:(id)arg1;
- (unsigned int)getTotalSearchCountForTaskKey:(id)arg1 searchContent:(id)arg2;
- (id)getAllFavoritesItemsInSearchScopeForTaskKey:(id)arg1 searchContent:(id)arg2;
- (BOOL)isImageOrVideoData:(id)arg1;
- (void)enumerateImageVideoDataForTaskKey:(id)arg1 searchContent:(id)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)getTotalImageVideoCountForTaskKey:(id)arg1 searchContent:(id)arg2;
- (id)getAllImageVideoDataForTaskKey:(id)arg1 searchContent:(id)arg2;
- (void)cancelSearch:(id)arg1;
- (void)asyncSearch:(id)arg1 byType:(long long)arg2 tags:(id)arg3 taskKey:(id)arg4;
- (void)asyncSearch:(id)arg1 byType:(long long)arg2 tags:(id)arg3 starredOnly:(BOOL)arg4 recentUsedLocalIds:(id)arg5 taskKey:(id)arg6;
- (id)syncSearch:(id)arg1 byType:(long long)arg2 tags:(id)arg3;
- (unsigned long long)countFavItemsForFilterType:(long long)arg1;
- (void)onEnterBaseMsgSession:(id)arg1;
- (void)preheatFavFilterTypeCountsIfNeeded;
- (id)cachedFavFilterTypeCounts;
- (void)onFTSFavResultChanged:(id)arg1;
- (void)onFTSFavIndexFinished;
- (id)getFavoritesItemFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getFavoritesItemFromUpdateSeq:(unsigned int)arg1 Limit:(int)arg2;
- (id)getUnsyncFavoritesItemFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getFavoritesItemListByTimeRange:(unsigned int)arg1 endTime:(unsigned int)arg2 types:(id)arg3 limit:(int)arg4;
- (id)getFavoritesItemByfavId:(unsigned int)arg1;
- (id)getFavoritesItemBySourceId:(id)arg1;
- (id)getFavoritesItemByStarBizKey:(id)arg1;
- (id)getAllFavoritesItemsByType:(int)arg1;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemByLocalIdArr:(id)arg1;
- (id)getFavoritesItemByFavIdArr:(id)arg1;
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
- (void)delayDeleteFavoritesItem:(id)arg1 onHideObject:(id /* block */)arg2 onShowObject:(id /* block */)arg3;
- (void)cancelDelayDelete:(unsigned int)arg1;
- (void)commitDelayDelete;
- (BOOL)updateItemPinTopTimestamp:(unsigned int)arg1 ByLocalId:(unsigned int)arg2;
- (int)getItemPinTopTimestampByLocalId:(unsigned int)arg1;
- (BOOL)resetAllPinTopData;
- (void)reportViewClick:(int)arg1 itemOrDataWrap:(id)arg2;
- (void)reportPinTopFoldAction:(BOOL)arg1 favTopCount:(unsigned long long)arg2;
- (id)getFavSyncManager;
- (id)getFavReuploadMgr;
- (id)getFavTmpChannelSyncMgr;
- (void)resetCdnInfoAndReuploadFavItem:(id)arg1;
- (void)reportFavoritesPreCheckFailure:(id)arg1 stage:(int)arg2 errCode:(int)arg3;
- (id)fav_openItemWaitingMap;
- (void)openFavItemByFavId:(unsigned int)arg1 fromViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)saveAndOpenFavObject:(id)arg1 favId:(unsigned int)arg2 fromViewController:(id)arg3;
- (int)openFavItemDetail:(id)arg1 fromViewController:(id)arg2;
- (void)openFavItemByMsgXml:(id)arg1 fromViewController:(id)arg2 completion:(id /* block */)arg3;
- (unsigned int)favIdFromMsgXml:(id)arg1;
- (void)finishOpenFavItemByFavId:(unsigned int)arg1 retCode:(int)arg2;
- (id)setting;
- (void)setSetting:(id)arg1;
- (id)reportLogic;
- (void)setReportLogic:(id)arg1;
- (void)setForwardLogic:(id)arg1;
- (id)delayDeleteTasks;
- (void)setDelayDeleteTasks:(id)arg1;
- (BOOL)separateFavoritesAndNote;
- (void)setSeparateFavoritesAndNote:(BOOL)arg1;
- (BOOL)enableFlutterFavList;
- (void)setEnableFlutterFavList:(BOOL)arg1;
- (BOOL)useNewNoteShareImage;
- (void)setUseNewNoteShareImage:(BOOL)arg1;
- (BOOL)useNewNoteSourceTitle;
- (void)setUseNewNoteSourceTitle:(BOOL)arg1;
- (BOOL)useNewNoteShareImageFlutter;
- (void)setUseNewNoteShareImageFlutter:(BOOL)arg1;
- (id)weNoteNewCreateEntryLogic;
- (void)setWeNoteNewCreateEntryLogic:(id)arg1;
- (id)favTmpChannelSyncMgr;
- (void)setFavTmpChannelSyncMgr:(id)arg1;
- (void).cxx_destruct;
@end
