@interface MMLiveCatalogedMerchandiseLotteryLogic : NSObject <WCFinderLiveExt, MMLiveMulticastTimerSubscriber, MMLiveCatalogedMerchandiseLotteryQuestExt>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    MMLiveCatalogedMerchandiseLotteryInfo * _lotteryInfo; // +0x10
    MMLiveMulticastTimer * _timer; // +0x18
    NSString * _currentQuestActivityId; // +0x20
    NSString * _pendingBlueGiftActivityId; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (id)timerToken;
- (void)beginQuestForLotteryWithActivityId:(id)arg1;
- (void)participateInBlueGiftWithActivityId:(id)arg1;
- (void)onCatalogedMerchandiseLotteryActivityInfoReceived:(id)arg1;
- (void)onQuestCompletedWithBackendAuthorization;
- (void)onQuestFailedForAnonymity;
- (void)onQuestCompletedWithoutBackendAuthorization;
- (void)onTimerWithToken:(id)arg1 tickedAtNominalTime:(struct)arg2;
- (void)invalidateLotteryInfo;
- (void)participateInLotteryWithActivityId:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)currentQuestActivityId;
- (void)setCurrentQuestActivityId:(id)arg1;
- (id)pendingBlueGiftActivityId;
- (void)setPendingBlueGiftActivityId:(id)arg1;
- (void).cxx_destruct;
@end
