@interface ScanAIIntentCandidate : NSObject
{
    long long _intentType; // +0x8
    long long _source; // +0x10
    NSNumber * _trackId; // +0x18
    double _normalizedArea; // +0x20
    double _aspectRatio; // +0x28
    ScanAIIntentGeometryMetrics * _geometryMetrics; // +0x30
    long long _ffeClassId; // +0x38
    unsigned long long _detectionIndex; // +0x40
    double _modelProb; // +0x48
    double _textDensity; // +0x50
    unsigned long long _validTextBoxCount; // +0x58
    CGRect _normalizedRect; // +0x60
}
+ (id)objectCandidateWithNormalizedRect:(CGRect)arg1 trackId:(id)arg2 ffeClassId:(long long)arg3 modelProb:(double)arg4;
+ (id)ffeCandidateWithIntentType:(long long)arg1 normalizedRect:(CGRect)arg2 trackId:(id)arg3 ffeClassId:(long long)arg4 detectionIndex:(unsigned long long)arg5 modelProb:(double)arg6;
+ (id)textCandidateWithIntentType:(long long)arg1 normalizedRect:(CGRect)arg2 trackId:(id)arg3 ffeClassId:(long long)arg4 detectionIndex:(unsigned long long)arg5 modelProb:(double)arg6 textDensity:(double)arg7 validTextBoxCount:(unsigned long long)arg8;
+ (id)faceCandidateWithNormalizedRect:(CGRect)arg1;
+ (id)candidateWithIntentType:(long long)arg1 source:(long long)arg2 normalizedRect:(CGRect)arg3 trackId:(id)arg4 ffeClassId:(long long)arg5 detectionIndex:(unsigned long long)arg6 modelProb:(double)arg7 textDensity:(double)arg8 validTextBoxCount:(unsigned long long)arg9;
+ (CGRect)validNormalizedRect:(CGRect)arg1;
- (long long)intentType;
- (void)setIntentType:(long long)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (CGRect)normalizedRect;
- (void)setNormalizedRect:(CGRect)arg1;
- (id)trackId;
- (void)setTrackId:(id)arg1;
- (double)normalizedArea;
- (void)setNormalizedArea:(double)arg1;
- (double)aspectRatio;
- (void)setAspectRatio:(double)arg1;
- (id)geometryMetrics;
- (void)setGeometryMetrics:(id)arg1;
- (long long)ffeClassId;
- (void)setFfeClassId:(long long)arg1;
- (unsigned long long)detectionIndex;
- (void)setDetectionIndex:(unsigned long long)arg1;
- (double)modelProb;
- (void)setModelProb:(double)arg1;
- (double)textDensity;
- (void)setTextDensity:(double)arg1;
- (unsigned long long)validTextBoxCount;
- (void)setValidTextBoxCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
