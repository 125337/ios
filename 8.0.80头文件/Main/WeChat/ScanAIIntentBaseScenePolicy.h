@interface ScanAIIntentBaseScenePolicy : NSObject <ScanAIIntentSceneRanking>
{
    BOOL _lastLoggedHadWinner; // +0x8
    ScanAIIntentScenePolicyConfiguration * _configuration; // +0x10
    unsigned long long _completedEvaluationCount; // +0x18
    long long _lastLoggedIntentType; // +0x20
}
- (id)initWithConfiguration:(id)arg1;
- (id)winnerFromCandidateBatch:(id)arg1;
- (id)evaluationForCandidate:(id)arg1;
- (void)evaluateFaceCandidate:(id)arg1;
- (void)evaluateTextCandidate:(id)arg1;
- (void)evaluateObjectCandidate:(id)arg1;
- (BOOL)rejectEvaluation:(id)arg1 when:(BOOL)arg2 reason:(id)arg3;
- (struct)geometryAdmissionProfileForIntentType:(long long)arg1;
- (BOOL)applyGeometryAdmissionForEvaluation:(id)arg1;
- (double)shapePenaltyForCandidate:(id)arg1 geometryProfile:(struct)arg2;
- (double)commonScoreForEvaluation:(id)arg1 shapePenalty:(double)arg2;
- (double)commonQualityScoreForEvaluation:(id)arg1 shapePenalty:(double)arg2;
- (void)finalizeEvaluation:(id)arg1 finalScore:(double)arg2 minimumFinalScore:(double)arg3;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (unsigned long long)completedEvaluationCount;
- (void)setCompletedEvaluationCount:(unsigned long long)arg1;
- (BOOL)lastLoggedHadWinner;
- (void)setLastLoggedHadWinner:(BOOL)arg1;
- (long long)lastLoggedIntentType;
- (void)setLastLoggedIntentType:(long long)arg1;
- (void).cxx_destruct;
@end
