@interface WCFinderDiscoveryRedDotVerdictTool : NSObject
{
    NSMutableDictionary * _noneRedDotPredictors; // +0x8
    NSMutableDictionary * _hasRedDotPredictors; // +0x10
    WCFinderHasRedDotArrayOutputPredictor * _combinationPredictor; // +0x18
    WCFinderHasRedDotArrayOutputPredictor * _fourSingleBusinessPredictor; // +0x20
}
+ (void)reportModelCleanDetailPath:(id)arg1 strategy:(unsigned long long)arg2 predictProbability:(double)arg3 thresholdProbability:(double)arg4;
- (id)init;
- (void)initPredictors;
- (id)getNoneRedDotPredictorForPath:(id)arg1;
- (id)getHasRedDotPredictorForPath:(id)arg1;
- (BOOL)verdictWillBeEnable;
- (BOOL)toolIsWork;
- (BOOL)toolIsReadyForDispose;
- (BOOL)toolIsReadyForSimul;
- (void)triggerAllRedDotShowAction;
- (void)checkShouldDisposeTargetRedDotPath:(id)arg1;
- (BOOL)triggerHighProbabilityRedDotPath:(id)arg1;
- (BOOL)triggerLowProbabilityRedDotPath:(id)arg1;
- (id)getWinBusinessCombinationFrom:(id)arg1;
- (id)getPredictOutputReport;
- (void)clear;
- (id)noneRedDotPredictors;
- (void)setNoneRedDotPredictors:(id)arg1;
- (id)hasRedDotPredictors;
- (void)setHasRedDotPredictors:(id)arg1;
- (id)combinationPredictor;
- (void)setCombinationPredictor:(id)arg1;
- (id)fourSingleBusinessPredictor;
- (void)setFourSingleBusinessPredictor:(id)arg1;
- (void).cxx_destruct;
@end
