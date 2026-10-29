@interface WCFinderDiscoveryRedDotVerdictTool : NSObject
{
    BOOL _isInitialized; // +0x8
    NSString * _modelReportJson; // +0x10
    NSMutableDictionary * _noneRedDotPredictors; // +0x18
    NSMutableDictionary * _hasRedDotPredictors; // +0x20
    WCFinderHasRedDotArrayOutputPredictor * _combinationPredictor; // +0x28
    WCFinderRedDotMergeModelPredictor * _mergeRedDotPredictor; // +0x30
    NSMutableSet * _disposeRedDotPath; // +0x38
}
+ (id)getAllPathSet;
+ (id)getAllPaths;
+ (void)reportModelCleanDetailPath:(id)arg1 strategy:(unsigned long long)arg2 predictProbability:(double)arg3 thresholdProbability:(double)arg4;
+ (id)convertRedDotPathToBusinessKey:(id)arg1;
+ (void)reportRandomModelRedDotPath:(id)arg1 isHit:(BOOL)arg2 randomProbability:(double)arg3 predictProbability:(double)arg4 countThreshold:(double)arg5 requestCount24H:(long long)arg6 randomInterval:(long long)arg7;
- (id)init;
- (void)initPredictors;
- (double)getTriggerLowProbabilityRedDotPath:(id)arg1;
- (id)getNoneRedDotPredictorForPath:(id)arg1;
- (id)getHasRedDotPredictorForPath:(id)arg1;
- (BOOL)verdictWillBeEnable;
- (BOOL)cleanFindPageRedDotByModel;
- (void)ensureInitialized;
- (BOOL)toolIsWork;
- (BOOL)toolIsReadyForDispose;
- (BOOL)toolIsReadyForSimul;
- (void)getPredictProbabilityDict:(id)arg1 modelPredictProbability:(id)arg2 randomPredictProbability:(id)arg3 predictFeatureModel:(id)arg4;
- (void)asyncReportWithPredictFeatureModel:(id)arg1 isWithCurrentRedDot:(BOOL)arg2;
- (void)triggerAllRedDotShowActionWithPredictFeatureModel:(id)arg1;
- (void)triggerTargetRedDotShowActionWithRedDotPath:(id)arg1 predictFeatureModel:(id)arg2;
- (void)_useMergeModelCheckDisposeRedDot;
- (BOOL)findPageHasRedDot;
- (void)triggerMergeLowProbabilityCheck;
- (void)triggerMergeHighProbabilityCheck;
- (void)triggerHighProbabilityRedDotPath:(id)arg1 modelPredictProbability:(id)arg2 predictFeatureModel:(id)arg3;
- (BOOL)useCustomMinThreshold;
- (double)getCustomMinThresholdForPath:(id)arg1;
- (double)getMinThresholdForPath:(id)arg1;
- (double)getMaxThresholdForPath:(id)arg1;
- (void)triggerLowProbabilityRedDotPath:(id)arg1 modelPredictProbability:(id)arg2 randomPredictProbability:(id)arg3 predictFeatureModel:(id)arg4;
- (id)getWinBusinessCombinationFrom:(id)arg1;
- (id)getPredictOutputReport;
- (id)modelReportJson;
- (id)getAllModelMd5Dictionary;
- (void)clear;
- (BOOL)hasDisposeRedDotAtRedDotPath:(id)arg1;
- (BOOL)useRandomModelForPath:(id)arg1;
- (BOOL)hasClickBusinessRecentlyForPath:(id)arg1;
- (double)getRandomModelRedDotCountThresholdForPath:(id)arg1;
- (BOOL)hasRandomModelActiveForPath:(id)arg1;
- (long long)getBusinessReceiveRedDotCountRecent24HourForPath:(id)arg1;
- (void)triggerRandomModelForPath:(id)arg1 randomPredictProbability:(id)arg2;
- (void)setModelReportJson:(id)arg1;
- (id)noneRedDotPredictors;
- (void)setNoneRedDotPredictors:(id)arg1;
- (id)hasRedDotPredictors;
- (void)setHasRedDotPredictors:(id)arg1;
- (id)combinationPredictor;
- (void)setCombinationPredictor:(id)arg1;
- (id)mergeRedDotPredictor;
- (void)setMergeRedDotPredictor:(id)arg1;
- (id)disposeRedDotPath;
- (void)setDisposeRedDotPath:(id)arg1;
- (BOOL)isInitialized;
- (void)setIsInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
