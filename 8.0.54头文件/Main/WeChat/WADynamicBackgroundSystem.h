@interface WADynamicBackgroundSystem : WADynamicBackgroundGLObject <WCMainWindowExt>
{
    unsigned int colorStep; // +0x8
    float colorRatio; // +0xc
    BOOL _currentInDarkMode; // +0x10
    unsigned int _framePerSecond; // +0x14
    DynamicBackgroundSystemConfig * _config; // +0x18
    NSMutableArray * _activeParticles; // +0x20
    double _backgroundDuration; // +0x28
    id <DynamicBackgroundSystemDelegate> _delegate; // +0x30
}
+ (id)getDefaultDynamicSystemConfigForWidth:(double)arg1 height:(double)arg2;
+ (_GLKVector4)getVector4ColorFromHex:(int)arg1 alpha:(double)arg2;
- (id)initWithGLContext:(id)arg1 config:(id)arg2;
- (void)detectDarkMode;
- (void)fillParticles;
- (void)newParticle;
- (void)resetParticle:(id)arg1;
- (void)update:(double)arg1;
- (_GLKVector4)getColorFromStartConfig:(id)arg1 endConfig:(id)arg2 index:(unsigned int)arg3 portion:(double)arg4;
- (_GLKVector4)getBGColorFromStartConfig:(id)arg1 endConfig:(id)arg2 bgIndex:(unsigned int)arg3 portion:(double)arg4;
- (_GLKVector4)mixColorWithA:(_GLKVector4)arg1 b:(_GLKVector4)arg2 portion:(double)arg3;
- (void)draw:(id)arg1;
- (float)randFloat:(float)arg1 end:(float)arg2;
- (_GLKVector3)randVector3:(_GLKVector3)arg1 end:(_GLKVector3)arg2;
- (double)getNumberInNormalDistributionWithMean:(double)arg1 stdDev:(double)arg2;
- (double)uniform2NormalDistribution;
- (void)mm_onColorAppearanceDidChange;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)activeParticles;
- (void)setActiveParticles:(id)arg1;
- (unsigned int)framePerSecond;
- (void)setFramePerSecond:(unsigned int)arg1;
- (double)backgroundDuration;
- (void)setBackgroundDuration:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)currentInDarkMode;
- (void)setCurrentInDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

