@interface MMFinderLiveLotteryDisplayLogic : NSObject <WCFinderLiveExt, MMLiveLotteryDetailCardViewDelegate, LiveLotteryPacketDisplayDelegate, MMFinderLiveLotteryDisplayExt>
{
    BOOL _isManualUpdatingLotteryRecord; // +0x8
    id /* block */ _attendLotteryActionBlock; // +0x10
    id /* block */ _getCurrentContentIsShowBlock; // +0x18
    id /* block */ _willShowLotteryDetailCardBlock; // +0x20
    id /* block */ _updatePanelLotteryBlock; // +0x28
    id /* block */ _goPackageGiftBlock; // +0x30
    id /* block */ _freeGameTeamUpBlock; // +0x38
    id /* block */ _updateLotteryStateBlock; // +0x40
    NSString * _displayingLotteryId; // +0x48
    MMFinderLiveLotteryPacketDisplayLogic * _lotteryPacketDisplayLogic; // +0x50
    MMLiveLotteryDetailCardView * _lotteryDetailCardView; // +0x58
    MMFinderLiveTaskId * _taskId; // +0x60
    NSMutableDictionary * _displayLotteryDict; // +0x68
    NSString * _recentDisplayedLotteryId; // +0x70
    unsigned long long _checkLotteryStateTime; // +0x78
    NSMutableSet * _mysteriousAttendLotteryFailTipsShowSet; // +0x80
    MMFinderLivePageSheetNoticeView * _mysteriousNoticeView; // +0x88
}
+ (id)initRecentDisplayLotteryIdWithLiveTaskId:(id)arg1;
+ (id)initRecentDisplayLotteryIdWithLiveTaskId:(id)arg1 liveRoomKey:(id)arg2;
+ (void)checkAndClearOverTimeLotteryCache;
+ (void)updateRecentAttendLotteryCacheWithLotteryId:(id)arg1 taskId:(id)arg2;
+ (void)updateRecentAttendLotteryCacheWithLotteryId:(id)arg1 taskId:(id)arg2 liveRoomKey:(id)arg3;
- (id)initWithPacketDisplayLogic:(id)arg1 lotteryCardView:(id)arg2 taskId:(id)arg3;
- (void)initRecentDisplayLotteryId;
- (void)dealloc;
- (void)onEnterLive;
- (void)onExitLive;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)setLotteryPacketDisplayLogic:(id)arg1;
- (void)setLotteryDetailCardView:(id)arg1;
- (id)displayLotteryDict;
- (id)mysteriousAttendLotteryFailTipsShowSet;
- (void)showCurrentLotteryyDetailCardView;
- (void)showMysteriousTipsIfNeededWithConfirmCompletion:(id /* block */)arg1;
- (BOOL)canShowCurrentLotteryyDetailCardView;
- (BOOL)updateAudienceAbnormalClosedPageInfo:(id)arg1 audienceAbnormalClosedPageInfo:(id)arg2;
- (void)onGetFinderLiveLotteryInfoWithTaskId:(id)arg1 liveLotteryInfos:(id)arg2 lotteryDrawInfos:(id)arg3 fromJoinLive:(BOOL)arg4;
- (void)updateLotteryDetailCardView:(id)arg1 checkState:(BOOL)arg2;
- (BOOL)isSelfAttendInLottery:(id)arg1;
- (void)checkAndUpdateRecentLotteryId;
- (void)updateLiveLotteryInfo:(id)arg1 lotteryDrawInfo:(id)arg2;
- (void)updateLiveLotteryInfoWithRefresh:(id)arg1 lotteryDrawInfo:(id)arg2;
- (void)checkLotteryCancelState;
- (long long)getDisplayLogicState;
- (void)checkSelfHasWinInLottery;
- (void)updateDisplayingLotteryId;
- (void)clearCurrentLottery;
- (BOOL)isCurrentLotteryCompleted;
- (id)getRunningLotteryIdExcept:(id)arg1;
- (id)getLastSelfAttendLotteryInfo;
- (id)finderLiveTask;
- (void)getLiveLotteryRecordWithLotteryId:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)getLiveLotteryRecord:(id)arg1 lastBuffer:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)joinLiveFollowLottery;
- (void)joinLiveNoticeLottery;
- (void)joinLiveFanClubLottery;
- (void)handleClaimMethodFreeGameTeamUp:(id)arg1;
- (void)onMMLiveLotteryDetailCardViewGoPackageGift:(id)arg1;
- (void)onMMLiveLotteryDetailCardViewClose;
- (void)onMMLiveLotteryDetailCardViewUserParticipate;
- (void)onMMLiveLotteryDetailCardViewAnchorCancel;
- (void)showToastForCancelLotteryWithErrorType:(int)arg1 errorPage:(id)arg2;
- (BOOL)needAutoOpenLotteryDetailCard;
- (void)willAutoOpenLotteryDetailCard;
- (void)willUpdatePanelLottery:(id)arg1;
- (void)willManualOpenLotteryDetailCard;
- (BOOL)isCurrentContentShow;
- (void)updateRecentAttendLotteryCache;
- (void)checkAndUpdateLotteryRecord;
- (void)stopCheckAndUpdateLotteryRecord;
- (void)freeOrderUpdateLotteryInfoWithLotteryId:(id)arg1;
- (void)manualUpdateLotteryRecord;
- (BOOL)needCheckLotteryState;
- (void)onAttendLotteryRejectByHideIdentity;
- (void)onForceUpdateCurrentLotteryRecord:(long long)arg1;
- (void)onCancelLotteryRecord:(id)arg1;
- (id)displayingLottery;
- (id /* block */)attendLotteryActionBlock;
- (void)setAttendLotteryActionBlock:(id /* block */)arg1;
- (id /* block */)getCurrentContentIsShowBlock;
- (void)setGetCurrentContentIsShowBlock:(id /* block */)arg1;
- (id /* block */)willShowLotteryDetailCardBlock;
- (void)setWillShowLotteryDetailCardBlock:(id /* block */)arg1;
- (id /* block */)updatePanelLotteryBlock;
- (void)setUpdatePanelLotteryBlock:(id /* block */)arg1;
- (id /* block */)goPackageGiftBlock;
- (void)setGoPackageGiftBlock:(id /* block */)arg1;
- (id /* block */)freeGameTeamUpBlock;
- (void)setFreeGameTeamUpBlock:(id /* block */)arg1;
- (id /* block */)updateLotteryStateBlock;
- (void)setUpdateLotteryStateBlock:(id /* block */)arg1;
- (id)displayingLotteryId;
- (void)setDisplayingLotteryId:(id)arg1;
- (id)lotteryPacketDisplayLogic;
- (id)lotteryDetailCardView;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setDisplayLotteryDict:(id)arg1;
- (id)recentDisplayedLotteryId;
- (void)setRecentDisplayedLotteryId:(id)arg1;
- (BOOL)isManualUpdatingLotteryRecord;
- (void)setIsManualUpdatingLotteryRecord:(BOOL)arg1;
- (unsigned long long)checkLotteryStateTime;
- (void)setCheckLotteryStateTime:(unsigned long long)arg1;
- (void)setMysteriousAttendLotteryFailTipsShowSet:(id)arg1;
- (id)mysteriousNoticeView;
- (void)setMysteriousNoticeView:(id)arg1;
- (void).cxx_destruct;
@end
