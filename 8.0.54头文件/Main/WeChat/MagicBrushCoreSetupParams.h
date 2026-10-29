@interface MagicBrushCoreSetupParams : NSObject
{
    BOOL _enablePerformance; // +0x8
    BOOL _isNativeRenderMode; // +0x9
    BOOL _autoHighFreshRate; // +0xa
    NSString * _renderThreadName; // +0x10
    long long _enableParallelShaderCompile; // +0x18
}
- (BOOL)enablePerformance;
- (void)setEnablePerformance:(BOOL)arg1;
- (BOOL)isNativeRenderMode;
- (void)setIsNativeRenderMode:(BOOL)arg1;
- (BOOL)autoHighFreshRate;
- (void)setAutoHighFreshRate:(BOOL)arg1;
- (id)renderThreadName;
- (void)setRenderThreadName:(id)arg1;
- (long long)enableParallelShaderCompile;
- (void)setEnableParallelShaderCompile:(long long)arg1;
- (void).cxx_destruct;
@end

