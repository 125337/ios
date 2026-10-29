@interface CdnRenderContextWrapper : NSObject
{
    BOOL _glContextUsed; // +0x8
    long long _renderType; // +0x10
    CdnOpenGLContext * _cdnGLContext; // +0x18
    CdnRciContext * _cdnRciContext; // +0x20
}
- (id)initWithCdnGLContext:(id)arg1;
- (id)initWithCdnRciContext:(id)arg1;
- (void)onGLContextUsed;
- (void)onGLContextEndUse;
- (void)runSync:(id /* block */)arg1;
- (void)runAsync:(id /* block */)arg1;
- (id)glContext;
- (void)preCheckGLError;
- (long long)renderType;
- (void)setRenderType:(long long)arg1;
- (id)cdnGLContext;
- (void)setCdnGLContext:(id)arg1;
- (id)cdnRciContext;
- (void)setCdnRciContext:(id)arg1;
- (BOOL)glContextUsed;
- (void)setGlContextUsed:(BOOL)arg1;
- (void).cxx_destruct;
@end
