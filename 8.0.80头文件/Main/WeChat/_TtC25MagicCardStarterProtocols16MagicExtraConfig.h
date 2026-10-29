@interface _TtC25MagicCardStarterProtocols16MagicExtraConfig : NSObject
{
    BOOL useJitMode; // +0x8
    BOOL jitEnableHighFPS; // +0x9
    BOOL enableJitNativeRender; // +0xa
    UIView * jitNativeRenderContainer; // +0x10
    BOOL enableRenderEngine; // +0x18
    BOOL enableCodeCache; // +0x19
    unsigned long long reportSample; // +0x20
    BOOL jitEnableSAB; // +0x28
    BOOL jitEnableEarlyOMGOptimization; // +0x29
    void * customEnvParams; // +0x30
}
- (BOOL)useJitMode;
- (void)setUseJitMode:(BOOL)arg1;
- (BOOL)jitEnableHighFPS;
- (void)setJitEnableHighFPS:(BOOL)arg1;
- (BOOL)enableJitNativeRender;
- (void)setEnableJitNativeRender:(BOOL)arg1;
- (id)jitNativeRenderContainer;
- (void)setJitNativeRenderContainer:(id)arg1;
- (BOOL)enableRenderEngine;
- (void)setEnableRenderEngine:(BOOL)arg1;
- (BOOL)enableCodeCache;
- (void)setEnableCodeCache:(BOOL)arg1;
- (unsigned long long)reportSample;
- (void)setReportSample:(unsigned long long)arg1;
- (BOOL)jitEnableSAB;
- (void)setJitEnableSAB:(BOOL)arg1;
- (BOOL)jitEnableEarlyOMGOptimization;
- (void)setJitEnableEarlyOMGOptimization:(BOOL)arg1;
- (id)customEnvParams;
- (void)setCustomEnvParams:(id)arg1;
- (id)initWithUseJitMode:(BOOL)arg1 jitEnableHighFPS:(BOOL)arg2;
- (id)init;
- (void).cxx_destruct;
@end
