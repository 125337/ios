@interface MMFinderLiveGiftGoalLogic : NSObject <MMFinderLiveRewardRecievingLogicExt>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    MMFinderLiveGiftGoalModel * _currentGoal; // +0x10
    MMFinderLiveGiftGoalView * _giftGoalView; // +0x18
    unsigned long long _giftGoalViewPreemptions; // +0x20
    NSMutableSet * _dismissedGoals; // +0x28
    NSMutableSet * _receivedGoals; // +0x30
    NSMutableSet * _animationPlayCommandReceivedGoals; // +0x38
}
- (id)initWithTaskId:(id)arg1;
- (void)setGiftGoalViewPreemptions:(unsigned long long)arg1;
- (void)updateGoalWithBackendInfo:(id)arg1;
- (void)dismissGoalWithId:(id)arg1;
- (void)onReceivingGiftAnimationPlayCommand:(id)arg1 forTaskId:(id)arg2 vetoFlag:(BOOL *)arg3;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)currentGoal;
- (void)setCurrentGoal:(id)arg1;
- (id)giftGoalView;
- (void)setGiftGoalView:(id)arg1;
- (unsigned long long)giftGoalViewPreemptions;
- (id)dismissedGoals;
- (void)setDismissedGoals:(id)arg1;
- (id)receivedGoals;
- (void)setReceivedGoals:(id)arg1;
- (id)animationPlayCommandReceivedGoals;
- (void)setAnimationPlayCommandReceivedGoals:(id)arg1;
- (void).cxx_destruct;
@end
