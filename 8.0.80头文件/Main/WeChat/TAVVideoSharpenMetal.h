@interface TAVVideoSharpenMetal : NSObject
{
    id <MTLDevice> _metalDevice; // +0x8
    id <MTLLibrary> mShadersLibrary; // +0x10
    id <MTLRenderPipelineState> mBlurPipeline; // +0x18
    id <MTLRenderPipelineState> mExtractResiduePipeline; // +0x20
    id <MTLRenderPipelineState> mUSM3FusionPipeline; // +0x28
    MTLRenderPassDescriptor * mBlurPass1; // +0x30
    MTLRenderPassDescriptor * mUSM3FusionPass; // +0x38
    MTLTextureDescriptor * mTextureDescriptor; // +0x40
    id <MTLTexture> mBlurTexture1; // +0x48
    id <MTLTexture> mUSM3FusionTexture; // +0x50
    id <MTLBuffer> mvertexBuffer; // +0x58
    int mWidth; // +0x60
    int mHeight; // +0x64
    int mSharpenMode; // +0x68
}
- (id)init:(int)arg1 device:(id)arg2;
- (void)dealloc;
- (void)setuptextures:(int)arg1 height:(int)arg2;
- (id)process:(id)arg1 commandbuf:(id)arg2 width:(int)arg3 height:(int)arg4 mode:(int)arg5;
- (void).cxx_destruct;
@end
