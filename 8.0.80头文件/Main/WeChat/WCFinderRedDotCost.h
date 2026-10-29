@interface WCFinderRedDotCost : NSObject
{
    long long _updateRedDotExposeStateOnlyCost; // +0x8
    long long _get35092ReportInfoOnlyByActionCost; // +0x10
    long long _get35092ReportInfoWithCurrentRedDotByActionCost; // +0x18
    long long _totalPredictCost; // +0x20
    long long _genFeatureCost; // +0x28
    NSMutableDictionary * _predictCostDict; // +0x30
}
- (id)init;
- (id)genReportJson;
- (long long)updateRedDotExposeStateOnlyCost;
- (void)setUpdateRedDotExposeStateOnlyCost:(long long)arg1;
- (long long)get35092ReportInfoOnlyByActionCost;
- (void)setGet35092ReportInfoOnlyByActionCost:(long long)arg1;
- (long long)get35092ReportInfoWithCurrentRedDotByActionCost;
- (void)setGet35092ReportInfoWithCurrentRedDotByActionCost:(long long)arg1;
- (long long)totalPredictCost;
- (void)setTotalPredictCost:(long long)arg1;
- (long long)genFeatureCost;
- (void)setGenFeatureCost:(long long)arg1;
- (id)predictCostDict;
- (void)setPredictCostDict:(id)arg1;
- (void).cxx_destruct;
@end
