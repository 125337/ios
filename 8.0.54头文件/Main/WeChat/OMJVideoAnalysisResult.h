@interface OMJVideoAnalysisResult : NSObject
{
    NSArray * _visionTaskOutLabels; // +0x8
    NSArray * _visionTaskExceedsThreshold; // +0x10
    NSArray * _visionTaskOutScores; // +0x18
    NSArray * _audioTaskOutLabels; // +0x20
    NSArray * _audioTaskOutScores; // +0x28
    NSArray * _lastVersionOutScores; // +0x30
    NSDictionary * _clusters; // +0x38
    NSArray * _embeddingFeature; // +0x40
}
- (id)initWithVisionTaskOutLabels:(id)arg1 visionTaskExceedsThreshold:(id)arg2 visionTaskOutScores:(id)arg3 audioTaskOutLabels:(id)arg4 audioTaskOutScores:(id)arg5 lastVersionOutScores:(id)arg6 clusters:(id)arg7 embeddingFeature:(id)arg8;
- (id)visionTaskOutLabels;
- (id)visionTaskExceedsThreshold;
- (id)visionTaskOutScores;
- (id)audioTaskOutLabels;
- (id)audioTaskOutScores;
- (id)lastVersionOutScores;
- (id)clusters;
- (id)embeddingFeature;
- (void).cxx_destruct;
@end

