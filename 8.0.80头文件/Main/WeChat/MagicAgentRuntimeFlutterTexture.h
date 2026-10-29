@interface MagicAgentRuntimeFlutterTexture : NSObject <FlutterTexture>
{
    BOOL _isActive; // +0x8
    long long _textureId; // +0x10
    id /* block */ _textureSizeDidChangeBlock; // +0x18
    NSObject<FlutterTextureRegistry> * _registry; // +0x20
    MagicWeAppCardSclFrameSetView * _frameSetView; // +0x28
    double _cachedScreenScale; // +0x30
    WANativeViewTexture * _lastNativeViewTexture; // +0x38
    unsigned long long _frameProduceCount; // +0x40
    unsigned long long _copyPixelBufferCount; // +0x48
    CGSize _textureLogicalSize; // +0x50
}
- (id)initWithRegistry:(id)arg1 frameSetView:(id)arg2;
- (void)dealloc;
- (void)attachFrameSetView:(id)arg1;
- (void)destroy;
- (__CVBuffer *)copyPixelBuffer;
- (void)onPixelBufferUpdate:(id)arg1;
- (long long)textureId;
- (BOOL)isActive;
- (CGSize)textureLogicalSize;
- (void)setTextureLogicalSize:(CGSize)arg1;
- (id /* block */)textureSizeDidChangeBlock;
- (void)setTextureSizeDidChangeBlock:(id /* block */)arg1;
- (id)registry;
- (void)setRegistry:(id)arg1;
- (id)frameSetView;
- (void)setFrameSetView:(id)arg1;
- (double)cachedScreenScale;
- (void)setCachedScreenScale:(double)arg1;
- (id)lastNativeViewTexture;
- (void)setLastNativeViewTexture:(id)arg1;
- (unsigned long long)frameProduceCount;
- (void)setFrameProduceCount:(unsigned long long)arg1;
- (unsigned long long)copyPixelBufferCount;
- (void)setCopyPixelBufferCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
