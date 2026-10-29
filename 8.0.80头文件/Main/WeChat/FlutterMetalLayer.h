@interface FlutterMetalLayer : CALayer <GPUTextureReleaseMetalLayer>
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
    unsigned long long _maxIOSurfaceSize; // +0x58
    double _lastAllocTime; // +0x60
    BOOL _didLogFirstMetalLayerReuse; // +0x68
    set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> _recycledTexture; // +0x70
    MainThreadDispatchDelayTracker _delayTracker; // +0x88
    BOOL _framebufferOnly; // +0xd0
    BOOL _presentsWithTransaction; // +0xd1
    NSObject<OS_dispatch_source> * _timer; // +0xd8
    double _lastFinishPresentedTime; // +0xe0
    id <MTLDevice> _device; // +0xe8
    unsigned long long _pixelFormat; // +0xf0
    CGColorSpace * _colorspace; // +0xf8
}
+ (BOOL)enabled;
- (id)init;
- (void)dealloc;
- (void)setMaxRefreshRate:(double)arg1 forceMax:(BOOL)arg2;
- (void)onDisplayLink:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)setDrawableSize:(CGSize)arg1;
- (void)updateMaxIOSurfaceSize:(unsigned long long)arg1;
- (void)didEnterBackground:(id)arg1;
- (CGSize)drawableSize;
- (id)createIOSurface;
- (id)nextTexture;
- (void)startTimer;
- (void)stopTimer;
- (void)shrinkOverProvisionedPoolLocked;
- (id)tryNextTexture;
- (id)nextDrawable;
- (void)presentOnMainThread:(id)arg1;
- (void)presentTexture:(id)arg1;
- (void)getTexture:(id)arg1;
- (void)returnTexture:(id)arg1;
- (void)didChangedQosLevel;
- (set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>>)getRecycledTexture;
- (unsigned long long)debugTotalTextures;
- (id)timer;
- (void)setTimer:(id)arg1;
- (double)lastFinishPresentedTime;
- (void)setLastFinishPresentedTime:(double)arg1;
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
- (void).cxx_destruct;
- (id).cxx_construct;
@end
