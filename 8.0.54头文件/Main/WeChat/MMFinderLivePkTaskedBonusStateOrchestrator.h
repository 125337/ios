@interface MMFinderLivePkTaskedBonusStateOrchestrator : NSObject
{
    MMFinderLivePkTaskedBonusBarView * _barView; // +0x8
    id <MMFinderLivePkTaskedBonusStateOrchestratorDelegate> _delegate; // +0x10
    MMLiveTaskId * _liveTaskId; // +0x18
    NSString * _correlationId; // +0x20
    MMFinderLivePkTaskedBonusModel * _model; // +0x28
    unsigned long long _giftsVerificationStatus; // +0x30
    double _introPlayTime; // +0x38
    id <MMFinderLivePkTaskedBonusStateDescriptor> _currentState; // +0x40
}
- (id)initWithLiveTaskId:(id)arg1;
- (void)dealloc;
- (BOOL)inVisualState;
- (double)creditMultiplier;
- (void)updateWithBattlePlayerInfo:(id)arg1 serverUnixEpochTimeInSeconds:(unsigned long long)arg2;
- (void)updateWithModel:(id)arg1 serverUnixEpochTimeWithLocalFraction:(double)arg2;
- (void)invokeScheduledStateUpdate;
- (BOOL)validateReferencedGiftsInModelAndFetchMissing:(id)arg1;
- (void)resetState;
- (id)liveTask;
- (id)barView;
- (void)setBarView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)correlationId;
- (void)setCorrelationId:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (unsigned long long)giftsVerificationStatus;
- (void)setGiftsVerificationStatus:(unsigned long long)arg1;
- (double)introPlayTime;
- (void)setIntroPlayTime:(double)arg1;
- (id)currentState;
- (void)setCurrentState:(id)arg1;
- (void).cxx_destruct;
@end

