@interface WCFinderFullFeedCommonViewModel : NSObject <WCFinderFullFeedCommonViewModelProtocol>
{
    BOOL _hasDisplayRedDotObject; // +0x8
    BOOL _hasDisplayLastExposeFeed; // +0x9
    BOOL _shouldPreserveFeeds; // +0xa
    BOOL _isRequesting; // +0xb
    BOOL _stopFetchNextPage; // +0xc
    id <WCFinderFullFeedCommonVMDelegate> _delegate; // +0x10
    NSMutableArray * _allDataItems; // +0x18
    NSMutableSet * _tidContainSet; // +0x20
    NSData * _lastBuff; // +0x28
    NSArray * _unreadCacheContentVMs; // +0x30
    NSString * _uiReportSceneKey; // +0x38
    NSArray * _feedCacheArray; // +0x40
    unsigned long long _placeHolderDisplayFlag; // +0x48
    NSString * _needCleanFeedIDAfterAppend; // +0x50
    NSString * _lastScrollReportFPSTid; // +0x58
    unsigned long long _lastScrollEndDraggingTimestamp; // +0x60
    unsigned long long _refreshTime; // +0x68
    NSString * _lastStayFeedTidBeforeReload; // +0x70
    FinderCommByPass * _commByPass; // +0x78
    unsigned long long _preFetchNextPageIndex; // +0x80
    NSString * _requestReportSceneKey; // +0x88
    unsigned long long _newFeedIndex; // +0x90
    long long _partialHotAreaSection; // +0x98
    NSString * _lastStayFeedTidBeforeTopRefresh; // +0xa0
    long long _partialExposeSection; // +0xa8
    NSMutableDictionary * _enhanceGuideTipsDic; // +0xb0
    MMTimer * _detectionValidityTimer; // +0xb8
    NSData * _lastCheckBuffer; // +0xc0
    unsigned long long _lastdetectionValidityTimestamp; // +0xc8
}
- (id)init;
- (long long)firstFeedNum;
- (unsigned long long)dataItemStartSection;
- (BOOL)isDataEmpty;
- (unsigned long long)getAllDataItemsCount;
- (BOOL)isDataIndexPath:(id)arg1;
- (BOOL)isDataSection:(unsigned long long)arg1;
- (id)enhanceGuideTipsDic;
- (id)contentVMAtSection:(unsigned long long)arg1;
- (long long)getFeedSectionNum:(long long)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (id)contentMediaIndexPathWithTid:(id)arg1;
- (void)deleteFeedWithTid:(id)arg1;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)onFinderContentVMDelete:(id)arg1;
- (BOOL)isSplitBubbleLayoutVMAtSection:(unsigned long long)arg1;
- (unsigned long long)sectionOfTid:(id)arg1;
- (unsigned long long)feedIndexOfTid:(id)arg1;
- (void)realRemoveContentVMFromDataSource:(id)arg1;
- (void)realRemoveContentVMDataSourceWithSectionIndexSet:(id)arg1;
- (id)getAllUnReadLiveFeed;
- (unsigned long long)getFirstUnExposedItemIndex;
- (unsigned long long)getLastExposedItemsIndex;
- (void)collectUnreadDataItems:(id)arg1;
- (int)tabType;
- (id)lastBuffer;
- (int)feedViewControllerScene;
- (BOOL)isValiadServerDataItem:(id)arg1;
- (BOOL)insertPopupContentVM:(id)arg1 aboveFeedId:(id)arg2;
- (long long)indexAtContentVMTid:(id)arg1;
- (BOOL)containTargetFeedId:(id)arg1;
- (id)getFeedReportInfoAtCellSection:(long long)arg1;
- (id)getFeedReportInfoForContentVM:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1;
- (id)convertDataItemToContentVM:(id)arg1;
- (id)getLocalContentVMs:(id)arg1;
- (void)updateFluencyReportInfoForGetCommentDetail:(id)arg1;
- (void)updateTabFeedCacheWithTid:(id)arg1;
- (void)startDetectionFeedsValidity;
- (void)stopDetectionFeedsValidity;
- (void)detectionFeedsValidity;
- (void)checkFeedsValidityWithType:(int)arg1;
- (void)_addDetectionFeedsValidityTimerWithTimeInterval:(double)arg1;
- (id)getLocalBackupFeedsWithCount:(unsigned long long)arg1;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)contentUnlikeFeedback:(id)arg1;
- (void)triggerEnhanceListWithContentVM:(id)arg1 eventType:(int)arg2 streamType:(int)arg3;
- (void)triggerEnhanceListWithContentVM:(id)arg1 eventType:(int)arg2 streamType:(int)arg3 optionalParams:(id)arg4;
- (void)enhanceFeedByLatestPostInfo;
- (void)addEnhanceFeedGuideFeedId:(id)arg1 recommendTips:(id)arg2;
- (id)getEnhanceFeedGuideTipsByFeedId:(id)arg1;
- (void)removeEnhanceFeedGuideTipsByFeedId:(id)arg1;
- (void)handleComingEnhanceList:(id)arg1 withStreamType:(int)arg2 eventType:(int)arg3 targetContentVM:(id)arg4 relatedRecommendTips:(id)arg5;
- (void)disposeEnhanceInsertFeedsWithContentVM:(id)arg1 eventType:(int)arg2;
- (void)changeFirstItemToMuteBeforeRefresh;
- (void)loadingFirstPageData;
- (BOOL)hasFetchEnterData;
- (void)refreshLatestDataByEnter:(BOOL)arg1;
- (void)clearDataByServerRequestWithHasNewFeed:(BOOL)arg1;
- (id)processServerData:(id)arg1;
- (void)stopAllPreloadVideoItems;
- (id)vaildTopIndexPath;
- (void)startPreloadVideoItemsWithContentVMArray:(id)arg1 playedContentVMArray:(id)arg2;
- (unsigned long long)sectionNums;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (void)updateTimelineCachePageWithTid:(id)arg1;
- (void)loadingNextPagePageData;
- (id)firstPrefetchDataItem;
- (void)deleteAllFeedAfterTid:(id)arg1;
- (void)markShouldRecordEnterIndexPath;
- (void)recordEnterIndexPathIfNeeded;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (id)streamLoadingInfoByExitVC;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)insertFinderEnhanceContentVM:(id)arg1 location:(unsigned long long)arg2;
- (void)removeFinderContentVMWithTid:(id)arg1;
- (void)deleteAndCollectAllUnreadItems;
- (void)clearUnreadCacheContentVMs;
- (void)appendFinderContentVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)allDataItems;
- (void)setAllDataItems:(id)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)unreadCacheContentVMs;
- (void)setUnreadCacheContentVMs:(id)arg1;
- (BOOL)hasDisplayRedDotObject;
- (void)setHasDisplayRedDotObject:(BOOL)arg1;
- (BOOL)hasDisplayLastExposeFeed;
- (void)setHasDisplayLastExposeFeed:(BOOL)arg1;
- (id)uiReportSceneKey;
- (void)setUiReportSceneKey:(id)arg1;
- (id)feedCacheArray;
- (void)setFeedCacheArray:(id)arg1;
- (BOOL)shouldPreserveFeeds;
- (void)setShouldPreserveFeeds:(BOOL)arg1;
- (unsigned long long)placeHolderDisplayFlag;
- (void)setPlaceHolderDisplayFlag:(unsigned long long)arg1;
- (id)needCleanFeedIDAfterAppend;
- (void)setNeedCleanFeedIDAfterAppend:(id)arg1;
- (id)lastScrollReportFPSTid;
- (void)setLastScrollReportFPSTid:(id)arg1;
- (unsigned long long)lastScrollEndDraggingTimestamp;
- (void)setLastScrollEndDraggingTimestamp:(unsigned long long)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)lastStayFeedTidBeforeReload;
- (void)setLastStayFeedTidBeforeReload:(id)arg1;
- (id)commByPass;
- (void)setCommByPass:(id)arg1;
- (unsigned long long)preFetchNextPageIndex;
- (void)setPreFetchNextPageIndex:(unsigned long long)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (BOOL)stopFetchNextPage;
- (void)setStopFetchNextPage:(BOOL)arg1;
- (id)requestReportSceneKey;
- (void)setRequestReportSceneKey:(id)arg1;
- (unsigned long long)newFeedIndex;
- (void)setNewFeedIndex:(unsigned long long)arg1;
- (long long)partialHotAreaSection;
- (void)setPartialHotAreaSection:(long long)arg1;
- (id)lastStayFeedTidBeforeTopRefresh;
- (void)setLastStayFeedTidBeforeTopRefresh:(id)arg1;
- (long long)partialExposeSection;
- (void)setPartialExposeSection:(long long)arg1;
- (void)setEnhanceGuideTipsDic:(id)arg1;
- (id)detectionValidityTimer;
- (void)setDetectionValidityTimer:(id)arg1;
- (id)lastCheckBuffer;
- (void)setLastCheckBuffer:(id)arg1;
- (unsigned long long)lastdetectionValidityTimestamp;
- (void)setLastdetectionValidityTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
