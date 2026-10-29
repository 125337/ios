@interface MultiArrayFeatureProvider : NSObject <MLFeatureProvider>
{
    const vector<TensorData, std::__1::allocator<TensorData> > * _inputs; // +0x8
    NSSet * _featureNames; // +0x10
    int _coreMlVersion; // +0x18
}
- (id)initWithInputs:(const vector<TensorData, std::__1::allocator<TensorData> > *)arg1 coreMlVersion:(int)arg2;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (void).cxx_destruct;
- (int)coreMlVersion;
@end
