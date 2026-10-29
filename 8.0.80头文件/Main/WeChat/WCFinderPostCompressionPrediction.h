@interface WCFinderPostCompressionPrediction : NSObject
{
    unsigned long long _status; // +0x8
    NSNumber * _predictedCompressionDurationMs; // +0x10
    NSNumber * _predictedCompressedFileSizeBytes; // +0x18
    NSString * _modelVersion; // +0x20
    NSString * _reason; // +0x28
    NSDictionary * _inputSnapshot; // +0x30
    double _evaluationDurationMs; // +0x38
}
- (id)init;
- (id)initWithStatus:(unsigned long long)arg1 predictedCompressionDurationMs:(id)arg2 predictedCompressedFileSizeBytes:(id)arg3 modelVersion:(id)arg4 reason:(id)arg5 inputSnapshot:(id)arg6 evaluationDurationMs:(double)arg7;
- (id)dictionaryRepresentation;
- (id)description;
- (unsigned long long)status;
- (id)predictedCompressionDurationMs;
- (id)predictedCompressedFileSizeBytes;
- (id)modelVersion;
- (id)reason;
- (id)inputSnapshot;
- (void)setInputSnapshot:(id)arg1;
- (double)evaluationDurationMs;
- (void)setEvaluationDurationMs:(double)arg1;
- (void).cxx_destruct;
@end
