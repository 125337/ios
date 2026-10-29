@interface ScanAIIntentV3PreL3Policy : NSObject <ScanAIIntentL3Policy>
{
    NSSet * _enabledIntentTypes; // +0x8
    id <ScanAIIntentQualityPolicy> _qualityPolicy; // +0x10
}
- (id)initWithEnabledIntentTypes:(id)arg1 experimentCategoryAllowlist:(id)arg2 qualityPolicy:(id)arg3;
- (id)winnerFromCandidateBatch:(id)arg1;
- (BOOL)shouldRetrackWinner:(id)arg1 mode:(long long)arg2;
- (CGRect)outputRectForRetrackedWinner:(id)arg1 trackedRect:(CGRect)arg2 frameWidth:(double)arg3 frameHeight:(double)arg4;
- (id)resultForWinner:(id)arg1 trackId:(id)arg2 outputRect:(CGRect)arg3 costMS:(double)arg4 mode:(long long)arg5;
- (id)evaluationForCandidate:(id)arg1;
- (long long)compareEvaluation:(id)arg1 other:(id)arg2;
- (id)contextualWinnerFromEvaluations:(id)arg1;
- (id)firstEvaluationOfType:(long long)arg1 evaluations:(id)arg2;
- (BOOL)rule:(id)arg1 passesChallenger:(id)arg2 incumbent:(id)arg3;
- (id)featuresForChallenger:(id)arg1 incumbent:(id)arg2;
- (long long)priorityForIntentType:(long long)arg1;
- (id)contextualRules;
- (id)enabledIntentTypes;
- (void)setEnabledIntentTypes:(id)arg1;
- (id)qualityPolicy;
- (void)setQualityPolicy:(id)arg1;
- (void).cxx_destruct;
@end
