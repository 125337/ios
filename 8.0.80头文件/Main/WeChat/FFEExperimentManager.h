@interface FFEExperimentManager : NSObject
{
    NSDictionary * _experimentParams; // +0x8
}
- (void)setExperimentParams:(id)arg1;
- (id)currentExperimentParams;
- (void)clearExperimentParams;
- (BOOL)hasActiveExperiment;
- (id)experimentSummary;
- (void)applyExperimentToConfig:(void *)arg1;
- (id)mergeExperimentIntoINI:(id)arg1;
- (void).cxx_destruct;
@end
