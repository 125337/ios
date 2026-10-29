@interface WCTimelineMissReadMgr : MMUserService <IWCTimeLineViewControllerExt, IExptServiceExt, IWCTimelineMgrExt, IWCTimeLineSessionExt, MMServiceProtocol>
{
    BOOL _isSupport; // +0x8
    BOOL _usePlainExposureMethod; // +0x9
    BOOL _minContinueFeedsSatisfy; // +0xa
    BOOL _isFakeScrollingToUnread; // +0xb
    BOOL _isJumpToFirstMissReadRecord; // +0xc
    NSMutableSet * _exposureFeeds; // +0x10
    NSMutableArray * _missReadRecordList; // +0x18
    unsigned long long _recordMinFeeds; // +0x20
    unsigned long long _recordMinInterval; // +0x28
    unsigned long long _jumpMinSkipFeeds; // +0x30
    long long _jumpBtnPositionOffset; // +0x38
    unsigned long long _jumpBtnExposureInterval; // +0x40
    unsigned long long _weishangMaxPercent; // +0x48
    unsigned long long _minContinueFeeds; // +0x50
    WCDataItem * _earlierContentTipsItem; // +0x58
    unsigned long long _itemIdJumped; // +0x60
    WCTimelineMissReadRecord * _jumpMissReadRecord; // +0x68
    NSArray * _allFeeds; // +0x70
    WCTimelineBatchGetFeedsCGI * _batchGetFeedsCGI; // +0x78
    NSSet * _invisibleFeedIds; // +0x80
    double _invisibilityCheckedTime; // +0x88
    WCTimelineMissReadJumpBtnClickReportRecord * _clickReportRecord; // +0x90
    WCTimelineMissReadBreakLayerExposureRecord * _missReadBtnExposureRecord; // +0x98
}
- (void)updateFirstPageEndForJumBtnExposure:(id)arg1;
- (void)updateJumBtnExposureJumpBtnRefItemId:(unsigned long long)arg1;
- (void)updateJumBtnExposureJumpBtnId:(unsigned long long)arg1 withRefItemId:(unsigned long long)arg2;
- (void)exposureFeedIdForJumpBtnExposure:(unsigned long long)arg1;
- (void)willDisplayFeedForJumpBtnExposure:(id)arg1;
- (void)jumpBtnClickForJumBtnExposure;
- (void)jumpBtnExposureReport;
- (void)logCurrentFirstPageFetch:(BOOL)arg1 newBreakLayerID:(unsigned long long)arg2 preCreateBreakLayerFeedCnt:(unsigned long long)arg3 preCreateBreakLayerWsFeedCnt:(unsigned long long)arg4;
- (void)realjumpBtnExposureReport:(id)arg1 exposure:(id)arg2 jumpBreakLayer:(id)arg3 seq:(unsigned int)arg4 subSeq:(unsigned int)arg5 subSeqSum:(unsigned long long)arg6;
- (void)jumpBtnClickReportBegin;
- (void)jumpBtnClickReportExposeId:(id)arg1 record:(id)arg2;
- (void)jumpBtnClickReportEnd;
- (void)realJumpBtnClickReport:(id)arg1 exposure:(id)arg2 seq:(unsigned int)arg3 subSeq:(unsigned int)arg4 subSeqSum:(unsigned long long)arg5;
- (id)getEarlierContentTipsItem;
- (id)getJumpMissReadRecord;
- (unsigned long long)getMinMissReadFeedId;
- (void)updateJumpMissReadRecord;
- (BOOL)isWeiShangRecord:(id)arg1;
- (void)preUpdateFeedsForMissReadRecord;
- (void)initDataWhenSupport;
- (void)clearDataWhenNotSupport;
- (void)saveData;
- (void)saveExposureFeeds;
- (void)loadExposureFeeds;
- (void)calcNewFeedIds:(id)arg1 newWeishangFeedIds:(id)arg2 topId:(unsigned long long)arg3 datas:(id)arg4 feedIds:(id)arg5 feedFlags:(id)arg6;
- (void)updateMissReadRecords:(id)arg1 feedFlags:(id)arg2;
- (void)clearInvalidMissReadRecords;
- (BOOL)isValidRecord:(id)arg1;
- (void)updateRecordFirstCreatTime:(id)arg1;
- (void)updateMinContinueFeedsSatisfy:(id)arg1 lastTopId:(unsigned long long)arg2;
- (void)updateExptConfig;
- (id)dynamicConfigureDescription;
- (BOOL)isJumpBtnExposureIntervalValid;
- (BOOL)isJumpBtnExposureIntervalValid:(long long)arg1;
- (BOOL)addNoMoreUnreadTipsInfo:(unsigned long long)arg1;
- (void)addMissReadRecord:(id)arg1 newWeishangFeedIds:(id)arg2;
- (void)loadRecordList;
- (void)saveRecordList;
- (void)exposeId:(unsigned long long)arg1 fromRecordFirst:(id)arg2;
- (void)exposeId:(unsigned long long)arg1 fromRecordLast:(id)arg2;
- (void)removeMissReadFeed:(id)arg1 record:(id)arg2;
- (void)loadInvisibleFeeds;
- (void)saveInvisibleFeeds;
- (void)clearInvisibleFeeds;
- (void)checkInvisibleFeedsIfNeeded;
- (void)updateInvisibleFeedsWithFeedIds:(id)arg1 requestFeedIds:(id)arg2 responseDataItems:(id)arg3;
- (void)updateInvisibilityCheckedTime;
- (void)updateMissReadRecordsWithInvisibleFeedIds;
- (unsigned long long)getMissReadRecordCount;
- (unsigned int)getJumpableMissReadRecordCount;
- (void)onTimeLineViewMissReadJumpBtnClick;
- (void)onTimeLineViewDealloc;
- (void)onTimeLineViewWillDisplayDataItem:(id)arg1;
- (void)onTimeLineSessionStat:(id)arg1;
- (void)onDisplayFeedWithDataItem:(id)arg1 feedId:(id)arg2;
- (void)recordDisplayWithFeedId:(id)arg1;
- (void)onTimeLineViewFakeScrollToUnreadItem:(id)arg1;
- (void)onTimeLineViewFakeScrollToUnreadItemEnd:(id)arg1;
- (void)onTimeLineViewClearEarlierContentTipsItem;
- (void)onServiceInit;
- (void)onExptItemListChange;
- (void)onFirstPageUpdated:(unsigned long long)arg1 datas:(id)arg2 feedIds:(id)arg3 feedFlags:(id)arg4 wsGroupDict:(id)arg5;
- (void)clearMicroMerchantFoldFeeds:(id)arg1;
- (void)filterMicroMerchantFoldFeedsIdLookupInFeedsMgrCache:(id)arg1 newWeishangFeedIds:(id)arg2;
- (void)filterMicroMerchantFoldFeedsIdLookupInWSGroup:(id)arg1 newFeedIds:(id)arg2 newWeishangFeedIds:(id)arg3;
- (unsigned long long)filterNewFeedIds:(id)arg1 newWeishangFeedIds:(id)arg2 withRmFeedIds:(id)arg3;
- (BOOL)shouldDoMicroMerchantCompatibleLogic;
- (id)debugDescription;
- (BOOL)isSupport;
- (void)setIsSupport:(BOOL)arg1;
- (id)exposureFeeds;
- (void)setExposureFeeds:(id)arg1;
- (id)missReadRecordList;
- (void)setMissReadRecordList:(id)arg1;
- (unsigned long long)recordMinFeeds;
- (void)setRecordMinFeeds:(unsigned long long)arg1;
- (unsigned long long)recordMinInterval;
- (void)setRecordMinInterval:(unsigned long long)arg1;
- (unsigned long long)jumpMinSkipFeeds;
- (void)setJumpMinSkipFeeds:(unsigned long long)arg1;
- (long long)jumpBtnPositionOffset;
- (void)setJumpBtnPositionOffset:(long long)arg1;
- (unsigned long long)jumpBtnExposureInterval;
- (void)setJumpBtnExposureInterval:(unsigned long long)arg1;
- (unsigned long long)weishangMaxPercent;
- (void)setWeishangMaxPercent:(unsigned long long)arg1;
- (unsigned long long)minContinueFeeds;
- (void)setMinContinueFeeds:(unsigned long long)arg1;
- (BOOL)usePlainExposureMethod;
- (void)setUsePlainExposureMethod:(BOOL)arg1;
- (id)earlierContentTipsItem;
- (void)setEarlierContentTipsItem:(id)arg1;
- (unsigned long long)itemIdJumped;
- (void)setItemIdJumped:(unsigned long long)arg1;
- (BOOL)minContinueFeedsSatisfy;
- (void)setMinContinueFeedsSatisfy:(BOOL)arg1;
- (id)jumpMissReadRecord;
- (void)setJumpMissReadRecord:(id)arg1;
- (BOOL)isFakeScrollingToUnread;
- (void)setIsFakeScrollingToUnread:(BOOL)arg1;
- (id)allFeeds;
- (void)setAllFeeds:(id)arg1;
- (id)batchGetFeedsCGI;
- (void)setBatchGetFeedsCGI:(id)arg1;
- (id)invisibleFeedIds;
- (void)setInvisibleFeedIds:(id)arg1;
- (double)invisibilityCheckedTime;
- (void)setInvisibilityCheckedTime:(double)arg1;
- (id)clickReportRecord;
- (void)setClickReportRecord:(id)arg1;
- (id)missReadBtnExposureRecord;
- (void)setMissReadBtnExposureRecord:(id)arg1;
- (BOOL)isJumpToFirstMissReadRecord;
- (void)setIsJumpToFirstMissReadRecord:(BOOL)arg1;
- (void).cxx_destruct;
@end

