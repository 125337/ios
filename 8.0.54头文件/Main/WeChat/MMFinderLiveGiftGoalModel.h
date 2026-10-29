@interface MMFinderLiveGiftGoalModel : NSObject
{
    BOOL _invalidated; // +0x8
    NSString * _goalId; // +0x10
    MMFinderLiveGiftGoalDescriptionItem * _goalDescription; // +0x18
    MMFinderLiveGiftGoalDescriptionItem * _goalFulfilledHeading; // +0x20
    MMFinderLiveGiftGoalDescriptionItem * _goalFulfilledDescription; // +0x28
    unsigned long long _startUnixEpochTimeInSeconds; // +0x30
    unsigned long long _endUnixEpochTimeInSeconds; // +0x38
    MMFinderLiveGiftGoalItem * _goalItem; // +0x40
    MMFinderLivePlayGiftAnimationCommand * _fulfilledAnimationCommand; // +0x48
}
+ (id)goalModelWithBackendInfo:(id)arg1 liveTaskId:(id)arg2;
+ (id)descriptionWithBackendSuppliedTemplate:(id)arg1 liveTaskId:(id)arg2;
+ (BOOL)ensureResourceAvailabilityForGiftId:(id)arg1 liveTaskId:(id)arg2;
- (BOOL)effectiveNow;
- (id)goalId;
- (void)setGoalId:(id)arg1;
- (id)goalDescription;
- (void)setGoalDescription:(id)arg1;
- (id)goalFulfilledHeading;
- (void)setGoalFulfilledHeading:(id)arg1;
- (id)goalFulfilledDescription;
- (void)setGoalFulfilledDescription:(id)arg1;
- (unsigned long long)startUnixEpochTimeInSeconds;
- (void)setStartUnixEpochTimeInSeconds:(unsigned long long)arg1;
- (unsigned long long)endUnixEpochTimeInSeconds;
- (void)setEndUnixEpochTimeInSeconds:(unsigned long long)arg1;
- (BOOL)invalidated;
- (void)setInvalidated:(BOOL)arg1;
- (id)goalItem;
- (void)setGoalItem:(id)arg1;
- (id)fulfilledAnimationCommand;
- (void)setFulfilledAnimationCommand:(id)arg1;
- (void).cxx_destruct;
@end

