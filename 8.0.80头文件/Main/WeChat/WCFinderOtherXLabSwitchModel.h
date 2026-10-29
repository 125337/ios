@interface WCFinderOtherXLabSwitchModel : WCFinderBaseXLabSwitchModel
{
    BOOL _patch_cleanHasRedDotLowProbabilityCase; // +0x8
    BOOL _patch_cleanNoneRedDotHighProbabilityCase; // +0x9
    BOOL _patch_reportFindPageModelPredict; // +0xa
    BOOL _patch_collectRedDotFeatureSwitch; // +0xb
    BOOL _useRedDotPredictMergeModelStrategy; // +0xc
    BOOL _finderRandomModelActive; // +0xd
    BOOL _liveRandomModelActive; // +0xe
    BOOL _tingRandomModelActive; // +0xf
    BOOL _browseRandomModelActive; // +0x10
    BOOL _searchRandomModelActive; // +0x11
    BOOL _gameRandomModelActive; // +0x12
    BOOL _genPredictFeatureSwitch; // +0x13
    BOOL _genReportFeatureSwitch; // +0x14
    BOOL _redDotPredictorsAsyncInit; // +0x15
    BOOL _anchorFeatureSwitch; // +0x16
    BOOL _enableRedDotSvrCtr; // +0x17
    int _redDotActivityTimeWindow; // +0x18
    NSString * _redDotLoadingSingleUDRilinkResId; // +0x20
    NSString * _reddotHasRedDotCombinationDetailName; // +0x28
    NSString * _reddotHasRedDotCombinationModelName; // +0x30
    double _finderModelProbabilityMinThreshold; // +0x38
    double _liveModelProbabilityMinThreshold; // +0x40
    double _tingModelProbabilityMinThreshold; // +0x48
    double _browseModelProbabilityMinThreshold; // +0x50
    double _searchModelProbabilityMinThreshold; // +0x58
    double _gameModelProbabilityMinThreshold; // +0x60
    double _finderModelProbabilityMaxThreshold; // +0x68
    double _liveModelProbabilityMaxThreshold; // +0x70
    double _tingModelProbabilityMaxThreshold; // +0x78
    double _browseModelProbabilityMaxThreshold; // +0x80
    double _searchModelProbabilityMaxThreshold; // +0x88
    double _gameModelProbabilityMaxThreshold; // +0x90
    long long _redDotPredictTriggerType; // +0x98
    NSDictionary * _redDotPredictUnifiedConfig; // +0xa0
    NSString * _mergeRedDotDetailName; // +0xa8
    NSString * _mergeRedDotModelName; // +0xb0
    NSString * _finderNoneRedDotDetailName; // +0xb8
    NSString * _finderNoneRedDotModelName; // +0xc0
    NSString * _finderHasRedDotDetailName; // +0xc8
    NSString * _finderHasRedDotModelName; // +0xd0
    NSString * _liveNoneRedDotDetailName; // +0xd8
    NSString * _liveNoneRedDotModelName; // +0xe0
    NSString * _liveHasRedDotDetailName; // +0xe8
    NSString * _liveHasRedDotModelName; // +0xf0
    NSString * _tingNoneRedDotDetailName; // +0xf8
    NSString * _tingNoneRedDotModelName; // +0x100
    NSString * _tingHasRedDotDetailName; // +0x108
    NSString * _tingHasRedDotModelName; // +0x110
    NSString * _browseNoneRedDotDetailName; // +0x118
    NSString * _browseNoneRedDotModelName; // +0x120
    NSString * _browseHasRedDotDetailName; // +0x128
    NSString * _browseHasRedDotModelName; // +0x130
    NSString * _searchNoneRedDotDetailName; // +0x138
    NSString * _searchNoneRedDotModelName; // +0x140
    NSString * _searchHasRedDotDetailName; // +0x148
    NSString * _searchHasRedDotModelName; // +0x150
    NSString * _gameNoneRedDotDetailName; // +0x158
    NSString * _gameNoneRedDotModelName; // +0x160
    NSString * _gameHasRedDotDetailName; // +0x168
    NSString * _gameHasRedDotModelName; // +0x170
    long long _randomModelInterval; // +0x178
    double _finderRandomModelRedDotCountThreshold; // +0x180
    double _liveRandomModelRedDotCountThreshold; // +0x188
    double _tingRandomModelRedDotCountThreshold; // +0x190
    double _browseRandomModelRedDotCountThreshold; // +0x198
    double _searchRandomModelRedDotCountThreshold; // +0x1a0
    double _gameRandomModelRedDotCountThreshold; // +0x1a8
    NSString * _redDotActivityRule; // +0x1b0
    NSString * _redDotActivityTimeWindowString; // +0x1b8
    NSArray * _redDotActivityLevel; // +0x1c0
    NSString * _redDotActivityLevelString; // +0x1c8
    NSArray * _redDotActivityThreshold; // +0x1d0
    NSString * _redDotActivityThresholdString; // +0x1d8
    long long _redDotCount; // +0x1e0
    long long _featureTTL; // +0x1e8
    long long _resourceTTL; // +0x1f0
    NSString * _redDotSvrCtrDataVersion; // +0x1f8
}
- (BOOL)closeRedDotCtrMarkHelperSwitch;
- (long long)pctrCalcDaysInterval;
- (BOOL)redDotHitFrequencyNMSyncSwitch;
- (BOOL)cleanInvalidBanQueueSwitch;
- (BOOL)gameRedDotUseFinderRedDotFrameworkSwitch;
- (BOOL)useNMOnlyNextPenalizedSwitch;
- (long long)redDotFeatureSequenceStepCount;
- (BOOL)useAIModelForPctrSortSwitch;
- (long long)redDotAIModelPredictCacheDuration;
- (BOOL)redDotModelUseLimitSwitch;
- (BOOL)redDotAIResourceAutoFetch;
- (BOOL)markRedDotFeatureInLocal;
- (long long)redDotFeatureReportProbability;
- (BOOL)redDotSingleAIResourceAutoFetch;
- (long long)redDotUDRAutoFetchIntervalHours;
- (BOOL)useCombinationModelForSimul;
- (BOOL)useModelReplaceSimulPctrStrategy;
- (BOOL)redDotAutoFetchUDRSwitch;
- (BOOL)findPageRedDotChangedPredict;
- (BOOL)enableRedDotFeatureContainerConstraint;
- (long long)redDotFeatureContainerMaxCount;
- (long long)redDotFeatureContainerConstraintInterval;
- (BOOL)reddotPredictOnlySwitch;
- (BOOL)redDotPredictEnableBufferReuse;
- (long long)redDotPredictModelThreadCount;
- (void)_updateXLabConfig;
- (id)reportTimestampKey;
- (unsigned int)reportLogID;
- (void)initRedDotModelConfigs;
- (id)convertStringToFloatNumberComponents:(id)arg1 separator:(id)arg2;
- (id)redDotLoadingSingleUDRilinkResId;
- (void)setRedDotLoadingSingleUDRilinkResId:(id)arg1;
- (id)reddotHasRedDotCombinationDetailName;
- (void)setReddotHasRedDotCombinationDetailName:(id)arg1;
- (id)reddotHasRedDotCombinationModelName;
- (void)setReddotHasRedDotCombinationModelName:(id)arg1;
- (BOOL)patch_cleanHasRedDotLowProbabilityCase;
- (void)setPatch_cleanHasRedDotLowProbabilityCase:(BOOL)arg1;
- (BOOL)patch_cleanNoneRedDotHighProbabilityCase;
- (void)setPatch_cleanNoneRedDotHighProbabilityCase:(BOOL)arg1;
- (double)finderModelProbabilityMinThreshold;
- (void)setFinderModelProbabilityMinThreshold:(double)arg1;
- (double)liveModelProbabilityMinThreshold;
- (void)setLiveModelProbabilityMinThreshold:(double)arg1;
- (double)tingModelProbabilityMinThreshold;
- (void)setTingModelProbabilityMinThreshold:(double)arg1;
- (double)browseModelProbabilityMinThreshold;
- (void)setBrowseModelProbabilityMinThreshold:(double)arg1;
- (double)searchModelProbabilityMinThreshold;
- (void)setSearchModelProbabilityMinThreshold:(double)arg1;
- (double)gameModelProbabilityMinThreshold;
- (void)setGameModelProbabilityMinThreshold:(double)arg1;
- (double)finderModelProbabilityMaxThreshold;
- (void)setFinderModelProbabilityMaxThreshold:(double)arg1;
- (double)liveModelProbabilityMaxThreshold;
- (void)setLiveModelProbabilityMaxThreshold:(double)arg1;
- (double)tingModelProbabilityMaxThreshold;
- (void)setTingModelProbabilityMaxThreshold:(double)arg1;
- (double)browseModelProbabilityMaxThreshold;
- (void)setBrowseModelProbabilityMaxThreshold:(double)arg1;
- (double)searchModelProbabilityMaxThreshold;
- (void)setSearchModelProbabilityMaxThreshold:(double)arg1;
- (double)gameModelProbabilityMaxThreshold;
- (void)setGameModelProbabilityMaxThreshold:(double)arg1;
- (BOOL)patch_reportFindPageModelPredict;
- (void)setPatch_reportFindPageModelPredict:(BOOL)arg1;
- (BOOL)patch_collectRedDotFeatureSwitch;
- (void)setPatch_collectRedDotFeatureSwitch:(BOOL)arg1;
- (long long)redDotPredictTriggerType;
- (void)setRedDotPredictTriggerType:(long long)arg1;
- (id)redDotPredictUnifiedConfig;
- (void)setRedDotPredictUnifiedConfig:(id)arg1;
- (BOOL)useRedDotPredictMergeModelStrategy;
- (void)setUseRedDotPredictMergeModelStrategy:(BOOL)arg1;
- (id)mergeRedDotDetailName;
- (void)setMergeRedDotDetailName:(id)arg1;
- (id)mergeRedDotModelName;
- (void)setMergeRedDotModelName:(id)arg1;
- (id)finderNoneRedDotDetailName;
- (void)setFinderNoneRedDotDetailName:(id)arg1;
- (id)finderNoneRedDotModelName;
- (void)setFinderNoneRedDotModelName:(id)arg1;
- (id)finderHasRedDotDetailName;
- (void)setFinderHasRedDotDetailName:(id)arg1;
- (id)finderHasRedDotModelName;
- (void)setFinderHasRedDotModelName:(id)arg1;
- (id)liveNoneRedDotDetailName;
- (void)setLiveNoneRedDotDetailName:(id)arg1;
- (id)liveNoneRedDotModelName;
- (void)setLiveNoneRedDotModelName:(id)arg1;
- (id)liveHasRedDotDetailName;
- (void)setLiveHasRedDotDetailName:(id)arg1;
- (id)liveHasRedDotModelName;
- (void)setLiveHasRedDotModelName:(id)arg1;
- (id)tingNoneRedDotDetailName;
- (void)setTingNoneRedDotDetailName:(id)arg1;
- (id)tingNoneRedDotModelName;
- (void)setTingNoneRedDotModelName:(id)arg1;
- (id)tingHasRedDotDetailName;
- (void)setTingHasRedDotDetailName:(id)arg1;
- (id)tingHasRedDotModelName;
- (void)setTingHasRedDotModelName:(id)arg1;
- (id)browseNoneRedDotDetailName;
- (void)setBrowseNoneRedDotDetailName:(id)arg1;
- (id)browseNoneRedDotModelName;
- (void)setBrowseNoneRedDotModelName:(id)arg1;
- (id)browseHasRedDotDetailName;
- (void)setBrowseHasRedDotDetailName:(id)arg1;
- (id)browseHasRedDotModelName;
- (void)setBrowseHasRedDotModelName:(id)arg1;
- (id)searchNoneRedDotDetailName;
- (void)setSearchNoneRedDotDetailName:(id)arg1;
- (id)searchNoneRedDotModelName;
- (void)setSearchNoneRedDotModelName:(id)arg1;
- (id)searchHasRedDotDetailName;
- (void)setSearchHasRedDotDetailName:(id)arg1;
- (id)searchHasRedDotModelName;
- (void)setSearchHasRedDotModelName:(id)arg1;
- (id)gameNoneRedDotDetailName;
- (void)setGameNoneRedDotDetailName:(id)arg1;
- (id)gameNoneRedDotModelName;
- (void)setGameNoneRedDotModelName:(id)arg1;
- (id)gameHasRedDotDetailName;
- (void)setGameHasRedDotDetailName:(id)arg1;
- (id)gameHasRedDotModelName;
- (void)setGameHasRedDotModelName:(id)arg1;
- (long long)randomModelInterval;
- (void)setRandomModelInterval:(long long)arg1;
- (BOOL)finderRandomModelActive;
- (void)setFinderRandomModelActive:(BOOL)arg1;
- (BOOL)liveRandomModelActive;
- (void)setLiveRandomModelActive:(BOOL)arg1;
- (BOOL)tingRandomModelActive;
- (void)setTingRandomModelActive:(BOOL)arg1;
- (BOOL)browseRandomModelActive;
- (void)setBrowseRandomModelActive:(BOOL)arg1;
- (BOOL)searchRandomModelActive;
- (void)setSearchRandomModelActive:(BOOL)arg1;
- (BOOL)gameRandomModelActive;
- (void)setGameRandomModelActive:(BOOL)arg1;
- (double)finderRandomModelRedDotCountThreshold;
- (void)setFinderRandomModelRedDotCountThreshold:(double)arg1;
- (double)liveRandomModelRedDotCountThreshold;
- (void)setLiveRandomModelRedDotCountThreshold:(double)arg1;
- (double)tingRandomModelRedDotCountThreshold;
- (void)setTingRandomModelRedDotCountThreshold:(double)arg1;
- (double)browseRandomModelRedDotCountThreshold;
- (void)setBrowseRandomModelRedDotCountThreshold:(double)arg1;
- (double)searchRandomModelRedDotCountThreshold;
- (void)setSearchRandomModelRedDotCountThreshold:(double)arg1;
- (double)gameRandomModelRedDotCountThreshold;
- (void)setGameRandomModelRedDotCountThreshold:(double)arg1;
- (id)redDotActivityRule;
- (void)setRedDotActivityRule:(id)arg1;
- (int)redDotActivityTimeWindow;
- (void)setRedDotActivityTimeWindow:(int)arg1;
- (id)redDotActivityTimeWindowString;
- (void)setRedDotActivityTimeWindowString:(id)arg1;
- (id)redDotActivityLevel;
- (void)setRedDotActivityLevel:(id)arg1;
- (id)redDotActivityLevelString;
- (void)setRedDotActivityLevelString:(id)arg1;
- (id)redDotActivityThreshold;
- (void)setRedDotActivityThreshold:(id)arg1;
- (id)redDotActivityThresholdString;
- (void)setRedDotActivityThresholdString:(id)arg1;
- (long long)redDotCount;
- (void)setRedDotCount:(long long)arg1;
- (BOOL)genPredictFeatureSwitch;
- (void)setGenPredictFeatureSwitch:(BOOL)arg1;
- (BOOL)genReportFeatureSwitch;
- (void)setGenReportFeatureSwitch:(BOOL)arg1;
- (BOOL)redDotPredictorsAsyncInit;
- (void)setRedDotPredictorsAsyncInit:(BOOL)arg1;
- (BOOL)anchorFeatureSwitch;
- (void)setAnchorFeatureSwitch:(BOOL)arg1;
- (long long)featureTTL;
- (void)setFeatureTTL:(long long)arg1;
- (long long)resourceTTL;
- (void)setResourceTTL:(long long)arg1;
- (BOOL)enableRedDotSvrCtr;
- (void)setEnableRedDotSvrCtr:(BOOL)arg1;
- (id)redDotSvrCtrDataVersion;
- (void)setRedDotSvrCtrDataVersion:(id)arg1;
- (void).cxx_destruct;
@end
