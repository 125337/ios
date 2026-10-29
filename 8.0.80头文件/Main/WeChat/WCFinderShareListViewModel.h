@interface WCFinderShareListViewModel : NSObject <WCFinderShareFeedDataProviderDelegate, MMLiveTaskMgrExt, WCFinderDataItemExt>
{
    BOOL _firstFeedLoaded; // +0x8
    BOOL _executeFeedEnterAction; // +0x9
    int _commentScene; // +0xc
    id <WCFinderShareListViewModelDelegate> _delegate; // +0x10
    unsigned long long _refreshTime; // +0x18
    NSMutableSet * _showlikeInduceContentTidSet; // +0x20
    WCFinderPushFeedViewParams * _funcParams; // +0x28
    NSString * _moreRelatedTips; // +0x30
    long long _partialExposeSection; // +0x38
    NSString * _needCleanAfterAppendData; // +0x40
    WCFinderSearchStatReportShim * _searchStatCollecter; // +0x48
    WCFinderEnhanceTriggerRecordManager * _enhanceTriggerRecordManager; // +0x50
    WCFinderDataItem * _sharedDataItem; // +0x58
    unsigned long long _requestScene; // +0x60
    WCFinderShareListReportModel * _reportModel; // +0x68
    NSMutableDictionary * _enhancedByItemDict; // +0x70
    NSData * _enhanceLastBuffer; // +0x78
    MMTimer * _detectionValidityTimer; // +0x80
    NSData * _lastCheckBuffer; // +0x88
    unsigned long long _lastdetectionValidityTimestamp; // +0x90
    WCFinderShareFeedDataProvider * _dataProvider; // +0x98
}
+ (BOOL)shouldShowGuideNextBubble:(id)arg1 curProgress:(double)arg2;
+ (BOOL)relatedRecommendTipsValid:(id)arg1;
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 dataScene:(id)arg3 commentScene:(int)arg4 requestScene:(unsigned long long)arg5 reportModel:(id)arg6 funcParams:(id)arg7;
- (id)initWithEncrytedObjectidTid:(id)arg1 nonceID:(id)arg2 dataScene:(id)arg3 commentScene:(int)arg4 requestScene:(unsigned long long)arg5 reportModel:(id)arg6 funcParams:(id)arg7;
- (id)_initWithTid:(id)arg1 encrytedObjectidTid:(id)arg2 nonceID:(id)arg3 dataScene:(id)arg4 commentScene:(int)arg5 requestScene:(unsigned long long)arg6 reportModel:(id)arg7 funcParams:(id)arg8;
- (id)feedArray;
- (void)insertTopBackupFeed;
- (void)appendBottomBackupFeed;
- (void)thankForShareWithStatus:(BOOL)arg1;
- (id)thankInfoForTid:(id)arg1;
- (id)getSharerUsernameForTid:(id)arg1;
- (BOOL)possibleRecommendThankItemForTid:(id)arg1;
- (id)sharePublishID;
- (void)dealloc;
- (id)createProvoderParamsTid:(id)arg1 encrytedObjectidTid:(id)arg2 nonceID:(id)arg3 guideBubbleTipsInfo:(id)arg4;
- (WCFinderShareDataState)dataState;
- (void)setStateFlag:(unsigned long long)arg1;
- (id)enterTid;
- (id)relatedRecommendTips;
- (id)nextCacheGuideDataItem;
- (BOOL)commitCacheGuideDataItem:(id)arg1;
- (id)lockedCacheGuideFeedID;
- (void)requestCacheGuideNextWithReason:(id)arg1;
- (void)cacheGuideDidFocusTid:(id)arg1;
- (void)validateCacheGuide;
- (void)onDataProviderCacheGuideInvalidated;
- (void)resetRelatedRecommendTips;
- (void)ensureFirstPageLoaded:(id /* block */)arg1;
- (void)requestData;
- (void)requestNextPageData;
- (BOOL)allowReqeustPrePageData;
- (void)requestPrePageData;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMWithIndex:(unsigned long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (void)cacheCurFeedIfNeeded;
- (BOOL)checkShareRemindFeedCache;
- (id)enhanceTriggerRecordManager;
- (BOOL)isPreviewScene;
- (void)setSharedDataItem:(id)arg1;
- (BOOL)isSourceValid;
- (id)showlikeInduceContentTidSet;
- (id)enhancedByItemDict;
- (BOOL)showShowEnableRecommendView;
- (id)contentMediaIndexPathWithTid:(id)arg1;
- (void)onFinderDataItemMediaURLIsExpired:(id)arg1;
- (void)deleteFeedWithIds:(id)arg1;
- (BOOL)shouldShowGuideNextBubbleCurProgress:(double)arg1;
- (void)onDataProviderLoadStateChanged;
- (void)onDataProviderPlaceholderDataInResponse;
- (id)focusedFeedIDForDataProvider:(id)arg1;
- (void)onDataProvider:(id)arg1 onFirstPageResp:(id)arg2;
- (int)feedViewControllerScene;
- (id)getRelatedContentVMWithTabType:(int)arg1;
- (id)getRelatedCardLastBufferWithTabType:(int)arg1;
- (int)getRelatedCardGuideTabTypeWithCardTid:(id)arg1;
- (id)minimizeBizName;
- (void)startDetectionFeedsValidity;
- (void)stopDetectionFeedsValidity;
- (void)detectionFeedsValidity;
- (void)_addDetectionFeedsValidityTimerWithTimeInterval:(double)arg1;
- (id)cacheLogContext;
- (void)markLoadingFluencyVisible;
- (id)takeLoadingFluencyInfoForCycle:(id)arg1;
- (void)onDataProvider:(id)arg1 loadCycleDidChange:(id)arg2;
- (void)reportLoadingFluencyInfoWithStatus:(unsigned long long)arg1 reason:(id)arg2;
- (void)triggerEnhanceListWithContentVM:(id)arg1 eventType:(int)arg2 streamType:(int)arg3;
- (void)triggerEnhanceListWithContentVM:(id)arg1 eventType:(int)arg2 streamType:(int)arg3 optionalParams:(id)arg4;
- (void)handleRefreshInfo:(id)arg1 feedID:(id)arg2;
- (void)disposeEnhanceInsertFeedsWithContentVM:(id)arg1 eventType:(int)arg2;
- (void)onFeedVMInsertEnhanceList:(id)arg1 targetTid:(id)arg2;
- (void)collectUnreadDataItems:(id)arg1;
- (void)closeCacheSession;
- (unsigned long long)getFirstUnExposedItemIndex;
- (id)getAllUnReadLiveFeed;
- (id)collectionListProviderForContentVM:(id)arg1;
- (void)onLiveTaskDisliked:(id)arg1;
- (void)onFinderDataItemDeleteFromScene:(int)arg1 tid:(id)arg2 toastWording:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (void)setShowlikeInduceContentTidSet:(id)arg1;
- (id)funcParams;
- (void)setFuncParams:(id)arg1;
- (id)moreRelatedTips;
- (void)setMoreRelatedTips:(id)arg1;
- (BOOL)firstFeedLoaded;
- (void)setFirstFeedLoaded:(BOOL)arg1;
- (long long)partialExposeSection;
- (void)setPartialExposeSection:(long long)arg1;
- (id)needCleanAfterAppendData;
- (void)setNeedCleanAfterAppendData:(id)arg1;
- (BOOL)executeFeedEnterAction;
- (void)setExecuteFeedEnterAction:(BOOL)arg1;
- (id)searchStatCollecter;
- (void)setSearchStatCollecter:(id)arg1;
- (void)setEnhanceTriggerRecordManager:(id)arg1;
- (id)sharedDataItem;
- (unsigned long long)requestScene;
- (void)setRequestScene:(unsigned long long)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (void)setEnhancedByItemDict:(id)arg1;
- (id)enhanceLastBuffer;
- (void)setEnhanceLastBuffer:(id)arg1;
- (id)detectionValidityTimer;
- (void)setDetectionValidityTimer:(id)arg1;
- (id)lastCheckBuffer;
- (void)setLastCheckBuffer:(id)arg1;
- (unsigned long long)lastdetectionValidityTimestamp;
- (void)setLastdetectionValidityTimestamp:(unsigned long long)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (void).cxx_destruct;
@end
