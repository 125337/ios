@interface MMLiveCommentTableViewModel : NSObject <MMLiveCommentPubbleCellFrameChangeDelegate, MMFinderGroupLiveChatManagerExt, WCFinderLiveExt, POPAnimationDelegate, MMLiveDisplayMonitorExt, MMLiveCommentDataExt, WCLoopMetricsCollectorDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _enableScroll; // +0x8
    BOOL _directlyAppendForOverCount; // +0x9
    BOOL _disableCommentTableStyle; // +0xa
    BOOL _isControlFrequence; // +0xb
    BOOL _loadingFirstLocalData; // +0xc
    BOOL _loadingFirstRemoteData; // +0xd
    BOOL _hasLoadedPreComments; // +0xe
    BOOL _isInLive; // +0xf
    BOOL _scrollToInsertedIndexPath; // +0x10
    BOOL _pendingInsertCellExpandContent; // +0x11
    BOOL _isCurrentRefreshHistoryComment; // +0x12
    BOOL _isCancleTop; // +0x13
    BOOL _isCustomAppending; // +0x14
    BOOL _isTableDraging; // +0x15
    BOOL _isPreparingAppendingScroll; // +0x16
    BOOL _isInEndRefreshData; // +0x17
    BOOL _canAddNewTopItem; // +0x18
    BOOL _isAsyncCacluating; // +0x19
    BOOL _isRefreshDataForKeepProgress; // +0x1a
    BOOL _tableViewStopAutoScrollingDidEnd; // +0x1b
    BOOL _isReloading; // +0x1c
    BOOL _isScrolling; // +0x1d
    BOOL _isAutoScroll; // +0x1e
    BOOL _isEnterBackground; // +0x1f
    BOOL _isPubbleCellLongPressTouching; // +0x20
    BOOL _isTableViewNeedStopAutoScrolling; // +0x21
    BOOL _isCustomAppendData; // +0x22
    BOOL _enableCustomAppendData; // +0x23
    BOOL _startLoadActualComments; // +0x24
    FinderLiveBoxId * _boxIdObj; // +0x28
    MMLiveCommentDataItem * _trackingCommentItem; // +0x30
    long long _currentTrackingType; // +0x38
    NSMutableArray * _commentArray; // +0x40
    UITableView * _commentTableView; // +0x48
    UIView * _commentTableViewTopCommentContainerView; // +0x50
    UIView * _commentTableViewHotWordsContainerView; // +0x58
    unsigned long long _limitedLoadCommentsCount; // +0x60
    id /* block */ _tableReloadBlock; // +0x68
    id /* block */ _unReadUnpdateBlock; // +0x70
    id /* block */ _commentTrackingUnpdateBlock; // +0x78
    id /* block */ _privateCommentUnReadUnpdateBlock; // +0x80
    id /* block */ _refreshCallbackBlock; // +0x88
    id /* block */ _commentTopContainerHeightShouldChangeBlock; // +0x90
    id /* block */ _toastBlock; // +0x98
    id /* block */ _cellDidTapBlock; // +0xa0
    id /* block */ _cellDidLongPressedBlock; // +0xa8
    id /* block */ _tableViewDidTapBlock; // +0xb0
    id /* block */ _noticeToTopBlock; // +0xb8
    id /* block */ _willDisplayItemCallback; // +0xc0
    id /* block */ _checkEnableDirectDisplayCallback; // +0xc8
    id /* block */ _commentDirectDisplayAction; // +0xd0
    NSArray * _preAppendCommentItemArr; // +0xd8
    unsigned long long _previousDislayUnReadCount; // +0xe0
    NSMutableArray * _tableOperationQueue; // +0xe8
    long long _currentOperationType; // +0xf0
    MMLiveCommentDataItem * _limitStandardCommentItem; // +0xf8
    MMLiveCommentDataItem * _pendingInsertCommentItem; // +0x100
    NSIndexPath * _pendingInsertIndexPath; // +0x108
    double _lastRefreshWithAutoScrollTime; // +0x110
    long long _topSection; // +0x118
    NSTimer * _notifyTimer; // +0x120
    double _topSectionOffSet; // +0x128
    MMLiveTopCommentActionObj * _currentTopCommentActionObj; // +0x130
    NSMutableArray * _cacheLikeList; // +0x138
    double _lastUpdateInterval; // +0x140
    MMLiveCommentDataDictCache * _commentDataCache; // +0x148
    NSMutableArray * _likeMsgCache; // +0x150
    NSMutableArray * _currentAppendCellFrameList; // +0x158
    NSMutableArray * _prepareAppendScrollCellFrameList; // +0x160
    unsigned long long _currentCustomAppendCount; // +0x168
    long long _lastCustomAppendLine; // +0x170
    NSMutableDictionary * _reuseCellFrameCache; // +0x178
    unsigned long long _currOperationIndex; // +0x180
    NSMutableArray * _topComments; // +0x188
    MMLiveCommentTableViewTopItem * _currentTopItem; // +0x190
    MMTimer * _topCommentDisplayTimer; // +0x198
    MMFinderLiveCommentTableViewCell * _latestDisplayingCellThatNeedsTop; // +0x1a0
    CADisplayLink * _displayLink; // +0x1a8
    double _lastTimeInterval; // +0x1b0
    NSObject<OS_dispatch_queue> * _cellFrameCalculateQueue; // +0x1b8
    NSMutableArray * _directDisplayCommentList; // +0x1c0
    double _lagStandardIntervalTime; // +0x1c8
    double _normalStandardIntervalTime; // +0x1d0
    double _stableBufferAfterExtend; // +0x1d8
    unsigned long long _livePresentingKeepSeconds; // +0x1e0
    unsigned long long _lastestDisplayMetricsCheckNum_enterSmoothMode; // +0x1e8
    double _lastestDisplayMetricsUnnormalPercentLimit; // +0x1f0
    unsigned long long _smoothModeKeepSeconds; // +0x1f8
    unsigned long long _smoothModeMinimumKeepSeconds; // +0x200
    WCDisplayMetrics * _lastLagDisplayMetrics; // +0x208
    double _latestUnLagObserveDuration; // +0x210
    unsigned long long _lastestDisplayMetricsCheckNum_exitSmoothMode; // +0x218
    double _lastestDisplayMetricsNormalPercentLimit; // +0x220
    MMLiveCommentPerformanceStateReport * _currentStateReport; // +0x228
    MMLiveCommentPerformanceEventReport * _currentEventReport; // +0x230
    MMLiveTaskId * _taskId; // +0x238
    NSMutableArray * _commentCellFrameArray; // +0x240
    NSMutableArray * _commentDataArray; // +0x248
    NSMutableArray * _commentDataCellFrameArray; // +0x250
    double _lastCheckContentOffsetY; // +0x258
    MMLiveCommentDataItem * _lastDisplayCommentItem; // +0x260
    NSMutableArray * _deleteCommentArray; // +0x268
    long long _tableViewDisplayState; // +0x270
    double _maxCommentSeq; // +0x278
    double _logCommentTime; // +0x280
    NSMutableString * _logCommentStr; // +0x288
    WCLoopMetricsCollector * _cellFrameMetricsCollector; // +0x290
    MMLiveCommentVMState * _commentVMState; // +0x298
}
- (void)reportForFinderLiveCommentPerformanceEvent:(id)arg1 state:(id)arg2;
- (void)reportForFinderLiveCommentPerformanceState:(id)arg1;
- (id)getFinderLiveTask;
- (void)startPerformanceMonitorReport;
- (void)stopPerformanceMonitorReport;
- (void)liveDisplayMonitor:(id)arg1 didCollectMetrics:(id)arg2;
- (BOOL)checkDisplayMetricsIsLag:(id)arg1;
- (BOOL)isDisplayMetricsOverLagStandard:(id)arg1;
- (id)getMaxDisplayMetricsInCurrentInterval:(id)arg1;
- (id)getLatestDisplayMetrics:(unsigned long long)arg1 fromMonitor:(id)arg2;
- (void)increasePresentingKeepSeconds;
- (void)clearSrcForLiveMinimize;
- (void)enterSmoothMode;
- (void)exitSmoothMode;
- (void)updateCurrentModeAllKeepSeconds;
- (void)updateReportObjs;
- (BOOL)checkNeedEnterSmoothMode:(id)arg1;
- (BOOL)checkLatestDisplayMetricsOverUnnormalPercent:(id)arg1;
- (void)updateSmoothModeKeepSeconds;
- (void)increaseSmoothKeepSeconds;
- (BOOL)checkEnableExitSmoothMode:(id)arg1;
- (BOOL)checkLatestIsUnLag:(id)arg1;
- (BOOL)checkLatestDisplayMetricsLessNormalPercent:(id)arg1;
- (double)lagStandardIntervalTime;
- (double)normalStandardIntervalTime;
- (double)stableBufferAfterExtend;
- (unsigned long long)lastestDisplayMetricsCheckNum_enterSmoothMode;
- (double)lastestDisplayMetricsUnnormalPercentLimit;
- (double)latestUnLagObserveDuration;
- (unsigned long long)lastestDisplayMetricsCheckNum_exitSmoothMode;
- (double)lastestDisplayMetricsNormalPercentLimit;
- (unsigned long long)smoothModeMinimumKeepSeconds;
- (Class)commentTableViewCellFrameClass;
- (long long)commentCellFrameStyle;
- (id)initWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1 boxId:(id)arg2;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)initData;
- (void)startDisplayLink;
- (void)refreshWithDisplayLink:(id)arg1;
- (void)createCommentDataCache;
- (void)addOperationType:(long long)arg1;
- (void)insertOperationType:(long long)arg1 after:(long long)arg2;
- (BOOL)checkTypeNeedAdded:(long long)arg1;
- (void)operateCommentTable;
- (void)handleTableOperation:(long long)arg1;
- (BOOL)isOperationTypeEnableHandleWhenCommentUnableScroll:(long long)arg1;
- (void)logOperationStr:(long long)arg1;
- (void)clearAllOperation:(long long)arg1;
- (void)clearAllOperations;
- (void)endTableOperation:(long long)arg1;
- (void)autoIncreaseOperationIndex;
- (void)checkNeedContinueRefreshData;
- (long long)getUnMergedCount;
- (id)getUnMergedCommentArray;
- (BOOL)checkLimitParamValid;
- (void)limitCommentCnt;
- (void)delayEndRefreshData;
- (void)refreshData;
- (BOOL)disableLoadNewData;
- (void)judgeNeedReload:(BOOL *)arg1 needScrollToBottom:(BOOL *)arg2 withNewCommentArr:(id)arg3;
- (void)refreshWithNeedReload:(BOOL)arg1 needScrollToBottom:(BOOL)arg2 withNewCommentArr:(id)arg3 appendContentLines:(unsigned long long)arg4;
- (void)clearOverLimitLinesFromNewCommentArr:(id)arg1 newCellFrameArr:(id)arg2;
- (void)resetLoadFirstDataFlag;
- (unsigned long long)getCurrentAppendSpeed;
- (BOOL)checkNeedAppendToBottomForKeepProgress;
- (void)notifyRefreshedForKeepProgressIfNeeded;
- (void)checkPreCommentsHasLoad;
- (void)updatePreCommentsHasLoaded;
- (void)startLoadActualCommentData;
- (void)updateTableWithAppendComments:(id)arg1;
- (id)getLastAppendCellFrameArray:(unsigned long long)arg1;
- (void)reloadDataForCustomAppend:(id)arg1;
- (BOOL)judgeCellFramesCanCustomAppend:(id)arg1;
- (void)configCustomAppendParams:(id)arg1;
- (void)appendToBottomAfterRefresh;
- (void)scrollCommentTableViewToBottomAfterRefresh;
- (double)getAppendingCellFrameSumHeight;
- (void)startDelayForceEndRefreshData:(double)arg1;
- (void)updateTable:(BOOL)arg1 scrollToBottom:(BOOL)arg2 scrollAnimated:(BOOL)arg3;
- (void)endRefreshData;
- (unsigned long long)getCurrentNeedCustomAppendCellFrameCount;
- (void)forceEndRefreshData;
- (void)delayForceEndRefreshData;
- (void)clearCustomAppendingRecordData;
- (void)clearCurrentCustomAppendCellFrames;
- (void)cancelCustomAppendDelaySelectors;
- (void)resetData;
- (void)endOperationTypeAfterScrollToBottom;
- (void)insertCommentForRefresh;
- (void)preInsertComment;
- (void)onInsertLiveCommentFail;
- (void)directInsertPendingComment;
- (void)endDirectInsertOperation;
- (void)preAppendComment;
- (BOOL)checkEnablePreAppend;
- (unsigned long long)getLiveBusinessType;
- (void)appendCommentToMost:(BOOL)arg1;
- (void)appendCommentToTrackingItem:(BOOL)arg1;
- (BOOL)limitCommentCntWithStandardComment:(id)arg1;
- (void)updateTableForTrackingCommentItemWithDataUpdateType:(long long)arg1 scrollAnimated:(BOOL)arg2;
- (void)reloadTableForTrackingCommentItemWithDataUpdateType:(long long)arg1;
- (void)updateUnReadCount:(long long)arg1;
- (void)refreshUnReadCountTip;
- (void)tryToUpdateUnReadCount;
- (void)clearUnReadCount;
- (void)clearTrackingData;
- (void)reloadTable;
- (void)insertIndexPaths:(id)arg1;
- (void)updateLastLineCellFrame:(BOOL)arg1;
- (void)updateFirstLineCellFrame:(BOOL)arg1;
- (unsigned long long)appendLiveCommentArray:(BOOL)arg1;
- (id)lastValidCommentItem;
- (long long)lastValidCommentIndex;
- (BOOL)isCommentToBeDeleted:(id)arg1;
- (id)getRecentLoadedDataItemList:(unsigned long long)arg1 requiredMsgTypeList:(id)arg2 requiredMsgSubTypeList:(id)arg3;
- (void)updateTrackingItem:(id)arg1;
- (BOOL)enableAutoRefresh;
- (id)firstValidCommentItem;
- (unsigned long long)maxAppendDataCount;
- (void)handleForCommentContentViewDisplay:(BOOL)arg1;
- (void)logForNewComments:(id)arg1 append:(BOOL)arg2;
- (id)getAppendedLiveCommentArray:(unsigned long long)arg1;
- (void)appendToRefreshWithCommentArray:(id)arg1 commentCellFrameArray:(id)arg2 needClean:(BOOL)arg3;
- (id)appendLiveCommentArray:(BOOL)arg1 mostAppendCount:(unsigned long long)arg2;
- (BOOL)judgeIsDirectlyAppendWithUnMergeCount:(long long)arg1 scrollToBottom:(BOOL)arg2 mostCount:(unsigned long long)arg3;
- (unsigned long long)getCurrentMaxCommentAppendCount;
- (unsigned long long)getCurrentMaxMaxCommentAppendCountForKeepProgress;
- (id)appendLiveCommentArrayToTrackingCommentItemWithResultDataUpdateType:(long long *)arg1;
- (long long)getCommentDataUpdateTypeForTracking;
- (id)getAppendCellFrameArray:(id)arg1;
- (void)asyncCreateAppendCellFrameArray:(id)arg1 completion:(id /* block */)arg2;
- (id)createCellFrameArray:(id)arg1 withReuseCellFrameCache:(id)arg2;
- (id)createTableViewCellFrame:(id)arg1;
- (id)appendCellFrameArray:(id)arg1;
- (void)setBoundaryCellFrameInset;
- (void)resetBoundaryCellFrameInset;
- (id)insertCellFrameArray:(id)arg1 atIndexes:(id)arg2;
- (BOOL)insertLiveCommentArray;
- (long long)getCommentArrayOverLimitCount;
- (BOOL)isRemovedRangeContainVisible:(_NSRange)arg1;
- (void)checkFirstUnReadAtMeComment:(id)arg1;
- (void)checkTrackingCommentItemVisible;
- (void)updateUnReadAtMeSign;
- (void)checkAndUpdateTrackingDirection:(BOOL *)arg1;
- (void)checkCommentArrayOverLimitAndClear;
- (void)handleCommentsDelete;
- (void)changeLastDisplayComment:(id)arg1;
- (double)firstVisibleContentOffset;
- (void)reloadTableWithRestoreInitialOffset:(double)arg1;
- (unsigned long long)getCurrentUnReadCountForDisplay;
- (unsigned long long)getCurrentUnReadCount;
- (id)getCommentItemForIndexPath:(id)arg1;
- (unsigned long long)safeNumberOfRowsInSection:(long long)arg1;
- (unsigned long long)numberOfAllItems;
- (BOOL)isTableViewNeedAutoScrollToRefresh;
- (void)clearReuseCellFrameCache;
- (void)tryDisplayNextDirectComment;
- (void)clearAllPendingDirectDisplayMsgs:(unsigned int)arg1;
- (BOOL)isLoadCompleteWithReachTableBottom;
- (void)appendCommentToNext:(id)arg1;
- (id)directDisplayCommentList;
- (id)currentAppendCellFrameList;
- (id)prepareAppendScrollCellFrameList;
- (id)commentArray;
- (id)commentDataArray;
- (id)commentDataCellFrameArray;
- (id)commentCellFrameArray;
- (void)setEnableScroll:(BOOL)arg1;
- (id)tableOperationQueue;
- (id)deleteCommentArray;
- (BOOL)isCurrentDisplayStateValid;
- (id)commentVMState;
- (void)setIsCustomAppendData:(BOOL)arg1;
- (void)setEnableCustomAppendData:(BOOL)arg1;
- (id)reuseCellFrameCache;
- (void)setIsTableViewNeedStopAutoScrolling:(BOOL)arg1;
- (void)clearTableViewStopAutoScrollingEndFlagIfNeed;
- (void)stopAutoScroll;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)prepareTableViewCellForReuse:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)checkFinderCellFrameNeedCustomAppend:(id)arg1;
- (void)startCustomAppend:(id)arg1;
- (void)checkIsTrackingItemDisplay:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onMMLiveCommentDataUpdateForTaskId:(id)arg1 boxId:(id)arg2 isHistoryComment:(BOOL)arg3;
- (void)onMMLiveCommentDataInsertPreForTaskId:(id)arg1 boxId:(id)arg2;
- (void)onSelfMMLiveCommentDataCompleted:(id)arg1 forTaskId:(id)arg2;
- (void)onMMLiveCommentDataItemLikeInfoUpdate:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)onMMLiveCommentDataDeleted:(double)arg1 forTaskId:(id)arg2;
- (void)onMMLiveCommentDataResetForTaskId:(id)arg1 boxId:(id)arg2;
- (void)onMMLiveCommentDataLoadedForTaskId:(id)arg1 boxId:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setIsAutoScroll:(BOOL)arg1;
- (void)setIsScrolling:(BOOL)arg1;
- (BOOL)checkIsNeedPreInsertComments;
- (id)getPreInsertCheckIndexPath;
- (BOOL)checkIsPreAppendComments;
- (id)getPreAppendCheckIndexPath;
- (void)onDirectlyDisplayCommentsAppend:(id)arg1 taskId:(id)arg2 boxId:(id)arg3;
- (id)createCommentPubbleViewWithCommentItem:(id)arg1 taskId:(id)arg2;
- (double)tableViewHeightFromTopToRow:(long long)arg1;
- (long long)lastRowForVisibleContentOffsetY:(double)arg1;
- (double)getCellHeightFromCellFrame:(id)arg1;
- (id)appendCommentContentFromMySelf:(id)arg1 toDataItem:(id)arg2;
- (id)appendTickleCommentFromMySelfToDataItem:(id)arg1;
- (id)appendComboLiveRewardCommentWithReward:(id)arg1 rewardRecipientContact:(id)arg2 sendingComboId:(id)arg3 comboGiftCount:(unsigned long long)arg4 extInfo:(id)arg5;
- (void)appendCommentAddAssistantCommentForContact:(id)arg1;
- (void)appendCommentRemoveAssistantCommentForContact:(id)arg1;
- (void)appendCommentToBottom:(BOOL)arg1;
- (void)appendCommentToBottomForCommentContentChange;
- (void)appendCommentToFirstUnReadAtMeMsg:(BOOL)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (unsigned long long)currentCommentCount;
- (BOOL)isTableViewScrollToBottom;
- (BOOL)isTableViewScrollToBottomWithBottomOffset:(double)arg1;
- (void)scrollCommentTableViewToBottomAnimated:(BOOL)arg1;
- (void)scrollCommentTableViewToBottomAnimated:(BOOL)arg1 customAnimated:(BOOL)arg2 duration:(double)arg3;
- (BOOL)scrollCommentTableViewToBottomByIndexPathAnimated:(BOOL)arg1;
- (void)scrollCommentTableViewToBottomByOffsetAnimated:(BOOL)arg1 customAnimated:(BOOL)arg2 duration:(double)arg3;
- (void)scrollCommentTableViewToRow:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)checkAndStartRefresh;
- (void)handleTableViewPanGesture:(id)arg1;
- (BOOL)calculateCellFrameAsync;
- (id)commentDataMgr;
- (BOOL)hasLoadedLastItem;
- (BOOL)isLastCommentItemDisplaying;
- (BOOL)isAutoScrollToRefreshNewData;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)commentArrayAddObejects:(id)arg1 isNeedClean:(BOOL)arg2;
- (id)commentCellFrameArrayAddObejects:(id)arg1 isNeedClean:(BOOL)arg2;
- (void)commentCellFrameArrayAddCellFrames:(id)arg1 isNeedClean:(BOOL)arg2;
- (void)commentArrayInsertObejects:(id)arg1 atIndexes:(id)arg2;
- (id)commentCellFrameArrayInsertObejects:(id)arg1 atIndexes:(id)arg2;
- (id)commentArray:(id)arg1 itemForSection:(long long)arg2;
- (id)commentArray:(id)arg1 itemForRowAtIndexPath:(id)arg2;
- (id)commentCellFrameArray:(id)arg1 itemForSection:(long long)arg2;
- (id)commentCellFrameArray:(id)arg1 itemForRowAtIndexPath:(id)arg2;
- (void)commentDataArrayAddObejects:(id)arg1 isNeedClean:(BOOL)arg2;
- (void)commentDataCellFrameArrayAddObejects:(id)arg1 isNeedClean:(BOOL)arg2;
- (void)caculateCellToTopOffset:(id)arg1;
- (id)createHeaderViewWithSection:(long long)arg1;
- (double)caculateScrollToToP:(id)arg1;
- (BOOL)isHasNotice:(id)arg1;
- (BOOL)isCellFrameArrayHasNotice:(id)arg1;
- (BOOL)isRightNoticeCommentDataItem:(id)arg1;
- (BOOL)isRightNoticeCommentTableViewCellFrameItem:(id)arg1;
- (long long)getSelectIndexFromCommentArray:(id)arg1;
- (long long)getSelectIndexFromCommentCellFrameArray:(id)arg1;
- (BOOL)isCommentPubbleCellToTop:(id)arg1;
- (void)executeNoticeToTopBlockWithTop:(BOOL)arg1 height:(double)arg2;
- (void)stopTimer;
- (void)noticeToTopTimer;
- (void)resumeNoticeToTopTimer;
- (void)resumeTimer;
- (void)doTimer;
- (void)handleTimeoutEndTop;
- (void)refreshForEndTopDirectly:(BOOL)arg1 completion:(id /* block */)arg2;
- (long long)getIndexWithcellFrame:(id)arg1;
- (void)commentPubbleCellFrameChange:(BOOL)arg1 cellFrame:(id)arg2;
- (void)handleExpandEndTop;
- (void)resetCurrentTopCommentActionObj;
- (int)getIndexWithIndexPath:(id)arg1 array:(id)arg2;
- (void)onMMFinderGroupLiveChatUpdateMessageAction:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)likeLikstDelayUpdate;
- (BOOL)judgeOverTime;
- (double)getUserStaySecond;
- (void)cacheLikeListWithUserInfo:(id)arg1;
- (void)onMMFinderGroupLiveChatUpdateLikeMessage:(id)arg1 userInfo:(id)arg2;
- (id)getUpdateDataArray:(id)arg1;
- (id)updateCommentItemWithMsgItem:(id)arg1;
- (id)getIndexPathsWithVisibleRows:(id)arg1 updateDataArray:(id)arg2;
- (BOOL)isNeedUpdateVisible:(id)arg1 updateDataArray:(id)arg2;
- (void)commentLikeUpdateTableview:(id)arg1;
- (void)updateLikeInfoForRowsWithoutReloading:(id)arg1;
- (id)cacheLikeList;
- (void)onPostFinderLiveAppMessageSuccess:(id)arg1 boxId:(id)arg2 serverMsgId:(unsigned long long)arg3 localClientMsgId:(id)arg4 userInfo:(id)arg5;
- (void)onGetFinderLiveAppMsgListWithTaskId:(id)arg1 appMsgList:(id)arg2 isHistoryMsg:(BOOL)arg3;
- (BOOL)forceStartLoadActualCommentDataIfEnable;
- (void)onMMFinderGroupLiveChatBackFillsMessage:(id)arg1 clientMsgId:(id)arg2 backFillSeq:(unsigned long long)arg3 boxId:(id)arg4;
- (void)syncAndCleanCachedLikeStatus;
- (void)handleAutoScrollStateChanged;
- (void)addCellFrameToTopQueue:(id)arg1 displayDuraion:(double)arg2;
- (double)preferredHeightForTopCommentContainerView;
- (void)handleTopCommentChanges;
- (void)insertTopItemToCommentTable:(id)arg1;
- (void)clearAllTopItems;
- (BOOL)canAddNewTopItem;
- (void)pop_animationDidStart:(id)arg1;
- (void)pop_animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)boxIdObj;
- (void)setBoxIdObj:(id)arg1;
- (id)trackingCommentItem;
- (void)setTrackingCommentItem:(id)arg1;
- (long long)currentTrackingType;
- (void)setCurrentTrackingType:(long long)arg1;
- (void)setCommentArray:(id)arg1;
- (id)commentTableView;
- (void)setCommentTableView:(id)arg1;
- (id)commentTableViewTopCommentContainerView;
- (void)setCommentTableViewTopCommentContainerView:(id)arg1;
- (id)commentTableViewHotWordsContainerView;
- (void)setCommentTableViewHotWordsContainerView:(id)arg1;
- (BOOL)enableScroll;
- (BOOL)directlyAppendForOverCount;
- (void)setDirectlyAppendForOverCount:(BOOL)arg1;
- (unsigned long long)limitedLoadCommentsCount;
- (void)setLimitedLoadCommentsCount:(unsigned long long)arg1;
- (id /* block */)tableReloadBlock;
- (void)setTableReloadBlock:(id /* block */)arg1;
- (id /* block */)unReadUnpdateBlock;
- (void)setUnReadUnpdateBlock:(id /* block */)arg1;
- (id /* block */)commentTrackingUnpdateBlock;
- (void)setCommentTrackingUnpdateBlock:(id /* block */)arg1;
- (id /* block */)privateCommentUnReadUnpdateBlock;
- (void)setPrivateCommentUnReadUnpdateBlock:(id /* block */)arg1;
- (id /* block */)refreshCallbackBlock;
- (void)setRefreshCallbackBlock:(id /* block */)arg1;
- (id /* block */)commentTopContainerHeightShouldChangeBlock;
- (void)setCommentTopContainerHeightShouldChangeBlock:(id /* block */)arg1;
- (id /* block */)toastBlock;
- (void)setToastBlock:(id /* block */)arg1;
- (id /* block */)cellDidTapBlock;
- (void)setCellDidTapBlock:(id /* block */)arg1;
- (id /* block */)cellDidLongPressedBlock;
- (void)setCellDidLongPressedBlock:(id /* block */)arg1;
- (id /* block */)tableViewDidTapBlock;
- (void)setTableViewDidTapBlock:(id /* block */)arg1;
- (id /* block */)noticeToTopBlock;
- (void)setNoticeToTopBlock:(id /* block */)arg1;
- (id /* block */)willDisplayItemCallback;
- (void)setWillDisplayItemCallback:(id /* block */)arg1;
- (id /* block */)checkEnableDirectDisplayCallback;
- (void)setCheckEnableDirectDisplayCallback:(id /* block */)arg1;
- (id /* block */)commentDirectDisplayAction;
- (void)setCommentDirectDisplayAction:(id /* block */)arg1;
- (BOOL)disableCommentTableStyle;
- (void)setDisableCommentTableStyle:(BOOL)arg1;
- (BOOL)isControlFrequence;
- (void)setIsControlFrequence:(BOOL)arg1;
- (BOOL)loadingFirstLocalData;
- (void)setLoadingFirstLocalData:(BOOL)arg1;
- (BOOL)loadingFirstRemoteData;
- (void)setLoadingFirstRemoteData:(BOOL)arg1;
- (BOOL)hasLoadedPreComments;
- (void)setHasLoadedPreComments:(BOOL)arg1;
- (id)preAppendCommentItemArr;
- (void)setPreAppendCommentItemArr:(id)arg1;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg1;
- (unsigned long long)previousDislayUnReadCount;
- (void)setPreviousDislayUnReadCount:(unsigned long long)arg1;
- (void)setTableOperationQueue:(id)arg1;
- (long long)currentOperationType;
- (void)setCurrentOperationType:(long long)arg1;
- (id)limitStandardCommentItem;
- (void)setLimitStandardCommentItem:(id)arg1;
- (id)pendingInsertCommentItem;
- (void)setPendingInsertCommentItem:(id)arg1;
- (id)pendingInsertIndexPath;
- (void)setPendingInsertIndexPath:(id)arg1;
- (BOOL)scrollToInsertedIndexPath;
- (void)setScrollToInsertedIndexPath:(BOOL)arg1;
- (BOOL)pendingInsertCellExpandContent;
- (void)setPendingInsertCellExpandContent:(BOOL)arg1;
- (double)lastRefreshWithAutoScrollTime;
- (void)setLastRefreshWithAutoScrollTime:(double)arg1;
- (BOOL)isCurrentRefreshHistoryComment;
- (void)setIsCurrentRefreshHistoryComment:(BOOL)arg1;
- (BOOL)isCancleTop;
- (void)setIsCancleTop:(BOOL)arg1;
- (long long)topSection;
- (void)setTopSection:(long long)arg1;
- (id)notifyTimer;
- (void)setNotifyTimer:(id)arg1;
- (double)topSectionOffSet;
- (void)setTopSectionOffSet:(double)arg1;
- (id)currentTopCommentActionObj;
- (void)setCurrentTopCommentActionObj:(id)arg1;
- (void)setCacheLikeList:(id)arg1;
- (double)lastUpdateInterval;
- (void)setLastUpdateInterval:(double)arg1;
- (id)commentDataCache;
- (void)setCommentDataCache:(id)arg1;
- (id)likeMsgCache;
- (void)setLikeMsgCache:(id)arg1;
- (void)setCurrentAppendCellFrameList:(id)arg1;
- (void)setPrepareAppendScrollCellFrameList:(id)arg1;
- (unsigned long long)currentCustomAppendCount;
- (void)setCurrentCustomAppendCount:(unsigned long long)arg1;
- (BOOL)isCustomAppending;
- (void)setIsCustomAppending:(BOOL)arg1;
- (BOOL)isTableDraging;
- (void)setIsTableDraging:(BOOL)arg1;
- (BOOL)isPreparingAppendingScroll;
- (void)setIsPreparingAppendingScroll:(BOOL)arg1;
- (long long)lastCustomAppendLine;
- (void)setLastCustomAppendLine:(long long)arg1;
- (void)setReuseCellFrameCache:(id)arg1;
- (unsigned long long)currOperationIndex;
- (void)setCurrOperationIndex:(unsigned long long)arg1;
- (BOOL)isInEndRefreshData;
- (void)setIsInEndRefreshData:(BOOL)arg1;
- (id)topComments;
- (void)setTopComments:(id)arg1;
- (id)currentTopItem;
- (void)setCurrentTopItem:(id)arg1;
- (id)topCommentDisplayTimer;
- (void)setTopCommentDisplayTimer:(id)arg1;
- (void)setCanAddNewTopItem:(BOOL)arg1;
- (id)latestDisplayingCellThatNeedsTop;
- (void)setLatestDisplayingCellThatNeedsTop:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)lastTimeInterval;
- (void)setLastTimeInterval:(double)arg1;
- (id)cellFrameCalculateQueue;
- (void)setCellFrameCalculateQueue:(id)arg1;
- (BOOL)isAsyncCacluating;
- (void)setIsAsyncCacluating:(BOOL)arg1;
- (BOOL)isRefreshDataForKeepProgress;
- (void)setIsRefreshDataForKeepProgress:(BOOL)arg1;
- (void)setDirectDisplayCommentList:(id)arg1;
- (BOOL)tableViewStopAutoScrollingDidEnd;
- (void)setTableViewStopAutoScrollingDidEnd:(BOOL)arg1;
- (double)lagStandardIntervalTime;
- (double)normalStandardIntervalTime;
- (double)stableBufferAfterExtend;
- (unsigned long long)livePresentingKeepSeconds;
- (void)setLivePresentingKeepSeconds:(unsigned long long)arg1;
- (unsigned long long)lastestDisplayMetricsCheckNum_enterSmoothMode;
- (double)lastestDisplayMetricsUnnormalPercentLimit;
- (unsigned long long)smoothModeKeepSeconds;
- (void)setSmoothModeKeepSeconds:(unsigned long long)arg1;
- (unsigned long long)smoothModeMinimumKeepSeconds;
- (id)lastLagDisplayMetrics;
- (void)setLastLagDisplayMetrics:(id)arg1;
- (double)latestUnLagObserveDuration;
- (unsigned long long)lastestDisplayMetricsCheckNum_exitSmoothMode;
- (double)lastestDisplayMetricsNormalPercentLimit;
- (id)currentStateReport;
- (void)setCurrentStateReport:(id)arg1;
- (id)currentEventReport;
- (void)setCurrentEventReport:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isReloading;
- (void)setIsReloading:(BOOL)arg1;
- (void)setCommentCellFrameArray:(id)arg1;
- (void)setCommentDataArray:(id)arg1;
- (void)setCommentDataCellFrameArray:(id)arg1;
- (double)lastCheckContentOffsetY;
- (void)setLastCheckContentOffsetY:(double)arg1;
- (BOOL)isScrolling;
- (BOOL)isAutoScroll;
- (BOOL)isEnterBackground;
- (void)setIsEnterBackground:(BOOL)arg1;
- (id)lastDisplayCommentItem;
- (void)setLastDisplayCommentItem:(id)arg1;
- (void)setDeleteCommentArray:(id)arg1;
- (BOOL)isPubbleCellLongPressTouching;
- (void)setIsPubbleCellLongPressTouching:(BOOL)arg1;
- (BOOL)isTableViewNeedStopAutoScrolling;
- (long long)tableViewDisplayState;
- (void)setTableViewDisplayState:(long long)arg1;
- (double)maxCommentSeq;
- (void)setMaxCommentSeq:(double)arg1;
- (double)logCommentTime;
- (void)setLogCommentTime:(double)arg1;
- (id)logCommentStr;
- (void)setLogCommentStr:(id)arg1;
- (BOOL)isCustomAppendData;
- (BOOL)enableCustomAppendData;
- (BOOL)startLoadActualComments;
- (void)setStartLoadActualComments:(BOOL)arg1;
- (id)cellFrameMetricsCollector;
- (void)setCellFrameMetricsCollector:(id)arg1;
- (void)setCommentVMState:(id)arg1;
- (void).cxx_destruct;
@end

