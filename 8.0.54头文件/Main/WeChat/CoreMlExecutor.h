@interface CoreMlExecutor : NSObject
{
    int _coreMlVersion; // +0x8
    MLModel * _model; // +0x10
    NSString * _mlModelFilePath; // +0x18
    NSString * _compiledModelFilePath; // +0x20
}
- (BOOL)invokeWithInputs:(const vector<TensorData, std::__1::allocator<TensorData> > *)arg1 outputs:(const vector<TensorData, std::__1::allocator<TensorData> > *)arg2;
- (BOOL)cleanup;
- (id)saveModel:(Model *)arg1;
- (BOOL)build:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (void)setModel:(id)arg1;
- (id)mlModelFilePath;
- (void)setMlModelFilePath:(id)arg1;
- (id)compiledModelFilePath;
- (void)setCompiledModelFilePath:(id)arg1;
- (int)coreMlVersion;
@end

