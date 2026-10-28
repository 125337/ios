@interface MMFinderLivePkTaskedBonusModel : NSObject
{
    BOOL _tasksAccomplished; // +0x8
    MMLiveTaskId * _liveTaskId; // +0x10
    NSString * _identifier; // +0x18
    double _serverUnixEpochTime; // +0x20
    unsigned long long _currentState; // +0x28
    double _stateTimeRemaining; // +0x30
    double _stateDuration; // +0x38
    unsigned long long _taskType; // +0x40
    NSArray * _tasks; // +0x48
    double _creditMultiplier; // +0x50
    unsigned long long _bonusPkCredit; // +0x58
}
+ (id)modelFromBackendPkPlayerInfo:(id)arg1 liveTaskId:(id)arg2 serverUnixEpochTimeInSeconds:(unsigned long long)arg3;
+ (BOOL)areTasksAndBonusesInModel:(id)arg1 equalTo:(id)arg2;
- (id)description;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (double)serverUnixEpochTime;
- (void)setServerUnixEpochTime:(double)arg1;
- (unsigned long long)currentState;
- (void)setCurrentState:(unsigned long long)arg1;
- (double)stateTimeRemaining;
- (void)setStateTimeRemaining:(double)arg1;
- (double)stateDuration;
- (void)setStateDuration:(double)arg1;
- (unsigned long long)taskType;
- (void)setTaskType:(unsigned long long)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (double)creditMultiplier;
- (void)setCreditMultiplier:(double)arg1;
- (BOOL)tasksAccomplished;
- (void)setTasksAccomplished:(BOOL)arg1;
- (unsigned long long)bonusPkCredit;
- (void)setBonusPkCredit:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
