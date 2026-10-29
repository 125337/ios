@interface MMFinderLiveConnectMicPKInfo : NSObject <NSCopying>
{
    BOOL _isDisableNextBattle; // +0x8
    unsigned int _timeLeft; // +0xc
    unsigned int _displayedTimeLeft; // +0x10
    unsigned int _inviteTimeLeft; // +0x14
    unsigned int _battleDuration; // +0x18
    unsigned long long _anchorPkState; // +0x20
    NSString * _sessionId; // +0x28
    unsigned long long _sequence; // +0x30
    unsigned long long _battleMode; // +0x38
    unsigned long long _battleScope; // +0x40
    MMFinderLiveConnectMicPkTeamInfo * _teamInfo; // +0x48
    MMFinderLivePkTaskedBonusStateOrchestrator * _taskedBonusStateOrchestrator; // +0x50
    NSString * _applicantFinderUsername; // +0x58
    unsigned long long _winningCondition; // +0x60
    id _winningConditionArguments; // +0x68
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isPkStarted;
- (BOOL)isAnchorPkStarted;
- (BOOL)isAudiencePkStarted;
- (BOOL)isCrossRoomPkStarted;
- (BOOL)isAnchorPkApplying;
- (unsigned long long)opponentScenario;
- (unsigned long long)anchorPkState;
- (void)setAnchorPkState:(unsigned long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)timeLeft;
- (void)setTimeLeft:(unsigned int)arg1;
- (unsigned int)displayedTimeLeft;
- (void)setDisplayedTimeLeft:(unsigned int)arg1;
- (unsigned long long)sequence;
- (void)setSequence:(unsigned long long)arg1;
- (unsigned int)inviteTimeLeft;
- (void)setInviteTimeLeft:(unsigned int)arg1;
- (unsigned long long)battleMode;
- (void)setBattleMode:(unsigned long long)arg1;
- (unsigned long long)battleScope;
- (void)setBattleScope:(unsigned long long)arg1;
- (id)teamInfo;
- (void)setTeamInfo:(id)arg1;
- (id)taskedBonusStateOrchestrator;
- (void)setTaskedBonusStateOrchestrator:(id)arg1;
- (id)applicantFinderUsername;
- (void)setApplicantFinderUsername:(id)arg1;
- (unsigned long long)winningCondition;
- (void)setWinningCondition:(unsigned long long)arg1;
- (id)winningConditionArguments;
- (void)setWinningConditionArguments:(id)arg1;
- (BOOL)isDisableNextBattle;
- (void)setIsDisableNextBattle:(BOOL)arg1;
- (unsigned int)battleDuration;
- (void)setBattleDuration:(unsigned int)arg1;
- (void).cxx_destruct;
@end
