@interface ExternalTextureHandler : NSObject
{
    CFRef<__CVOpenGLESTextureCache *> cacheRef; // +0x8
    CFRef<__CVBuffer *> bufferRef; // +0x10
    CFRef<__CVBuffer *> textureRef; // +0x18
    CFRef<__CVBuffer *> textureRefY; // +0x20
    CFRef<__CVBuffer *> textureRefUV; // +0x28
    EAGLContext * ctx; // +0x30
    WAEJJavaScriptView * _scriptView; // +0x38
}
- (id)initWithScriptView:(id)arg1;
- (void)ensureTextureCacheExists;
- (void)createTextureFromPixelBuffer:(void *)arg1 textureFormat:(int)arg2 sourceFormat:(int)arg3 width:(int)arg4 height:(int)arg5 plane:(int)arg6;
- (BOOL)createYuvTexture:(int)arg1 height:(int)arg2;
- (sk_sp<SkImage>)makeTextureImage:(__CVBuffer *)arg1;
- (id)scriptView;
- (void)setScriptView:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
