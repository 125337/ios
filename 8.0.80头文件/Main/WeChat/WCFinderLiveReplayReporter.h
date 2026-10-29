@interface WCFinderLiveReplayReporter : NSObject <IWCFinderLiveReplayReporterCallback>
{
    unsigned long long _enterTime; // +0x8
    MMFinderLiveTaskId * _liveTaskId; // +0x10
    NSString * _reportUUID; // +0x18
}
- (id)initWithTaskId:(id)arg1;
- (id)init;
- (void)enterReplay;
- (void)onEnterReplayWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onExposeReplayWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onExposeReplayWithObjectId:(id)arg1 entryType:(id)arg2 objectType:(unsigned long long)arg3 pageSubType:(unsigned long long)arg4;
- (void)onExposeReplayPayButtonWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onClickReplayPayButtonWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onClickReplayPayConfirmButtonWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onClickReplayAgreementConfirmButtonWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onClickReplayAgreementCancelButtonWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onExposeRechargePanelWithObjectId:(id)arg1 entryType:(id)arg2 pageSubType:(unsigned long long)arg3;
- (void)onExposeRechargeSuccessWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onPaidSuccessWithObjectId:(id)arg1 entryType:(id)arg2 amount:(long long)arg3 duration:(double)arg4;
- (void)onLiveRecordDurationWithObjectId:(id)arg1 entryType:(id)arg2 duration:(double)arg3;
- (void)onPurchaseSucceededWithCoinAmount:(unsigned int)arg1 atTimeInMillisecond:(unsigned long long)arg2;
- (void)onFinishWatching;
- (void)onSharingToTarget:(unsigned long long)arg1 objectId:(id)arg2 entryType:(id)arg3 isFastForward:(BOOL)arg4 usernameList:(id)arg5;
- (void)onStartWatchingReplayWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onClickShareWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onOrientationClicked:(long long)arg1 objectId:(id)arg2 entryType:(id)arg3;
- (void)onMinimizeWithObjectId:(id)arg1 entryType:(id)arg2 isInteractivePan:(BOOL)arg3;
- (void)onPauseReplayWithObjectId:(id)arg1 entryType:(id)arg2 currentTime:(unsigned long long)arg3;
- (void)onSeekReplayWithObjectId:(id)arg1 entryType:(id)arg2 fromTimeMS:(unsigned long long)arg3 toTimeMS:(unsigned long long)arg4 isAtGreateTime:(BOOL)arg5;
- (void)onClickComplainReplayWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onClickToggleHiddenReplayWithObjectId:(id)arg1 entryType:(id)arg2 hidden:(BOOL)arg3;
- (void)onDeleteReplayWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onProgressBarGreateTimeDotExposeWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onProgressBarGreateTimeDotClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onProgressBarGreateTimePreviewPlayBtnClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onProgressBarGreateTimeDotSecondClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onGreateTimeBtnExposeWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onGreateTimeBtnClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onGreateTimeListViewExposeWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onGreateTimeListItemClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onRateBtnExposeWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onRateBtnClickWithObjectId:(id)arg1 entryType:(id)arg2;
- (void)onRateSelectWithObjectId:(id)arg1 entryType:(id)arg2 rate:(double)arg3;
- (void)onRateLongPressChangeWithObjectId:(id)arg1 entryType:(id)arg2 fromRate:(double)arg3;
- (unsigned long long)getReplayDurationInMS;
- (void)reportLiveReplayEvent:(id)arg1 params:(id)arg2;
- (id)replaceCommaToSemicolon:(id)arg1;
- (id)replayLiveTask;
- (unsigned long long)transformStartScene;
- (unsigned long long)transformIsFreeLive;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)reportUUID;
- (void)setReportUUID:(id)arg1;
- (void).cxx_destruct;
@end
