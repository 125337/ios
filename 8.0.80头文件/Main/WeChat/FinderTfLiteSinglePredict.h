@interface FinderTfLiteSinglePredict : NSObject
{
    NSString * _modelPath; // +0x8
    TfLiteInterpreter * _tflite; // +0x10
    TfLiteModel * _model; // +0x18
    NSData * _modelData; // +0x20
    NSArray * _cachedResult; // +0x28
    double _lastPredictTime; // +0x30
    float * _inputBuffer; // +0x38
    float * _outputBuffer; // +0x40
    long long _maxInputSize; // +0x48
    long long _maxOutputSize; // +0x50
}
- (id)initWithModelPath:(id)arg1;
- (id)predictWithFeatures:(id)arg1 outputSize:(long long)arg2 targetRedDotArray:(id)arg3;
- (BOOL)loadModel;
- (void)warmUpPredict;
- (BOOL)inputsCheckWithFeatures:(id)arg1;
- (void)releaseModel;
- (void)dealloc;
- (id)modelPath;
- (void)setModelPath:(id)arg1;
- (TfLiteInterpreter *)tflite;
- (void)setTflite:(TfLiteInterpreter *)arg1;
- (TfLiteModel *)model;
- (void)setModel:(TfLiteModel *)arg1;
- (id)modelData;
- (void)setModelData:(id)arg1;
- (id)cachedResult;
- (void)setCachedResult:(id)arg1;
- (double)lastPredictTime;
- (void)setLastPredictTime:(double)arg1;
- (float *)inputBuffer;
- (void)setInputBuffer:(float *)arg1;
- (float *)outputBuffer;
- (void)setOutputBuffer:(float *)arg1;
- (long long)maxInputSize;
- (void)setMaxInputSize:(long long)arg1;
- (long long)maxOutputSize;
- (void)setMaxOutputSize:(long long)arg1;
- (void).cxx_destruct;
@end
