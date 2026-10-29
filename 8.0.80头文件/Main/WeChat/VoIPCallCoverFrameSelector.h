@interface VoIPCallCoverFrameSelector : NSObject
{
    BOOL _detectorReady; // +0x8
    float _weightSharpness; // +0xc
    float _weightCompleteness; // +0x10
    float _weightExpression; // +0x14
    float _completenessThreshold; // +0x18
    long long _strategy; // +0x20
    shared_ptr<wevision2::Face2DTracker> _tracker; // +0x28
    shared_ptr<wevision2::FaceQualityEstimator> _estimator; // +0x38
}
- (BOOL)startDetectorWithStrategy:(long long)arg1 weightSharpness:(float)arg2 weightCompleteness:(float)arg3 weightExpression:(float)arg4 completenessThreshold:(float)arg5;
- (void)stopDetector;
- (unsigned long long)recodePixelBuffer:(__CVBuffer *)arg1;
- (unsigned long long)preferredRecordIndexWithSelection:(long long)arg1;
- (float)evaluateScoreForPixelBuffer:(__CVBuffer *)arg1;
- (shared_ptr<wevision2::Face2DTracker>)tracker;
- (void)setTracker:(shared_ptr<wevision2::Face2DTracker>)arg1;
- (shared_ptr<wevision2::FaceQualityEstimator>)estimator;
- (void)setEstimator:(shared_ptr<wevision2::FaceQualityEstimator>)arg1;
- (BOOL)detectorReady;
- (void)setDetectorReady:(BOOL)arg1;
- (long long)strategy;
- (void)setStrategy:(long long)arg1;
- (float)weightSharpness;
- (void)setWeightSharpness:(float)arg1;
- (float)weightCompleteness;
- (void)setWeightCompleteness:(float)arg1;
- (float)weightExpression;
- (void)setWeightExpression:(float)arg1;
- (float)completenessThreshold;
- (void)setCompletenessThreshold:(float)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
