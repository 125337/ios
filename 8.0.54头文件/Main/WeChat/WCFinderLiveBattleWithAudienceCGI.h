@interface WCFinderLiveBattleWithAudienceCGI : WCFinderLiveBaseCgi
{
    int _opCode; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    NSData * _liveCookies; // +0x18
    NSString * _battleId; // +0x20
    NSString * _lastBattleId; // +0x28
    unsigned long long _battleMode; // +0x30
    unsigned long long _battleScope; // +0x38
    unsigned long long _battleDuration; // +0x40
    NSArray * _battleTeams; // +0x48
    unsigned long long _winningCondition; // +0x50
    id <MMFinderLivePkWinningConditionArguments> _winningConditionArguments; // +0x58
    id /* block */ _successBlock; // +0x60
    id /* block */ _failBlock; // +0x68
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 liveCookies:(id)arg3 battleId:(id)arg4 battleMode:(unsigned long long)arg5 battleScope:(unsigned long long)arg6 opCode:(unsigned long long)arg7 battleTeams:(id)arg8 winningCondition:(unsigned long long)arg9 winningConditionArguments:(id)arg10 battleDuration:(unsigned long long)arg11 lastBattleId:(id)arg12 successBlock:(id /* block */)arg13 failBlock:(id /* block */)arg14;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)battleId;
- (void)setBattleId:(id)arg1;
- (id)lastBattleId;
- (void)setLastBattleId:(id)arg1;
- (unsigned long long)battleMode;
- (void)setBattleMode:(unsigned long long)arg1;
- (unsigned long long)battleScope;
- (void)setBattleScope:(unsigned long long)arg1;
- (int)opCode;
- (void)setOpCode:(int)arg1;
- (unsigned long long)battleDuration;
- (void)setBattleDuration:(unsigned long long)arg1;
- (id)battleTeams;
- (void)setBattleTeams:(id)arg1;
- (unsigned long long)winningCondition;
- (void)setWinningCondition:(unsigned long long)arg1;
- (id)winningConditionArguments;
- (void)setWinningConditionArguments:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

