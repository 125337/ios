@interface MagicBrushCoreSetupParams : NSObject
{
    BOOL _enablePerformance; // +0x8
    BOOL _isNativeRenderMode; // +0x9
    BOOL _autoHighFreshRate; // +0xa
    BOOL _disableDeleteBinding; // +0xb
    BOOL _enableGfx; // +0xc
    BOOL _enableMetalCPP; // +0xd
    BOOL _enableUnifiedCmdbuffer; // +0xe
    BOOL _enableCmdbufferCanvas2d; // +0xf
    NSString * _renderThreadName; // +0x10
    long long _enableParallelShaderCompile; // +0x18
}
- (BOOL)enablePerformance;
- (void)setEnablePerformance:(BOOL)arg1;
- (BOOL)isNativeRenderMode;
- (void)setIsNativeRenderMode:(BOOL)arg1;
- (BOOL)autoHighFreshRate;
- (void)setAutoHighFreshRate:(BOOL)arg1;
- (BOOL)disableDeleteBinding;
- (void)setDisableDeleteBinding:(BOOL)arg1;
- (BOOL)enableGfx;
- (void)setEnableGfx:(BOOL)arg1;
- (BOOL)enableMetalCPP;
- (void)setEnableMetalCPP:(BOOL)arg1;
- (BOOL)enableUnifiedCmdbuffer;
- (void)setEnableUnifiedCmdbuffer:(BOOL)arg1;
- (BOOL)enableCmdbufferCanvas2d;
- (void)setEnableCmdbufferCanvas2d:(BOOL)arg1;
- (id)renderThreadName;
- (void)setRenderThreadName:(id)arg1;
- (long long)enableParallelShaderCompile;
- (void)setEnableParallelShaderCompile:(long long)arg1;
- (void).cxx_destruct;
@end
