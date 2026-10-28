@interface VideoColorLUTMetal : NSObject
{
    id <MTLDevice> _metalDevice; // +0x8
    id <MTLLibrary> _shadersLibrary; // +0x10
    unsigned long long _width; // +0x18
    unsigned long long _height; // +0x20
    id <MTLBuffer> _vertexBuffer; // +0x28
    MTLRenderPassDescriptor * mSourcePassDescriptor; // +0x30
    MTLTextureDescriptor * _sourceTextureDescriptor; // +0x38
    id <MTLTexture> _sourceTexture; // +0x40
    MTLRenderPassDescriptor * _drawablePassDescriptor; // +0x48
    id <MTLRenderPipelineState> _drawablePipelineState; // +0x50
    id <MTLTexture> _lutTexture; // +0x58
    int _frameNum; // +0x60
}
- (id)manualLoadTextureFromImagePath:(id)arg1 device:(id)arg2;
- (id)MTKLoadTextureFromImagePath:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 lutFilePath:(id)arg2;
- (void)dealloc;
- (id)getTexture;
- (void)setupTexturesWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (void).cxx_destruct;
@end
