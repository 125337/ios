@interface MMLiteAppPixelBufferGrabber : NSObject
{
    __CVMetalTextureCache * _metalTextureCache; // +0x8
    __CVPixelBufferPool * _pixelBufferPool; // +0x10
    unsigned long long _poolWidth; // +0x18
    unsigned long long _poolHeight; // +0x20
    __IOSurface * _lastSurface; // +0x28
    unsigned int _lastSeed; // +0x30
    BOOL _running; // +0x34
    id /* block */ _onPixelBuffer; // +0x38
    id <MTLDevice> _metalDevice; // +0x40
    id /* block */ _onMetalTexture; // +0x48
    long long _preferredFramesPerSecond; // +0x50
    UIView * _targetView; // +0x58
    CALayer * _targetLayer; // +0x60
    CADisplayLink * _displayLink; // +0x68
}
- (id)initWithTargetView:(id)arg1;
- (id)initWithTargetLayer:(id)arg1;
- (void)dealloc;
- (void)setMetalDevice:(id)arg1;
- (void)start;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)stop;
- (void)onDisplayLink:(id)arg1;
- (void)captureViewHierarchy:(id)arg1 presentationTime:(struct)arg2;
- (BOOL)ensurePixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)releasePixelBufferPool;
- (void)emitMetalTextureFromPixelBuffer:(__CVBuffer *)arg1 pts:(struct)arg2;
- (id /* block */)onPixelBuffer;
- (void)setOnPixelBuffer:(id /* block */)arg1;
- (id)metalDevice;
- (id /* block */)onMetalTexture;
- (void)setOnMetalTexture:(id /* block */)arg1;
- (BOOL)isRunning;
- (void)setRunning:(BOOL)arg1;
- (long long)preferredFramesPerSecond;
- (id)targetView;
- (void)setTargetView:(id)arg1;
- (id)targetLayer;
- (void)setTargetLayer:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end
