@interface MMFinderLiveConnectMicPkSelectionModel : NSObject
{
    BOOL _requireChanges; // +0x8
    BOOL _disableModifyPlayMode; // +0x9
    unsigned long long _opponentScenario; // +0x10
    MMFinderLiveConnectMicUsersInfo * _connectMicUsersInfo; // +0x18
    FinderLiveMicInfo_Wording * _wordings; // +0x20
    NSArray * _durationOptions; // +0x28
    MMFinderLiveBattleDurationItem * _defaultDurationOption; // +0x30
    MMFinderLiveConnectMicPkSelectionResult * _currentPkSelectResult; // +0x38
}
- (unsigned long long)opponentScenario;
- (void)setOpponentScenario:(unsigned long long)arg1;
- (id)connectMicUsersInfo;
- (void)setConnectMicUsersInfo:(id)arg1;
- (id)wordings;
- (void)setWordings:(id)arg1;
- (id)durationOptions;
- (void)setDurationOptions:(id)arg1;
- (id)defaultDurationOption;
- (void)setDefaultDurationOption:(id)arg1;
- (id)currentPkSelectResult;
- (void)setCurrentPkSelectResult:(id)arg1;
- (BOOL)requireChanges;
- (void)setRequireChanges:(BOOL)arg1;
- (BOOL)disableModifyPlayMode;
- (void)setDisableModifyPlayMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
