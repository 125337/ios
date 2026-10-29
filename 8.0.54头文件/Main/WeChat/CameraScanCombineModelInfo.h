@interface CameraScanCombineModelInfo : NSObject
{
    BOOL _useXNet; // +0x8
    long long _modelVersion; // +0x10
    NSString * _detectParamPath; // +0x18
    NSString * _detectModelPath; // +0x20
    NSString * _classifyParamPath; // +0x28
    NSString * _classifyModelPath; // +0x30
    NSString * _modelConfig; // +0x38
}
- (long long)modelVersion;
- (void)setModelVersion:(long long)arg1;
- (id)detectParamPath;
- (void)setDetectParamPath:(id)arg1;
- (id)detectModelPath;
- (void)setDetectModelPath:(id)arg1;
- (id)classifyParamPath;
- (void)setClassifyParamPath:(id)arg1;
- (id)classifyModelPath;
- (void)setClassifyModelPath:(id)arg1;
- (id)modelConfig;
- (void)setModelConfig:(id)arg1;
- (BOOL)useXNet;
- (void)setUseXNet:(BOOL)arg1;
- (void).cxx_destruct;
@end

