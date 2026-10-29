@interface ScanAIIntentL1FFEConfiguration : NSObject
{
    NSArray * _heads; // +0x8
    long long _inputSize; // +0x10
    long long _numClasses; // +0x18
    long long _regressionMaximum; // +0x20
    double _motionVectorThreshold; // +0x28
    long long _embeddingTrackSkipCount; // +0x30
    double _scoreThreshold; // +0x38
    double _textScoreThreshold; // +0x40
    unsigned long long _hitCount; // +0x48
    double _hitMaximumScore; // +0x50
    double _cosineSimilarityThreshold; // +0x58
    long long _maximumAge; // +0x60
    double _noiseMaximumAreaThreshold; // +0x68
    double _noiseMinimumScoreThreshold; // +0x70
    double _minimumAreaThreshold; // +0x78
    double _minimumAreaScoreThreshold; // +0x80
    long long _skipFirstFrameCount; // +0x88
    double _barcodeScore; // +0x90
}
- (id)heads;
- (void)setHeads:(id)arg1;
- (long long)inputSize;
- (void)setInputSize:(long long)arg1;
- (long long)numClasses;
- (void)setNumClasses:(long long)arg1;
- (long long)regressionMaximum;
- (void)setRegressionMaximum:(long long)arg1;
- (double)motionVectorThreshold;
- (void)setMotionVectorThreshold:(double)arg1;
- (long long)embeddingTrackSkipCount;
- (void)setEmbeddingTrackSkipCount:(long long)arg1;
- (double)scoreThreshold;
- (void)setScoreThreshold:(double)arg1;
- (double)textScoreThreshold;
- (void)setTextScoreThreshold:(double)arg1;
- (unsigned long long)hitCount;
- (void)setHitCount:(unsigned long long)arg1;
- (double)hitMaximumScore;
- (void)setHitMaximumScore:(double)arg1;
- (double)cosineSimilarityThreshold;
- (void)setCosineSimilarityThreshold:(double)arg1;
- (long long)maximumAge;
- (void)setMaximumAge:(long long)arg1;
- (double)noiseMaximumAreaThreshold;
- (void)setNoiseMaximumAreaThreshold:(double)arg1;
- (double)noiseMinimumScoreThreshold;
- (void)setNoiseMinimumScoreThreshold:(double)arg1;
- (double)minimumAreaThreshold;
- (void)setMinimumAreaThreshold:(double)arg1;
- (double)minimumAreaScoreThreshold;
- (void)setMinimumAreaScoreThreshold:(double)arg1;
- (long long)skipFirstFrameCount;
- (void)setSkipFirstFrameCount:(long long)arg1;
- (double)barcodeScore;
- (void)setBarcodeScore:(double)arg1;
- (void).cxx_destruct;
@end
