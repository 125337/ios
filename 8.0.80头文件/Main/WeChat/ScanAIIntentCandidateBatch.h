@interface ScanAIIntentCandidateBatch : NSObject
{
    NSArray * _candidates; // +0x8
    NSArray * _sourceStatuses; // +0x10
    id _qualityContext; // +0x18
}
+ (id)batchWithCandidates:(id)arg1 sourceStatuses:(id)arg2 qualityContext:(id)arg3;
- (id)candidates;
- (void)setCandidates:(id)arg1;
- (id)sourceStatuses;
- (void)setSourceStatuses:(id)arg1;
- (id)qualityContext;
- (void)setQualityContext:(id)arg1;
- (void).cxx_destruct;
@end
