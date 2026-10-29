@interface GPUImageFramebuffer : NSObject
{
    unsigned int framebuffer; // +0x8
    unsigned int _depthbuffer; // +0xc
    unsigned int frameLumabuffer; // +0x10
    unsigned int frameChromabuffer; // +0x14
    __CVBuffer * renderTarget; // +0x18
    __CVBuffer * renderTexture; // +0x20
    unsigned long long readLockCount; // +0x28
    __CVBuffer * renderYUV420Target; // +0x30
    __CVBuffer * renderLumaTexture; // +0x38
    __CVBuffer * renderChromaTexture; // +0x40
    unsigned long long framebufferReferenceCount; // +0x48
    BOOL referenceCountingDisabled; // +0x50
    BOOL generateFrameBufferSuccess; // +0x51
    BOOL _missingFramebuffer; // +0x52
    unsigned int _texture; // +0x54
    unsigned int _lumaTexture; // +0x58
    unsigned int _chromaTexture; // +0x5c
    CGSize _size; // +0x60
    GPUTextureOptions _textureOptions; // +0x70
}
- (id)initWithSize:(CGSize)arg1 textureOptions:(GPUTextureOptions)arg2 onlyTexture:(BOOL)arg3;
- (id)initWithSize:(CGSize)arg1 textureOptions:(GPUTextureOptions)arg2 onlyTexture:(BOOL)arg3 useRGB2YUV420:(BOOL)arg4;
- (id)initWithSize:(CGSize)arg1 overriddenTexture:(unsigned int)arg2;
- (id)initWithSize:(CGSize)arg1;
- (void)dealloc;
- (void)generateTexture;
- (void)generateDepthBuffer:(CGSize)arg1;
- (void)generateFramebuffer;
- (void)generateYUV420Framebuffer;
- (void)destroyFramebuffer;
- (void)activateFramebuffer;
- (void)activateLumaFramebuffer;
- (void)activateChromaFramebuffer;
- (void)lock;
- (void)unlock;
- (void)clearAllLocks;
- (void)disableReferenceCounting;
- (void)enableReferenceCounting;
- (CGImage *)newCGImageFromFramebufferContents;
- (CGImage *)newCGImageFromFramebufferContentsExt;
- (void)restoreRenderTarget;
- (void)lockForReading;
- (void)unlockAfterReading;
- (unsigned long long)bytesPerRow;
- (char *)byteBuffer;
- (__CVBuffer *)pixelBuffer;
- (unsigned int)texture;
- (__CVBuffer *)getRenderYUV420Target;
- (void)getPixelsFromFramebufferContentsVoipExt:(char *)arg1;
- (CGSize)size;
- (GPUTextureOptions)textureOptions;
- (BOOL)missingFramebuffer;
- (unsigned int)lumaTexture;
- (unsigned int)chromaTexture;
@end

