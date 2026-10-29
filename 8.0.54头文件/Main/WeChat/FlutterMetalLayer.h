@interface FlutterMetalLayer : CALayer
{
    id <MTLDevice> _preferredDevice; // +0x8
    CGSize _drawableSize; // +0x10
    unsigned long long _nextDrawableId; // +0x20
    NSMutableSet * _availableTextures; // +0x28
    unsigned long long _totalTextures; // +0x30
    FlutterTexture * _front; // +0x38
    CADisplayLink * _displayLink; // +0x40
    unsigned long long _displayLinkPauseCountdown; // +0x48
    BOOL _didSetContentsDuringThisDisplayLinkPeriod; // +0x50
    BOOL _displayLinkForcedMaxRate; // +0x51
    BOOL _framebufferOnly; // +0x52
    BOOL _wantsExtendedDynamicRangeContent; // +0x53
    BOOL _presentsWithTransaction; // +0x54
    id <MTLDevice> _device; // +0x58
    unsigned long long _pixelFormat; // +0x60
    CGColorSpace * _colorspace; // +0x68
}
+ (BOOL)enabled;
- (id)init;
- (void)dealloc;
- (void)setMaxRefreshRate:(double)arg1 forceMax:(BOOL)arg2;
- (void)onDisplayLink:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)setDrawableSize:(CGSize)arg1;
- (void)didEnterBackground:(id)arg1;
- (CGSize)drawableSize;
- (id)createIOSurface;
- (id)nextTexture;
- (id)tryNextTexture;
- (id)nextDrawable;
- (void)presentOnMainThread:(id)arg1;
- (void)presentTexture:(id)arg1;
- (void)returnTexture:(id)arg1;
- (id)preferredDevice;
- (id)device;
- (void)setDevice:(id)arg1;
- (unsigned long long)pixelFormat;
- (void)setPixelFormat:(unsigned long long)arg1;
- (BOOL)framebufferOnly;
- (void)setFramebufferOnly:(BOOL)arg1;
- (CGColorSpace *)colorspace;
- (void)setColorspace:(CGColorSpace *)arg1;
- (BOOL)wantsExtendedDynamicRangeContent;
- (void)setWantsExtendedDynamicRangeContent:(BOOL)arg1;
- (BOOL)presentsWithTransaction;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (void).cxx_destruct;
@end

