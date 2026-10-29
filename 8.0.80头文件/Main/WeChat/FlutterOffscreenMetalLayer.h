@interface FlutterOffscreenMetalLayer : CALayer <GPUTextureReleaseMetalLayer>
{
    id <MTLDevice> _preferredDevice; // +0x8
    CGSize _drawableSize; // +0x10
    CADisplayLink * _displayLink; // +0x20
    unsigned long long _displayLinkPauseCountdown; // +0x28
    BOOL _didSetContentsDuringThisDisplayLinkPeriod; // +0x30
    BOOL _displayLinkForcedMaxRate; // +0x31
    FlutterMetalDrawableProvider * _drawableProvider; // +0x38
    MainThreadDispatchDelayTracker _delayTracker; // +0x40
    BOOL _framebufferOnly; // +0x88
    BOOL _presentsWithTransaction; // +0x89
    id <MTLDevice> _device; // +0x90
    unsigned long long _pixelFormat; // +0x98
    CGColorSpace * _colorspace; // +0xa0
    long long _perEngineMaxPooledTextures; // +0xa8
}
- (id)init;
- (void)dealloc;
- (id)drawableProvider;
- (void)setMaxRefreshRate:(double)arg1 forceMax:(BOOL)arg2;
- (void)onDisplayLink:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)setDrawableSize:(CGSize)arg1;
- (void)didEnterBackground:(id)arg1;
- (CGSize)drawableSize;
- (id)nextDrawable;
- (BOOL)adoptDrawableProvider:(id)arg1;
- (void)commitDrawable:(id)arg1;
- (set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>>)getRecycledTexture;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)preferredDevice;
- (unsigned long long)pixelFormat;
- (void)setPixelFormat:(unsigned long long)arg1;
- (BOOL)framebufferOnly;
- (void)setFramebufferOnly:(BOOL)arg1;
- (BOOL)presentsWithTransaction;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (CGColorSpace *)colorspace;
- (void)setColorspace:(CGColorSpace *)arg1;
- (long long)perEngineMaxPooledTextures;
- (void)setPerEngineMaxPooledTextures:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
