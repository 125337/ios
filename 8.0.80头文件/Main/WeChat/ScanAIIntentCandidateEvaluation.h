@interface ScanAIIntentCandidateEvaluation : NSObject
{
    BOOL _eligible; // +0x8
    ScanAIIntentCandidate * _candidate; // +0x10
    ScanAIIntentGeometryMetrics * _geometryMetrics; // +0x18
    double _shapePenalty; // +0x20
    double _admissionScore; // +0x28
    double _finalScore; // +0x30
    NSString * _rejectReason; // +0x38
}
- (id)candidate;
- (void)setCandidate:(id)arg1;
- (BOOL)eligible;
- (void)setEligible:(BOOL)arg1;
- (id)geometryMetrics;
- (void)setGeometryMetrics:(id)arg1;
- (double)shapePenalty;
- (void)setShapePenalty:(double)arg1;
- (double)admissionScore;
- (void)setAdmissionScore:(double)arg1;
- (double)finalScore;
- (void)setFinalScore:(double)arg1;
- (id)rejectReason;
- (void)setRejectReason:(id)arg1;
- (void).cxx_destruct;
@end
