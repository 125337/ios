@interface FlutterMetalDrawableProvider : NSObject
{
    NSMutableSet * _availableTextures; // +0x8
    unsigned long long _totalTextures; // +0x10
    unsigned long long _maxPooledTextures; // +0x18
    unsigned long long _totalAllocated; // +0x20
    unsigned long long _nextDrawableId; // +0x28
    _FDPTexture * _front; // +0x30
    id _memoryWarningObserver; // +0x38
    id _qosObserver; // +0x40
    set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> _recycledTextureIds; // +0x48
    BOOL _didLogFirstOnscreenReuse; // +0x60
    BOOL _didLogFirstOnscreenPresent; // +0x61
    BOOL _pendingReuseLastFrameOnce; // +0x62
    unsigned long long _handoffLastFrameTextureId; // +0x68
    double _lastAllocTime; // +0x70
    NSObject<OS_dispatch_source> * _idleTimer; // +0x78
    BOOL _presentsWithTransaction; // +0x80
    BOOL _framebufferOnly; // +0x81
    id <MTLDevice> _device; // +0x88
    unsigned long long _pixelFormat; // +0x90
    CGColorSpace * _colorspace; // +0x98
    long long _mode; // +0xa0
    FlutterOffscreenMetalLayer * _hostLayer; // +0xa8
    CGSize _drawableSize; // +0xb0
}
- (id)initWithDevice:(id)arg1 size:(CGSize)arg2 pixelFormat:(unsigned long long)arg3 colorspace:(CGColorSpace *)arg4;
- (void)dealloc;
- (unsigned long long)debug_totalTexturesAllocated;
- (set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>>)drainRecycledTextureIds;
- (id)debug_latestTexture;
- (CGSize)drawableSize;
- (id)_createIOSurface;
- (id)_createTextureWithSurface:(id)arg1;
- (void)setMode:(long long)arg1;
- (id)nextDrawable;
- (id)_tryNextDrawable;
- (id)_pickStrictReusableLocked;
- (void)_shrinkOverProvisionedLocked;
- (id)_pickLifoReusableLocked;
- (id)_pickOldestReusableLocked;
- (void)presentDrawable:(id)arg1;
- (void)reconfigureForSize:(CGSize)arg1;
- (void)updateMaxPooledTextures:(unsigned long long)arg1;
- (void)_updateMaxPooledTextures:(unsigned long long)arg1;
- (void)_startIdleTimer;
- (void)_stopIdleTimer;
- (void)drainPoolKeepingLatest;
- (id)device;
- (unsigned long long)pixelFormat;
- (CGColorSpace *)colorspace;
- (long long)mode;
- (id)hostLayer;
- (void)setHostLayer:(id)arg1;
- (BOOL)presentsWithTransaction;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (BOOL)framebufferOnly;
- (void)setFramebufferOnly:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
