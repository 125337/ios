@interface FinderTfLiteMultiClassifyPredict : NSObject
{
    NSString * _modelPath; // +0x8
    TfLiteInterpreter * _tflite; // +0x10
    TfLiteModel * _model; // +0x18
    NSData * _modelData; // +0x20
    NSDictionary * _cachedResult; // +0x28
    double _lastPredictTime; // +0x30
}
- (id)initWithModelPath:(id)arg1;
- (id)predictWithFeatures:(id)arg1 outputIndex:(id)arg2;
- (BOOL)loadModel;
- (BOOL)inputsCheckWithFeatures:(id)arg1;
- (BOOL)outputsCheckWithOutput:(float *)arg1 size:(long long)arg2;
- (void)releaseModel;
- (void)dealloc;
- (id)wrapOutputWithIndex:(id)arg1 result:(id)arg2;
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
- (void).cxx_destruct;
@end
