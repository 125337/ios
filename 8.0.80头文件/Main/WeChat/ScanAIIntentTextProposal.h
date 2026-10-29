@interface ScanAIIntentTextProposal : NSObject
{
    NSNumber * _trackId; // +0x8
    long long _ffeClassId; // +0x10
    unsigned long long _detectionIndex; // +0x18
    double _modelProb; // +0x20
    ScanAIIntentGeometryMetrics * _geometryMetrics; // +0x28
    double _proposalScore; // +0x30
    CGRect _normalizedRect; // +0x38
}
- (CGRect)normalizedRect;
- (void)setNormalizedRect:(CGRect)arg1;
- (id)trackId;
- (void)setTrackId:(id)arg1;
- (long long)ffeClassId;
- (void)setFfeClassId:(long long)arg1;
- (unsigned long long)detectionIndex;
- (void)setDetectionIndex:(unsigned long long)arg1;
- (double)modelProb;
- (void)setModelProb:(double)arg1;
- (id)geometryMetrics;
- (void)setGeometryMetrics:(id)arg1;
- (double)proposalScore;
- (void)setProposalScore:(double)arg1;
- (void).cxx_destruct;
@end
