@interface ScanAIIntentBaselineL3Policy : NSObject <ScanAIIntentL3Policy>
{
    ScanAIIntentScanScenePolicy * _scenePolicy; // +0x8
    id <ScanAIIntentQualityPolicy> _qualityPolicy; // +0x10
}
- (id)initWithEnabledIntentTypes:(id)arg1 experimentCategoryAllowlist:(id)arg2 qualityPolicy:(id)arg3;
- (id)winnerFromCandidateBatch:(id)arg1;
- (BOOL)shouldRetrackWinner:(id)arg1 mode:(long long)arg2;
- (CGRect)outputRectForRetrackedWinner:(id)arg1 trackedRect:(CGRect)arg2 frameWidth:(double)arg3 frameHeight:(double)arg4;
- (id)resultForWinner:(id)arg1 trackId:(id)arg2 outputRect:(CGRect)arg3 costMS:(double)arg4 mode:(long long)arg5;
- (id)scenePolicy;
- (void)setScenePolicy:(id)arg1;
- (id)qualityPolicy;
- (void)setQualityPolicy:(id)arg1;
- (void).cxx_destruct;
@end
