@interface MMFinderLiveConnectMicPkSelectionResult : NSObject
{
    BOOL _anchorParticipating; // +0x8
    BOOL _audienceParticipating; // +0x9
    BOOL _interactive; // +0xa
    unsigned long long _opponentScenario; // +0x10
    unsigned long long _selectedMode; // +0x18
    unsigned long long _selectedWinningCondition; // +0x20
    id <MMFinderLivePkWinningConditionArguments> _winningConditionArguments; // +0x28
    MMFinderLiveBattleDurationItem * _selectedDuration; // +0x30
    unsigned long long _selectedLayoutMode; // +0x38
}
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)opponentScenario;
- (void)setOpponentScenario:(unsigned long long)arg1;
- (unsigned long long)selectedMode;
- (void)setSelectedMode:(unsigned long long)arg1;
- (BOOL)anchorParticipating;
- (void)setAnchorParticipating:(BOOL)arg1;
- (BOOL)audienceParticipating;
- (void)setAudienceParticipating:(BOOL)arg1;
- (unsigned long long)selectedWinningCondition;
- (void)setSelectedWinningCondition:(unsigned long long)arg1;
- (id)winningConditionArguments;
- (void)setWinningConditionArguments:(id)arg1;
- (id)selectedDuration;
- (void)setSelectedDuration:(id)arg1;
- (BOOL)interactive;
- (void)setInteractive:(BOOL)arg1;
- (unsigned long long)selectedLayoutMode;
- (void)setSelectedLayoutMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
