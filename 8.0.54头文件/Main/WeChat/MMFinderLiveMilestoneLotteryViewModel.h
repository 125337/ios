@interface MMFinderLiveMilestoneLotteryViewModel : NSObject <MMFinderLiveMilestoneLotteryEvents>
{
    BOOL _isAttendingVote; // +0x8
    unsigned int _ongoingLotteryCountdownSeconds; // +0xc
    id <MMFinderLiveMilestoneLotteryViewModelDelegate> _delegate; // +0x10
    FinderLiveMilestoneLotteryMetaInfo * _currentLotteryMetaInfo; // +0x18
    FinderLiveMilestoneLotteryInfo * _ongoingLotteryInfo; // +0x20
    NSString * _currentDisplayingLotteryId; // +0x28
    MMTimer * _ongoingLotteryCountdownTimer; // +0x30
    MMFinderLiveTaskId * _taskId; // +0x38
    NSMutableDictionary * _lotteryInfoCache; // +0x40
    NSMutableDictionary * _lotteryWinnerCouponCache; // +0x48
    NSMutableSet * _lotteryWinnerRedpacketStatusCache; // +0x50
    NSString * _lastDisplayedLotteryId; // +0x58
    NSDictionary * _colorConfigMap; // +0x60
}
+ (id)pathForSmallLotteryPacketPAG;
+ (id)pathForBigLotteryPacketPAG;
- (id)initWithTaskId:(id)arg1;
- (id)getLiveKey;
- (void)autoDisplayLotteryIfNeeded:(id)arg1;
- (void)setCurrentLotteryMetaInfo:(id)arg1;
- (void)setOngoingLotteryInfo:(id)arg1;
- (id)getLotteryInfoByLotteryId:(id)arg1;
- (BOOL)isOngoingLotteryRunningOrComputing;
- (BOOL)isLotteryRunningOrComputing:(id)arg1;
- (BOOL)isLotteryComputing:(id)arg1;
- (BOOL)isLotteryPrizeReceived:(id)arg1;
- (void)followAccountAndAttendLotteryWithLotteryId:(id)arg1;
- (void)_doFollowAccountWithLotteryInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)checkLotteryAccountFollowStateWithLotteryId:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isLotteryPrizeGiftAlreadyUsed:(id)arg1;
- (id)getWinnerCouponInfoWithLotteryId:(id)arg1;
- (id)getPrizeCouponInfoWithLotteryId:(id)arg1;
- (void)syncNecessaryValuesForMetaInfo:(id)arg1;
- (void)syncNecessaryValuesForLotteryInfo:(id)arg1 lotteryId:(id)arg2;
- (BOOL)hasAttendLottery:(id)arg1;
- (BOOL)doAttendLotteryWithId:(id)arg1;
- (BOOL)doAttendLotteryWithId:(id)arg1 choice:(id)arg2;
- (BOOL)openCommentInputForLottery:(id)arg1;
- (BOOL)_openCommentInputForOngoingLottery;
- (BOOL)_hasAttendOngoingLottery;
- (BOOL)_doAttendOngoingLottery;
- (BOOL)_doAttendOngoingLotteryWithChoice:(id)arg1;
- (void)syncLotteryCountdownTime:(BOOL)arg1;
- (unsigned int)getOngoingLotteryCountdownSeconds;
- (id)getCommonCountdownAttributedString;
- (void)rescheduleOngoingCountdownTimer;
- (void)onCountdownTimerFire;
- (unsigned int)getModifiedRemainTime;
- (void)handleAppBecomeActive;
- (void)handleAppResignActive;
- (void)openRedPacketWebpage:(id)arg1;
- (void)openCouponWithInfo:(id)arg1;
- (void)onWinnerResultViewDidAppearWithLotteryId:(id)arg1;
- (void)playReceiveGiftAnimationWithView:(id)arg1;
- (void)openGiftSelectionViewWithWithLotteryId:(id)arg1;
- (void)gotoAccountProfileWithLotteryId:(id)arg1;
- (void)onAttendLotteryWithCommentSuccess;
- (void)refreshDisplayingLotteryPrizeInfoIfNeeded;
- (void)refreshLotteryPrizeInfoWithLotteryId:(id)arg1 completion:(id /* block */)arg2;
- (void)requestLotteryInfoWithLotteryId:(id)arg1 completion:(id /* block */)arg2;
- (void)reserveLotteryWithNoticeId:(id)arg1 completion:(id /* block */)arg2;
- (void)_refreshCouponInfoWithLotteryId:(id)arg1 completion:(id /* block */)arg2;
- (void)_saveCouponInfoWithLotteryId:(id)arg1 respList:(id)arg2;
- (void)_refreshRedPacketInfoWithLotteryId:(id)arg1 completion:(id /* block */)arg2;
- (void)_saveRedpacketInfoWithLotteryId:(id)arg1 respList:(id)arg2;
- (void)_saveCouponOrRedpacketInfoInLotteryInfo:(id)arg1;
- (void)logLotteryInfo:(id)arg1;
- (void)_onAttendLotterySuccess:(id)arg1;
- (BOOL)_onReserveLotterySuccess:(id)arg1;
- (void)showToastWithErrorMsg:(id)arg1;
- (void)updateLotteryInfoInCache:(id)arg1;
- (id)audienceLogReporter;
- (id)lotteryInfoCache;
- (id)lotteryWinnerCouponCache;
- (id)lotteryWinnerRedpacketStatusCache;
- (id)lastDisplayedLotteryId;
- (id)liveTask;
- (id)getBG0Color;
- (id)getBG1Color;
- (id)getG0Color;
- (id)getG1Color;
- (id)getG2Color;
- (id)getG3Color;
- (id)getG4Color;
- (id)getG5Color;
- (id)getH1Color;
- (id)getH2Color;
- (id)getD0Color;
- (id)getD1Color;
- (id)getD3Color;
- (id)getColorByType:(unsigned long long)arg1 defaultColor:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentLotteryMetaInfo;
- (id)ongoingLotteryInfo;
- (id)currentDisplayingLotteryId;
- (void)setCurrentDisplayingLotteryId:(id)arg1;
- (unsigned int)ongoingLotteryCountdownSeconds;
- (void)setOngoingLotteryCountdownSeconds:(unsigned int)arg1;
- (id)ongoingLotteryCountdownTimer;
- (void)setOngoingLotteryCountdownTimer:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setLotteryInfoCache:(id)arg1;
- (void)setLotteryWinnerCouponCache:(id)arg1;
- (void)setLotteryWinnerRedpacketStatusCache:(id)arg1;
- (void)setLastDisplayedLotteryId:(id)arg1;
- (BOOL)isAttendingVote;
- (void)setIsAttendingVote:(BOOL)arg1;
- (id)colorConfigMap;
- (void)setColorConfigMap:(id)arg1;
- (void).cxx_destruct;
@end

