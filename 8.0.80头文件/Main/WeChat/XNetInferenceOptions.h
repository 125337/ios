@interface XNetInferenceOptions : NSObject
{
    Options _underlying; // +0x8
    BOOL _useNpuOnly; // +0x80
}
- (id)initWithUnderlying:(const void *)arg1;
- (const void *)underlying;
- (int)numThreads;
- (void)setNumThreads:(int)arg1;
- (id)modelCachePath;
- (void)setModelCachePath:(id)arg1;
- (id)gpuLibFilename;
- (void)setGpuLibFilename:(id)arg1;
- (int)precisionLevel;
- (void)setPrecisionLevel:(int)arg1;
- (BOOL)allowQuantize;
- (void)setAllowQuantize:(BOOL)arg1;
- (BOOL)allowGPU;
- (void)setAllowGPU:(BOOL)arg1;
- (BOOL)allowNPU;
- (void)setAllowNPU:(BOOL)arg1;
- (BOOL)useNpuOnly;
- (id)modelType;
- (void)setModelType:(id)arg1;
- (id)typicalShape;
- (void)setTypicalShape:(id)arg1;
- (void)setUseNpuOnly:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
