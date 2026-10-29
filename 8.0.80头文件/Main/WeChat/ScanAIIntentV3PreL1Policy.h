@interface ScanAIIntentV3PreL1Policy : NSObject <ScanAIIntentL1Policy>
- (id)currentModelInfo;
- (id)ffeConfigurationForMode:(long long)arg1;
- (BOOL)usesFaceDetector;
- (BOOL)usesTextFilter;
- (double)faceFinalThreshold;
- (BOOL)isTextClassId:(long long)arg1;
- (id)nonTextCandidateWithNormalizedRect:(CGRect)arg1 trackId:(id)arg2 ffeClassId:(long long)arg3 detectionIndex:(unsigned long long)arg4 modelProb:(double)arg5 mode:(long long)arg6;
- (id)faceCandidateWithNormalizedRect:(CGRect)arg1 mode:(long long)arg2;
- (BOOL)prepareSucceedsForMode:(long long)arg1 enabledIntentTypes:(id)arg2 ffeReady:(BOOL)arg3 faceReady:(BOOL)arg4;
- (CGRect)filteredNormalizedRectForRawRect:(CGRect)arg1 modelProb:(double)arg2 reasonCode:(id *)arg3;
- (CGRect)filteredNormalizedFaceRect:(CGRect)arg1;
- (long long)intentTypeForFFEClassId:(long long)arg1;
- (void)setReasonCode:(id)arg1 output:(id *)arg2;
@end
