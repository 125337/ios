@interface WCTimelineMgr : MMObject <IContactMgrExt, WCTimelineDataProviderDelegate, WCMicroMerchantFeedsMgrDelegate>
{
    NSCache * _dataItemCacheForPrediction; // +0x8
    BOOL _hasUpdateHead; // +0x10
    BOOL _isJumping; // +0x11
    BOOL _isMicroMerchantUserUnfoldable; // +0x12
    BOOL _isUnfoldMicroMerchantUsernameChangedFromLastRequest; // +0x13
    BOOL _isRequestNextPageForMicroMerchantUnfoldUsernamesChangeEnabled; // +0x14
    BOOL _needSaveItemsUpdateTime; // +0x15
    BOOL _needLoadItemsUpdateTime; // +0x16
    WCMicroMerchantFoldMgr * _microMerchantFoldMgr; // +0x18
    id <WCTimelineDelegate> _delegate; // +0x20
    MyWCDB * _database; // +0x28
    NSDate * _sessionTime; // +0x30
    WCAdvertiseDataHelper * _adDataHelper; // +0x38
    WCAdvertiseLogicMgr * _adLogicMgr; // +0x40
    WCMicroMerchantFeedsMgr * _microMerchantFeedsMgr; // +0x48
    WCTimelineDataProvider * _dataProvider; // +0x50
    NSMutableArray * _cache; // +0x58
    NSMutableArray * _timelineDataList; // +0x60
    NSMutableArray * _advertiseDataList; // +0x68
    NSMutableArray * _timelineDataListBeforeJumpToMissRead; // +0x70
    unsigned long long _preUpdateItemId; // +0x78
    unsigned long long _updateFirstPageId; // +0x80
    NSArray * _lastUnfoldMicroMerchantUsernames; // +0x88
    NSMutableDictionary * _itemsUpdateTime; // +0x90
}
- (void)_initPrediction;
- (void)predictVideoSourceWithDataItems:(id)arg1 fromServer:(BOOL)arg2;
- (id)fetchCachedDataItemsForUsername:(id)arg1 withMaxCount:(long long)arg2;
- (void)Prediction_cacheDataItems:(id)arg1;
- (void)tryLoadDataItemUpdateTime;
- (void)trySaveDataItemUpdateTime;
- (unsigned int)getMinChangedTimeBetween:(id)arg1 andMinID:(id)arg2;
- (void)setChangedTimeForDatas:(id)arg1 withChangedTime:(unsigned int)arg2;
- (void)tryDeleteDataItemUpdateTimeCache;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (id)pathForDataItemUpdateTime;
- (id)init;
- (void)dealloc;
- (void)beginSession;
- (void)endSession;
- (void)clearExtraData;
- (BOOL)isInSession;
- (id)getCache;
- (unsigned long long)firstCachedItemID;
- (BOOL)updateDataHead;
- (BOOL)updateDataPrePage;
- (BOOL)updateDataTail;
- (BOOL)preUpdateData:(unsigned long long)arg1;
- (void)modifyDataItem:(id)arg1 notify:(BOOL)arg2;
- (void)modifyDataItem:(id)arg1 inDataItems:(id)arg2;
- (void)deleteDataItem:(id)arg1 notify:(BOOL)arg2;
- (void)deleteDataItem:(id)arg1 inDataItems:(id)arg2;
- (void)modifyCache:(id)arg1;
- (id)findDataItemInCacheByItemID:(id)arg1;
- (unsigned long long)onServiceCleanCache;
- (void)deleteAdvertiseDataItem:(id)arg1;
- (void)deleteAdvertiseDateItemList:(id)arg1;
- (unsigned int)getFirstPageCount;
- (unsigned int)getNextPageCount;
- (BOOL)prepareScrollToMissReadItem:(id)arg1;
- (BOOL)prepareJumpToMissReadItem:(id)arg1;
- (BOOL)isJumpState;
- (void)clearJumpState;
- (void)tryResetToNotJumpData;
- (void)dumpLikeAndCommentInfoForAdDatas:(id)arg1;
- (void)setLandingTimeForNewAdList:(id)arg1;
- (void)removeCachesOfContentWithAdDataItemList:(id)arg1;
- (void)tryRemoveCachesOfLikeUserWithNewTimelineList:(id)arg1;
- (void)preDownloadSharedCanvas:(id)arg1;
- (void)updateCache;
- (void)updateAdvertiseDataList:(id)arg1;
- (void)tryUpdateAddedAdItemsInfo:(id)arg1 newAdItems:(id)arg2 svrRetAdItems:(id)arg3;
- (void)tryToProcessWithNewAdList:(id)arg1;
- (id)getNextPageAfter:(id)arg1;
- (void)updateChangeItems:(id)arg1 oldItems:(id)arg2 added:(id)arg3 changed:(id)arg4 deleted:(id)arg5;
- (void)commonProcessDataAfterUpdate:(id)arg1 newAdItems:(id)arg2 changedTime:(unsigned int)arg3;
- (void)deleteUserDataItem:(id)arg1;
- (void)onPageRequestPrepared:(id)arg1 pageType:(long long)arg2;
- (void)onFirstPageUpdated:(unsigned long long)arg1 dataChanged:(BOOL)arg2 datas:(id)arg3 adDatas:(id)arg4 changedTime:(unsigned int)arg5 feedIds:(id)arg6 feedFlags:(id)arg7 wsInfos:(id)arg8;
- (BOOL)isUnReadJumpWithRequestId:(unsigned long long)arg1;
- (void)onNextPageUpdated:(unsigned long long)arg1 datas:(id)arg2 adDatas:(id)arg3 changedTime:(unsigned int)arg4 wsInfos:(id)arg5;
- (void)onPrePageUpdated:(unsigned long long)arg1 datas:(id)arg2 adDatas:(id)arg3 changedTime:(unsigned int)arg4 wsInfos:(id)arg5;
- (void)checkPrePageResultOrder:(id)arg1;
- (void)onNoMoreTimelineData;
- (void)onNormalTimelineData;
- (void)onTimelineServerError;
- (void)onAdPullWithAdDatas:(id)arg1;
- (void)onRealWsVersionChanged:(unsigned long long)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (id)microMerchantFeedsMgr;
- (id)mergeMicroMerchantFeeds:(id)arg1 feedList:(id)arg2;
- (id)foldSyncContext;
- (void)mergeFeedIdx:(id)arg1;
- (id)updateMicroMerchantGroupsCache:(id)arg1 dataList:(id)arg2;
- (void)updateMicroMerchantGroupsCacheWithGroupDict:(id)arg1 dataList:(id)arg2;
- (void)preloadNextPageRelativeMircoMerchantGroups:(id)arg1;
- (void)onMicroMerchantDataListUpdate:(id)arg1 group:(id)arg2;
- (id)exportWsFeedIdsOfDataList:(id)arg1;
- (void)updateMicroMerchantFoldConfigurations;
- (void)setupMicroMerchantFoldInfoWithTimelineRequest:(id)arg1 pageType:(long long)arg2;
- (BOOL)shouldUseFreshUnfoldDataWithPageType:(long long)arg1 foldSettings:(id)arg2;
- (void)updateLastUnfoldMicroMerchantUsernames:(id)arg1;
- (void)reportExceptionWithDataItem:(id)arg1;
- (id)microMerchantFoldMgr;
- (void)setMicroMerchantFoldMgr:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)sessionTime;
- (id)adDataHelper;
- (void)setAdDataHelper:(id)arg1;
- (id)adLogicMgr;
- (void)setAdLogicMgr:(id)arg1;
- (void)setMicroMerchantFeedsMgr:(id)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)timelineDataList;
- (void)setTimelineDataList:(id)arg1;
- (id)advertiseDataList;
- (void)setAdvertiseDataList:(id)arg1;
- (id)timelineDataListBeforeJumpToMissRead;
- (void)setTimelineDataListBeforeJumpToMissRead:(id)arg1;
- (BOOL)hasUpdateHead;
- (void)setHasUpdateHead:(BOOL)arg1;
- (BOOL)isJumping;
- (void)setIsJumping:(BOOL)arg1;
- (unsigned long long)preUpdateItemId;
- (void)setPreUpdateItemId:(unsigned long long)arg1;
- (unsigned long long)updateFirstPageId;
- (void)setUpdateFirstPageId:(unsigned long long)arg1;
- (BOOL)isMicroMerchantUserUnfoldable;
- (void)setIsMicroMerchantUserUnfoldable:(BOOL)arg1;
- (id)lastUnfoldMicroMerchantUsernames;
- (void)setLastUnfoldMicroMerchantUsernames:(id)arg1;
- (BOOL)isUnfoldMicroMerchantUsernameChangedFromLastRequest;
- (void)setIsUnfoldMicroMerchantUsernameChangedFromLastRequest:(BOOL)arg1;
- (BOOL)isRequestNextPageForMicroMerchantUnfoldUsernamesChangeEnabled;
- (void)setIsRequestNextPageForMicroMerchantUnfoldUsernamesChangeEnabled:(BOOL)arg1;
- (BOOL)needSaveItemsUpdateTime;
- (void)setNeedSaveItemsUpdateTime:(BOOL)arg1;
- (BOOL)needLoadItemsUpdateTime;
- (void)setNeedLoadItemsUpdateTime:(BOOL)arg1;
- (id)itemsUpdateTime;
- (void)setItemsUpdateTime:(id)arg1;
- (void).cxx_destruct;
@end
