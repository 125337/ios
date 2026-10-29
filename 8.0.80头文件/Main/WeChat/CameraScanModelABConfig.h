@interface CameraScanModelABConfig : NSObject
{
    BOOL _modelValidated; // +0x8
    BOOL _enableStride8_raw; // +0x9
    BOOL _enableTextReID_raw; // +0xa
    NSString * _detectModelKey; // +0x10
    NSString * _classifyModelKey; // +0x18
    NSString * _modelConfigName; // +0x20
    NSDictionary * _modelParams_raw; // +0x28
}
+ (id)configFromDictionary:(id)arg1;
- (BOOL)enableStride8;
- (BOOL)enableTextReID;
- (id)modelParams;
- (BOOL)isValid;
- (id)detectModelKey;
- (void)setDetectModelKey:(id)arg1;
- (id)classifyModelKey;
- (void)setClassifyModelKey:(id)arg1;
- (id)modelConfigName;
- (void)setModelConfigName:(id)arg1;
- (BOOL)modelValidated;
- (void)setModelValidated:(BOOL)arg1;
- (BOOL)enableStride8_raw;
- (void)setEnableStride8_raw:(BOOL)arg1;
- (BOOL)enableTextReID_raw;
- (void)setEnableTextReID_raw:(BOOL)arg1;
- (id)modelParams_raw;
- (void)setModelParams_raw:(id)arg1;
- (void).cxx_destruct;
@end
