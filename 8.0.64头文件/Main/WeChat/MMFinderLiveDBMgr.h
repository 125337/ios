@interface MMFinderLiveDBMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _db; // +0x8
    WCTTable * _historyListTable; // +0x10
    WCTTable * _liveTrialRecordTable; // +0x18
    WCTTable * _replayWatchHistoryTable; // +0x20
    WCTTable * _adVideoWatchStatusTable; // +0x28
    WCTTable * _replayStopgapPreloadTable; // +0x30
    WCTTable * _gestureTable; // +0x38
    WCTTable * _noticePosterStylesTable; // +0x40
    WCTTable * _stickersTable; // +0x48
    WCTTable * _liveSnsAdLiveStreamInfoTable; // +0x50
    WCTTable * _beautyResourcePackageRecordsTable; // +0x58
    WCTTable * _questionAndAnswerMsgRecordsTable; // +0x60
    WCTTable * _uhpLiveBadgesTable; // +0x68
    NSObject<OS_dispatch_queue> * _cleanQueue; // +0x70
}
+ (double)_finderLiveCacheValidDate;
+ (BOOL)isLowEnd;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)addSearchContent:(id)arg1;
- (id)getLocalSearchHistory;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)arg1;
- (id)getLiveTrialRecord:(unsigned long long)arg1;
- (void)updateLiveTrialRecord:(unsigned long long)arg1 remainTime:(unsigned int)arg2 trialEndTime:(unsigned int)arg3 trialLimitTime:(unsigned int)arg4;
- (id)getReplayWatchHistoryForLiveId:(unsigned long long)arg1;
- (void)updateLiveReplayWatchHistoryRecordForLiveId:(unsigned long long)arg1 lastExitTime:(unsigned int)arg2;
- (BOOL)checkIsLiveAdWatched:(unsigned long long)arg1 adId:(id)arg2;
- (void)updateLiveAdWatchTs:(unsigned long long)arg1 adId:(id)arg2;
- (id)getReplayStopgapPreloadRecordForLiveId:(unsigned long long)arg1;
- (void)updateReplayStopgapPreloadRecord:(id)arg1;
- (id)getGestureRecords;
- (id)getGestureRecordWithId:(unsigned int)arg1;
- (BOOL)updateGestureRecord:(id)arg1;
- (BOOL)deleteGestureRecordWithId:(unsigned int)arg1;
- (id)getNoticePosterStyles;
- (unsigned int)cachedNoticePosterStylesVersion;
- (BOOL)setNoticePosterStyles:(id)arg1 version:(unsigned int)arg2;
- (id)getStickerRecords;
- (BOOL)upsertStickerRecord:(id)arg1;
- (BOOL)deleteStickerRecordWithInstanceId:(id)arg1;
- (BOOL)clearStickerRecords;
- (BOOL)upsertUhpLiveBadgeInstance:(id)arg1;
- (id)uhpLiveBadgeInstanceWithId:(id)arg1;
- (id)getSnsAdLiveStreamInfoWithLiveId:(id)arg1 exportId:(id)arg2;
- (BOOL)updateSnsAdLiveStreamInfo:(id)arg1;
- (id)beautyResourcePackageRecordWithId:(id)arg1;
- (BOOL)upsertBeautyResourcePackageRecord:(id)arg1;
- (void)beginDeletingStaleBeautyResourcePackageRecords;
- (id)getMsgRecordWithId:(id)arg1;
- (BOOL)updateMsgRecord:(id)arg1;
- (BOOL)deleteMsgRecordWithId:(id)arg1;
- (BOOL)clearExpiredMsgRecords;
- (BOOL)clearMsgRecords;
- (void)openDB;
- (void)setupTable;
- (void)createLiveAdStatusTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)closeDB;
- (id)dbPath;
- (void)willRecoverDatabase;
- (void)cleanExpiredData;
- (void)cleanOthersTableRunPauseableTransaction;
- (void)_cleanOthersTableRunPauseableTransaction;
- (void)cleanExpiredFinderLiveSnsAdStreamLiveInfo;
- (void)cleanExpiredSearchHistory;
- (id)db;
- (void)setDb:(id)arg1;
- (id)historyListTable;
- (void)setHistoryListTable:(id)arg1;
- (id)liveTrialRecordTable;
- (void)setLiveTrialRecordTable:(id)arg1;
- (id)replayWatchHistoryTable;
- (void)setReplayWatchHistoryTable:(id)arg1;
- (id)adVideoWatchStatusTable;
- (void)setAdVideoWatchStatusTable:(id)arg1;
- (id)replayStopgapPreloadTable;
- (void)setReplayStopgapPreloadTable:(id)arg1;
- (id)gestureTable;
- (void)setGestureTable:(id)arg1;
- (id)noticePosterStylesTable;
- (void)setNoticePosterStylesTable:(id)arg1;
- (id)stickersTable;
- (void)setStickersTable:(id)arg1;
- (id)liveSnsAdLiveStreamInfoTable;
- (void)setLiveSnsAdLiveStreamInfoTable:(id)arg1;
- (id)beautyResourcePackageRecordsTable;
- (void)setBeautyResourcePackageRecordsTable:(id)arg1;
- (id)questionAndAnswerMsgRecordsTable;
- (void)setQuestionAndAnswerMsgRecordsTable:(id)arg1;
- (id)uhpLiveBadgesTable;
- (void)setUhpLiveBadgesTable:(id)arg1;
- (id)cleanQueue;
- (void)setCleanQueue:(id)arg1;
- (void).cxx_destruct;
@end
