@interface WCFinderShareFeedDataProvider : NSObject <WCFinderFeedArrayDelegate>
{
    BOOL _onlyOneFeed; // +0x8
    BOOL _allowTopPull; // +0x9
    BOOL _hasRequestPlaceholderDataItems; // +0xa
    BOOL _appendingPlaceholderDataItems; // +0xb
    id <WCFinderShareFeedDataProviderDelegate> _delegate; // +0x10
    NSData * _lastBuff; // +0x18
    NSString * _enterTid; // +0x20
    WCFinderFeedArray * _feedArray; // +0x28
    WCFinderShareLoadCycle * _loadCycle; // +0x30
    NSData * _debugMessage; // +0x38
    FinderRelatedRecommendTips * _relatedRecommendTips; // +0x40
    WCFinderPushFeedViewParams * _funcParams; // +0x48
    WCFinderShareListReportModel * _reportModel; // +0x50
    NSMutableDictionary * _enhancedByItemDict; // +0x58
    FinderObjectThankInfo * _thankInfo; // +0x60
    WCFinderTaskQueue * _taskQueue; // +0x68
    WCFinderGetRelatedListParams * _params; // +0x70
    WCFinderPushFeedViewProductParams * _productInfo; // +0x78
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0x80
    JsApiSourceInfo * _jsApiSourceInfo; // +0x88
    NSMutableArray * _topBackupFeedArray; // +0x90
    NSMutableArray * _bottomBackupFeedArray; // +0x98
    long long _topBackupFeedInsertCount; // +0xa0
    long long _bottomBackupFeedAppendCount; // +0xa8
    NSArray * _needCollectionDataItemList; // +0xb0
    NSMutableArray * _waitFirstPageBlocks; // +0xb8
    WCFinderShareCachePool * _shareCachePool; // +0xc0
    NSString * _cacheOwnerID; // +0xc8
    WCFinderShareDataState _flag; // +0xd0
}
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (id)cacheLogContext;
- (BOOL)canUseLocalCache;
- (void)notifyLoadCycleChanged:(id)arg1;
- (void)beginLoadCycle;
- (BOOL)isUsableNextFeed:(id)arg1;
- (BOOL)hasReadyNextFeed;
- (void)completeLoadCycle:(id)arg1 source:(unsigned long long)arg2 ready:(BOOL)arg3 success:(BOOL)arg4 reason:(id)arg5;
- (id)currentFeedIDs;
- (id)nextFeedAfterEntry;
- (unsigned long long)cacheGuideExpiry:(id)arg1;
- (BOOL)isUsableGuideItem:(id)arg1;
- (BOOL)isPendingCacheItemAvailable:(id)arg1;
- (id)nextCacheGuideDataItem;
- (id)guideRecommendTips;
- (id)lockedCacheGuideFeedID;
- (void)addLocalCacheExtraInfo:(id)arg1;
- (void)insertLocalCacheItem:(id)arg1;
- (BOOL)commitCacheGuideDataItem:(id)arg1;
- (void)unlockCacheGuideWithReason:(id)arg1;
- (void)validateCacheGuide;
- (void)requestCacheGuideNextWithReason:(id)arg1;
- (void)cacheGuideDidFocusTid:(id)arg1;
- (void)releaseUnusedCacheReservations;
- (void)prepareLocalCacheIfNeeded;
- (id)updatedCacheItem:(id)arg1 fromItem:(id)arg2;
- (void)applyLocalCacheCheckResults:(id)arg1 dataItems:(id)arg2;
- (void)fillCacheRequest:(id)arg1;
- (void)startDeferredRelatedRequest;
- (void)startDeferredRelatedRequestForReason:(id)arg1;
- (void)appendLocalCacheFeed;
- (void)shareCacheConfigDidChange:(id)arg1;
- (void)collectUnreadCacheItems:(id)arg1;
- (void)closeCacheSession;
- (id)generateNativeSourceInfo;
- (void)ensureFirstPageLoaded:(id /* block */)arg1;
- (void)_onFirstPageLoadFinish:(BOOL)arg1;
- (void)requestCacheData;
- (void)requestFirstPage:(id /* block */)arg1;
- (BOOL)ignoreRequestGetRelative;
- (WCFinderShareDataState)state;
- (WCFinderShareDataState *)stateRef;
- (void)setAllowTopPull:(BOOL)arg1;
- (void)requestNextPage:(id /* block */)arg1;
- (void)requestPrePage:(id /* block */)arg1;
- (void)requestPlaceholderData;
- (void)splitBackupFeedArray:(id)arg1;
- (id)sliceDataArray:(id)arg1 mergeType:(int)arg2;
- (void)insertTopBackupFeed;
- (BOOL)canAppendBottomBackupFeed;
- (void)appendBottomBackupFeed;
- (void)collectionUnUsedPlaceholderObjects;
- (id)firstDataItem;
- (id)createDetailTask:(BOOL)arg1 complete:(id /* block */)arg2;
- (id)createCommentDetailTask:(BOOL)arg1 complete:(id /* block */)arg2;
- (id)createEncryptCommentDetailTask:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)_onDetailCGIBack:(id)arg1 isFirstDataItemLoading:(BOOL)arg2;
- (id)createNextRelativeTask:(id /* block */)arg1;
- (id)createPreRelativeTask:(id /* block */)arg1;
- (void)appendDataItem:(id)arg1 isFirstPage:(BOOL)arg2 isBottom:(BOOL)arg3 jumpDataArray:(id)arg4 resp:(id)arg5;
- (BOOL)feedArray:(id)arg1 ignoreFinderStreamCard:(id)arg2;
- (void)onFeedArray:(id)arg1 insertContentVMS:(id)arg2 removeContentVMS:(id)arg3;
- (void)configCacheReadTypeForContentVM:(id)arg1;
- (void)_configContentVM:(id)arg1 ignorePlaceHolder:(BOOL)arg2;
- (void)_updateRecommendThankViewModelForContentVM:(id)arg1;
- (void)_fillContentVMParamWithTargetFirstFeed:(id)arg1;
- (BOOL)recommendTipsIsValid;
- (void)deleteFeedWithIds:(id)arg1;
- (void)refreshFeed:(id)arg1 withDataItem:(id)arg2;
- (void)insertFeeds:(id)arg1 after:(id)arg2;
- (void)insertFeeds:(id)arg1 before:(id)arg2 cleanBottom:(BOOL)arg3;
- (void)_onCGIBackError:(int)arg1 msg:(id)arg2;
- (id)parseError:(int)arg1 msg:(id)arg2;
- (void)deadlyErrorCleanDatas:(BOOL)arg1;
- (void)updateLocalDataItem:(id /* block */)arg1;
- (id)forkProviderWithFeed:(id)arg1 byPassInfo:(id)arg2 commentScene:(int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)onlyOneFeed;
- (void)setOnlyOneFeed:(BOOL)arg1;
- (BOOL)allowTopPull;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)enterTid;
- (void)setEnterTid:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)loadCycle;
- (void)setLoadCycle:(id)arg1;
- (id)debugMessage;
- (void)setDebugMessage:(id)arg1;
- (id)relatedRecommendTips;
- (void)setRelatedRecommendTips:(id)arg1;
- (id)funcParams;
- (void)setFuncParams:(id)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (id)enhancedByItemDict;
- (void)setEnhancedByItemDict:(id)arg1;
- (id)thankInfo;
- (void)setThankInfo:(id)arg1;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (id)entranceMessageInfo;
- (void)setEntranceMessageInfo:(id)arg1;
- (id)jsApiSourceInfo;
- (void)setJsApiSourceInfo:(id)arg1;
- (WCFinderShareDataState)flag;
- (void)setFlag:(WCFinderShareDataState)arg1;
- (id)topBackupFeedArray;
- (void)setTopBackupFeedArray:(id)arg1;
- (id)bottomBackupFeedArray;
- (void)setBottomBackupFeedArray:(id)arg1;
- (long long)topBackupFeedInsertCount;
- (void)setTopBackupFeedInsertCount:(long long)arg1;
- (long long)bottomBackupFeedAppendCount;
- (void)setBottomBackupFeedAppendCount:(long long)arg1;
- (id)needCollectionDataItemList;
- (void)setNeedCollectionDataItemList:(id)arg1;
- (BOOL)hasRequestPlaceholderDataItems;
- (void)setHasRequestPlaceholderDataItems:(BOOL)arg1;
- (BOOL)appendingPlaceholderDataItems;
- (void)setAppendingPlaceholderDataItems:(BOOL)arg1;
- (id)waitFirstPageBlocks;
- (void)setWaitFirstPageBlocks:(id)arg1;
- (id)shareCachePool;
- (void)setShareCachePool:(id)arg1;
- (id)cacheOwnerID;
- (void)setCacheOwnerID:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
