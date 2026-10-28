@interface VideoLucidMetal : NSObject
{
    int _lucidMode; // +0x8
    id <MTLDevice> _metalDevice; // +0x10
    id <MTLLibrary> _shadersLibrary; // +0x18
    unsigned long long _width; // +0x20
    unsigned long long _height; // +0x28
    id <MTLBuffer> _vertexBuffer; // +0x30
    MTLRenderPassDescriptor * mSourcePassDescriptor; // +0x38
    MTLTextureDescriptor * _sourceTextureDescriptor; // +0x40
    id <MTLTexture> _sourceTexture; // +0x48
    MTLRenderPassDescriptor * _drawablePassDescriptor; // +0x50
    id <MTLRenderPipelineState> _drawablePipelineState; // +0x58
    int _frameNum; // +0x60
    float _screenBrightness; // +0x64
    float _screenBrightnessThreshold; // +0x68
    float _screenBrightnessHeadroom; // +0x6c
    float _screenCurrentEDRHeadroom; // +0x70
}
- (id)initWithLucidMode:(int)arg1 device:(id)arg2;
- (void)dealloc;
- (id)getTexture;
- (int)getMode;
- (void)setupTexturesWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setScreenBrightness:(float)arg1;
- (void)setScreenEDRHeadroom:(float)arg1;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (void).cxx_destruct;
@end
